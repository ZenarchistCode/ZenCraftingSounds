modded class Paper
{
	override void OnWasAttached(EntityAI parent, int slot_id)
	{
		super.OnWasAttached(parent, slot_id);
		
		if (GetGame().IsClient())
		{
			#ifdef ZENMODPACK 
			if (!ZenModEnabled("ZenCraftingSounds"))
				return;

			EffectSound effect = SEffectManager.PlaySound("Zen_Paper_loop_SoundSet", GetPosition());
			effect.SetAutodestroy(true);
			#endif
		}
	}
}