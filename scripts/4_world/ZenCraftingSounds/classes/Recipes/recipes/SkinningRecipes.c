modded class PrepareAnimal
{
    override string GetSoundCategory(int ingredientIndex, ItemBase item)
	{
		#ifdef ZenModPack
		if (!ZenModEnabled("ZenCraftingSounds"))
			return super.GetSoundCategory(ingredientIndex, item);
		#endif

		return "Zen_Skinning";
	}
}

modded class PrepareFish
{
    override string GetSoundCategory(int ingredientIndex, ItemBase item)
	{
		#ifdef ZenModPack
		if (!ZenModEnabled("ZenCraftingSounds"))
			return super.GetSoundCategory(ingredientIndex, item);
		#endif

		return "Zen_Skinning";
	}
}

modded class CraftGutsRope
{
	override string GetSoundCategory(int ingredientIndex, ItemBase item)
	{
		#ifdef ZenModPack
		if (!ZenModEnabled("ZenCraftingSounds"))
			return super.GetSoundCategory(ingredientIndex, item);
		#endif

		return "Zen_Skinning";
	}
}