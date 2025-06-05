modded class Stone
{
	override void OnWasAttached(EntityAI parent, int slot_id)
	{
		super.OnWasAttached(parent, slot_id);

		if (!GetGame().IsClient())
			return;

		#ifdef ZENMODPACK
		if (!ZenModEnabled("ZenCraftingSounds"))
			return;
		#endif

		EffectSound effect = SEffectManager.PlaySound("Zen_RocksAttach_SoundSet", GetPosition());
		effect.SetAutodestroy(true);
	}
	
	override void OnWasDetached(EntityAI parent, int slot_id)
	{
		super.OnWasDetached(parent, slot_id);

		if (!GetGame().IsClient())
			return;

		#ifdef ZENMODPACK
		if (!ZenModEnabled("ZenCraftingSounds"))
			return;
		#endif

		EffectSound effect = SEffectManager.PlaySound("Zen_RocksDetach_SoundSet", GetPosition());
		effect.SetAutodestroy(true);
	}
}