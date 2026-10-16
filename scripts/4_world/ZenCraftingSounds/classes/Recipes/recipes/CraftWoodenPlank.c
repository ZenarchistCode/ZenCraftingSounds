modded class CraftWoodenPlank
{
	override string GetSoundCategory(int ingredientIndex, ItemBase item)
	{
		#ifdef ZenModPack
		if (!ZenModEnabled("ZenCraftingSounds"))
			return super.GetSoundCategory(ingredientIndex, item);
		#endif

		return "Zen_SawWood";
	}
}