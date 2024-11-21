// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "AnimNotify.h"

#include "AnimNotify_ResetClothingSimulation.generated.h"

UCLASS(const, hidecategories=Object, collapsecategories, meta=(DisplayName="Reset Clothing Simulation"))
class ENGINE_API UAnimNotify_ResetClothingSimulation : public UAnimNotify
{
	GENERATED_BODY()

public:

	UAnimNotify_ResetClothingSimulation();

	// Begin UAnimNotify interface
	virtual FString GetNotifyName_Implementation() const override;
	UE_DEPRECATED(5.0, "Please use the other Notify function instead")
	virtual void Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) override;
	virtual void Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference) override;
	// End UAnimNotify interface

};



