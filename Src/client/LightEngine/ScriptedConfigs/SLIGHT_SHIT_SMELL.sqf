// ======================================================
// Copyright (c) 2017-2024 the ReSDK_A3 project
// sdk.relicta.ru
// ======================================================

regScriptEmit(SLIGHT_SHIT_SMELL)
	[
		"pt",
		null,
		_emitAlias("Частицы 1")
		["linkToSrc",[0,0,0.6]],
		["setParticleParams",[["\A3\data_f\ParticleEffects\Universal\Universal.p3d",16,12,13,0],"","Billboard",1,10,[0,0,0],[0,0,0],0,0.0511,0.04,0.1,[0.2,0.5,1,1.5,2,2.5,3],[[0.1,0.1,0.1,0.05],[0.1,0.2,0.1,0.06],[0.2,0.3,0.1,0.07],[0.3,0.4,0.1,0.08],[0.3,0.5,0.1,0.09],[0.4,0.6,0.3,0.1],[0.5,0.7,0.4,0.1]],[1000],0.1,0.01,"","","",0,false,-1,[]]],
		["setParticleRandom",[0.2,[0.2,0.2,0.2],[0.01,0.01,0.01],5,0.2,[0,0,0,0],0,0,0,0]],
		["setParticleCircle",[0.03,[0.1,0.1,0]]],
		["setDropInterval",0.5]
	]
endScriptEmit