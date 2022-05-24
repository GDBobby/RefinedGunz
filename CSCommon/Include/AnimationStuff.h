#pragma once

#include "GlobalTypes.h"
#include "MUtil.h"
#include "RMeshUtil.h"
#include "MMatchGlobal.h"

enum ZC_STATE_UPPER {

	ZC_STATE_UPPER_NONE = 0,

	ZC_STATE_UPPER_SHOT,
	ZC_STATE_UPPER_RELOAD,
	ZC_STATE_UPPER_LOAD,

	ZC_STATE_UPPER_GUARD_START,
	ZC_STATE_UPPER_GUARD_IDLE,
	ZC_STATE_UPPER_GUARD_BLOCK1,
	ZC_STATE_UPPER_GUARD_BLOCK1_RET,
	ZC_STATE_UPPER_GUARD_BLOCK2,
	ZC_STATE_UPPER_GUARD_CANCEL,

	ZC_STATE_UPPER_END
};

enum ZC_STATE_LOWER {

	ZC_STATE_LOWER_NONE = 0,

	ZC_STATE_LOWER_IDLE1,
	ZC_STATE_LOWER_IDLE2,
	ZC_STATE_LOWER_IDLE3,
	ZC_STATE_LOWER_IDLE4,

	ZC_STATE_LOWER_RUN_FORWARD,
	ZC_STATE_LOWER_RUN_BACK,
	ZC_STATE_LOWER_RUN_LEFT,
	ZC_STATE_LOWER_RUN_RIGHT,

	ZC_STATE_LOWER_JUMP_UP,
	ZC_STATE_LOWER_JUMP_DOWN,

	ZC_STATE_LOWER_DIE1,
	ZC_STATE_LOWER_DIE2,
	ZC_STATE_LOWER_DIE3,
	ZC_STATE_LOWER_DIE4,

	ZC_STATE_LOWER_RUN_WALL_LEFT,
	ZC_STATE_LOWER_RUN_WALL_LEFT_DOWN,
	ZC_STATE_LOWER_RUN_WALL,
	ZC_STATE_LOWER_RUN_WALL_DOWN_FORWARD,
	ZC_STATE_LOWER_RUN_WALL_DOWN,
	ZC_STATE_LOWER_RUN_WALL_RIGHT,
	ZC_STATE_LOWER_RUN_WALL_RIGHT_DOWN,

	ZC_STATE_LOWER_TUMBLE_FORWARD,
	ZC_STATE_LOWER_TUMBLE_BACK,
	ZC_STATE_LOWER_TUMBLE_RIGHT,
	ZC_STATE_LOWER_TUMBLE_LEFT,

	ZC_STATE_LOWER_BIND,

	ZC_STATE_LOWER_JUMP_WALL_FORWARD,
	ZC_STATE_LOWER_JUMP_WALL_BACK,
	ZC_STATE_LOWER_JUMP_WALL_LEFT,
	ZC_STATE_LOWER_JUMP_WALL_RIGHT,

	ZC_STATE_LOWER_ATTACK1,
	ZC_STATE_LOWER_ATTACK1_RET,
	ZC_STATE_LOWER_ATTACK2,
	ZC_STATE_LOWER_ATTACK2_RET,
	ZC_STATE_LOWER_ATTACK3,
	ZC_STATE_LOWER_ATTACK3_RET,
	ZC_STATE_LOWER_ATTACK4,
	ZC_STATE_LOWER_ATTACK4_RET,
	ZC_STATE_LOWER_ATTACK5,

	ZC_STATE_LOWER_JUMPATTACK,
	ZC_STATE_LOWER_UPPERCUT,

	ZC_STATE_LOWER_GUARD_START,
	ZC_STATE_LOWER_GUARD_IDLE,
	ZC_STATE_LOWER_GUARD_BLOCK1,
	ZC_STATE_LOWER_GUARD_BLOCK1_RET,
	ZC_STATE_LOWER_GUARD_BLOCK2,
	ZC_STATE_LOWER_GUARD_CANCEL,

	ZC_STATE_LOWER_BLAST,
	ZC_STATE_LOWER_BLAST_FALL,
	ZC_STATE_LOWER_BLAST_DROP,
	ZC_STATE_LOWER_BLAST_STAND,
	ZC_STATE_LOWER_BLAST_AIRMOVE,

	ZC_STATE_LOWER_BLAST_DAGGER,
	ZC_STATE_LOWER_BLAST_DROP_DAGGER,

	ZC_STATE_DAMAGE,
	ZC_STATE_DAMAGE2,
	ZC_STATE_DAMAGE_DOWN,

	ZC_STATE_TAUNT,
	ZC_STATE_BOW,
	ZC_STATE_WAVE,
	ZC_STATE_LAUGH,
	ZC_STATE_CRY,
	ZC_STATE_DANCE,

	ZC_STATE_DAMAGE_BLOCKED,
	ZC_STATE_CHARGE,
	ZC_STATE_SLASH,
	ZC_STATE_JUMP_SLASH1,
	ZC_STATE_JUMP_SLASH2,

	ZC_STATE_DAMAGE_LIGHTNING,
	ZC_STATE_DAMAGE_STUN,

	ZC_STATE_PIT,

	ZC_STATE_LOWER_END
};

struct ZANIMATIONINFO {
	const char *Name;
	bool bEnableCancel;
	bool bLoop;
	bool bMove;
	bool bContinuos;
};

extern ZANIMATIONINFO g_AnimationInfoTableLower[ZC_STATE_LOWER_END];
extern ZANIMATIONINFO g_AnimationInfoTableUpper[ZC_STATE_UPPER_END];

namespace RealSpace2
{
	class RAnimation;
	class RAnimationMgr;
}

struct MMatchItemDesc;

RealSpace2::RAnimationMgr* GetAnimationMgr(MMatchSex Sex);
void SetAnimationMgr(MMatchSex Sex, RealSpace2::RAnimationMgr* AniMgr);

v3 GetHeadPosition(RealSpace2::RAnimation* LowerAni, RealSpace2::RAnimation* UpperAni,
	int LowerFrame, int UpperFrame, float y, float tremble);
v3 GetFootPosition(RealSpace2::RAnimation* LowerAni, int Frame);
int GetSelectWeaponDelay(MMatchItemDesc* pSelectItemDesc);
int GetFrame(RealSpace2::RAnimation& Ani, ZC_STATE_LOWER LowerState, MMatchItemDesc* ItemDesc, float Time);
bool GetNodeMatrix(rmatrix& mat, const char* Name, const rmatrix* parent_base_inv,
	RealSpace2::RAnimation* Ani, int Frame, float y, float tremble);
bool GetUpperSpine1(rmatrix& mat, RealSpace2::RAnimation* Ani, int Frame, float y, float tremble);
v3 GetAbsHead(const v3& Origin, const v3& Dir, MMatchSex Sex,
	ZC_STATE_LOWER LowerState, ZC_STATE_UPPER UpperState,
	int LowerFrame, int UpperFrame,
	RWeaponMotionType MotionType, bool IsDead);