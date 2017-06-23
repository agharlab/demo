#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DUnityScript_CharacterState1314841520.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_CollisionFlags4046947985.h"

// UnityEngine.AnimationClip
struct AnimationClip_t3510324950;
// UnityEngine.Animation
struct Animation_t2068071072;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ThirdPersonController
struct  ThirdPersonController_t1841729452  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.AnimationClip ThirdPersonController::idleAnimation01
	AnimationClip_t3510324950 * ___idleAnimation01_2;
	// UnityEngine.AnimationClip ThirdPersonController::idleAnimation02
	AnimationClip_t3510324950 * ___idleAnimation02_3;
	// UnityEngine.AnimationClip ThirdPersonController::idleAnimation03
	AnimationClip_t3510324950 * ___idleAnimation03_4;
	// UnityEngine.AnimationClip ThirdPersonController::walkAnimation
	AnimationClip_t3510324950 * ___walkAnimation_5;
	// UnityEngine.AnimationClip ThirdPersonController::runAnimation
	AnimationClip_t3510324950 * ___runAnimation_6;
	// UnityEngine.AnimationClip ThirdPersonController::jumpPoseAnimation
	AnimationClip_t3510324950 * ___jumpPoseAnimation_7;
	// UnityEngine.AnimationClip ThirdPersonController::JumpPoseAnimation
	AnimationClip_t3510324950 * ___JumpPoseAnimation_8;
	// UnityEngine.AnimationClip ThirdPersonController::LeftjumpPoseAnimation
	AnimationClip_t3510324950 * ___LeftjumpPoseAnimation_9;
	// UnityEngine.AnimationClip ThirdPersonController::RightjumpPoseAnimation
	AnimationClip_t3510324950 * ___RightjumpPoseAnimation_10;
	// System.Single ThirdPersonController::walkMaxAnimationSpeed
	float ___walkMaxAnimationSpeed_11;
	// System.Single ThirdPersonController::trotMaxAnimationSpeed
	float ___trotMaxAnimationSpeed_12;
	// System.Single ThirdPersonController::runMaxAnimationSpeed
	float ___runMaxAnimationSpeed_13;
	// System.Single ThirdPersonController::jumpAnimationSpeed
	float ___jumpAnimationSpeed_14;
	// System.Single ThirdPersonController::JumpAnimationSpeed
	float ___JumpAnimationSpeed_15;
	// System.Single ThirdPersonController::sideJumpAnimationSpeed
	float ___sideJumpAnimationSpeed_16;
	// System.Single ThirdPersonController::landAnimationSpeed
	float ___landAnimationSpeed_17;
	// UnityEngine.Animation ThirdPersonController::_animation
	Animation_t2068071072 * ____animation_18;
	// System.Int32 ThirdPersonController::idleRnd
	int32_t ___idleRnd_19;
	// System.Single ThirdPersonController::sideMove
	float ___sideMove_20;
	// CharacterState ThirdPersonController::_characterState
	int32_t ____characterState_21;
	// System.Single ThirdPersonController::walkSpeed
	float ___walkSpeed_22;
	// System.Single ThirdPersonController::trotSpeed
	float ___trotSpeed_23;
	// System.Single ThirdPersonController::runSpeed
	float ___runSpeed_24;
	// System.Single ThirdPersonController::inAirControlAcceleration
	float ___inAirControlAcceleration_25;
	// System.Single ThirdPersonController::jumpHeight
	float ___jumpHeight_26;
	// System.Single ThirdPersonController::gravity
	float ___gravity_27;
	// System.Single ThirdPersonController::speedSmoothing
	float ___speedSmoothing_28;
	// System.Single ThirdPersonController::rotateSpeed
	float ___rotateSpeed_29;
	// System.Single ThirdPersonController::trotAfterSeconds
	float ___trotAfterSeconds_30;
	// System.Boolean ThirdPersonController::canJump
	bool ___canJump_31;
	// System.Single ThirdPersonController::jumpRepeatTime
	float ___jumpRepeatTime_32;
	// System.Single ThirdPersonController::jumpTimeout
	float ___jumpTimeout_33;
	// System.Single ThirdPersonController::groundedTimeout
	float ___groundedTimeout_34;
	// System.Single ThirdPersonController::lockCameraTimer
	float ___lockCameraTimer_35;
	// UnityEngine.Vector3 ThirdPersonController::moveDirection
	Vector3_t2243707580  ___moveDirection_36;
	// System.Single ThirdPersonController::verticalSpeed
	float ___verticalSpeed_37;
	// System.Single ThirdPersonController::moveSpeed
	float ___moveSpeed_38;
	// UnityEngine.CollisionFlags ThirdPersonController::collisionFlags
	int32_t ___collisionFlags_39;
	// System.Boolean ThirdPersonController::jumping
	bool ___jumping_40;
	// System.Boolean ThirdPersonController::jumpingReachedApex
	bool ___jumpingReachedApex_41;
	// System.Boolean ThirdPersonController::movingBack
	bool ___movingBack_42;
	// System.Boolean ThirdPersonController::isMoving
	bool ___isMoving_43;
	// System.Single ThirdPersonController::walkTimeStart
	float ___walkTimeStart_44;
	// System.Single ThirdPersonController::lastJumpButtonTime
	float ___lastJumpButtonTime_45;
	// System.Single ThirdPersonController::lastJumpTime
	float ___lastJumpTime_46;
	// System.Single ThirdPersonController::lastJumpStartHeight
	float ___lastJumpStartHeight_47;
	// UnityEngine.Vector3 ThirdPersonController::inAirVelocity
	Vector3_t2243707580  ___inAirVelocity_48;
	// System.Single ThirdPersonController::lastGroundedTime
	float ___lastGroundedTime_49;
	// System.Boolean ThirdPersonController::isControllable
	bool ___isControllable_50;

public:
	inline static int32_t get_offset_of_idleAnimation01_2() { return static_cast<int32_t>(offsetof(ThirdPersonController_t1841729452, ___idleAnimation01_2)); }
	inline AnimationClip_t3510324950 * get_idleAnimation01_2() const { return ___idleAnimation01_2; }
	inline AnimationClip_t3510324950 ** get_address_of_idleAnimation01_2() { return &___idleAnimation01_2; }
	inline void set_idleAnimation01_2(AnimationClip_t3510324950 * value)
	{
		___idleAnimation01_2 = value;
		Il2CppCodeGenWriteBarrier(&___idleAnimation01_2, value);
	}

	inline static int32_t get_offset_of_idleAnimation02_3() { return static_cast<int32_t>(offsetof(ThirdPersonController_t1841729452, ___idleAnimation02_3)); }
	inline AnimationClip_t3510324950 * get_idleAnimation02_3() const { return ___idleAnimation02_3; }
	inline AnimationClip_t3510324950 ** get_address_of_idleAnimation02_3() { return &___idleAnimation02_3; }
	inline void set_idleAnimation02_3(AnimationClip_t3510324950 * value)
	{
		___idleAnimation02_3 = value;
		Il2CppCodeGenWriteBarrier(&___idleAnimation02_3, value);
	}

	inline static int32_t get_offset_of_idleAnimation03_4() { return static_cast<int32_t>(offsetof(ThirdPersonController_t1841729452, ___idleAnimation03_4)); }
	inline AnimationClip_t3510324950 * get_idleAnimation03_4() const { return ___idleAnimation03_4; }
	inline AnimationClip_t3510324950 ** get_address_of_idleAnimation03_4() { return &___idleAnimation03_4; }
	inline void set_idleAnimation03_4(AnimationClip_t3510324950 * value)
	{
		___idleAnimation03_4 = value;
		Il2CppCodeGenWriteBarrier(&___idleAnimation03_4, value);
	}

	inline static int32_t get_offset_of_walkAnimation_5() { return static_cast<int32_t>(offsetof(ThirdPersonController_t1841729452, ___walkAnimation_5)); }
	inline AnimationClip_t3510324950 * get_walkAnimation_5() const { return ___walkAnimation_5; }
	inline AnimationClip_t3510324950 ** get_address_of_walkAnimation_5() { return &___walkAnimation_5; }
	inline void set_walkAnimation_5(AnimationClip_t3510324950 * value)
	{
		___walkAnimation_5 = value;
		Il2CppCodeGenWriteBarrier(&___walkAnimation_5, value);
	}

	inline static int32_t get_offset_of_runAnimation_6() { return static_cast<int32_t>(offsetof(ThirdPersonController_t1841729452, ___runAnimation_6)); }
	inline AnimationClip_t3510324950 * get_runAnimation_6() const { return ___runAnimation_6; }
	inline AnimationClip_t3510324950 ** get_address_of_runAnimation_6() { return &___runAnimation_6; }
	inline void set_runAnimation_6(AnimationClip_t3510324950 * value)
	{
		___runAnimation_6 = value;
		Il2CppCodeGenWriteBarrier(&___runAnimation_6, value);
	}

	inline static int32_t get_offset_of_jumpPoseAnimation_7() { return static_cast<int32_t>(offsetof(ThirdPersonController_t1841729452, ___jumpPoseAnimation_7)); }
	inline AnimationClip_t3510324950 * get_jumpPoseAnimation_7() const { return ___jumpPoseAnimation_7; }
	inline AnimationClip_t3510324950 ** get_address_of_jumpPoseAnimation_7() { return &___jumpPoseAnimation_7; }
	inline void set_jumpPoseAnimation_7(AnimationClip_t3510324950 * value)
	{
		___jumpPoseAnimation_7 = value;
		Il2CppCodeGenWriteBarrier(&___jumpPoseAnimation_7, value);
	}

	inline static int32_t get_offset_of_JumpPoseAnimation_8() { return static_cast<int32_t>(offsetof(ThirdPersonController_t1841729452, ___JumpPoseAnimation_8)); }
	inline AnimationClip_t3510324950 * get_JumpPoseAnimation_8() const { return ___JumpPoseAnimation_8; }
	inline AnimationClip_t3510324950 ** get_address_of_JumpPoseAnimation_8() { return &___JumpPoseAnimation_8; }
	inline void set_JumpPoseAnimation_8(AnimationClip_t3510324950 * value)
	{
		___JumpPoseAnimation_8 = value;
		Il2CppCodeGenWriteBarrier(&___JumpPoseAnimation_8, value);
	}

	inline static int32_t get_offset_of_LeftjumpPoseAnimation_9() { return static_cast<int32_t>(offsetof(ThirdPersonController_t1841729452, ___LeftjumpPoseAnimation_9)); }
	inline AnimationClip_t3510324950 * get_LeftjumpPoseAnimation_9() const { return ___LeftjumpPoseAnimation_9; }
	inline AnimationClip_t3510324950 ** get_address_of_LeftjumpPoseAnimation_9() { return &___LeftjumpPoseAnimation_9; }
	inline void set_LeftjumpPoseAnimation_9(AnimationClip_t3510324950 * value)
	{
		___LeftjumpPoseAnimation_9 = value;
		Il2CppCodeGenWriteBarrier(&___LeftjumpPoseAnimation_9, value);
	}

	inline static int32_t get_offset_of_RightjumpPoseAnimation_10() { return static_cast<int32_t>(offsetof(ThirdPersonController_t1841729452, ___RightjumpPoseAnimation_10)); }
	inline AnimationClip_t3510324950 * get_RightjumpPoseAnimation_10() const { return ___RightjumpPoseAnimation_10; }
	inline AnimationClip_t3510324950 ** get_address_of_RightjumpPoseAnimation_10() { return &___RightjumpPoseAnimation_10; }
	inline void set_RightjumpPoseAnimation_10(AnimationClip_t3510324950 * value)
	{
		___RightjumpPoseAnimation_10 = value;
		Il2CppCodeGenWriteBarrier(&___RightjumpPoseAnimation_10, value);
	}

	inline static int32_t get_offset_of_walkMaxAnimationSpeed_11() { return static_cast<int32_t>(offsetof(ThirdPersonController_t1841729452, ___walkMaxAnimationSpeed_11)); }
	inline float get_walkMaxAnimationSpeed_11() const { return ___walkMaxAnimationSpeed_11; }
	inline float* get_address_of_walkMaxAnimationSpeed_11() { return &___walkMaxAnimationSpeed_11; }
	inline void set_walkMaxAnimationSpeed_11(float value)
	{
		___walkMaxAnimationSpeed_11 = value;
	}

	inline static int32_t get_offset_of_trotMaxAnimationSpeed_12() { return static_cast<int32_t>(offsetof(ThirdPersonController_t1841729452, ___trotMaxAnimationSpeed_12)); }
	inline float get_trotMaxAnimationSpeed_12() const { return ___trotMaxAnimationSpeed_12; }
	inline float* get_address_of_trotMaxAnimationSpeed_12() { return &___trotMaxAnimationSpeed_12; }
	inline void set_trotMaxAnimationSpeed_12(float value)
	{
		___trotMaxAnimationSpeed_12 = value;
	}

	inline static int32_t get_offset_of_runMaxAnimationSpeed_13() { return static_cast<int32_t>(offsetof(ThirdPersonController_t1841729452, ___runMaxAnimationSpeed_13)); }
	inline float get_runMaxAnimationSpeed_13() const { return ___runMaxAnimationSpeed_13; }
	inline float* get_address_of_runMaxAnimationSpeed_13() { return &___runMaxAnimationSpeed_13; }
	inline void set_runMaxAnimationSpeed_13(float value)
	{
		___runMaxAnimationSpeed_13 = value;
	}

	inline static int32_t get_offset_of_jumpAnimationSpeed_14() { return static_cast<int32_t>(offsetof(ThirdPersonController_t1841729452, ___jumpAnimationSpeed_14)); }
	inline float get_jumpAnimationSpeed_14() const { return ___jumpAnimationSpeed_14; }
	inline float* get_address_of_jumpAnimationSpeed_14() { return &___jumpAnimationSpeed_14; }
	inline void set_jumpAnimationSpeed_14(float value)
	{
		___jumpAnimationSpeed_14 = value;
	}

	inline static int32_t get_offset_of_JumpAnimationSpeed_15() { return static_cast<int32_t>(offsetof(ThirdPersonController_t1841729452, ___JumpAnimationSpeed_15)); }
	inline float get_JumpAnimationSpeed_15() const { return ___JumpAnimationSpeed_15; }
	inline float* get_address_of_JumpAnimationSpeed_15() { return &___JumpAnimationSpeed_15; }
	inline void set_JumpAnimationSpeed_15(float value)
	{
		___JumpAnimationSpeed_15 = value;
	}

	inline static int32_t get_offset_of_sideJumpAnimationSpeed_16() { return static_cast<int32_t>(offsetof(ThirdPersonController_t1841729452, ___sideJumpAnimationSpeed_16)); }
	inline float get_sideJumpAnimationSpeed_16() const { return ___sideJumpAnimationSpeed_16; }
	inline float* get_address_of_sideJumpAnimationSpeed_16() { return &___sideJumpAnimationSpeed_16; }
	inline void set_sideJumpAnimationSpeed_16(float value)
	{
		___sideJumpAnimationSpeed_16 = value;
	}

	inline static int32_t get_offset_of_landAnimationSpeed_17() { return static_cast<int32_t>(offsetof(ThirdPersonController_t1841729452, ___landAnimationSpeed_17)); }
	inline float get_landAnimationSpeed_17() const { return ___landAnimationSpeed_17; }
	inline float* get_address_of_landAnimationSpeed_17() { return &___landAnimationSpeed_17; }
	inline void set_landAnimationSpeed_17(float value)
	{
		___landAnimationSpeed_17 = value;
	}

	inline static int32_t get_offset_of__animation_18() { return static_cast<int32_t>(offsetof(ThirdPersonController_t1841729452, ____animation_18)); }
	inline Animation_t2068071072 * get__animation_18() const { return ____animation_18; }
	inline Animation_t2068071072 ** get_address_of__animation_18() { return &____animation_18; }
	inline void set__animation_18(Animation_t2068071072 * value)
	{
		____animation_18 = value;
		Il2CppCodeGenWriteBarrier(&____animation_18, value);
	}

	inline static int32_t get_offset_of_idleRnd_19() { return static_cast<int32_t>(offsetof(ThirdPersonController_t1841729452, ___idleRnd_19)); }
	inline int32_t get_idleRnd_19() const { return ___idleRnd_19; }
	inline int32_t* get_address_of_idleRnd_19() { return &___idleRnd_19; }
	inline void set_idleRnd_19(int32_t value)
	{
		___idleRnd_19 = value;
	}

	inline static int32_t get_offset_of_sideMove_20() { return static_cast<int32_t>(offsetof(ThirdPersonController_t1841729452, ___sideMove_20)); }
	inline float get_sideMove_20() const { return ___sideMove_20; }
	inline float* get_address_of_sideMove_20() { return &___sideMove_20; }
	inline void set_sideMove_20(float value)
	{
		___sideMove_20 = value;
	}

	inline static int32_t get_offset_of__characterState_21() { return static_cast<int32_t>(offsetof(ThirdPersonController_t1841729452, ____characterState_21)); }
	inline int32_t get__characterState_21() const { return ____characterState_21; }
	inline int32_t* get_address_of__characterState_21() { return &____characterState_21; }
	inline void set__characterState_21(int32_t value)
	{
		____characterState_21 = value;
	}

	inline static int32_t get_offset_of_walkSpeed_22() { return static_cast<int32_t>(offsetof(ThirdPersonController_t1841729452, ___walkSpeed_22)); }
	inline float get_walkSpeed_22() const { return ___walkSpeed_22; }
	inline float* get_address_of_walkSpeed_22() { return &___walkSpeed_22; }
	inline void set_walkSpeed_22(float value)
	{
		___walkSpeed_22 = value;
	}

	inline static int32_t get_offset_of_trotSpeed_23() { return static_cast<int32_t>(offsetof(ThirdPersonController_t1841729452, ___trotSpeed_23)); }
	inline float get_trotSpeed_23() const { return ___trotSpeed_23; }
	inline float* get_address_of_trotSpeed_23() { return &___trotSpeed_23; }
	inline void set_trotSpeed_23(float value)
	{
		___trotSpeed_23 = value;
	}

	inline static int32_t get_offset_of_runSpeed_24() { return static_cast<int32_t>(offsetof(ThirdPersonController_t1841729452, ___runSpeed_24)); }
	inline float get_runSpeed_24() const { return ___runSpeed_24; }
	inline float* get_address_of_runSpeed_24() { return &___runSpeed_24; }
	inline void set_runSpeed_24(float value)
	{
		___runSpeed_24 = value;
	}

	inline static int32_t get_offset_of_inAirControlAcceleration_25() { return static_cast<int32_t>(offsetof(ThirdPersonController_t1841729452, ___inAirControlAcceleration_25)); }
	inline float get_inAirControlAcceleration_25() const { return ___inAirControlAcceleration_25; }
	inline float* get_address_of_inAirControlAcceleration_25() { return &___inAirControlAcceleration_25; }
	inline void set_inAirControlAcceleration_25(float value)
	{
		___inAirControlAcceleration_25 = value;
	}

	inline static int32_t get_offset_of_jumpHeight_26() { return static_cast<int32_t>(offsetof(ThirdPersonController_t1841729452, ___jumpHeight_26)); }
	inline float get_jumpHeight_26() const { return ___jumpHeight_26; }
	inline float* get_address_of_jumpHeight_26() { return &___jumpHeight_26; }
	inline void set_jumpHeight_26(float value)
	{
		___jumpHeight_26 = value;
	}

	inline static int32_t get_offset_of_gravity_27() { return static_cast<int32_t>(offsetof(ThirdPersonController_t1841729452, ___gravity_27)); }
	inline float get_gravity_27() const { return ___gravity_27; }
	inline float* get_address_of_gravity_27() { return &___gravity_27; }
	inline void set_gravity_27(float value)
	{
		___gravity_27 = value;
	}

	inline static int32_t get_offset_of_speedSmoothing_28() { return static_cast<int32_t>(offsetof(ThirdPersonController_t1841729452, ___speedSmoothing_28)); }
	inline float get_speedSmoothing_28() const { return ___speedSmoothing_28; }
	inline float* get_address_of_speedSmoothing_28() { return &___speedSmoothing_28; }
	inline void set_speedSmoothing_28(float value)
	{
		___speedSmoothing_28 = value;
	}

	inline static int32_t get_offset_of_rotateSpeed_29() { return static_cast<int32_t>(offsetof(ThirdPersonController_t1841729452, ___rotateSpeed_29)); }
	inline float get_rotateSpeed_29() const { return ___rotateSpeed_29; }
	inline float* get_address_of_rotateSpeed_29() { return &___rotateSpeed_29; }
	inline void set_rotateSpeed_29(float value)
	{
		___rotateSpeed_29 = value;
	}

	inline static int32_t get_offset_of_trotAfterSeconds_30() { return static_cast<int32_t>(offsetof(ThirdPersonController_t1841729452, ___trotAfterSeconds_30)); }
	inline float get_trotAfterSeconds_30() const { return ___trotAfterSeconds_30; }
	inline float* get_address_of_trotAfterSeconds_30() { return &___trotAfterSeconds_30; }
	inline void set_trotAfterSeconds_30(float value)
	{
		___trotAfterSeconds_30 = value;
	}

	inline static int32_t get_offset_of_canJump_31() { return static_cast<int32_t>(offsetof(ThirdPersonController_t1841729452, ___canJump_31)); }
	inline bool get_canJump_31() const { return ___canJump_31; }
	inline bool* get_address_of_canJump_31() { return &___canJump_31; }
	inline void set_canJump_31(bool value)
	{
		___canJump_31 = value;
	}

	inline static int32_t get_offset_of_jumpRepeatTime_32() { return static_cast<int32_t>(offsetof(ThirdPersonController_t1841729452, ___jumpRepeatTime_32)); }
	inline float get_jumpRepeatTime_32() const { return ___jumpRepeatTime_32; }
	inline float* get_address_of_jumpRepeatTime_32() { return &___jumpRepeatTime_32; }
	inline void set_jumpRepeatTime_32(float value)
	{
		___jumpRepeatTime_32 = value;
	}

	inline static int32_t get_offset_of_jumpTimeout_33() { return static_cast<int32_t>(offsetof(ThirdPersonController_t1841729452, ___jumpTimeout_33)); }
	inline float get_jumpTimeout_33() const { return ___jumpTimeout_33; }
	inline float* get_address_of_jumpTimeout_33() { return &___jumpTimeout_33; }
	inline void set_jumpTimeout_33(float value)
	{
		___jumpTimeout_33 = value;
	}

	inline static int32_t get_offset_of_groundedTimeout_34() { return static_cast<int32_t>(offsetof(ThirdPersonController_t1841729452, ___groundedTimeout_34)); }
	inline float get_groundedTimeout_34() const { return ___groundedTimeout_34; }
	inline float* get_address_of_groundedTimeout_34() { return &___groundedTimeout_34; }
	inline void set_groundedTimeout_34(float value)
	{
		___groundedTimeout_34 = value;
	}

	inline static int32_t get_offset_of_lockCameraTimer_35() { return static_cast<int32_t>(offsetof(ThirdPersonController_t1841729452, ___lockCameraTimer_35)); }
	inline float get_lockCameraTimer_35() const { return ___lockCameraTimer_35; }
	inline float* get_address_of_lockCameraTimer_35() { return &___lockCameraTimer_35; }
	inline void set_lockCameraTimer_35(float value)
	{
		___lockCameraTimer_35 = value;
	}

	inline static int32_t get_offset_of_moveDirection_36() { return static_cast<int32_t>(offsetof(ThirdPersonController_t1841729452, ___moveDirection_36)); }
	inline Vector3_t2243707580  get_moveDirection_36() const { return ___moveDirection_36; }
	inline Vector3_t2243707580 * get_address_of_moveDirection_36() { return &___moveDirection_36; }
	inline void set_moveDirection_36(Vector3_t2243707580  value)
	{
		___moveDirection_36 = value;
	}

	inline static int32_t get_offset_of_verticalSpeed_37() { return static_cast<int32_t>(offsetof(ThirdPersonController_t1841729452, ___verticalSpeed_37)); }
	inline float get_verticalSpeed_37() const { return ___verticalSpeed_37; }
	inline float* get_address_of_verticalSpeed_37() { return &___verticalSpeed_37; }
	inline void set_verticalSpeed_37(float value)
	{
		___verticalSpeed_37 = value;
	}

	inline static int32_t get_offset_of_moveSpeed_38() { return static_cast<int32_t>(offsetof(ThirdPersonController_t1841729452, ___moveSpeed_38)); }
	inline float get_moveSpeed_38() const { return ___moveSpeed_38; }
	inline float* get_address_of_moveSpeed_38() { return &___moveSpeed_38; }
	inline void set_moveSpeed_38(float value)
	{
		___moveSpeed_38 = value;
	}

	inline static int32_t get_offset_of_collisionFlags_39() { return static_cast<int32_t>(offsetof(ThirdPersonController_t1841729452, ___collisionFlags_39)); }
	inline int32_t get_collisionFlags_39() const { return ___collisionFlags_39; }
	inline int32_t* get_address_of_collisionFlags_39() { return &___collisionFlags_39; }
	inline void set_collisionFlags_39(int32_t value)
	{
		___collisionFlags_39 = value;
	}

	inline static int32_t get_offset_of_jumping_40() { return static_cast<int32_t>(offsetof(ThirdPersonController_t1841729452, ___jumping_40)); }
	inline bool get_jumping_40() const { return ___jumping_40; }
	inline bool* get_address_of_jumping_40() { return &___jumping_40; }
	inline void set_jumping_40(bool value)
	{
		___jumping_40 = value;
	}

	inline static int32_t get_offset_of_jumpingReachedApex_41() { return static_cast<int32_t>(offsetof(ThirdPersonController_t1841729452, ___jumpingReachedApex_41)); }
	inline bool get_jumpingReachedApex_41() const { return ___jumpingReachedApex_41; }
	inline bool* get_address_of_jumpingReachedApex_41() { return &___jumpingReachedApex_41; }
	inline void set_jumpingReachedApex_41(bool value)
	{
		___jumpingReachedApex_41 = value;
	}

	inline static int32_t get_offset_of_movingBack_42() { return static_cast<int32_t>(offsetof(ThirdPersonController_t1841729452, ___movingBack_42)); }
	inline bool get_movingBack_42() const { return ___movingBack_42; }
	inline bool* get_address_of_movingBack_42() { return &___movingBack_42; }
	inline void set_movingBack_42(bool value)
	{
		___movingBack_42 = value;
	}

	inline static int32_t get_offset_of_isMoving_43() { return static_cast<int32_t>(offsetof(ThirdPersonController_t1841729452, ___isMoving_43)); }
	inline bool get_isMoving_43() const { return ___isMoving_43; }
	inline bool* get_address_of_isMoving_43() { return &___isMoving_43; }
	inline void set_isMoving_43(bool value)
	{
		___isMoving_43 = value;
	}

	inline static int32_t get_offset_of_walkTimeStart_44() { return static_cast<int32_t>(offsetof(ThirdPersonController_t1841729452, ___walkTimeStart_44)); }
	inline float get_walkTimeStart_44() const { return ___walkTimeStart_44; }
	inline float* get_address_of_walkTimeStart_44() { return &___walkTimeStart_44; }
	inline void set_walkTimeStart_44(float value)
	{
		___walkTimeStart_44 = value;
	}

	inline static int32_t get_offset_of_lastJumpButtonTime_45() { return static_cast<int32_t>(offsetof(ThirdPersonController_t1841729452, ___lastJumpButtonTime_45)); }
	inline float get_lastJumpButtonTime_45() const { return ___lastJumpButtonTime_45; }
	inline float* get_address_of_lastJumpButtonTime_45() { return &___lastJumpButtonTime_45; }
	inline void set_lastJumpButtonTime_45(float value)
	{
		___lastJumpButtonTime_45 = value;
	}

	inline static int32_t get_offset_of_lastJumpTime_46() { return static_cast<int32_t>(offsetof(ThirdPersonController_t1841729452, ___lastJumpTime_46)); }
	inline float get_lastJumpTime_46() const { return ___lastJumpTime_46; }
	inline float* get_address_of_lastJumpTime_46() { return &___lastJumpTime_46; }
	inline void set_lastJumpTime_46(float value)
	{
		___lastJumpTime_46 = value;
	}

	inline static int32_t get_offset_of_lastJumpStartHeight_47() { return static_cast<int32_t>(offsetof(ThirdPersonController_t1841729452, ___lastJumpStartHeight_47)); }
	inline float get_lastJumpStartHeight_47() const { return ___lastJumpStartHeight_47; }
	inline float* get_address_of_lastJumpStartHeight_47() { return &___lastJumpStartHeight_47; }
	inline void set_lastJumpStartHeight_47(float value)
	{
		___lastJumpStartHeight_47 = value;
	}

	inline static int32_t get_offset_of_inAirVelocity_48() { return static_cast<int32_t>(offsetof(ThirdPersonController_t1841729452, ___inAirVelocity_48)); }
	inline Vector3_t2243707580  get_inAirVelocity_48() const { return ___inAirVelocity_48; }
	inline Vector3_t2243707580 * get_address_of_inAirVelocity_48() { return &___inAirVelocity_48; }
	inline void set_inAirVelocity_48(Vector3_t2243707580  value)
	{
		___inAirVelocity_48 = value;
	}

	inline static int32_t get_offset_of_lastGroundedTime_49() { return static_cast<int32_t>(offsetof(ThirdPersonController_t1841729452, ___lastGroundedTime_49)); }
	inline float get_lastGroundedTime_49() const { return ___lastGroundedTime_49; }
	inline float* get_address_of_lastGroundedTime_49() { return &___lastGroundedTime_49; }
	inline void set_lastGroundedTime_49(float value)
	{
		___lastGroundedTime_49 = value;
	}

	inline static int32_t get_offset_of_isControllable_50() { return static_cast<int32_t>(offsetof(ThirdPersonController_t1841729452, ___isControllable_50)); }
	inline bool get_isControllable_50() const { return ___isControllable_50; }
	inline bool* get_address_of_isControllable_50() { return &___isControllable_50; }
	inline void set_isControllable_50(bool value)
	{
		___isControllable_50 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
