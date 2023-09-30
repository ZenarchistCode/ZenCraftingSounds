modded class Paper
{
	override void OnWasAttached(EntityAI parent, int slot_id)
	{
		super.OnWasAttached(parent, slot_id);

		#ifndef SERVER
		EffectSound effect = SEffectManager.PlaySound("Zen_Paper_loop_SoundSet", GetPosition());
		effect.SetAutodestroy(true);
		#endif
	}
};
