/***
*
*	Copyright (c) 1996-2002, Valve LLC. All rights reserved.
*	
*	This product contains software technology licensed from Id 
*	Software, Inc. ("Id Technology").  Id Technology (c) 1996 Id Software, Inc. 
*	All Rights Reserved.
*
*   Use, distribution, and modification of this source code and/or resulting
*   object code is restricted to non-commercial enhancements to products from
*   Valve LLC.  All other use, distribution, or modification is prohibited
*   without written permission from Valve LLC.
*
****/

#define _A( a ) { a, #a }

activity_map_t activity_map[] =
{
	_A( ACT_IDLE ),
	_A( ACT_GUARD ),
	_A( ACT_WALK ),
	_A( ACT_RUN ),
	_A( ACT_FLY ),
	_A( ACT_SWIM ),
	_A( ACT_HOP ),
	_A( ACT_LEAP ),
	_A( ACT_FALL ),
	_A( ACT_LAND ),
	_A( ACT_STRAFE_LEFT ),
	_A( ACT_STRAFE_RIGHT ),
	_A( ACT_ROLL_LEFT ),
	_A( ACT_ROLL_RIGHT ),
	_A( ACT_TURN_LEFT ),
	_A( ACT_TURN_RIGHT ),
	_A( ACT_CROUCH ),
	_A( ACT_CROUCHIDLE ),
	_A( ACT_STAND ),
	_A( ACT_USE ),
	_A( ACT_SIGNAL1 ),
	_A( ACT_SIGNAL2 ),
	_A( ACT_SIGNAL3 ),
	_A( ACT_TWITCH ),
	_A( ACT_COWER ),
	_A( ACT_SMALL_FLINCH ),
	_A( ACT_BIG_FLINCH ),
	_A( ACT_RANGE_ATTACK1 ),
	_A( ACT_RANGE_ATTACK2 ),
	_A( ACT_MELEE_ATTACK1 ),
	_A( ACT_MELEE_ATTACK2 ),
	_A( ACT_RELOAD ),
	_A( ACT_ARM ),
	_A( ACT_DISARM ),
	_A( ACT_EAT ),
	_A( ACT_DIESIMPLE ),
	_A( ACT_DIEBACKWARD ),
	_A( ACT_DIEFORWARD ),
	_A( ACT_DIEVIOLENT ),
	_A( ACT_BARNACLE_HIT ),
	_A( ACT_BARNACLE_PULL ),
	_A( ACT_BARNACLE_CHOMP ),
	_A( ACT_BARNACLE_CHEW ),
	_A( ACT_SLEEP ),
	_A( ACT_INSPECT_FLOOR ),
	_A( ACT_INSPECT_WALL ),
	_A( ACT_IDLE_ANGRY ),
	_A( ACT_WALK_HURT ),
	_A( ACT_RUN_HURT ),
	_A( ACT_HOVER ),
	_A( ACT_GLIDE ),
	_A( ACT_FLY_LEFT ),
	_A( ACT_FLY_RIGHT ),
	_A( ACT_DETECT_SCENT ),
	_A( ACT_SNIFF ),		
	_A( ACT_BITE ),		
	_A( ACT_THREAT_DISPLAY ),
	_A( ACT_FEAR_DISPLAY ),
	_A( ACT_EXCITED ),	
	_A( ACT_SPECIAL_ATTACK1 ),
	_A( ACT_SPECIAL_ATTACK2 ),
	_A( ACT_COMBAT_IDLE ),
	_A( ACT_WALK_SCARED ),
	_A( ACT_RUN_SCARED ),
	_A( ACT_VICTORY_DANCE ),
	_A( ACT_DIE_HEADSHOT ),
	_A( ACT_DIE_CHESTSHOT ),
	_A( ACT_DIE_GUTSHOT ),
	_A( ACT_DIE_BACKSHOT ),
	_A( ACT_FLINCH_HEAD ),
	_A( ACT_FLINCH_CHEST ),
	_A( ACT_FLINCH_STOMACH ),
	_A( ACT_FLINCH_LEFTARM ),
	_A( ACT_FLINCH_RIGHTARM ),
	_A( ACT_FLINCH_LEFTLEG ),
	_A( ACT_FLINCH_RIGHTLEG ),
	_A( ACT_VM_NONE ),
	_A( ACT_VM_DEPLOY ),
	_A( ACT_VM_DEPLOY_EMPTY ),
	_A( ACT_VM_HOLSTER ),
	_A( ACT_VM_HOLSTER_EMPTY ),
	_A( ACT_VM_IDLE ),
	_A( ACT_VM_IDLE_IS ),
	_A( ACT_VM_RANGE_ATTACK ),
	_A( ACT_VM_RANGE_ATTACK_IS ),
	_A( ACT_VM_MELEE_ATTACK ),
	_A( ACT_VM_MELEE_ATTACK_IS ),
	_A( ACT_VM_SHOOT_LAST ),
	_A( ACT_VM_SHOOT_LAST_IS ),
	_A( ACT_VM_LAST_MELEE_ATTACK ),
	_A( ACT_VM_LAST_MELEE_ATTACK_IS ),
	_A( ACT_VM_START_RELOAD ),
	_A( ACT_VM_START_RELOAD_IS ),
	_A( ACT_VM_RELOAD ),
	_A( ACT_VM_RELOAD_IS ),
	_A( ACT_VM_RELOAD_EMPTY ),
	_A( ACT_VM_RELOAD_EMPTY_IS ),
	_A( ACT_VM_TURNON ),
	_A( ACT_VM_TURNOFF ),
	_A( ACT_VM_PUMP ),
	_A( ACT_VM_PUMP_IS ),
	_A( ACT_VM_PUMP_EMPTY ),
	_A( ACT_VM_PUMP_EMPTY_IS ),
	_A( ACT_VM_START_CHARGE ),
	_A( ACT_VM_CHARGE ),
	_A( ACT_VM_OVERLOAD ),
	_A( ACT_VM_IDLE_EMPTY ),
	_A( ACT_VM_IDLE_EMPTY_IS ),
	_A( ACT_VM_IRONSIGHT_ON ),
	_A( ACT_VM_IRONSIGHT_OFF ),
	_A( ACT_VM_SHOOT_EMPTY ),
	_A( ACT_VM_SHOOT_EMPTY_IS ),
	_A( ACT_VM_IRONSIGHT_ON_EMPTY ),
	_A( ACT_VM_IRONSIGHT_OFF_EMPTY ),
	_A( ACT_VM_RESERVED0 ),
	_A( ACT_VM_RESERVED1 ),
	_A( ACT_VM_RESERVED2 ),
	_A( ACT_VM_RESERVED3 ),
	_A( ACT_VM_RESERVED4 ),
	_A( ACT_FLASHLIGHT ),
	_A( ACT_WALKBACK_FIRE ),
	_A( ACT_FIRINGWALK ),
	_A( ACT_FIRINGRUN ),
	_A( ACT_DIERAGDOLL ),
	_A( ACT_180_LEFT ),
	_A( ACT_180_RIGHT ),
	_A( ACT_90_LEFT ),
	_A( ACT_90_RIGHT ),
	_A( ACT_DO_NOT_DISTURB ),
	_A( ACT_TRANSITION ),
	0, NULL
};