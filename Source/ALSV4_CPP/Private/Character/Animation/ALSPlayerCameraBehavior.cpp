// Copyright:       Copyright (C) 2022 Doğa Can Yanıkoğlu
// Source Code:     https://github.com/dyanikoglu/ALS-Community


#include "Character/Animation/ALSPlayerCameraBehavior.h"


#include "Character/ALSBaseCharacter.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(ALSPlayerCameraBehavior)

void UALSPlayerCameraBehavior::SetRotationMode(EALSRotationMode RotationMode)
{
	bVelocityDirection = RotationMode == EALSRotationMode::VelocityDirection;
	bLookingDirection = RotationMode == EALSRotationMode::LookingDirection;
	bAiming = RotationMode == EALSRotationMode::Aiming;
}
