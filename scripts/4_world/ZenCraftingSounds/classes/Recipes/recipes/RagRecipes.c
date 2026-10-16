modded class CraftRagRope
{
    override string GetSoundCategory(int ingredientIndex, ItemBase item)
	{
		#ifdef ZenModPack
		if (!ZenModEnabled("ZenCraftingSounds"))
			return super.GetSoundCategory(ingredientIndex, item);
		#endif

		return "ImprovisedCloth_craft";
	}
}

modded class DeCraftArmband
{
    override string GetSoundCategory(int ingredientIndex, ItemBase item)
	{
		#ifdef ZenModPack
		if (!ZenModEnabled("ZenCraftingSounds"))
			return super.GetSoundCategory(ingredientIndex, item);
		#endif

		return "ImprovisedCloth_craft";
	}
}

modded class RepairWithRags
{
	override string GetSoundCategory(int ingredientIndex, ItemBase item)
	{
		#ifdef ZenModPack
		if (!ZenModEnabled("ZenCraftingSounds"))
			return super.GetSoundCategory(ingredientIndex, item);
		#endif

		return "ImprovisedCloth_craft";
	}
}