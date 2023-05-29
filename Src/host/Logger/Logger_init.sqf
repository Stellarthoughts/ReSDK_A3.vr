// ======================================================
// Copyright (c) 2017-2023 the ReSDK_A3 project
// sdk.relicta.ru
// ======================================================

// Based on:
// A3LOG
// Author: https://github.com/Arkensor/A3LOG

#include "..\engine.hpp"
#include "..\oop.hpp"

//отключить логгер в редакторе
#define DISABLE_LOG_IN_EDITOR

/*
	Обновленный логгер.
	Основные категории:
	system: инициализация системы, фатальные ошибки и системные сбои логируются в этот раздел
	game: игровая логика и общее поведение игры. Старт режима, результаты, антаги. всё сюда
	rp: кто и с каким именем зашёл в роль, какие получил статы, какие эмоуты и действия делал
	life: комбат, боевые действия, гибель персонажей 
	
	["rp","test action from %1",getSelf(name)] call logToFile;
	["life","test..."] call logToFile;
	["test error"] call logError;
	["test warn"] call logWarn;
	["rp test"] call rpLog;
	["system test"] call systemLog;
	["game test"] call gameLog;
	["Some admin log"] call adminLog;
	["unit1 attacks unit2"] call combatLog
*/
with uiNamespace do {
	if isNull(logger_isFirstInit) then {
		logger_isFirstInit = true;
	};
};


logger_internal_map = hashMapNew;

#define __logger_decl_params__ \
(if equalTypes(_this,[]) then { \
	format _this \
} else { \
	if not_equalTypes(_this,"") then {str _this} else {_this} \
})

#define __log_prefix(typo) '(typo)	'

#define isImplementedLoggerFunction(cat) !isNull( missionNamespace getvariable vec2(cat + "log",nil))

#define decl_std_logger_type(type) type##Log = { [format _this, 'type'] call logger_action};

decl_std_logger_type(system)
decl_std_logger_type(game)
decl_std_logger_type(rp)
decl_std_logger_type(life)
decl_std_logger_type(admin)
decl_std_logger_type(combat)

#ifndef EDITOR
	#undef DISABLE_LOG_IN_EDITOR
#endif

logger_internal_init = {

	uiNamespace setvariable ["A3LOGEXT_HASERROR",false];

	["system"] call logger_internal_registerLogCategory;
	["rp"] call logger_internal_registerLogCategory;
	["life"] call logger_internal_registerLogCategory;
	["game"] call logger_internal_registerLogCategory;
	["admin"] call logger_internal_registerLogCategory;

	with uiNamespace do {
		if (logger_isFirstInit) then {
			logger_isFirstInit = false;
		};
	};
};

logger_internal_registerLogCategory = {
	params ["_logCategory"];
	
	if !isImplementedLoggerFunction(_logCategory) then {
		errorformat("Cant register log category - function 'logger::%1' not implemented",_logCategory);
		[format ["========================< Cant register log category - function 'logger::%1' not implemented >========================",_logCategory], "system"] call logger_action;
	};
	
	logger_internal_map set [_logCategory,1];

	private _logger_isFirstInit = uiNamespace getVariable ["logger_isFirstInit",true];

	//adding empty lines to log category file
	if (!_logger_isFirstInit) then {
		for "_i" from 1 to 25 do {
			["",_logCategory] call logger_action;
		};
		["-------------------------------------------------------------------------",_logCategory] call logger_action;
		["----------------------------< RELOAD LOGGER >----------------------------",_logCategory] call logger_action;
		["-------------------------------------------------------------------------",_logCategory] call logger_action;
	};
	[format["Logger category '%1' %3; Timestamp init: %2",_logCategory,call logger_timeStampToString,ifcheck(_logger_isFirstInit,"registered","reloaded")],_logCategory] call logger_action;
	["",_logCategory] call logger_action;
	["",_logCategory] call logger_action;
};

	logCritical = {
		[__log_prefix(CRIT) + format _this,"system","critical"] call systemLog;
	};
	logError = {
		[__log_prefix(ERROR) + format _this,"system","error"] call systemLog;
	};
	logWarn = {
		[__log_prefix(WARN) + format _this,"system","warning"] call systemLog;
	};
	logInfo = {
		[__log_prefix(INFO) + format _this,"system"] call systemLog;
	};
	logDebug = {
		#ifdef DEBUG
		[__log_prefix(DEBUG) + format _this,"system","debug"] call systemLog;
		#endif
	};
	logTrace = {
		#ifdef __TRACE__ENABLED
		[__log_prefix(TRACE) + format _this,"system","trace"] call systemLog;
		#endif
	};

logToFile = {
	private _cat = _this deleteAt 0;
	private _d = format _this;
	[_d,_cat] call logger_action;
};

logger_action = {
	params [["_dat",""],["_cat",""],["_lvl",""]];
	
	//logger not supported in editor mode
	#ifdef DISABLE_LOG_IN_EDITOR
	if (true) exitwith {};
	#endif

	if (uiNamespace getVariable ["A3LOGEXT_HASERROR",false]) exitWith {false};

	private _result = "A3LOG" callExtension [
		"LOG",
		[
			format["-1%1%2%1%3%1%4", toString[29], _dat, _cat, _lvl]
		]
	];

	if (equals((_result param [0]),"[]") && equals((_result param [1]),0) 
		&& equals((_result param [2]),0)) exitWith {true};

	diag_log format[ "A3LOG: %1", ( _result param [ 0 ] ) ];

	uiNamespace setVariable ["A3LOGEXT_HASERROR",true];

	false;
};

logger_timeStampToString = {
	systemTime params ["_year", "_month", "_day", "_hour", "_minute", "_second", "_millisecond"];
	
	//add zero before time if need (uses ifcheck() macro)	
	format["%1.%2.%3 %4:%5:%6.%7",_year,_month,_day, ifcheck(_hour<10,"0"+str _hour,_hour), ifcheck(_minute<10,"0"+str _minute,_minute), ifcheck(_second<10,"0"+str _second,_second), _millisecond]
};


// initialize main logic
call logger_internal_init;