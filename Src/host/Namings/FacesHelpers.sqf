// ======================================================
// Copyright (c) 2017-2023 the ReSDK_A3 project
// sdk.relicta.ru
// ======================================================


/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
	This common component. Included in preinit
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifdef DEBUG
facesys_generatedConfig = "NO_CALLED";
//Генерирует конфиг для нохедов и лиц
facesys_generateConfig = {
	facesys_generatedConfig = "// Relicta faces config generator start" + endl + endl +
	
	"// Man faces" + endl;
	_macroHead = "defineHead(%1)";
	{
		_cfg = format[_macroHead,_x];
		MOD(facesys_generatedConfig,+ _cfg + endl);
	} foreach faces_list_man;
	
	MOD(facesys_generatedConfig,+ endl+endl +"// Woman faces" + endl);
	
	{
		_cfg = format[_macroHead,_x];
		MOD(facesys_generatedConfig,+ _cfg + endl);
	} foreach faces_list_woman;
	
	MOD(facesys_generatedConfig,+ endl+endl +"// generated");
};
#endif

facesys_hasFace = {
	isClass (configfile >> "CfgFaces" >> "Man_A3" >>_this)
};

facesys_prepManFaces = {
	params [["_isFemMode",false]];
	
	private _cfgFaces = configfile >> "CfgFaces" >> "Man_A3";
    private _allFacesForType = []; 
	private _allTexpath = [];
    for "_i" from 0 to (count _cfgFaces - 1) do { 
        _face = _cfgFaces select _i; 

        if (isclass _face) then { 
			_class = (configname _face);
			if (getnumber(_face >> "disabled") != 0) exitWith {}; //на выключенных лицах не работают фейсанимы
			//if (_class)
            //if (getnumber(_face >> "disabled") == 0) then { 
                 
                //_allFacesForType pushback [(configname _face),getText(_face >> "texture")]; 
                
            //};
			
			if (_isFemMode) then {
				if ("female" in (toLower _class)) then {
					_allFacesForType pushBack _class
				};
			} else {
				_class = toLower _class;
				if ("female" in _class) exitWith {};
				
				_name = tolower getText(_face >> "displayName");
				#define wrongName(var) (var in _name || var in _class)
				if (wrongName("default") || wrongName("custom") || wrongName("_if") || wrongName("_sick") || wrongName("camohead_") || wrongName("zombie") || wrongName("no face")) exitWith {};
				if ((_allTexpath pushBackUnique (toLower getText(_face>>"texture")) ) == -1) exitWith {INC(___skippedmanclasses)};
				_allFacesForType pushBack _class
			};
        }; 
    };
	_allFacesForType
};



facesys_prepWomanFaces = {
	[true] call facesys_prepManFaces
};



