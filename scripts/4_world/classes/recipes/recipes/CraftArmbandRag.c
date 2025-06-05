modded class CraftArmbandRag
{
	override string GetSoundCategory(int ingredientIndex, ItemBase item)
	{
		#ifdef ZENMODPACK
		if (!ZenModEnabled("ZenCraftingSounds"))
			return super.GetSoundCategory(ingredientIndex, item);
		#endif

		return "Rags_craft";
	}
}