version=54;
class EditorData
{
	moveGridStep=1;
	angleGridStep=1.5707964;
	scaleGridStep=100;
	autoGroupingDist=10;
	toggles=10;
	class ItemIDProvider
	{
		nextID=2446;
	};
	class LayerIndexProvider
	{
		nextID=253;
	};
	class Camera
	{
		pos[]={4049.3389,119.80743,4038.0876};
		dir[]={-0.014430993,-0.34998447,0.93678063};
		up[]={-0.0053970311,0.93663108,0.35019404};
		aside[]={0.9999783,2.7562617e-006,0.01540566};
	};
};
binarizationWanted=0;
sourceName="resdk_a3";
addons[]=
{
	"A3_Characters_F",
	"rel_vox",
	"CUP_A2_EditorObjects",
	"A3_Structures_F_Enoch_Military_Training",
	"NV_props",
	"A3_Structures_F_Enoch_Industrial_Agriculture",
	"SurfacesssAPEX",
	"stalker_props",
	"A3_Structures_F_Argo_Walls_Military",
	"csa_objects",
	"A3_Structures_F_Enoch_Walls_Net",
	"A3_Props_F_Enoch_Military_Garbage",
	"A3_Rocks_F_Blunt",
	"A3_Props_F_Orange_Humanitarian_Supplies",
	"cba_xeh",
	"A3_Structures_F_Households_Stone_Big",
	"A3_Structures_F_EPC_Dominants_GhostHotel",
	"A3_Structures_F_Enoch_Industrial_Farms",
	"RELICTA_models",
	"A3_Structures_F_Civ_Lamps",
	"AtmObjects"
};
class AddonsMetaData
{
	class List
	{
		items=19;
		class Item0
		{
			className="A3_Characters_F";
			name="Arma 3 Alpha - Characters and Clothing";
			author="Bohemia Interactive";
			url="https://www.arma3.com";
		};
		class Item1
		{
			className="rel_vox";
			name="rel_vox";
		};
		class Item2
		{
			className="CUP_A2_EditorObjects";
			name="CUP_A2_EditorObjects";
			author="MemphisBelle";
		};
		class Item3
		{
			className="A3_Structures_F_Enoch_Military";
			name="Arma 3 Contact Platform - Military Buildings and Structures";
			author="Bohemia Interactive";
			url="https://www.arma3.com";
		};
		class Item4
		{
			className="NV_props";
			name="NV_props";
		};
		class Item5
		{
			className="A3_Structures_F_Enoch_Industrial";
			name="Arma 3 Contact Platform - Industrial Structures";
			author="Bohemia Interactive";
			url="https://www.arma3.com";
		};
		class Item6
		{
			className="SurfacesssAPEX";
			name="SurfacesssAPEX";
		};
		class Item7
		{
			className="stalker_props";
			name="stalker_props";
		};
		class Item8
		{
			className="A3_Structures_F_Argo";
			name="Arma 3 Malden - Buildings and Structures";
			author="Bohemia Interactive";
			url="https://www.arma3.com";
		};
		class Item9
		{
			className="csa_objects";
			name="csa_objects";
		};
		class Item10
		{
			className="A3_Structures_F_Enoch";
			name="Arma 3 Contact Platform - Buildings and Structures";
			author="Bohemia Interactive";
			url="https://www.arma3.com";
		};
		class Item11
		{
			className="A3_Props_F_Enoch";
			name="Arma 3 Contact Platform - Decorative and Mission Objects";
			author="Bohemia Interactive";
			url="https://www.arma3.com";
		};
		class Item12
		{
			className="A3_Rocks_F";
			name="Arma 3 - Rocks and Stones";
			author="Bohemia Interactive";
			url="https://www.arma3.com";
		};
		class Item13
		{
			className="A3_Props_F_Orange";
			name="Arma 3 Orange - Decorative and Mission Objects";
			author="Bohemia Interactive";
			url="https://www.arma3.com";
		};
		class Item14
		{
			className="A3_Structures_F_Households";
			name="Arma 3 - Houses";
			author="Bohemia Interactive";
			url="https://www.arma3.com";
		};
		class Item15
		{
			className="A3_Structures_F_EPC";
			name="Arma 3 Win Episode - Buildings and Structures";
			author="Bohemia Interactive";
			url="https://www.arma3.com";
		};
		class Item16
		{
			className="RELICTA_models";
			name="RELICTA_models";
			author="Yodes and Alien";
		};
		class Item17
		{
			className="A3_Structures_F";
			name="Arma 3 - Buildings and Structures";
			author="Bohemia Interactive";
			url="https://www.arma3.com";
		};
		class Item18
		{
			className="AtmObjects";
			name="AtmObjects";
		};
	};
};
dlcs[]=
{
	"Enoch",
	"Argo",
	"Orange"
};
randomSeed=11605075;
class ScenarioData
{
	author="Septima";
	saving=0;
};
class CustomAttributes
{
	class Category0
	{
		name="Multiplayer";
		class Attribute0
		{
			property="RespawnTemplates";
			expression="true";
			class Value
			{
				class data
				{
					singleType="ARRAY";
					class value
					{
						items=1;
						class Item0
						{
							class data
							{
								singleType="STRING";
								value="None";
							};
						};
					};
				};
			};
		};
		nAttributes=1;
	};
	class Category1
	{
		name="Scenario";
		class Attribute0
		{
			property="EnableTargetDebug";
			expression="true";
			class Value
			{
				class data
				{
					singleType="SCALAR";
					value=1;
				};
			};
		};
		class Attribute1
		{
			property="EnableDebugConsole";
			expression="true";
			class Value
			{
				class data
				{
					singleType="SCALAR";
					value=2;
				};
			};
		};
		nAttributes=2;
	};
};
class Mission
{
	class Intel
	{
		timeOfChanges=1800.0002;
		startWeather=0;
		startWind=0;
		startWaves=0.1;
		forecastWeather=0;
		forecastWind=0;
		forecastWaves=0.1;
		forecastLightnings=0.1;
		rainForced=1;
		windForced=1;
		day=20;
		hour=13;
		minute=-20;
		startFogDecay=0.014;
		forecastFogDecay=0.014;
	};
	class Entities
	{
		items=5;
		class Item0
		{
			dataType="Group";
			side="West";
			class Entities
			{
				items=1;
				class Item0
				{
					dataType="Object";
					class PositionInfo
					{
						position[]={11.849326,5.092412,8141.3096};
						angles[]={0,1.5586488,0};
					};
					side="West";
					flags=7;
					class Attributes
					{
						isPlayer=1;
						class Inventory
						{
						};
					};
					id=1;
					type="B_Survivor_F";
					atlOffset=0.0909729;
					class CustomAttributes
					{
						class Attribute0
						{
							property="speaker";
							expression="_this setspeaker _value;";
							class Value
							{
								class data
								{
									singleType="STRING";
									value="Male04ENG";
								};
							};
						};
						class Attribute1
						{
							property="pitch";
							expression="_this setpitch _value;";
							class Value
							{
								class data
								{
									singleType="SCALAR";
									value=0.97000003;
								};
							};
						};
						class Attribute2
						{
							property="face";
							expression="_this setface _value;";
							class Value
							{
								class data
								{
									singleType="STRING";
									value="WhiteHead_06";
								};
							};
						};
						nAttributes=3;
					};
				};
			};
			class Attributes
			{
			};
			id=0;
			atlOffset=0.0909729;
		};
		class Item1
		{
			dataType="Group";
			side="West";
			class Entities
			{
				items=1;
				class Item0
				{
					dataType="Object";
					class PositionInfo
					{
						position[]={17.72065,5.0014391,8141.2852};
						angles[]={0,4.7971487,0};
					};
					side="West";
					flags=7;
					class Attributes
					{
						name="vasya";
						class Inventory
						{
						};
					};
					id=19;
					type="B_Survivor_F";
					class CustomAttributes
					{
						class Attribute0
						{
							property="speaker";
							expression="_this setspeaker _value;";
							class Value
							{
								class data
								{
									singleType="STRING";
									value="Male10ENG";
								};
							};
						};
						class Attribute1
						{
							property="pitch";
							expression="_this setpitch _value;";
							class Value
							{
								class data
								{
									singleType="SCALAR";
									value=0.95999998;
								};
							};
						};
						nAttributes=2;
					};
				};
			};
			class Attributes
			{
			};
			id=18;
		};
		class Item2
		{
			dataType="Layer";
			name="Teleports";
			id=2287;
			atlOffset=-5;
		};
		class Item3
		{
			dataType="Group";
			side="West";
			class Entities
			{
				items=1;
				class Item0
				{
					dataType="Object";
					class PositionInfo
					{
						position[]={4043.4031,111.30505,4036.0786};
					};
					side="West";
					flags=3;
					class Attributes
					{
					};
					id=2334;
					type="B_Soldier_F";
					atlOffset=106.30361;
				};
			};
			class Attributes
			{
			};
			id=2333;
			atlOffset=106.30361;
		};
		class Item4
		{
			dataType="Layer";
			name="Отстойник";
			class Entities
			{
				items=3;
				class Item0
				{
					dataType="Layer";
					name="1 Подщельное";
					class Entities
					{
						items=4;
						class Item0
						{
							dataType="Layer";
							name="1 Пол";
							class Entities
							{
								items=27;
								class Item0
								{
									dataType="Object";
									class PositionInfo
									{
										position[]={4039,105.90479,4051};
									};
									side="Empty";
									flags=4;
									class Attributes
									{
										init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockDirt""]]}";
									};
									id=2208;
									type="block_dirt";
									atlOffset=0.11087799;
								};
								class Item1
								{
									dataType="Object";
									class PositionInfo
									{
										position[]={4049,105.90479,4051};
									};
									side="Empty";
									class Attributes
									{
										init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockDirt""]]}";
									};
									id=2210;
									type="block_dirt";
									atlOffset=0.62691498;
								};
								class Item2
								{
									dataType="Object";
									class PositionInfo
									{
										position[]={4039,105.90479,4041};
									};
									side="Empty";
									class Attributes
									{
										init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockDirt""]]}";
									};
									id=2212;
									type="block_dirt";
									atlOffset=106.35005;
								};
								class Item3
								{
									dataType="Object";
									class PositionInfo
									{
										position[]={4049,105.90479,4041};
									};
									side="Empty";
									class Attributes
									{
										init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockDirt""]]}";
									};
									id=2213;
									type="block_dirt";
									atlOffset=106.35005;
								};
								class Item4
								{
									dataType="Object";
									class PositionInfo
									{
										position[]={4030,104.65479,4051};
										angles[]={0,0,0.2617994};
									};
									side="Empty";
									flags=4;
									class Attributes
									{
										init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockDirt""]]}";
									};
									id=2222;
									type="block_dirt";
									atlOffset=0.0010375977;
								};
								class Item5
								{
									dataType="Object";
									class PositionInfo
									{
										position[]={4030,104.65479,4041};
										angles[]={0,0,0.2617994};
									};
									side="Empty";
									class Attributes
									{
										init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockDirt""]]}";
									};
									id=2224;
									type="block_dirt";
									atlOffset=0.58298492;
								};
								class Item6
								{
									dataType="Object";
									class PositionInfo
									{
										position[]={4020,103.15479,4045.75};
									};
									side="Empty";
									class Attributes
									{
										init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockDirt""]]}";
									};
									id=2255;
									type="block_dirt";
									atlOffset=103.60005;
								};
								class Item7
								{
									dataType="Object";
									class PositionInfo
									{
										position[]={4039,105.90479,4031};
									};
									side="Empty";
									class Attributes
									{
										init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockDirt""]]}";
									};
									id=2265;
									type="block_dirt";
									atlOffset=106.35005;
								};
								class Item8
								{
									dataType="Object";
									class PositionInfo
									{
										position[]={4049,105.90479,4031};
									};
									side="Empty";
									class Attributes
									{
										init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockDirt""]]}";
									};
									id=2266;
									type="block_dirt";
									atlOffset=106.35005;
								};
								class Item9
								{
									dataType="Object";
									class PositionInfo
									{
										position[]={4059,105.90479,4041};
									};
									side="Empty";
									class Attributes
									{
										init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockDirt""]]}";
									};
									id=2267;
									type="block_dirt";
									atlOffset=106.35005;
								};
								class Item10
								{
									dataType="Object";
									class PositionInfo
									{
										position[]={4069,105.90479,4041};
									};
									side="Empty";
									class Attributes
									{
										init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockDirt""]]}";
									};
									id=2268;
									type="block_dirt";
									atlOffset=106.35005;
								};
								class Item11
								{
									dataType="Object";
									class PositionInfo
									{
										position[]={4059,105.90479,4031};
									};
									side="Empty";
									class Attributes
									{
										init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockDirt""]]}";
									};
									id=2269;
									type="block_dirt";
									atlOffset=106.35005;
								};
								class Item12
								{
									dataType="Object";
									class PositionInfo
									{
										position[]={4069,105.90479,4031};
									};
									side="Empty";
									class Attributes
									{
										init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockDirt""]]}";
									};
									id=2270;
									type="block_dirt";
									atlOffset=106.35005;
								};
								class Item13
								{
									dataType="Object";
									class PositionInfo
									{
										position[]={4059,105.90479,4061};
									};
									side="Empty";
									class Attributes
									{
										init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockDirt""]]}";
									};
									id=2271;
									type="block_dirt";
									atlOffset=106.35005;
								};
								class Item14
								{
									dataType="Object";
									class PositionInfo
									{
										position[]={4069,105.90479,4061};
									};
									side="Empty";
									class Attributes
									{
										init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockDirt""]]}";
									};
									id=2272;
									type="block_dirt";
									atlOffset=106.35005;
								};
								class Item15
								{
									dataType="Object";
									class PositionInfo
									{
										position[]={4059,105.90479,4051};
									};
									side="Empty";
									class Attributes
									{
										init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockDirt""]]}";
									};
									id=2273;
									type="block_dirt";
									atlOffset=106.35005;
								};
								class Item16
								{
									dataType="Object";
									class PositionInfo
									{
										position[]={4069,105.90479,4051};
									};
									side="Empty";
									class Attributes
									{
										init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockDirt""]]}";
									};
									id=2274;
									type="block_dirt";
									atlOffset=106.35005;
								};
								class Item17
								{
									dataType="Object";
									class PositionInfo
									{
										position[]={4039,105.90479,4061};
									};
									side="Empty";
									class Attributes
									{
										init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockDirt""]]}";
									};
									id=2275;
									type="block_dirt";
									atlOffset=0.33392334;
								};
								class Item18
								{
									dataType="Object";
									class PositionInfo
									{
										position[]={4049,105.90479,4061};
									};
									side="Empty";
									class Attributes
									{
										init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockDirt""]]}";
									};
									id=2276;
									type="block_dirt";
									atlOffset=106.35005;
								};
								class Item19
								{
									dataType="Object";
									class PositionInfo
									{
										position[]={4029,105.90479,4061};
									};
									side="Empty";
									class Attributes
									{
										init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockDirt""]]}";
									};
									id=2277;
									type="block_dirt";
									atlOffset=106.35005;
								};
								class Item20
								{
									dataType="Object";
									class PositionInfo
									{
										position[]={4029,105.90479,4031};
									};
									side="Empty";
									class Attributes
									{
										init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockDirt""]]}";
									};
									id=2278;
									type="block_dirt";
									atlOffset=106.35005;
								};
								class Item21
								{
									dataType="Object";
									class PositionInfo
									{
										position[]={4045,105.90479,4021};
									};
									side="Empty";
									class Attributes
									{
										init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockDirt""]]}";
									};
									id=2280;
									type="block_dirt";
									atlOffset=106.35005;
								};
								class Item22
								{
									dataType="Object";
									class PositionInfo
									{
										position[]={4055,105.90479,4021};
									};
									side="Empty";
									class Attributes
									{
										init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockDirt""]]}";
									};
									id=2290;
									type="block_dirt";
									atlOffset=1.5558853;
								};
								class Item23
								{
									dataType="Object";
									class PositionInfo
									{
										position[]={4049,105.90479,4071};
									};
									side="Empty";
									class Attributes
									{
										init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockDirt""]]}";
									};
									id=2309;
									type="block_dirt";
									atlOffset=106.35005;
								};
								class Item24
								{
									dataType="Object";
									class PositionInfo
									{
										position[]={4059,105.90479,4071};
									};
									side="Empty";
									class Attributes
									{
										init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockDirt""]]}";
									};
									id=2310;
									type="block_dirt";
									atlOffset=106.35005;
								};
								class Item25
								{
									dataType="Object";
									class PositionInfo
									{
										position[]={4050,105.55474,4011};
									};
									side="Empty";
									class Attributes
									{
										init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockDirt""]]}";
									};
									id=2390;
									type="block_dirt";
									atlOffset=106;
								};
								class Item26
								{
									dataType="Object";
									class PositionInfo
									{
										position[]={4079,105.55474,4051};
									};
									side="Empty";
									class Attributes
									{
										init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BlockDirt""]]}";
									};
									id=2392;
									type="block_dirt";
									atlOffset=106;
								};
							};
							id=2207;
							atlOffset=2.4957886;
						};
						class Item1
						{
							dataType="Layer";
							name="4 Декор";
							class Entities
							{
								items=20;
								class Item0
								{
									dataType="Object";
									class PositionInfo
									{
										position[]={4048.7917,111.58022,4042.9412};
										angles[]={0.0089057162,3.7393029,0.00079011748};
									};
									side="Empty";
									class Attributes
									{
										init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""SmallPileOfBricks""]]}";
									};
									id=2219;
									type="CUP_A2_rubble_bricks_03";
									atlOffset=105.81798;
								};
								class Item1
								{
									dataType="Object";
									class PositionInfo
									{
										position[]={4043.1255,112.06411,4048.4854};
										angles[]={6.2821498,0,0.0069996584};
									};
									side="Empty";
									class Attributes
									{
										init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""SmallPileOfBricks""]]}";
									};
									id=2221;
									type="CUP_A2_rubble_bricks_03";
									atlOffset=106.30186;
								};
								class Item2
								{
									dataType="Object";
									class PositionInfo
									{
										position[]={4046.7754,111.74287,4040.199};
										angles[]={6.2762542,0,6.2775226};
									};
									side="Empty";
									flags=4;
									class Attributes
									{
										init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""SmallPileOfGarbageAndBoards""]]}";
									};
									id=2217;
									type="CUP_A2_rubble_wood_01";
									atlOffset=0.0056686401;
								};
								class Item3
								{
									dataType="Object";
									class PositionInfo
									{
										position[]={4034.4558,111.0311,4043.0088};
										angles[]={6.2803903,6.2828264,0.16166261};
									};
									side="Empty";
									flags=4;
									class Attributes
									{
										init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""SmallPileOfBricksAndPlanks""]]}";
									};
									id=2230;
									type="CUP_A2_shed_w03_ruins_ep1";
									atlOffset=0.036956787;
								};
								class Item4
								{
									dataType="Object";
									class PositionInfo
									{
										position[]={4040.9043,112.04038,4042.1514};
										angles[]={0.026193295,0,0.038493063};
									};
									side="Empty";
									flags=4;
									class Attributes
									{
										init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""MotherBunchOfShit""]]}";
									};
									id=2215;
									type="Land_ShellCrater_02_small_F";
									atlOffset=0.22580719;
								};
								class Item5
								{
									dataType="Object";
									class PositionInfo
									{
										position[]={4048.6553,111.40961,4048.5332};
									};
									side="Empty";
									flags=1;
									class Attributes
									{
										init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""MetalAndConcreteRuins""]]}";
									};
									id=2220;
									type="nv_gryaz2";
									atlOffset=0.4613266;
								};
								class Item6
								{
									dataType="Object";
									class PositionInfo
									{
										position[]={4045.3015,111.59121,4045};
									};
									side="Empty";
									flags=1;
									class Attributes
									{
										init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BunchOfShit""]]}";
									};
									id=2214;
									type="Land_ManurePile_01_F";
									atlOffset=0.55795288;
								};
								class Item7
								{
									dataType="Object";
									class PositionInfo
									{
										position[]={4034.75,110.66682,4046};
										angles[]={0,1.3089968,0.15629081};
									};
									side="Empty";
									flags=5;
									class Attributes
									{
										init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""SmallDirtGrey""]]}";
									};
									id=2227;
									type="gryazyuka5";
									atlOffset=0.086990356;
								};
								class Item8
								{
									dataType="Object";
									class PositionInfo
									{
										position[]={4034.845,110.51595,4048.9951};
										angles[]={0,1.7199054,0.19449738};
									};
									side="Empty";
									flags=1;
									class Attributes
									{
										init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""MediumPileOfLightMud""]]}";
									};
									id=2228;
									type="land_GRYAZOOOKASS2";
									atlOffset=103.15676;
								};
								class Item9
								{
									dataType="Object";
									class PositionInfo
									{
										position[]={4045.2686,112.53601,4041.1975};
									};
									side="Empty";
									flags=5;
									class Attributes
									{
										init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""MediumConcreteBlockDestroyed""]]}";
									};
									id=2238;
									type="stalkerblock";
									atlOffset=0.059585571;
								};
								class Item10
								{
									dataType="Object";
									class PositionInfo
									{
										position[]={4030.3411,109.88678,4047.25};
										angles[]={0,0,0.29486969};
									};
									side="Empty";
									flags=5;
									class Attributes
									{
										init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""SmallDirtBrown""]]}";
									};
									id=2235;
									type="gryazyuka4";
									atlOffset=0.042480469;
								};
								class Item11
								{
									dataType="Object";
									class PositionInfo
									{
										position[]={4040.7683,113.25356,4040.7266};
										angles[]={0,0.62602574,0};
									};
									side="Empty";
									flags=1;
									class Attributes
									{
										init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BetonTrapeciaSmall""]]}";
									};
									id=2239;
									type="Land_Target_Concrete_Support_01_F";
									atlOffset=1.033699;
								};
								class Item12
								{
									dataType="Object";
									class PositionInfo
									{
										position[]={4041.3289,113.06087,4044.9314};
									};
									side="Empty";
									flags=5;
									class Attributes
									{
										init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""ConcreteCircleReinforcement""]]}";
									};
									id=2237;
									type="Land_Target_Concrete_01_v1_F";
									atlOffset=0.0041885376;
								};
								class Item13
								{
									dataType="Object";
									class PositionInfo
									{
										position[]={4028.9941,109.18887,4044.9954};
										angles[]={0.021949781,1.7475351,6.2444634};
									};
									side="Empty";
									class Attributes
									{
										init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""MediumPileOfDirtAndStones""]]}";
									};
									id=2236;
									type="CUP_A2_castle_wall5_d_ruins";
									atlOffset=1.4598083;
								};
								class Item14
								{
									dataType="Object";
									class PositionInfo
									{
										position[]={4052.75,111.60588,4046};
										angles[]={6.2780771,5.6723146,0.00447512};
									};
									side="Empty";
									class Attributes
									{
										init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""SmallPileOfConcreteFragments""]]}";
									};
									id=2282;
									type="Land_Mil_WallBig_debris_F";
									atlOffset=106.3274;
								};
								class Item15
								{
									dataType="Object";
									class PositionInfo
									{
										position[]={4024.9983,111.56657,4047.7061};
										angles[]={6.2815661,0,0.0065963282};
									};
									side="Empty";
									class Attributes
									{
										init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""ConcreteLongPole""]]}";
									};
									id=2257;
									type="Land_stolb_6m";
									atlOffset=103.60005;
								};
								class Item16
								{
									dataType="Object";
									class PositionInfo
									{
										position[]={4025.1458,111.81657,4043.1082};
										angles[]={6.2815661,0,0.0065963282};
									};
									side="Empty";
									flags=4;
									class Attributes
									{
										init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""ConcreteLongPole""]]}";
									};
									id=2259;
									type="Land_stolb_6m";
									atlOffset=0.16396332;
								};
								class Item17
								{
									dataType="Object";
									class PositionInfo
									{
										position[]={4025.0686,114.74656,4045.4932};
										angles[]={1.5965998,6.2809339,0.032917663};
									};
									side="Empty";
									class Attributes
									{
										init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""ConcreteLongPole""]]}";
									};
									id=2260;
									type="Land_stolb_6m";
									atlOffset=2.6684265;
								};
								class Item18
								{
									dataType="Object";
									class PositionInfo
									{
										position[]={4040.2917,113.25639,4039.9888};
										angles[]={0,3.7032182,0};
									};
									side="Empty";
									flags=1;
									class Attributes
									{
										init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""TorchHolderCharged""]]}";
									};
									id=2305;
									type="Land_NetFence_03_m_pole_F";
									atlOffset=1.1042938;
								};
								class Item19
								{
									dataType="Object";
									class PositionInfo
									{
										position[]={4031.9595,111.68776,4063.676};
									};
									side="Empty";
									flags=1;
									class Attributes
									{
										init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""BigPileBurntGarbage""]]}";
									};
									id=2315;
									type="Land_BurntGarbage_01_F";
									atlOffset=4.8676529;
								};
							};
							id=2234;
							atlOffset=1.0516357;
						};
						class Item2
						{
							dataType="Layer";
							name="2 Стены";
							class Entities
							{
								items=12;
								class Item0
								{
									dataType="Object";
									class PositionInfo
									{
										position[]={4038.2363,109.67757,4069.1133};
										angles[]={0,4.7123909,0};
									};
									side="Empty";
									class Attributes
									{
										init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""LargeSmoothRock""]]}";
									};
									id=2299;
									type="Land_BluntRock_monolith";
									atlOffset=97.757919;
								};
								class Item1
								{
									dataType="Object";
									class PositionInfo
									{
										position[]={4017.1179,108.80749,4054.595};
										angles[]={0,1.5068825,0};
									};
									side="Empty";
									class Attributes
									{
										init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""LargeSmoothRock""]]}";
									};
									id=2308;
									type="Land_BluntRock_monolith";
									atlOffset=96.88784;
								};
								class Item2
								{
									dataType="Object";
									class PositionInfo
									{
										position[]={4014.0393,108.92565,4035.5803};
										angles[]={0,4.5909057,0};
									};
									side="Empty";
									class Attributes
									{
										init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""LargeSmoothRock""]]}";
									};
									id=2311;
									type="Land_BluntRock_monolith";
									atlOffset=97.006004;
								};
								class Item3
								{
									dataType="Object";
									class PositionInfo
									{
										position[]={4035.8093,107.23087,4011.6062};
										angles[]={0,1.6171206,0};
									};
									side="Empty";
									class Attributes
									{
										init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""LargeSmoothRock""]]}";
									};
									id=2326;
									type="Land_BluntRock_monolith";
									atlOffset=95.311226;
								};
								class Item4
								{
									dataType="Object";
									class PositionInfo
									{
										position[]={4071.5376,113.32663,4062.1326};
										angles[]={0,2.2094851,0};
									};
									side="Empty";
									class Attributes
									{
										init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""LargeSmoothRock""]]}";
									};
									id=2327;
									type="Land_BluntRock_monolith";
									atlOffset=101.40698;
								};
								class Item5
								{
									dataType="Object";
									class PositionInfo
									{
										position[]={4071.1855,107.77748,4036.2178};
										angles[]={0,3.3562746,0};
									};
									side="Empty";
									class Attributes
									{
										init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""LargeSmoothRock""]]}";
									};
									id=2328;
									type="Land_BluntRock_monolith";
									atlOffset=95.857834;
								};
								class Item6
								{
									dataType="Object";
									class PositionInfo
									{
										position[]={4025.4917,108.59824,4027.6162};
										angles[]={0,2.2094851,0};
									};
									side="Empty";
									class Attributes
									{
										init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""LargeSmoothRock""]]}";
									};
									id=2323;
									type="Land_BluntRock_monolith";
									atlOffset=96.678596;
								};
								class Item7
								{
									dataType="Object";
									class PositionInfo
									{
										position[]={14,-994.9588,8100};
									};
									side="Empty";
									flags=4;
									class Attributes
									{
										init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""missionName"",""Sump""],[""version"",4]]}";
									};
									id=2205;
									type="Land_Orange_01_F";
									atlOffset=-1000;
								};
								class Item8
								{
									dataType="Object";
									class PositionInfo
									{
										position[]={4025.8401,111.91601,4067.1509};
										angles[]={0.0048885578,2.5766244,6.2785153};
									};
									side="Empty";
									class Attributes
									{
										init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[[""model"",""a3\rocks_f\blunt\bluntrock_spike.p3d""]]],[""class"",""IStruct""]]}";
									};
									id=2301;
									type="Land_BluntRock_spike";
									atlOffset=100.0759;
								};
								class Item9
								{
									dataType="Object";
									class PositionInfo
									{
										position[]={4033.3008,110.29372,4018.3262};
										angles[]={0.00054039754,0.32091242,0.0066729039};
									};
									side="Empty";
									class Attributes
									{
										init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[[""model"",""a3\rocks_f\blunt\bluntrock_spike.p3d""]]],[""class"",""IStruct""]]}";
									};
									id=2325;
									type="Land_BluntRock_spike";
									atlOffset=98.453613;
								};
								class Item10
								{
									dataType="Object";
									class PositionInfo
									{
										position[]={4066.0623,113.849,4030.0437};
										angles[]={0.0048885578,2.5766244,6.2785153};
									};
									side="Empty";
									class Attributes
									{
										init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[[""model"",""a3\rocks_f\blunt\bluntrock_spike.p3d""]]],[""class"",""IStruct""]]}";
									};
									id=2336;
									type="Land_BluntRock_spike";
									atlOffset=102.0089;
								};
								class Item11
								{
									dataType="Object";
									class PositionInfo
									{
										position[]={4061.3845,112.0253,4014.8228};
										angles[]={0.004094597,0.89455575,0.0053779604};
									};
									side="Empty";
									class Attributes
									{
										init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[[""model"",""a3\rocks_f\blunt\bluntrock_spike.p3d""]]],[""class"",""IStruct""]]}";
									};
									id=2337;
									type="Land_BluntRock_spike";
									atlOffset=100.1852;
								};
							};
							id=2252;
							atlOffset=65.937805;
						};
						class Item3
						{
							dataType="Layer";
							name="3 Потолок";
							state=2;
							class Entities
							{
								items=23;
								class Item0
								{
									dataType="Object";
									class PositionInfo
									{
										position[]={4038.3635,122.4599,4061.1714};
										angles[]={1.8680845,1.577974,0.2345835};
									};
									side="Empty";
									class Attributes
									{
										init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""LargeSmoothRock""]]}";
									};
									id=2342;
									type="Land_BluntRock_monolith";
									atlOffset=4.1009674;
								};
								class Item1
								{
									dataType="Object";
									class PositionInfo
									{
										position[]={4054.7312,123.69258,4050.7649};
										angles[]={4.7673273,4.7447367,1.3997099};
									};
									side="Empty";
									class Attributes
									{
										init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""LargeSmoothRock""]]}";
									};
									id=2353;
									type="Land_BluntRock_monolith";
									atlOffset=5.3280716;
								};
								class Item2
								{
									dataType="Object";
									class PositionInfo
									{
										position[]={4022.5808,121.9106,4050.0916};
										angles[]={0,3.4125764,0};
									};
									side="Empty";
									class Attributes
									{
										init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""LargeSmoothRock""]]}";
									};
									id=2347;
									type="Land_BluntRock_monolith";
									atlOffset=6.2909851;
								};
								class Item3
								{
									dataType="Object";
									class PositionInfo
									{
										position[]={4027.6104,123.48924,4035.0667};
										angles[]={0.45103359,2.4144547,5.7076044};
									};
									side="Empty";
									class Attributes
									{
										init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""LargeSmoothRock""]]}";
									};
									id=2348;
									type="Land_BluntRock_monolith";
									atlOffset=2.8254929;
								};
								class Item4
								{
									dataType="Object";
									class PositionInfo
									{
										position[]={4048.8484,123.33484,4032.9443};
										angles[]={1.3862523,1.5707917,0.47704658};
									};
									side="Empty";
									class Attributes
									{
										init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""LargeSmoothRock""]]}";
									};
									id=2349;
									type="Land_BluntRock_monolith";
									atlOffset=4.966362;
								};
								class Item5
								{
									dataType="Object";
									class PositionInfo
									{
										position[]={4053.4287,133.99329,4044.6162};
									};
									side="Empty";
									flags=1;
									class Attributes
									{
										init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""TwoStoreyHouseBalcony""]]}";
									};
									id=2370;
									type="Land_i_Stone_HouseBig_V2_dam_F";
									atlOffset=20.38237;
								};
								class Item6
								{
									dataType="Object";
									class PositionInfo
									{
										position[]={4028.7266,135.14761,4037.3345};
										angles[]={0,5.9228396,0};
									};
									side="Empty";
									flags=1;
									class Attributes
									{
										init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""TwoStoreyHouseBalcony1""]]}";
									};
									id=2372;
									type="Land_i_Stone_HouseBig_V1_dam_F";
									atlOffset=23.251694;
								};
								class Item7
								{
									dataType="Object";
									class PositionInfo
									{
										position[]={4040.3987,126.29352,4052.8328};
										angles[]={5.5045543,0.97653067,6.1069217};
									};
									side="Empty";
									class Attributes
									{
										init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""MediumStoneRoad""]]}";
									};
									id=2360;
									type="Land_GH_Platform_F";
									atlOffset=14.920845;
								};
								class Item8
								{
									dataType="Object";
									class PositionInfo
									{
										position[]={4039.552,127.65244,4054.0435};
										angles[]={5.5045547,1.1501191,6.1069217};
									};
									side="Empty";
									class Attributes
									{
										init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""MediumStoneRoad""]]}";
									};
									id=2361;
									type="Land_GH_Platform_F";
									atlOffset=16.266571;
								};
								class Item9
								{
									dataType="Object";
									class PositionInfo
									{
										position[]={4046.7473,128.93521,4050.7534};
										angles[]={6.073318,1.1894637,0.55614626};
									};
									side="Empty";
									class Attributes
									{
										init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""MediumStoneRoad""]]}";
									};
									id=2362;
									type="Land_GH_Platform_F";
									atlOffset=17.074333;
								};
								class Item10
								{
									dataType="Object";
									class PositionInfo
									{
										position[]={4047.2026,128.1485,4048.8801};
										angles[]={6.073318,0.86596495,0.55614632};
									};
									side="Empty";
									class Attributes
									{
										init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""MediumStoneRoad""]]}";
									};
									id=2363;
									type="Land_GH_Platform_F";
									atlOffset=16.136902;
								};
								class Item11
								{
									dataType="Object";
									class PositionInfo
									{
										position[]={4029.8962,127.50292,4049.4661};
										angles[]={5.4961047,2.3434627,5.1024733};
									};
									side="Empty";
									class Attributes
									{
										init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""MediumStoneRoad""]]}";
									};
									id=2364;
									type="Land_GH_Platform_F";
									atlOffset=17.04068;
								};
								class Item12
								{
									dataType="Object";
									class PositionInfo
									{
										position[]={4030.2703,127.48379,4051.1489};
										angles[]={5.4961047,2.3434627,5.1024733};
									};
									side="Empty";
									class Attributes
									{
										init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""MediumStoneRoad""]]}";
									};
									id=2365;
									type="Land_GH_Platform_F";
									atlOffset=17.066864;
								};
								class Item13
								{
									dataType="Object";
									class PositionInfo
									{
										position[]={4023.7925,131.59036,4050.6514};
										angles[]={6.2812557,1.8428303,6.2674046};
									};
									side="Empty";
									class Attributes
									{
										init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""MediumStoneRoad""]]}";
									};
									id=2375;
									type="Land_GH_Platform_F";
									atlOffset=14.475441;
								};
								class Item14
								{
									dataType="Object";
									class PositionInfo
									{
										position[]={4024.5054,131.39203,4052.3564};
										angles[]={6.2812557,1.8428303,6.2674046};
									};
									side="Empty";
									class Attributes
									{
										init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""MediumStoneRoad""]]}";
									};
									id=2376;
									type="Land_GH_Platform_F";
									atlOffset=13.953751;
								};
								class Item15
								{
									dataType="Object";
									class PositionInfo
									{
										position[]={4054.6052,131.04549,4054.0767};
										angles[]={6.2642045,1.3377827,0.056152195};
									};
									side="Empty";
									class Attributes
									{
										init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""MediumStoneRoad""]]}";
									};
									id=2377;
									type="Land_GH_Platform_F";
									atlOffset=19.65004;
								};
								class Item16
								{
									dataType="Object";
									class PositionInfo
									{
										position[]={4055.0574,131.09259,4052.2146};
										angles[]={6.2642045,1.3377827,0.056152195};
									};
									side="Empty";
									class Attributes
									{
										init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""MediumStoneRoad""]]}";
									};
									id=2378;
									type="Land_GH_Platform_F";
									atlOffset=19.699226;
								};
								class Item17
								{
									dataType="Object";
									class PositionInfo
									{
										position[]={4037.9543,135.81998,4063.7727};
										angles[]={0,4.638422,0};
									};
									side="Empty";
									flags=1;
									class Attributes
									{
										init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""Golovinskaya""]]}";
									};
									id=2371;
									type="Land_d_Stone_HouseBig_V1_F";
									atlOffset=14.761444;
								};
								class Item18
								{
									dataType="Object";
									class PositionInfo
									{
										position[]={4067.7737,121.02721,4042.7263};
										angles[]={4.6816435,4.7664838,4.8144608};
									};
									side="Empty";
									class Attributes
									{
										init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""LargeSmoothRock""]]}";
									};
									id=2385;
									type="Land_BluntRock_monolith";
									atlOffset=2.6541443;
								};
								class Item19
								{
									dataType="Object";
									class PositionInfo
									{
										position[]={4036.168,122.16565,4018.2375};
										angles[]={4.7384372,4.7186661,0.49284872};
									};
									side="Empty";
									class Attributes
									{
										init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""LargeSmoothRock""]]}";
									};
									id=2386;
									type="Land_BluntRock_monolith";
									atlOffset=1.3205795;
								};
								class Item20
								{
									dataType="Object";
									class PositionInfo
									{
										position[]={4047.1338,125.4569,4012.4551};
										angles[]={1.5896564,0.88558537,0.65151799};
									};
									side="Empty";
									class Attributes
									{
										init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""LargeSmoothRock""]]}";
									};
									id=2387;
									type="Land_BluntRock_monolith";
									atlOffset=3.0474701;
								};
								class Item21
								{
									dataType="Object";
									class PositionInfo
									{
										position[]={4060.3755,127.14111,4023.3303};
										angles[]={1.5895073,0.12439901,0.66928458};
									};
									side="Empty";
									class Attributes
									{
										init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""LargeSmoothRock""]]}";
									};
									id=2388;
									type="Land_BluntRock_monolith";
									atlOffset=6.234108;
								};
								class Item22
								{
									dataType="Object";
									class PositionInfo
									{
										position[]={4059.0054,125.90178,4062.1943};
										angles[]={2.9573641,0.89845335,0.0032777933};
									};
									side="Empty";
									class Attributes
									{
										init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""LargeSmoothRock""]]}";
									};
									id=2389;
									type="Land_BluntRock_monolith";
									atlOffset=7.5393906;
								};
							};
							id=2261;
							atlOffset=7.8099747;
						};
					};
					id=2206;
					atlOffset=100.14579;
				};
				class Item1
				{
					dataType="Layer";
					name="Потолок";
					state=2;
					class Entities
					{
						items=12;
						class Item0
						{
							dataType="Object";
							class PositionInfo
							{
								position[]={4044,158.40292,4030};
								angles[]={3.1415975,4.7123914,5.7031802e-006};
							};
							side="Empty";
							flags=1;
							class Attributes
							{
								init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""DestroyedMetalHangar""]]}";
							};
							id=2422;
							type="Land_Barn_04_ruins_F";
							atlOffset=46.917252;
						};
						class Item1
						{
							dataType="Object";
							class PositionInfo
							{
								position[]={4043.4556,158.39297,4051.2043};
								angles[]={3.1415975,4.7123914,5.7031802e-006};
							};
							side="Empty";
							flags=1;
							class Attributes
							{
								init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""DestroyedMetalHangar""]]}";
							};
							id=2423;
							type="Land_Barn_04_ruins_F";
							atlOffset=46.202965;
						};
						class Item2
						{
							dataType="Object";
							class PositionInfo
							{
								position[]={4043.4226,158.38287,4073.8464};
								angles[]={3.1415975,4.7123914,5.7031802e-006};
							};
							side="Empty";
							flags=1;
							class Attributes
							{
								init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""DestroyedMetalHangar""]]}";
							};
							id=2424;
							type="Land_Barn_04_ruins_F";
							atlOffset=39.680168;
						};
						class Item3
						{
							dataType="Object";
							class PositionInfo
							{
								position[]={4044.439,158.39299,4008.8408};
								angles[]={3.1415975,4.7123914,5.7031802e-006};
							};
							side="Empty";
							flags=1;
							class Attributes
							{
								init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""DestroyedMetalHangar""]]}";
							};
							id=2425;
							type="Land_Barn_04_ruins_F";
							atlOffset=42.46608;
						};
						class Item4
						{
							dataType="Object";
							class PositionInfo
							{
								position[]={4094.0623,158.40273,4030.9966};
								angles[]={3.1415975,4.7123914,5.7031802e-006};
							};
							side="Empty";
							flags=1;
							class Attributes
							{
								init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""DestroyedMetalHangar""]]}";
							};
							id=2426;
							type="Land_Barn_04_ruins_F";
							atlOffset=153.40273;
						};
						class Item5
						{
							dataType="Object";
							class PositionInfo
							{
								position[]={4093.5178,158.39278,4052.2009};
								angles[]={3.1415975,4.7123914,5.7031802e-006};
							};
							side="Empty";
							flags=1;
							class Attributes
							{
								init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""DestroyedMetalHangar""]]}";
							};
							id=2427;
							type="Land_Barn_04_ruins_F";
							atlOffset=153.39278;
						};
						class Item6
						{
							dataType="Object";
							class PositionInfo
							{
								position[]={4093.4849,158.38268,4074.843};
								angles[]={3.1415975,4.7123914,5.7031802e-006};
							};
							side="Empty";
							flags=1;
							class Attributes
							{
								init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""DestroyedMetalHangar""]]}";
							};
							id=2428;
							type="Land_Barn_04_ruins_F";
							atlOffset=153.38268;
						};
						class Item7
						{
							dataType="Object";
							class PositionInfo
							{
								position[]={4094.5012,158.39279,4009.8374};
								angles[]={3.1415975,4.7123914,5.7031802e-006};
							};
							side="Empty";
							flags=1;
							class Attributes
							{
								init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""DestroyedMetalHangar""]]}";
							};
							id=2429;
							type="Land_Barn_04_ruins_F";
							atlOffset=153.39279;
						};
						class Item8
						{
							dataType="Object";
							class PositionInfo
							{
								position[]={3994.4629,158.41312,4029.9495};
								angles[]={3.1415975,4.7123914,5.7031802e-006};
							};
							side="Empty";
							flags=1;
							class Attributes
							{
								init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""DestroyedMetalHangar""]]}";
							};
							id=2430;
							type="Land_Barn_04_ruins_F";
							atlOffset=153.41312;
						};
						class Item9
						{
							dataType="Object";
							class PositionInfo
							{
								position[]={3993.9185,158.40317,4051.1538};
								angles[]={3.1415975,4.7123914,5.7031802e-006};
							};
							side="Empty";
							flags=1;
							class Attributes
							{
								init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""DestroyedMetalHangar""]]}";
							};
							id=2431;
							type="Land_Barn_04_ruins_F";
							atlOffset=153.40317;
						};
						class Item10
						{
							dataType="Object";
							class PositionInfo
							{
								position[]={3993.8855,158.39307,4073.7959};
								angles[]={3.1415975,4.7123914,5.7031802e-006};
							};
							side="Empty";
							flags=1;
							class Attributes
							{
								init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""DestroyedMetalHangar""]]}";
							};
							id=2432;
							type="Land_Barn_04_ruins_F";
							atlOffset=153.39307;
						};
						class Item11
						{
							dataType="Object";
							class PositionInfo
							{
								position[]={3994.9019,158.40318,4008.7903};
								angles[]={3.1415975,4.7123914,5.7031802e-006};
							};
							side="Empty";
							flags=1;
							class Attributes
							{
								init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""DestroyedMetalHangar""]]}";
							};
							id=2433;
							type="Land_Barn_04_ruins_F";
							atlOffset=153.40318;
						};
					};
					id=2434;
					atlOffset=153.4005;
				};
				class Item2
				{
					dataType="Layer";
					name="Электрика";
					class Entities
					{
						items=18;
						class Item0
						{
							dataType="Object";
							class PositionInfo
							{
								position[]={4040.8616,65.661552,4043.5833};
								angles[]={6.2762542,0,6.2775226};
							};
							side="Empty";
							class Attributes
							{
								init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[]],[""class"",""PowerGenerator""],[""edConnected"",[""StreetLampEnabled G:b8vVvnccER0"",""StreetLampEnabled G:b8vVvnccER0 (2)"",""StreetLampEnabled G:b8vVvnccER0 (1)"",""StreetLampEnabled G:b8vVvnccER0 (4)"",""StreetLampEnabled G:b8vVvnccER0 (3)"",""LampWall G:AWiHBZWCDxc"",""LampWall G:L2xfYWCzIHY"",""LampWall G:8XcD1OcbsMg"",""LampCeiling G:2T5tOq97Zus"",""LampCeiling G:2T5tOq97Zus (8)"",""LampCeiling G:2T5tOq97Zus (7)"",""LampCeiling G:2T5tOq97Zus (6)"",""LampCeiling G:2T5tOq97Zus (1)"",""LampCeiling G:2T5tOq97Zus (2)"",""LampCeiling G:2T5tOq97Zus (5)"",""LampCeiling G:2T5tOq97Zus (4)"",""LampCeiling G:2T5tOq97Zus (3)""]],[""mark"",""PowerGenerator G:FBBu6eve1CU""]]}";
							};
							id=2303;
							type="controlpanel";
							atlOffset=59.997398;
						};
						class Item1
						{
							dataType="Object";
							class PositionInfo
							{
								position[]={4041.8538,128.31343,4051.5774};
								angles[]={5.6337757,3.2774668,1.6437843e-007};
							};
							side="Empty";
							flags=1;
							class Attributes
							{
								init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[[""light"",""SLIGHT_STREET_LAMP""]]],[""class"",""StreetLampEnabled""],[""mark"",""StreetLampEnabled G:b8vVvnccER0""]]}";
							};
							id=2343;
							type="Land_LampShabby_off_F";
							atlOffset=12.915649;
						};
						class Item2
						{
							dataType="Object";
							class PositionInfo
							{
								position[]={4032.3687,128.86891,4048.9468};
								angles[]={6.1632657,3.1674874,4.9965043};
							};
							side="Empty";
							flags=1;
							class Attributes
							{
								init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[[""light"",""SLIGHT_STREET_LAMP_DORM""]]],[""class"",""StreetLampEnabled""],[""mark"",""StreetLampEnabled G:b8vVvnccER0 (2)""]]}";
							};
							id=2358;
							type="Land_LampShabby_off_F";
							atlOffset=14.038429;
						};
						class Item3
						{
							dataType="Object";
							class PositionInfo
							{
								position[]={4043.6204,128.68312,4045.7153};
								angles[]={5.5144234,2.9803171,0.85448813};
							};
							side="Empty";
							flags=1;
							class Attributes
							{
								init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[[""light"",""SLIGHT_STREET_LAMP_DORM""]]],[""class"",""StreetLampEnabled""],[""mark"",""StreetLampEnabled G:b8vVvnccER0 (1)""]]}";
							};
							id=2366;
							type="Land_LampShabby_off_F";
							atlOffset=12.577316;
						};
						class Item4
						{
							dataType="Object";
							class PositionInfo
							{
								position[]={4024.5164,134.17232,4048.8726};
								angles[]={0,0.40814483,0};
							};
							side="Empty";
							flags=1;
							class Attributes
							{
								init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[[""light"",""SLIGHT_STREET_LAMP""]]],[""class"",""StreetLampEnabled""],[""mark"",""StreetLampEnabled G:b8vVvnccER0 (3)""]]}";
							};
							id=2373;
							type="Land_LampShabby_off_F";
							atlOffset=14.204567;
						};
						class Item5
						{
							dataType="Object";
							class PositionInfo
							{
								position[]={4052.166,134.81631,4054.9473};
								angles[]={0,3.6875017,0};
							};
							side="Empty";
							flags=1;
							class Attributes
							{
								init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[[""light"",""SLIGHT_STREET_LAMP_DORM""]]],[""class"",""StreetLampEnabled""],[""mark"",""StreetLampEnabled G:b8vVvnccER0 (4)""]]}";
							};
							id=2380;
							type="Land_LampShabby_off_F";
							atlOffset=19.594536;
						};
						class Item6
						{
							dataType="Object";
							class PositionInfo
							{
								position[]={4032.3279,138.37143,4039.3335};
								angles[]={0,2.8434231,0};
							};
							side="Empty";
							flags=1;
							class Attributes
							{
								init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[[""light"",""SLIGHT_LAMP_HOUSE""]]],[""class"",""LampWall""],[""mark"",""LampWall G:8XcD1OcbsMg""]]}";
							};
							id=2381;
							type="Lamp_stena";
							atlOffset=27.323364;
						};
						class Item7
						{
							dataType="Object";
							class PositionInfo
							{
								position[]={4036.6638,136.75322,4059.5034};
								angles[]={0,4.6028948,0};
							};
							side="Empty";
							flags=1;
							class Attributes
							{
								init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[[""light"",""SLIGHT_LAMP_HOUSE""]]],[""class"",""LampWall""],[""mark"",""LampWall G:AWiHBZWCDxc""]]}";
							};
							id=2382;
							type="Lamp_stena";
							atlOffset=24.373688;
						};
						class Item8
						{
							dataType="Object";
							class PositionInfo
							{
								position[]={4049.3726,135.03566,4046.2878};
								angles[]={0,0.090932295,0};
							};
							side="Empty";
							flags=1;
							class Attributes
							{
								init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[[""light"",""SLIGHT_LAMP_HOUSE""]]],[""class"",""LampWall""],[""mark"",""LampWall G:L2xfYWCzIHY""]]}";
							};
							id=2383;
							type="Lamp_stena";
							atlOffset=23.116249;
						};
						class Item9
						{
							dataType="Object";
							class PositionInfo
							{
								position[]={4039.196,158.45323,4046.4148};
							};
							side="Empty";
							flags=1;
							class Attributes
							{
								init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[[""light"",""SLIGHT_STREET_LAMP_DORM""]]],[""class"",""LampCeiling""],[""mark"",""LampCeiling G:2T5tOq97Zus""]]}";
							};
							id=2436;
							type="Lamp_tarelka";
							atlOffset=45.996101;
						};
						class Item10
						{
							dataType="Object";
							class PositionInfo
							{
								position[]={4039.165,158.54463,4027.9812};
							};
							side="Empty";
							flags=1;
							class Attributes
							{
								init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[[""light"",""SLIGHT_STREET_LAMP_DORM""]]],[""class"",""LampCeiling""],[""mark"",""LampCeiling G:2T5tOq97Zus (1)""]]}";
							};
							id=2438;
							type="Lamp_tarelka";
							atlOffset=46.933319;
						};
						class Item11
						{
							dataType="Object";
							class PositionInfo
							{
								position[]={4040.02,158.5446,4070.8054};
							};
							side="Empty";
							flags=1;
							class Attributes
							{
								init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[[""light"",""SLIGHT_STREET_LAMP_DORM""]]],[""class"",""LampCeiling""],[""mark"",""LampCeiling G:2T5tOq97Zus (2)""]]}";
							};
							id=2439;
							type="Lamp_tarelka";
							atlOffset=39.576904;
						};
						class Item12
						{
							dataType="Object";
							class PositionInfo
							{
								position[]={4056.7876,158.54285,4033.042};
							};
							side="Empty";
							flags=1;
							class Attributes
							{
								init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[[""light"",""SLIGHT_STREET_LAMP_DORM""]]],[""class"",""LampCeiling""],[""mark"",""LampCeiling G:2T5tOq97Zus (3)""]]}";
							};
							id=2440;
							type="Lamp_tarelka";
							atlOffset=46.920029;
						};
						class Item13
						{
							dataType="Object";
							class PositionInfo
							{
								position[]={4059.5437,158.54442,4047.6409};
							};
							side="Empty";
							flags=1;
							class Attributes
							{
								init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[[""light"",""SLIGHT_STREET_LAMP_DORM""]]],[""class"",""LampCeiling""],[""mark"",""LampCeiling G:2T5tOq97Zus (4)""]]}";
							};
							id=2441;
							type="Lamp_tarelka";
							atlOffset=46.930809;
						};
						class Item14
						{
							dataType="Object";
							class PositionInfo
							{
								position[]={4059.8186,158.53445,4071.2275};
							};
							side="Empty";
							flags=1;
							class Attributes
							{
								init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[[""light"",""SLIGHT_STREET_LAMP_DORM""]]],[""class"",""LampCeiling""],[""mark"",""LampCeiling G:2T5tOq97Zus (5)""]]}";
							};
							id=2442;
							type="Lamp_tarelka";
							atlOffset=46.916039;
						};
						class Item15
						{
							dataType="Object";
							class PositionInfo
							{
								position[]={4007.6375,158.54472,4070.2065};
							};
							side="Empty";
							flags=1;
							class Attributes
							{
								init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[[""light"",""SLIGHT_STREET_LAMP_DORM""]]],[""class"",""LampCeiling""],[""mark"",""LampCeiling G:2T5tOq97Zus (6)""]]}";
							};
							id=2443;
							type="Lamp_tarelka";
							atlOffset=153.3831;
						};
						class Item16
						{
							dataType="Object";
							class PositionInfo
							{
								position[]={4007.239,158.55476,4049.6223};
							};
							side="Empty";
							flags=1;
							class Attributes
							{
								init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[[""light"",""SLIGHT_STREET_LAMP_DORM""]]],[""class"",""LampCeiling""],[""mark"",""LampCeiling G:2T5tOq97Zus (7)""]]}";
							};
							id=2444;
							type="Lamp_tarelka";
							atlOffset=40.034927;
						};
						class Item17
						{
							dataType="Object";
							class PositionInfo
							{
								position[]={4007.3918,158.56477,4029.7986};
							};
							side="Empty";
							flags=1;
							class Attributes
							{
								init="{createHashMapFromArray[[""customProps"",createHashMapFromArray[[""light"",""SLIGHT_STREET_LAMP_DORM""]]],[""class"",""LampCeiling""],[""mark"",""LampCeiling G:2T5tOq97Zus (8)""]]}";
							};
							id=2445;
							type="Lamp_tarelka";
							atlOffset=40.280746;
						};
					};
					id=2306;
					atlOffset=153.34898;
				};
			};
			id=2435;
			atlOffset=30.82959;
		};
	};
};
