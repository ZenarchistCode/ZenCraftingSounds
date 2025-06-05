class CfgPatches
{
	class ZenCraftingSounds
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[] = 
		{ 
			"DZ_Data",
			"DZ_Scripts"
		};
	};
};

class CfgMods
{
	class ZenCraftingSounds
	{
		dir="ZenCraftingSounds";
		picture=""; 
		action="";
		hideName=1;
		hidePicture=1;
		name="ZenCraftingSounds";
		credits=""; 
		author="Zenarchist";
		authorID="0";  
		version="1.0";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"Game",
			"World",
			"Mission"
		};
		class defs
		{
			class gameScriptModule
			{
				value="";
				files[] = { "ZenCraftingSounds/scripts/3_game"; };
			};
			class worldScriptModule
			{
				value = "";
				files[] = { "ZenCraftingSounds/scripts/4_world" };
			};
			class missionScriptModule
			{
				value="";
				files[] = { "ZenCraftingSounds/scripts/5_mission" };
			};
		}
	};
};

class CfgSoundShaders
{
	class baseCharacter_SoundShader;

	// Whetstone
	class Zen_SharpenMelee_loop_Soundshader: baseCharacter_SoundShader
	{
		samples[]=
		{
			{ "ZenCraftingSounds\data\sounds\SharpenMelee\SharpenMelee_loop1", 1 },
			{ "ZenCraftingSounds\data\sounds\SharpenMelee\SharpenMelee_loop2", 1 },
			{ "ZenCraftingSounds\data\sounds\SharpenMelee\SharpenMelee_loop3", 1 },
			{ "ZenCraftingSounds\data\sounds\SharpenMelee\SharpenMelee_loop4", 1 },
			{ "ZenCraftingSounds\data\sounds\SharpenMelee\SharpenMelee_loop5", 1 },
			{ "ZenCraftingSounds\data\sounds\SharpenMelee\SharpenMelee_loop6", 1 }
		};
		volume=0.5;
	};
	// Weapon Cleaning Kit
	class Zen_CleanWeapon_loop_Soundshader: baseCharacter_SoundShader
	{
		samples[]=
		{
			{ "ZenCraftingSounds\data\sounds\CleanWeapon\CleanWeapon_loop1", 1 },
			{ "ZenCraftingSounds\data\sounds\CleanWeapon\CleanWeapon_loop2", 1 },
			{ "ZenCraftingSounds\data\sounds\CleanWeapon\CleanWeapon_loop3", 1 },
			{ "ZenCraftingSounds\data\sounds\CleanWeapon\CleanWeapon_loop4", 1 },
			{ "ZenCraftingSounds\data\sounds\CleanWeapon\CleanWeapon_loop5", 1 },
			{ "ZenCraftingSounds\data\sounds\CleanWeapon\CleanWeapon_loop6", 1 }
		};
		volume=0.3;
	};
	// Disinfectant bottle
	class Zen_DisinfectBottle_loop_Soundshader: baseCharacter_SoundShader
	{
		samples[]=
		{
			{ "ZenCraftingSounds\data\sounds\DisinfectBottle\DisinfectBottle_loop1", 1 }
		};
		volume=1.0;
	};
	// Disinfectant spray
	class Zen_DisinfectSpray_loop_Soundshader: baseCharacter_SoundShader
	{
		samples[]=
		{
			{ "ZenCraftingSounds\data\sounds\DisinfectSpray\DisinfectSpray_loop1", 1 },
			{ "ZenCraftingSounds\data\sounds\DisinfectSpray\DisinfectSpray_loop2", 1 },
			{ "ZenCraftingSounds\data\sounds\DisinfectSpray\DisinfectSpray_loop3", 1 }
		};
		volume=0.2;
	};
	// Hands in the bush
	class Zen_HandsBush_loop_Soundshader: baseCharacter_SoundShader
	{
		samples[]=
		{
			{ "\DZ\sounds\Characters\movement\vegetation\bush_walk_1", 1 },
			{ "\DZ\sounds\Characters\movement\vegetation\bush_walk_2", 1 },
			{ "\DZ\sounds\Characters\movement\vegetation\bush_walk_3", 1 },
			{ "\DZ\sounds\Characters\movement\vegetation\bush_walk_4", 1 },
			{ "\DZ\sounds\Characters\movement\vegetation\bush_walk_5", 1 },
			{ "\DZ\sounds\Characters\movement\vegetation\bush_walk_6", 1 },
			{ "\DZ\sounds\Characters\movement\vegetation\bush_walk_7", 1 },
			{ "\DZ\sounds\Characters\movement\vegetation\bush_walk_8", 1 }
		};
		volume=0.3;
	};
	// Duct tape
	class Zen_DuctTape_loop_Soundshader: baseCharacter_SoundShader
	{
		samples[]=
		{
			{ "ZenCraftingSounds\data\sounds\DuctTape\DuctTape_loop1", 1 },
			{ "ZenCraftingSounds\data\sounds\DuctTape\DuctTape_loop2", 1 },
			{ "ZenCraftingSounds\data\sounds\DuctTape\DuctTape_loop3", 1 },
			{ "ZenCraftingSounds\data\sounds\DuctTape\DuctTape_loop4", 1 },
			{ "ZenCraftingSounds\data\sounds\DuctTape\DuctTape_loop5", 1 }
		};
		volume=0.2;
	};
	// Break sticks
	class Zen_BreakStick_loop_Soundshader: baseCharacter_SoundShader
	{
		samples[]=
		{
			{ "ZenCraftingSounds\data\sounds\BreakStick\BreakStick_loop1", 1 },
			{ "ZenCraftingSounds\data\sounds\BreakStick\BreakStick_loop2", 1 },
			{ "ZenCraftingSounds\data\sounds\BreakStick\BreakStick_loop3", 1 },
			{ "ZenCraftingSounds\data\sounds\BreakStick\BreakStick_loop4", 1 },
			{ "ZenCraftingSounds\data\sounds\BreakStick\BreakStick_loop5", 1 },
			{ "ZenCraftingSounds\data\sounds\BreakStick\BreakStick_loop6", 1 }
		};
		volume=0.5;
	};
	// Break water bottle
	class Zen_BreakWaterBottle_loop_Soundshader: baseCharacter_SoundShader
	{
		samples[]=
		{
			{ "ZenCraftingSounds\data\sounds\BreakWaterBottle\BreakWaterBottle_loop1", 1 },
			{ "ZenCraftingSounds\data\sounds\BreakWaterBottle\BreakWaterBottle_loop2", 1 },
			{ "ZenCraftingSounds\data\sounds\BreakWaterBottle\BreakWaterBottle_loop3", 1 }
		};
		volume=0.2;
	};
	// Craft bolt / sharpen stick
	class Zen_CraftBolts_loop_Soundshader: baseCharacter_SoundShader
	{
		samples[]=
		{
			{ "ZenCraftingSounds\data\sounds\CraftBolts\CraftBolts_loop1", 1 },
			{ "ZenCraftingSounds\data\sounds\CraftBolts\CraftBolts_loop2", 1 },
			{ "ZenCraftingSounds\data\sounds\CraftBolts\CraftBolts_loop3", 1 }
		};
		volume=0.5;
	};
	// Spray paint
	class Zen_SprayPaint_loop_Soundshader: baseCharacter_SoundShader
	{
		samples[]=
		{
			{ "ZenCraftingSounds\data\sounds\SprayPaint\SprayPaint_loop1", 1 },
			{ "ZenCraftingSounds\data\sounds\SprayPaint\SprayPaint_loop2", 1 },
			{ "ZenCraftingSounds\data\sounds\SprayPaint\SprayPaint_loop3", 1 }
		};
		volume=0.3;
	};
	// Sewing kit
	class Zen_SewingKit_loop_Soundshader: baseCharacter_SoundShader
	{
		samples[]=
		{
			{ "ZenCraftingSounds\data\sounds\SewingKit\SewingKit_loop1", 1 },
			{ "ZenCraftingSounds\data\sounds\SewingKit\SewingKit_loop2", 1 },
			{ "ZenCraftingSounds\data\sounds\SewingKit\SewingKit_loop3", 1 }
		};
		volume=1.0;
	};
	// Leather sewing kit
	class Zen_LeatherSewingKit_loop_Soundshader: baseCharacter_SoundShader
	{
		samples[]=
		{
			{ "ZenCraftingSounds\data\sounds\LeatherSewingKit\LeatherSewingKit_loop1", 1 },
			{ "ZenCraftingSounds\data\sounds\LeatherSewingKit\LeatherSewingKit_loop2", 1 },
			{ "ZenCraftingSounds\data\sounds\LeatherSewingKit\LeatherSewingKit_loop3", 1 },
			{ "ZenCraftingSounds\data\sounds\LeatherSewingKit\LeatherSewingKit_loop4", 1 },
			{ "ZenCraftingSounds\data\sounds\LeatherSewingKit\LeatherSewingKit_loop5", 1 },
			{ "ZenCraftingSounds\data\sounds\LeatherSewingKit\LeatherSewingKit_loop6", 1 }
		};
		volume=0.2;
	};
	// Rubber repair
	class Zen_Rubber_loop_Soundshader: baseCharacter_SoundShader
	{
		samples[]=
		{
			{ "ZenCraftingSounds\data\sounds\Rubber\Rubber_loop1", 1 },
			{ "ZenCraftingSounds\data\sounds\Rubber\Rubber_loop2", 1 },
			{ "ZenCraftingSounds\data\sounds\Rubber\Rubber_loop3", 1 },
			{ "ZenCraftingSounds\data\sounds\Rubber\Rubber_loop4", 1 },
			{ "ZenCraftingSounds\data\sounds\Rubber\Rubber_loop5", 1 }
		};
		volume=0.4;
	};
	// Vanilla saw wood sounds
	class Zen_SawWood_loop_Soundshader: baseCharacter_SoundShader
	{
		samples[]=
		{
			{ "DZ\sounds\Characters\actions\construction\HackSaw_loop_1", 1 },
			{ "DZ\sounds\Characters\actions\construction\HackSaw_loop_2", 1 },
			{ "DZ\sounds\Characters\actions\construction\HackSaw_loop_3", 1 },
			{ "DZ\sounds\Characters\actions\construction\HackSaw_loop_4", 1 },
			{ "DZ\sounds\Characters\actions\construction\HackSaw_loop_5", 1 },
			{ "DZ\sounds\Characters\actions\construction\HackSaw_loop_6", 1 }
		};
		volume=0.1;
	};
	// Vanilla screwdriver mining sounds
	class Zen_BreakStone_loop_Soundshader: baseCharacter_SoundShader
	{
		samples[]=
		{
			{ "DZ\sounds\Characters\actions\horticulture\mineScrewdriver_1", 1 },
			{ "DZ\sounds\Characters\actions\horticulture\mineScrewdriver_2", 1 },
			{ "DZ\sounds\Characters\actions\horticulture\mineScrewdriver_3", 1 },
			{ "DZ\sounds\Characters\actions\horticulture\mineScrewdriver_4", 1 },
			{ "DZ\sounds\Characters\actions\horticulture\mineScrewdriver_5", 1 },
			{ "DZ\sounds\Characters\actions\horticulture\mineScrewdriver_6", 1 }
		};
		volume=1;
	};
	// Electronic repair soldering
	class Zen_ElectronicRepair_loop_Soundshader: baseCharacter_SoundShader
	{
		samples[]=
		{
			{ "ZenCraftingSounds\data\sounds\ElectronicRepair\ElectronicRepair_loop1", 1 },
			{ "ZenCraftingSounds\data\sounds\ElectronicRepair\ElectronicRepair_loop2", 1 },
			{ "ZenCraftingSounds\data\sounds\ElectronicRepair\ElectronicRepair_loop3", 1 },
			{ "ZenCraftingSounds\data\sounds\ElectronicRepair\ElectronicRepair_loop4", 1 },
			{ "ZenCraftingSounds\data\sounds\ElectronicRepair\ElectronicRepair_loop5", 1 },
			{ "ZenCraftingSounds\data\sounds\ElectronicRepair\ElectronicRepair_loop6", 1 }
		};
		volume=0.3;
	};
	// Stick sharpening
	class Zen_Bones_loop_Soundshader: baseCharacter_SoundShader
	{
		samples[]=
		{
			{ "ZenCraftingSounds\data\sounds\Bones\Bones_loop1", 1 },
			{ "ZenCraftingSounds\data\sounds\Bones\Bones_loop2", 1 }
		};
		volume=0.3;
	};
	// Metal wire vanilla plier sounds
	class Zen_MetalWire_loop_Soundshader: baseCharacter_SoundShader
	{
		samples[]=
		{
			{ "DZ\sounds\Characters\actions\items\pliers\pliers_loop_1", 1 },
			{ "DZ\sounds\Characters\actions\items\pliers\pliers_loop_2", 1 },
			{ "DZ\sounds\Characters\actions\items\pliers\pliers_loop_3", 1 },
			{ "DZ\sounds\Characters\actions\items\pliers\pliers_loop_4", 1 }
		};
		volume=1.0;
	};
	// Syringe vanilla sounds
	class Zen_BloodTest_loop_Soundshader: baseCharacter_SoundShader
	{
		samples[]=
		{
			{ "DZ\sounds\Characters\actions\healing\syringe_out_0",		1 },
			{ "DZ\sounds\Characters\actions\healing\syringe_spear_0",	1 },
			{ "DZ\sounds\Characters\actions\healing\syringe_spear_1",	1 },
			{ "DZ\sounds\Characters\actions\healing\syringe_splash_0",	1 }
		};
		volume=1.0;
	};
	// Rocks
	class Zen_Rocks_loop_Soundshader: baseCharacter_SoundShader
	{
		samples[]=
		{
			{ "ZenCraftingSounds\data\sounds\Rocks\Rocks_loop1", 1 },
			{ "ZenCraftingSounds\data\sounds\Rocks\Rocks_loop2", 1 },
			{ "ZenCraftingSounds\data\sounds\Rocks\Rocks_loop3", 1 },
			{ "ZenCraftingSounds\data\sounds\Rocks\Rocks_loop4", 1 },
			{ "ZenCraftingSounds\data\sounds\Rocks\Rocks_loop5", 1 },
			{ "ZenCraftingSounds\data\sounds\Rocks\Rocks_loop6", 1 }
		};
		volume=0.3;
	};
	// Nails
	class Zen_Nails_loop_Soundshader: baseCharacter_SoundShader
	{
		samples[]=
		{
			{ "ZenCraftingSounds\data\sounds\Nails\nails1", 1 },
			{ "ZenCraftingSounds\data\sounds\Nails\nails2", 1 },
			{ "ZenCraftingSounds\data\sounds\Nails\nails3", 1 },
			{ "ZenCraftingSounds\data\sounds\Nails\nails4", 1 },
			{ "ZenCraftingSounds\data\sounds\Nails\nails5", 1 },
			{ "ZenCraftingSounds\data\sounds\Nails\nails6", 1 }
		};
		volume=1.0;
	};
	// Wood & firewood
	class Zen_Wood_loop_Soundshader: baseCharacter_SoundShader
	{
		samples[]=
		{
			{ "ZenCraftingSounds\data\sounds\Wood\Wood1", 1 },
			{ "ZenCraftingSounds\data\sounds\Wood\Wood2", 1 },
			{ "ZenCraftingSounds\data\sounds\Wood\Wood3", 1 }
		};
		volume=0.3;
	};
	// Paper
	class Zen_Paper_loop_Soundshader: baseCharacter_SoundShader
	{
		samples[]=
		{
			{ "DZ\sounds\Characters\actions\items\note\noteIn_1", 1 },
			{ "DZ\sounds\Characters\actions\items\note\noteIn_2", 1 },
			{ "DZ\sounds\Characters\actions\items\note\noteIn_3", 1 },
			{ "DZ\sounds\Characters\actions\items\note\noteIn_4", 1 },
			{ "DZ\sounds\Characters\actions\items\note\noteIn_5", 1 },
			{ "DZ\sounds\Characters\actions\items\note\noteIn_6", 1 },
			{ "DZ\sounds\Characters\actions\items\note\noteOut_1", 1 },
			{ "DZ\sounds\Characters\actions\items\note\noteOut_2", 1 },
			{ "DZ\sounds\Characters\actions\items\note\noteOut_3", 1 },
			{ "DZ\sounds\Characters\actions\items\note\noteOut_4", 1 },
			{ "DZ\sounds\Characters\actions\items\note\noteOut_5", 1 },
			{ "DZ\sounds\Characters\actions\items\note\noteOut_6", 1 }
		};
		volume=0.17782794;
	};
	// Flint strike sounds
	class Zen_FlintStrike_loop_Soundshader : baseCharacter_SoundShader
	{
		samples[] =
		{
			{ "ZenCraftingSounds\data\sounds\Flint\flint1", 1 },
			{ "ZenCraftingSounds\data\sounds\Flint\flint2", 1 }
		};
		volume = 0.5;
	};
	// Pain male
	class Zen_PainMale_loop_Soundshader: baseCharacter_SoundShader
	{
		samples[]=
		{
			{ "DZ\sounds\Characters\voice\male_1\pain_1", 1 },
			{ "DZ\sounds\Characters\voice\male_1\pain_2", 1 },
			{ "DZ\sounds\Characters\voice\male_1\pain_3", 1 },
			{ "DZ\sounds\Characters\voice\male_1\pain_4", 1 },
			{ "DZ\sounds\Characters\voice\male_1\pain_5", 1 },
			{ "DZ\sounds\Characters\voice\male_1\pain_6", 1 },
			{ "DZ\sounds\Characters\voice\male_1\pain_7", 1 },
			{ "DZ\sounds\Characters\voice\male_1\pain_8", 1 }
		};
		volume="0.5 * (male factor[(1-0.2),(1-0.1)]) * (male factor[(0.2+1),(0.1+1)])";
	};
	// Pain female
	class Zen_PainFemale_loop_Soundshader: baseCharacter_SoundShader
	{
		samples[]=
		{
			{ "DZ\sounds\Characters\voice\female_1\pain_1", 1 },
			{ "DZ\sounds\Characters\voice\female_1\pain_2", 1 },
			{ "DZ\sounds\Characters\voice\female_1\pain_3", 1 },
			{ "DZ\sounds\Characters\voice\female_1\pain_4", 1 },
			{ "DZ\sounds\Characters\voice\female_1\pain_5", 1 },
			{ "DZ\sounds\Characters\voice\female_1\pain_6", 1 },
			{ "DZ\sounds\Characters\voice\female_1\pain_7", 1 },
			{ "DZ\sounds\Characters\voice\female_1\pain_8", 1 }
		};
		volume="0.5 * (female factor[(1-0.2),(1-0.1)]) * (female factor[(0.2+1),(0.1+1)])";
	};


	// ATTACH/DETACH
	// Rocks move
	class Zen_RocksAttach_Soundshader: baseCharacter_SoundShader
	{
		samples[]=
		{
			{ "ZenCraftingSounds\data\sounds\Rocks\Rocks_loop5", 1 }
		};
		volume=0.6;
	};
	class Zen_RocksDetach_Soundshader: baseCharacter_SoundShader
	{
		samples[]=
		{
			{ "ZenCraftingSounds\data\sounds\Rocks\Rocks_loop6", 1 }
		};
		volume=0.6;
	};
	class Zen_PlankAttach_Soundshader: baseCharacter_SoundShader
	{
		samples[]=
		{
			{ "ZenCraftingSounds\data\sounds\Wood\Wood3", 1 }
		};
		volume=1.0;
	};
	class Zen_SticksAttach_Soundshader: baseCharacter_SoundShader
	{
		samples[]=
		{
			{ "DZ\sounds\Characters\actions\items\shelters\Shelter_Attach_Wooden_Stick", 1 }
		};
		volume=1.0;
	};
	class Zen_MetalPlateAttach_Soundshader: baseCharacter_SoundShader
	{
		samples[]=
		{
			{ "ZenCraftingSounds\data\sounds\MetalPlate\metalplate1", 1 },
			{ "ZenCraftingSounds\data\sounds\MetalPlate\metalplate2", 1 }
		};
		volume=1.0;
	};
};

class CfgSoundSets
{
	class baseCharacter_SoundSet;

	class Zen_SharpenMelee_loop_SoundSet: baseCharacter_SoundSet
	{
		soundShaders[]= { "Zen_SharpenMelee_loop_Soundshader" };
	};
	class Zen_CleanWeapon_loop_SoundSet: baseCharacter_SoundSet
	{
		soundShaders[]= { "Zen_CleanWeapon_loop_Soundshader" };
	};
	class Zen_DisinfectBottle_loop_SoundSet: baseCharacter_SoundSet
	{
		soundShaders[]= { "Zen_DisinfectBottle_loop_Soundshader" };
	};
	class Zen_DisinfectSpray_loop_SoundSet: baseCharacter_SoundSet
	{
		soundShaders[]= { "Zen_DisinfectSpray_loop_Soundshader" };
	};
	class Zen_HandsBush_loop_SoundSet: baseCharacter_SoundSet
	{
		soundShaders[]= { "Zen_HandsBush_loop_Soundshader" };
	};
	class Zen_DuctTape_loop_SoundSet: baseCharacter_SoundSet
	{
		soundShaders[]= { "Zen_DuctTape_loop_Soundshader" };
	};
	class Zen_BreakStick_loop_SoundSet: baseCharacter_SoundSet
	{
		soundShaders[]= { "Zen_BreakStick_loop_Soundshader" };
	};
	class Zen_BreakWaterBottle_loop_SoundSet: baseCharacter_SoundSet
	{
		soundShaders[]= { "Zen_BreakWaterBottle_loop_Soundshader" };
	};
	class Zen_CraftBolts_loop_SoundSet: baseCharacter_SoundSet
	{
		soundShaders[]= { "Zen_CraftBolts_loop_Soundshader" };
	};
	class Zen_FlintStrike_loop_SoundSet : baseCharacter_SoundSet
	{
		soundShaders[] = { "Zen_FlintStrike_loop_Soundshader" };
	};
	class Zen_SprayPaint_loop_SoundSet: baseCharacter_SoundSet
	{
		soundShaders[]= { "Zen_SprayPaint_loop_Soundshader" };
	};
	class Zen_SewingKit_loop_SoundSet: baseCharacter_SoundSet
	{
		soundShaders[]= { "Zen_SewingKit_loop_Soundshader" };
	};
	class Zen_LeatherSewingKit_loop_SoundSet: baseCharacter_SoundSet
	{
		soundShaders[]= { "Zen_LeatherSewingKit_loop_Soundshader" };
	};
	class Zen_Rubber_loop_SoundSet: baseCharacter_SoundSet
	{
		soundShaders[]= { "Zen_Rubber_loop_Soundshader" };
	};
	class Zen_SawWood_loop_SoundSet: baseCharacter_SoundSet
	{
		soundShaders[]= { "Zen_SawWood_loop_Soundshader" };
	};
	class Zen_BreakStone_loop_SoundSet: baseCharacter_SoundSet
	{
		soundShaders[]= { "Zen_BreakStone_loop_Soundshader" };
	};
	class Zen_ElectronicRepair_loop_SoundSet: baseCharacter_SoundSet
	{
		soundShaders[]= { "Zen_ElectronicRepair_loop_Soundshader" };
	};
	class Zen_Bones_loop_SoundSet: baseCharacter_SoundSet
	{
		soundShaders[]= { "Zen_Bones_loop_Soundshader" };
	};
	class Zen_MetalWire_loop_SoundSet: baseCharacter_SoundSet
	{
		soundShaders[]= { "Zen_MetalWire_loop_Soundshader" };
	};
	class Zen_BloodTest_loop_SoundSet: baseCharacter_SoundSet
	{
		soundShaders[]= { "Zen_BloodTest_loop_Soundshader" };
	};
	class Zen_Rocks_loop_SoundSet: baseCharacter_SoundSet
	{
		soundShaders[]= { "Zen_Rocks_loop_Soundshader" };
	};
	class Zen_Nails_loop_SoundSet: baseCharacter_SoundSet
	{
		soundShaders[]= { "Zen_Nails_loop_Soundshader" };
	};
	class Zen_Wood_loop_SoundSet: baseCharacter_SoundSet
	{
		soundShaders[]= { "Zen_Wood_loop_Soundshader" };
	};
	class Zen_Paper_loop_SoundSet: baseCharacter_SoundSet
	{
		soundShaders[]= { "Zen_Paper_loop_Soundshader" };
	};
	class Zen_PainMale_loop_SoundSet: baseCharacter_SoundSet
	{
		soundShaders[]= { "Zen_PainMale_loop_Soundshader" };
	};
	class Zen_PainFemale_loop_SoundSet: baseCharacter_SoundSet
	{
		soundShaders[]= { "Zen_PainFemale_loop_Soundshader" };
	};


	// ATTACH/DETACH
	class Zen_RocksAttach_SoundSet: baseCharacter_SoundSet
	{
		soundShaders[]= { "Zen_RocksAttach_Soundshader" };
	};
	class Zen_RocksDetach_SoundSet: baseCharacter_SoundSet
	{
		soundShaders[]= { "Zen_RocksDetach_Soundshader" };
	};
	class Zen_PlankAttach_SoundSet: baseCharacter_SoundSet
	{
		soundShaders[]= { "Zen_PlankAttach_Soundshader" };
	};
	class Zen_SticksAttach_SoundSet: baseCharacter_SoundSet
	{
		soundShaders[]= { "Zen_SticksAttach_Soundshader" };
	};
	class Zen_MetalPlateAttach_SoundSet: baseCharacter_SoundSet
	{
		soundShaders[]= { "Zen_MetalPlateAttach_Soundshader" };
	};
};

class CfgSoundTables
{
	class CfgActionsSoundTables
	{
		class Craft_LookupTable
		{
			class Zen_SharpenMelee_loop
			{
				category="Zen_SharpenMelee"; // This is the ID to link this sound effect to an action/recipe
				soundSets[]= { "Zen_SharpenMelee_loop_SoundSet" };
			};
			class Zen_CleanWeapon_loop
			{
				category="Zen_CleanWeapon";
				soundSets[]= { "Zen_CleanWeapon_loop_SoundSet" };
			};
			class Zen_DisinfectBottle_loop
			{
				category="Zen_DisinfectBottle";
				soundSets[]= { "Zen_DisinfectBottle_loop_SoundSet" };
			};
			class Zen_DisinfectSpray_loop
			{
				category="Zen_DisinfectSpray";
				soundSets[]= { "Zen_DisinfectSpray_loop_SoundSet" };
			};
			class Zen_HandsBush_loop
			{
				category="Zen_HandsBush";
				soundSets[]= { "Zen_HandsBush_loop_SoundSet" };
			};
			class Zen_DuctTape_loop
			{
				category="Zen_DuctTape";
				soundSets[]= { "Zen_DuctTape_loop_SoundSet" };
			};
			class Zen_BreakStick_loop
			{
				category="Zen_BreakStick";
				soundSets[]= { "Zen_BreakStick_loop_SoundSet" };
			};
			class Zen_BreakWaterBottle_loop
			{
				category="Zen_BreakWaterBottle";
				soundSets[]= { "Zen_BreakWaterBottle_loop_SoundSet" };
			};
			class Zen_CraftBolts_loop
			{
				category="Zen_CraftBolts";
				soundSets[]= { "Zen_CraftBolts_loop_SoundSet" };
			};
			class Zen_FlintStrike_loop
			{
				category = "Zen_FlintStrike";
				soundSets[] = { "Zen_FlintStrike_loop_SoundSet" };
			};
			class Zen_SprayPaint_loop
			{
				category="Zen_SprayPaint";
				soundSets[]= { "Zen_SprayPaint_loop_SoundSet" };
			};
			class Zen_SewingKit_loop
			{
				category="Zen_SewingKit";
				soundSets[]= { "Zen_SewingKit_loop_SoundSet" };
			};
			class Zen_LeatherSewingKit_loop
			{
				category="Zen_LeatherSewingKit";
				soundSets[]= { "Zen_LeatherSewingKit_loop_SoundSet" };
			};
			class Zen_Rubber_loop
			{
				category="Zen_Rubber";
				soundSets[]= { "Zen_Rubber_loop_SoundSet" };
			};
			class Zen_SawWood_loop
			{
				category="Zen_SawWood";
				soundSets[]= { "Zen_SawWood_loop_SoundSet" };
			};
			class Zen_BreakStone_loop
			{
				category="Zen_BreakStone";
				soundSets[]= { "Zen_BreakStone_loop_SoundSet" };
			};
			class Zen_ElectronicRepair_loop
			{
				category="Zen_ElectronicRepair";
				soundSets[]= { "Zen_ElectronicRepair_loop_SoundSet" };
			};
			class Zen_Bones_loop
			{
				category="Zen_Bones";
				soundSets[]= { "Zen_Bones_loop_SoundSet" };
			};
			class Zen_MetalWire_loop
			{
				category="Zen_MetalWire";
				soundSets[]= { "Zen_MetalWire_loop_SoundSet" };
			};
			class Zen_BloodTest_loop
			{
				category="Zen_BloodTest";
				soundSets[]= { "Zen_BloodTest_loop_SoundSet" };
			};
			class Zen_Rocks_loop
			{
				category="Zen_Rocks";
				soundSets[]= { "Zen_Rocks_loop_SoundSet" };
			};
			class Zen_Nails_loop
			{
				category="Zen_Nails";
				soundSets[]= { "Zen_Nails_loop_SoundSet" };
			};
			class Zen_Wood_loop
			{
				category="Zen_Wood";
				soundSets[]= { "Zen_Wood_loop_SoundSet" };
			};
			class Zen_Paper_loop
			{
				category="Zen_Paper";
				soundSets[]= { "Zen_Paper_loop_SoundSet" };
			};
			class Zen_PainMale_loop
			{
				category="Zen_PainMale";
				soundSets[]= { "Zen_PainMale_loop_SoundSet" };
			};
			class Zen_PainFemale_loop
			{
				category="Zen_PainFemale";
				soundSets[]= { "Zen_PainFemale_loop_SoundSet" };
			};
		};
	};
};
