class CfgPatches
{
	class BOS_SP_Armor
	{
		units[]=
		{
			"B_Soldier_base_F"
		};
		weapons[]=
		{
		};
		requiredVersion=0.1;
		requiredAddons[]=
			{
				"A3_Data_F",
				"A3_Characters_F_Proxies",
				"A3_Characters_F_Heads",
			};
		version="0.1.0";
		name="Steel Plague Armory";
		author="SP Dev Team";
	};
};
class CfgMods
{
	class Mod_Base;
	class BOS_SP_Armor: Mod_Base
	{
		name="Steel Plague Armory";
		author="SP Dev Team";
		tooltip="SP Stuff";
		tooltipOwned="SP Stuff Owned";
		overview="SP Stuff";
		hidePicture=0;
	};
	author="SP Dev Team";
	timepacked="1665152397";
};
class CfgFactionClasses
{
	class BOS_SP_Faction
	{
		displayName="BOS | Steel Plague";
		priority=1;
		side=1;
	};
};
class CfgVehicles
{
	class t_51bpowerarmor_bosdecal_body;
	class T51SP_Enlisted: t_51bpowerarmor_bosdecal_body
	{
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		side=1;
		faction="BOS_SP_Faction";
		displayName="[BOSSP] Base PA";
		uniformClass="T51SP_Enlisted_V";
		backpack="";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\Steel_Plague_Armory\Textures\Power_Armor\T51\T51PA_Enlisted.paa",
			""
		};
	};
	class T51SP_Enlisted_Knight: t_51bpowerarmor_bosdecal_body
	{
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		side=1;
		faction="BOS_SP_Faction";
		displayName="[BOSSP] PA - Knight";
		uniformClass="T51SP_Enlisted_V_Knight";
		backpack="";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\Steel_Plague_Armory\Textures\Power_Armor\T51\T51PA_Enlisted_Knight.paa",
			""
		};
	};
	class T51SP_NCO: t_51bpowerarmor_bosdecal_body
	{
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		side=1;
		faction="BOS_SP_Faction";
		displayName="[BOSSP] PA, Infantry Knight";
		uniformClass="T51SP_NCO_V";
		backpack="";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\Steel_Plague_Armory\Textures\Power_Armor\T51\T51PA_NCO.paa",
			""
		};
	};
	class T51SP_NCO_Knight_Sergeant: t_51bpowerarmor_bosdecal_body
	{
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		side=1;
		faction="BOS_SP_Faction";
		displayName="[BOSSP] PA - Knight Sergeant";
		uniformClass="T51SP_NCO_V_Knight_Sergeant";
		backpack="";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\Steel_Plague_Armory\Textures\Power_Armor\T51\T51PA_NCO_Knight_Sergeant.paa",
			""
		};
	};
	class T51SP_NCO_Knight_Captain: t_51bpowerarmor_bosdecal_body
	{
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		side=1;
		faction="BOS_SP_Faction";
		displayName="[BOSSP] PA - Knight Captain";
		uniformClass="T51SP_NCO_V_Knight_Captain";
		backpack="";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\Steel_Plague_Armory\Textures\Power_Armor\T51\T51PA_NCO_Knight_Captain.paa",
			""
		};
	};
	class T51SP_CO: t_51bpowerarmor_bosdecal_body
	{
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		side=1;
		faction="BOS_SP_Faction";
		displayName="[BOSSP] PA - CO";
		uniformClass="T51SP_CO_V";
		backpack="";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\Steel_Plague_Armory\Textures\Power_Armor\T51\T51PA_CO.paa",
			""
		};
	};
	class T51SP_CO_Paladin: t_51bpowerarmor_bosdecal_body
	{
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		side=1;
		faction="BOS_SP_Faction";
		displayName="[BOSSP] PA - Paladin";
		uniformClass="T51SP_CO_V_Paladin";
		backpack="";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\Steel_Plague_Armory\Textures\Power_Armor\T51\T51PA_CO_Paladin.paa",
			""
		};
	};
	class T51SP_CO_Paladin_Commander: t_51bpowerarmor_bosdecal_body
	{
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		side=1;
		faction="BOS_SP_Faction";
		displayName="[BOSSP] PA - Paladin Commander";
		uniformClass="T51SP_CO_V_Paladin_Commander";
		backpack="";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\Steel_Plague_Armory\Textures\Power_Armor\T51\T51PA_CO_Paladin_Commander.paa",
			""
		};
	};
	class T51SP_CO_Star_Paladin: t_51bpowerarmor_bosdecal_body
	{
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		side=1;
		faction="BOS_SP_Faction";
		displayName="[BOSSP] PA - Star Paladin";
		uniformClass="T51SP_CO_V_Star_Paladin";
		backpack="";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\Steel_Plague_Armory\Textures\Power_Armor\T51\T51PA_CO_Star_Paladin.paa",
			""
		};
	};
	class T51SP_CO_Senior_Paladin: t_51bpowerarmor_bosdecal_body
	{
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		side=1;
		faction="BOS_SP_Faction";
		displayName="[BOSSP] PA - Senior Paladin";
		uniformClass="T51SP_CO_V_Senior_Paladin";
		backpack="";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\Steel_Plague_Armory\Textures\Power_Armor\T51\T51PA_CO_Senior_Paladin.paa",
			""
		};
	};
	class T51SP_CO_Sentinel: t_51bpowerarmor_bosdecal_body
	{
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		side=1;
		faction="BOS_SP_Faction";
		displayName="[BOSSP] PA - Sentinel";
		uniformClass="T51SP_CO_V_Sentinel";
		backpack="";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\Steel_Plague_Armory\Textures\Power_Armor\T51\T51PA_CO_Sentinel.paa",
			""
		};
	};
	class T51SP_Champion: t_51bpowerarmor_bosdecal_body
	{
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		side=1;
		faction="BOS_SP_Faction";
		displayName="[BOSSP] PA - Champion";
		uniformClass="T51SP_Champion_V";
		backpack="";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\Steel_Plague_Armory\Textures\Power_Armor\T51_Customs\SP_Champion.paa",
			""
		};
	};
	class T51SP_Lockhart: t_51bpowerarmor_bosdecal_body
	{
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		side=1;
		faction="BOS_SP_Faction";
		displayName="[BOSSP] PA - Lockhart";
		uniformClass="T51SP_Lockhart_V";
		backpack="";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\Steel_Plague_Armory\Textures\Power_Armor\T51_Customs\T51PA_Lockhart.paa",
			""
		};
	};
	class maxon_coat_KnightBlack_body;
	class SP_Pilot_Uniform_Elder: maxon_coat_KnightBlack_body
	{
		scope=1;
		scopecurator=1;
		scopearsenal=1;
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		side=1;
		faction="BOS_SP_Faction";
		displayName="[BOSSP] Elder";
		uniformClass="SP_Pilot_Uniform_Elder_V";
		backpack="";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			""
		};
	};
	class CombatArmor_medium_Star_orange_green_body;
	class SP_CombatArmor_Uniform: CombatArmor_medium_Star_orange_green_body
	{
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		side=1;
		faction="BOS_SP_Faction";
		displayName="[BOSSP] Elder";
		uniformClass="SP_CombatArmor_Uniform_V";
		backpack="";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4",
			"Camo5"
		};
		hiddenSelectionsTextures[]=
		{
			"\Steel_Plague_Armory\Textures\Combat_Armor_F4\CombatArmor_Uniform.paa",
			"\Steel_Plague_Armory\Textures\Combat_Armor_F4\CombatArmor_Torso",
			"\Steel_Plague_Armory\Textures\Combat_Armor_F4\CombatArmor_Arms",
			"\Steel_Plague_Armory\Textures\Combat_Armor_F4\CombatArmor_Legs",
			""
		};
	};
	class KnightLancer_KnightBlack_body;
	class SP_Pilot_Uniform_Lancer: KnightLancer_KnightBlack_body
	{
		scope=1;
		scopecurator=1;
		scopearsenal=1;
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		side=1;
		faction="BOS_SP_Faction";
		displayName="[BOSSP] Lancer";
		uniformClass="SP_Pilot_Uniform_Lancer_V";
		backpack="";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"Steel_Plague_Armory\Textures\Lancers\LancerJacket.paa",
			"Steel_Plague_Armory\Textures\Combat_Armor_F4\CombatArmor_Uniform.paa"
		};
	};
	class FieldScribe_body;
	class SP_FieldScribe_Uniform: FieldScribe_body
	{
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		side=1;
		faction="BOS_SP_Faction";
		displayName="[BOSSP] Field Scribe";
		uniformClass="SP_FieldScribe_Uniform_V";
		backpack="";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\Steel_Plague_Armory\Textures\Scribes\BOS_Scribe_Uniform.paa"
		};
	};
	class SP_FieldScribe_Uniform_Insignia: FieldScribe_body
	{
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		side=1;
		faction="BOS_SP_Faction";
		displayName="[BOSSP] Field Scribe - Insignia";
		uniformClass="SP_FieldScribe_Uniform_Insignia_V";
		backpack="";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\Steel_Plague_Armory\Textures\Scribes\BOS_Scribe_Uniform_Insignia.paa"
		};
	};
	class SP_FieldScribe_Uniform_Medical: FieldScribe_body
	{
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		linkedItems[]=
		{
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		side=1;
		faction="BOS_SP_Faction";
		displayName="[BOSSP] Field Scribe - Medic";
		uniformClass="SP_FieldScribe_Uniform_Medical_V";
		backpack="";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\Steel_Plague_Armory\Textures\Scribes\BOS_Scribe_Uniform_Medical.paa"
		};
	};
	class AM_VERTIBIRD_02_White;
	class SP_Vertibird: AM_VERTIBIRD_02_White
	{
		side=1;
		scope=2;
		faction="BOS_SP_Faction";
		crew="SP_Pilot_Uniform_Lancer";
		accuracy=0.5;
		displayName="[BOSSP] Vertibird";
		typicaSPargo[]=
		{
			"O_crew_F"
		};
		class TextureSources
		{
			class Steel_Plague
			{
				displayName = "Steel Plague Variant";
				author = "Hancock";
				textures[] = {"vertbird\textures\vertibird_interiorglow_co.paa","vertbird\textures\vertibird_interior_co.paa","\Steel_Plague_Armory\Textures\Vertibird\Vertibird_Mainbody.paa","\Steel_Plague_Armory\Textures\Vertibird\Vertibird_Gears.paa","\Steel_Plague_Armory\Textures\Vertibird\Vertibird_Wings.paa"};
				factions[] = {"BOS_SP_Faction"};
			};
		};
		textureList[] =
		{
			"Steel Plague", 0.1
		};
	};
};
class CfgWeapons
{
	class ItemInfo;
	class ItemCore;
	class UniformItem;
	class VestItem;
	class Vest_Camo_Base;
	class HeadgearItem;
	class maxon_coat_KnightBlack_uniform;
	class SP_Pilot_Uniform_Elder_V: maxon_coat_KnightBlack_uniform
	{
		author="SP Dev Team";
		scope=1;
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		displayName="[BOSSP] Elder Uniform";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="SP_Pilot_Uniform_Elder";
			containerClass="Supply150";
			mass=10;
		};
	};
	class KnightLancer_KnightBlack_uniform;
	class SP_Pilot_Uniform_Lancer_V: KnightLancer_KnightBlack_uniform
	{
		author="SP Dev Team";
		scope=2;
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		displayName="[BOSSP] Lancer Uniform";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="SP_Pilot_Uniform_Lancer";
			containerClass="Supply150";
			mass=10;
		};
	};
	class CombatArmor_medium_Star_orange_green_uniform;
	class SP_CombatArmor_Uniform_V: CombatArmor_medium_Star_orange_green_uniform
	{
		author="SP Dev Team";
		scope=2;
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		displayName="[BOSSP] Combat Armor";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="SP_CombatArmor_Uniform";
			containerClass="Supply150";
			mass=50;
		};
	};
	class FieldScribe_uniform;
	class SP_FieldScribe_Uniform_V: FieldScribe_uniform
	{
		author="SP Dev Team";
		scope=2;
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		displayName="[BOSSP] Scribe Uniform";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="SP_FieldScribe_Uniform";
			containerClass="Supply150";
			mass=10;
		};
	};
	class SP_FieldScribe_Uniform__Insignia_V: FieldScribe_uniform
	{
		author="SP Dev Team";
		scope=2;
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		displayName="[BOSSP] Scribe Uniform - Insignia";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="SP_FieldScribe_Uniform_Insignia";
			containerClass="Supply150";
			mass=10;
		};
	};
	class SP_FieldScribe_Uniform_Medical_V: FieldScribe_uniform
	{
		author="SP Dev Team";
		scope=2;
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		displayName="[BOSSP] Scribe Uniform - Medical";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="SP_FieldScribe_Uniform_Medical";
			containerClass="Supply150";
			mass=10;
		};
	};
	class t_51bpowerarmor_bosdecal_uniform;
	class T51SP_Enlisted_V: t_51bpowerarmor_bosdecal_uniform
	{
		author="SP Dev Team";
		scope=2;
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		displayName="[BOSSP] T-51 PA [Enlisted]";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="T51SP_Enlisted";
			containerClass="Supply250";
			mass=10;
		};
	};
	class T51SP_Enlisted_V_Knight: t_51bpowerarmor_bosdecal_uniform
	{
		author="SP Dev Team";
		scope=2;
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		displayName="[BOSSP] T-51 PA - Knight";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="T51SP_Enlisted_Knight";
			containerClass="Supply250";
			mass=10;
		};
	};
	class T51SP_NCO_V: t_51bpowerarmor_bosdecal_uniform
	{
		author="SP Dev Team";
		scope=2;
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		displayName="[BOSSP] T-51 PA [NCO]";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="T51SP_NCO";
			containerClass="Supply250";
			mass=10;
		};
	};
	class T51SP_NCO_V_Knight_Sergeant: t_51bpowerarmor_bosdecal_uniform
	{
		author="SP Dev Team";
		scope=2;
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		displayName="[BOSSP] T-51 PA - Knight Sergeant";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="T51SP_NCO_Knight_Sergeant";
			containerClass="Supply250";
			mass=10;
		};
	};
	class T51SP_NCO_V_Knight_Captain: t_51bpowerarmor_bosdecal_uniform
	{
		author="SP Dev Team";
		scope=2;
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		displayName="[BOSSP] T-51 PA - Knight Captain";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="T51SP_NCO_Knight_Captain";
			containerClass="Supply250";
			mass=10;
		};
	};
	class T51SP_CO_V: t_51bpowerarmor_bosdecal_uniform
	{
		author="SP Dev Team";
		scope=2;
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		displayName="[BOSSP] T-51 PA [Officer]";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="T51SP_CO";
			containerClass="Supply250";
			mass=10;
		};
	};
	class T51SP_CO_V_Paladin: t_51bpowerarmor_bosdecal_uniform
	{
		author="SP Dev Team";
		scope=2;
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		displayName="[BOSSP] T-51 PA - Paladin";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="T51SP_CO_Paladin";
			containerClass="Supply250";
			mass=10;
		};
	};
	class T51SP_CO_V_Paladin_Commander: t_51bpowerarmor_bosdecal_uniform
	{
		author="SP Dev Team";
		scope=2;
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		displayName="[BOSSP] T-51 PA - Paladin Commander";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="T51SP_CO_Paladin_Commander";
			containerClass="Supply250";
			mass=10;
		};
	};
	class T51SP_CO_V_Senior_Paladin: t_51bpowerarmor_bosdecal_uniform
	{
		author="SP Dev Team";
		scope=2;
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		displayName="[BOSSP] T-51 PA - Senior Paladin";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="T51SP_CO_Senior_Paladin";
			containerClass="Supply250";
			mass=10;
		};
	};
	class T51SP_CO_V_Star_Paladin: t_51bpowerarmor_bosdecal_uniform
	{
		author="SP Dev Team";
		scope=2;
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		displayName="[BOSSP] T-51 PA - Star Paladin";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="T51SP_CO_Star_Paladin";
			containerClass="Supply250";
			mass=10;
		};
	};
	class T51SP_CO_V_Sentinel: t_51bpowerarmor_bosdecal_uniform
	{
		author="SP Dev Team";
		scope=2;
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		displayName="[BOSSP] T-51 PA - Sentinel";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="T51SP_CO_Sentinel";
			containerClass="Supply250";
			mass=10;
		};
	};
	class T51SP_Champion_V: t_51bpowerarmor_bosdecal_uniform
	{
		author="SP Dev Team";
		scope=2;
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		displayName="[BOSSP] T-51 PA - Champion";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="T51SP_Champion";
			containerClass="Supply250";
			mass=10;
		};
	};
	class T51SP_Lockhart_V: t_51bpowerarmor_bosdecal_uniform
	{
		author="SP Dev Team";
		scope=2;
		allowedSlots[]=
		{
			"BACKPACK_SLOT"
		};
		displayName="[BOSSP] T-51 PA - Lockhart";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="T51SP_Lockhart";
			containerClass="Supply250";
			mass=10;
		};
	};
	class flag_BOSeast;
	class BOSSP_Flag_v1: flag_BOSeast
	{
		author="SP Dev Team";
		scope=2;
		displayName="[BOSSP] Steel Plague Banner v1";
		picture = "\Steel_Plague_Armory\Logos\LostHillsLogo.paa";
		model = "\Sterben_TOP\fallout_uniform\Flag_aftermatch.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\Steel_Plague_Armory\Textures\Banner\Steel_Plague_v1.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel = "\Sterben_TOP\fallout_uniform\Flag_aftermatch.p3d";
			containerClass="Supply20";
			mass=1;
			hiddenSelections[]=
			{
				"Camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"\Steel_Plague_Armory\Textures\Banner\Steel_Plague_v1.paa"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.5;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.5;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.5;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.5;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=35;
					passThrough=0.5;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.5;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=35;
					passThrough=0.5;
				};
			};
		};
	};
	class BOSSP_Flag_v2: flag_BOSeast
	{
		author="SP Dev Team";
		scope=2;
		displayName="[BOSSP] Steel Plague Banner v2";
		picture = "\Steel_Plague_Armory\Logos\LostHillsLogo.paa";
		model = "\Sterben_TOP\fallout_uniform\Flag_aftermatch.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\Steel_Plague_Armory\Textures\Banner\Steel_Plague_v2.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel = "\Sterben_TOP\fallout_uniform\Flag_aftermatch.p3d";
			containerClass="Supply20";
			mass=1;
			hiddenSelections[]=
			{
				"Camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"\Steel_Plague_Armory\Textures\Banner\Steel_Plague_v2.paa"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=35;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=35;
					passThrough=0.5;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=35;
					passThrough=0.5;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=35;
					passThrough=0.5;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=35;
					passThrough=0.5;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=35;
					passThrough=0.5;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.5;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=35;
					passThrough=0.5;
				};
			};
		};
	};
	class t_51bpowerarmor_helm;
	class T51_SP_Helmet_ENLISTED_BASE: t_51bpowerarmor_helm
	{
		displayName="[BOSSP] T-51 PA Helmet [Enlisted]";
		picture = "\Sterben_TOP\fallout_uniform_02\UI\power_armor_helmet.paa";
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0;
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\Steel_Plague_Armory\Textures\Power_Armor\T51\SPE_T51_PA_Helmet_ENLISTED.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=30;
			uniformModel = "\Sterben_TOP\fallout_uniform_02\t_51bpowerarmor_helm.p3d";
			hiddenSelections[]=
			{
				"Camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\Steel_Plague_Armory\Textures\Power_Armor\T51\SPE_T51_PA_Helmet_ENLISTED.paa"
			};
		};
		class HitpointsProtectionInfo
		{
			class Head
			{
				armor=30;
				passThrough=0.5;
			};
		};
	};
	class T51_SP_Helmet_ENLISTED_Knight: t_51bpowerarmor_helm
	{
		displayName="[BOSSP] T-51 PA Helmet - Knight";
		picture = "\Sterben_TOP\fallout_uniform_02\UI\power_armor_helmet.paa";
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0;
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\Steel_Plague_Armory\Textures\Power_Armor\T51\SPE_T51_PA_Helmet_ENLISTED.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=30;
			uniformModel = "\Sterben_TOP\fallout_uniform_02\t_51bpowerarmor_helm.p3d";
			hiddenSelections[]=
			{
				"Camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\Steel_Plague_Armory\Textures\Power_Armor\T51\SPE_T51_PA_Helmet_ENLISTED.paa"
			};
		};
		class HitpointsProtectionInfo
		{
			class Head
			{
				armor=30;
				passThrough=0.5;
			};
		};
	};
	class T51_SP_Helmet_NCO_Base: t_51bpowerarmor_helm
	{
		displayName="[BOSSP] T-51 PA Helmet [NCO]";
		picture = "\Sterben_TOP\fallout_uniform_02\UI\power_armor_helmet.paa";
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0;
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\Steel_Plague_Armory\Textures\Power_Armor\T51\SPE_T51_PA_Helmet_NCO.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=30;
			uniformModel = "\Sterben_TOP\fallout_uniform_02\t_51bpowerarmor_helm.p3d";
			hiddenSelections[]=
			{
				"Camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\Steel_Plague_Armory\Textures\Power_Armor\T51\SPE_T51_PA_Helmet_NCO.paa"
			};
		};
		class HitpointsProtectionInfo
		{
			class Head
			{
				armor=30;
				passThrough=0.5;
			};
		};
	};
	class T51_SP_Helmet_NCO_Knight_Sergeant: t_51bpowerarmor_helm
	{
		displayName="[BOSSP] T-51 PA Helmet - Knight Sergeant";
		picture = "\Sterben_TOP\fallout_uniform_02\UI\power_armor_helmet.paa";
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0;
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\Steel_Plague_Armory\Textures\Power_Armor\T51\SPE_T51_PA_Helmet_NCO.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=30;
			uniformModel = "\Sterben_TOP\fallout_uniform_02\t_51bpowerarmor_helm.p3d";
			hiddenSelections[]=
			{
				"Camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\Steel_Plague_Armory\Textures\Power_Armor\T51\SPE_T51_PA_Helmet_NCO.paa"
			};
		};
		class HitpointsProtectionInfo
		{
			class Head
			{
				armor=30;
				passThrough=0.5;
			};
		};
	};
	class T51_SP_Helmet_NCO_Knight_Captain: t_51bpowerarmor_helm
	{
		displayName="[BOSSP] T-51 PA Helmet - Knight Captain";
		picture = "\Sterben_TOP\fallout_uniform_02\UI\power_armor_helmet.paa";
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0;
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\Steel_Plague_Armory\Textures\Power_Armor\T51\SPE_T51_PA_Helmet_NCO.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=30;
			uniformModel = "\Sterben_TOP\fallout_uniform_02\t_51bpowerarmor_helm.p3d";
			hiddenSelections[]=
			{
				"Camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\Steel_Plague_Armory\Textures\Power_Armor\T51\SPE_T51_PA_Helmet_NCO.paa"
			};
		};
		class HitpointsProtectionInfo
		{
			class Head
			{
				armor=30;
				passThrough=0.5;
			};
		};
	};
	class T51_SP_Helmet_CO: t_51bpowerarmor_helm
	{
		displayName="[BOSSP] T-51 PA Helmet [Officer]";
		picture = "\Sterben_TOP\fallout_uniform_02\UI\power_armor_helmet.paa";
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0;
		hiddenSelections[]= 
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\Steel_Plague_Armory\Textures\Power_Armor\T51\SPE_T51_PA_Helmet_CO.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=30;
			uniformModel = "\Sterben_TOP\fallout_uniform_02\t_51bpowerarmor_helm.p3d";
			hiddenSelections[]= 
			{
				"Camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\Steel_Plague_Armory\Textures\Power_Armor\T51\SPE_T51_PA_Helmet_CO.paa"
			};
		};
		class HitpointsProtectionInfo
		{
			class Head
			{
				armor=30;
				passThrough=0.5;
			};
		};
	};
	class T51_SP_Helmet_CO_Paladin: t_51bpowerarmor_helm
	{
		displayName="[BOSSP] T-51 PA Helmet - Paladin";
		picture = "\Sterben_TOP\fallout_uniform_02\UI\power_armor_helmet.paa";
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0;
		hiddenSelections[]= 
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\Steel_Plague_Armory\Textures\Power_Armor\T51\SPE_T51_PA_Helmet_CO.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=30;
			uniformModel = "\Sterben_TOP\fallout_uniform_02\t_51bpowerarmor_helm.p3d";
			hiddenSelections[]= 
			{
				"Camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\Steel_Plague_Armory\Textures\Power_Armor\T51\SPE_T51_PA_Helmet_CO.paa"
			};
		};
		class HitpointsProtectionInfo
		{
			class Head
			{
				armor=30;
				passThrough=0.5;
			};
		};
	};
	class T51_SP_Helmet_CO_Senior_Paladin: t_51bpowerarmor_helm
	{
		displayName="[BOSSP] T-51 PA Helmet - Senior Paladin";
		picture = "\Sterben_TOP\fallout_uniform_02\UI\power_armor_helmet.paa";
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0;
		hiddenSelections[]= 
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\Steel_Plague_Armory\Textures\Power_Armor\T51\SPE_T51_PA_Helmet_CO.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=30;
			uniformModel = "\Sterben_TOP\fallout_uniform_02\t_51bpowerarmor_helm.p3d";
			hiddenSelections[]= 
			{
				"Camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\Steel_Plague_Armory\Textures\Power_Armor\T51\SPE_T51_PA_Helmet_CO.paa"
			};
		};
		class HitpointsProtectionInfo
		{
			class Head
			{
				armor=30;
				passThrough=0.5;
			};
		};
	};
	class T51_SP_Helmet_CO_Paladin_Commander: t_51bpowerarmor_helm
	{
		displayName="[BOSSP] T-51 PA Helmet - Paladin Commander";
		picture = "\Sterben_TOP\fallout_uniform_02\UI\power_armor_helmet.paa";
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0;
		hiddenSelections[]= 
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\Steel_Plague_Armory\Textures\Power_Armor\T51\SPE_T51_PA_Helmet_CO.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=30;
			uniformModel = "\Sterben_TOP\fallout_uniform_02\t_51bpowerarmor_helm.p3d";
			hiddenSelections[]= 
			{
				"Camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\Steel_Plague_Armory\Textures\Power_Armor\T51\SPE_T51_PA_Helmet_CO.paa"
			};
		};
		class HitpointsProtectionInfo
		{
			class Head
			{
				armor=30;
				passThrough=0.5;
			};
		};
	};
	class T51_SP_Helmet_CO_Star_Paladin: t_51bpowerarmor_helm
	{
		displayName="[BOSSP] T-51 PA Helmet - Star Paladin";
		picture = "\Sterben_TOP\fallout_uniform_02\UI\power_armor_helmet.paa";
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0;
		hiddenSelections[]= 
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\Steel_Plague_Armory\Textures\Power_Armor\T51\SPE_T51_PA_Helmet_CO.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=30;
			uniformModel = "\Sterben_TOP\fallout_uniform_02\t_51bpowerarmor_helm.p3d";
			hiddenSelections[]= 
			{
				"Camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\Steel_Plague_Armory\Textures\Power_Armor\T51\SPE_T51_PA_Helmet_CO.paa"
			};
		};
		class HitpointsProtectionInfo
		{
			class Head
			{
				armor=30;
				passThrough=0.5;
			};
		};
	};
	class T51_SP_Helmet_CO_Sentinel: t_51bpowerarmor_helm
	{
		displayName="[BOSSP] T-51 PA Helmet - Sentinel";
		picture = "\Sterben_TOP\fallout_uniform_02\UI\power_armor_helmet.paa";
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0;
		hiddenSelections[]= 
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\Steel_Plague_Armory\Textures\Power_Armor\T51\SPE_T51_PA_Helmet_CO.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=30;
			uniformModel = "\Sterben_TOP\fallout_uniform_02\t_51bpowerarmor_helm.p3d";
			hiddenSelections[]= 
			{
				"Camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\Steel_Plague_Armory\Textures\Power_Armor\T51\SPE_T51_PA_Helmet_CO.paa"
			};
		};
		class HitpointsProtectionInfo
		{
			class Head
			{
				armor=30;
				passThrough=0.5;
			};
		};
	};
	class T51_SP_Helmet_Champion: t_51bpowerarmor_helm
	{
		displayName="[BOSSP] T-51 PA Helmet - Champion";
		picture = "\Sterben_TOP\fallout_uniform_02\UI\power_armor_helmet.paa";
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0;
		hiddenSelections[]= 
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\Steel_Plague_Armory\Textures\Power_Armor\T51_Customs\SP_Champion.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=30;
			uniformModel = "\Sterben_TOP\fallout_uniform_02\t_51bpowerarmor_helm.p3d";
			hiddenSelections[]= 
			{
				"Camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\Steel_Plague_Armory\Textures\Power_Armor\T51_Customs\SP_Champion.paa"
			};
		};
		class HitpointsProtectionInfo
		{
			class Head
			{
				armor=30;
				passThrough=0.5;
			};
		};
	};
	class T51_SP_Helmet_Lockhart: t_51bpowerarmor_helm
	{
		displayName="[BOSSP] T-51 PA Helmet - Lockhart";
		picture = "\Sterben_TOP\fallout_uniform_02\UI\power_armor_helmet.paa";
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0;
		hiddenSelections[]= 
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\Steel_Plague_Armory\Textures\Power_Armor\T51_Customs\SPE_T51_PA_Helmet_Lockhart.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=30;
			uniformModel = "\Sterben_TOP\fallout_uniform_02\t_51bpowerarmor_helm.p3d";
			hiddenSelections[]= 
			{
				"Camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\Steel_Plague_Armory\Textures\Power_Armor\T51_Customs\SPE_T51_PA_Helmet_Lockhart.paa"
			};
		};
		class HitpointsProtectionInfo
		{
			class Head
			{
				armor=30;
				passThrough=0.5;
			};
		};
	};
	class FieldScribe_Hat;
	class FieldScribe_Cap: FieldScribe_Hat
	{
		displayName="[BOSSP] Field Scribe Cap";
		picture = "\Steel_Plague_Armory\LostHillsLogo.paa";
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0;
		hiddenSelections[]= 
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\Steel_Plague_Armory\Textures\Scribes\BOS_Scribe_Helmet.paa"
		};
		class HitpointsProtectionInfo
		{
			class Head
			{
				armor=30;
				passThrough=0.5;
			};
		};
	};
	class Combat_Armor_Helmet;
	class SP_CombatArmor_Helmet: Combat_Armor_Helmet
	{
		displayName="[BOSSP] Combat Armor Helmet";
		picture = "\Steel_Plague_Armory\LostHillsLogo.paa";
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0;
		hiddenSelections[]= 
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\Steel_Plague_Armory\Textures\Combat_Armor_F4\CombatArmor_Helmet.paa"
		};
		class HitpointsProtectionInfo
		{
			class Head
			{
				armor=30;
				passThrough=0.5;
			};
		};
	};
	class helmet_flight_1_black;
	class SP_Lancer_Helmet: helmet_flight_1_black
	{
		displayName="[BOSSP] Flight Helmet";
		picture = "\Steel_Plague_Armory\LostHillsLogo.paa";
		ace_hearing_protection=1;
		ace_hearing_lowerVolume=0;
		hiddenSelections[]= 
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\Steel_Plague_Armory\Textures\Lancers\LancerHelmet.paa"
		};
		class HitpointsProtectionInfo
		{
			class Head
			{
				armor=30;
				passThrough=0.5;
			};
		};
	};
};