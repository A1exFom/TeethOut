#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MainCharacter.generated.h"

UCLASS()
class TEETHOUT_API AMainCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	AMainCharacter();

	//���������� ���� ��� ������
	UPROPERTY(VisibleAnyWhere, BlueprintReadOnly, Category = Camera)
		class USpringArmComponent* CameraBoom;

	//���������� ������
	UPROPERTY(VisibleAnyWhere, BlueprintReadOnly, Category = Camera)
		class UCameraComponent* FollowCamera;

	//���������� ������ �������� ������-�����, �����-������ � ������
	void MoveForward(float Axis);
	void MoveRight(float Axis);
	void Jump();
	void StopJumping();

	//���������� ������ ���������
	UPROPERTY(EditAnyWhere, BlueprintReadWrite)
		bool bDead;

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
