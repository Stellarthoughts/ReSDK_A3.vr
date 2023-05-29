// ======================================================
// Copyright (c) 2017-2023 the ReSDK_A3 project
// sdk.relicta.ru
// ======================================================

/*
	Это рабочее пространство для отладки и проверки функционала
	В программировании точкой входа (entry point) называется место с которого начинается выполнение программы
	В контексте проекта реликты, запущенного в симуляции с режимом отладки мы будем считать что точкой входа является момент
	когда пользователь заходит в роль
*/
//Подключаем заголовочные файлы для работы с движком и объектной системой
//! Обратите внимание, что используются относительные пути для заголовочных файлов
#include <..\..\engine.hpp>
#include <..\..\oop.hpp>
//Заголовочный файл игровых констант и хелперов для работы с классами, унаследованными от GameObject
#include <..\..\GameObjects\GameConstants.hpp>
//Заголовочный файл для работы с текстом
#include <..\..\text.hpp>

//функция, вызываемая при подключении первого персонажа в игру
relicta_debug_main = {
	/*
		Параметры этой функции:
		_mob - игровой объект персонажа
		_role - объект роли за которую зашел персонаж
	*/
	params ["_mob","_role"];
	
	//Например при заходе персонажа за роль можно вывести приветственное сообщение
	//["Привет %1 на роли %2",_mob,_role] call MessageBox;
};

//функция вызывается на этапе компиляции, 
//когда все модули загружены но режим ещё не установлен
relicta_debug_compileMain = {
	//["Компиляция успешно завершена!"] call MessageBox;

};