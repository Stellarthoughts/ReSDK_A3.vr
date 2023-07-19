// ======================================================
// Copyright (c) 2017-2023 the ReSDK_A3 project
// sdk.relicta.ru
// ======================================================

#include <..\..\engine.hpp>
#include <..\..\oop.hpp>

//большое здание
editor_attribute("InterfaceClass")
editor_attribute("TemplatePrefab")
class(BigHouse) extends(BigConstructions) var(name,"Большое здание"); var(desc,"Крупное здание выполняющее роль декорации и являющееся нерушимой конструкцией"); endclass

editor_attribute("EditorGenerated")
class(Golovinskaya) extends(BigHouse)
	var(model,"a3\structures_f\households\stone_big\d_stone_housebig_v1_f.p3d");
	var(desc, "Частица сети")
endclass