#ifndef _ZAI_BASE_H
#define _ZAI_BASE_H


/// AI 행동 세트
enum AI_BEHAVIOR_STATE {
	AI_BEHAVIOR_NONE = 0,		///< N/A
	AI_BEHAVIOR_IDLE,			///< 가만히 있음
	AI_BEHAVIOR_PATROL,			///< 순찰
	AI_BEHAVIOR_ATTACK,			///< 공격
	AI_BEHAVIOR_RETREAT,		///< 도망
	AI_BEHAVIOR_SCRIPT,			///< 스크립트
	AI_BEHAVIOR_DEAD,			///< 죽음

	AI_BEHAVIOR_END
};


/// AI 액션 세트
enum AI_ACTIVITY_SET {
	AI_ACTIVITY_NONE = 0,
	AI_ACTIVITY_IDLE,
	AI_ACTIVITY_MOVE_DIR,		// 한방향으로 직선이동
	AI_ACTIVITY_MOVE_POS,		// 길찾기로 이동
	AI_ACTIVITY_ATTACK,
	AI_ACTIVITY_DAMAGED,
//		AI_ACTIVITY_DEAD,
	AI_ACTIVITY_DELAY,

	AI_ACTIVITY_END
};


/// AI 상태
enum COND_SET
{
	AI_COND_NONE = 0,
	
	AI_COND_SCHEDULE_DONE,
	AI_COND_TASK_FAILED,

	AI_COND_END
};


/// FSM에 필요한 입력
enum AI_INPUT_SET 
{
	AI_INPUT_NONE		= 0,
	AI_INPUT_PLAYER_ATTACKS,
	AI_INPUT_PLAYER_UPPERCUT,

	AI_INPUT_END
};

#endif