modded class BarbedWire
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

		EffectSound effect = SEffectManager.PlaySound("Zen_MetalWire_loop_SoundSet", GetPosition());
		effect.SetAutodestroy(true);
	}
}