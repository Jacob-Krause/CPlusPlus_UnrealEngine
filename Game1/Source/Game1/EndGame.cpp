#include "EndGame.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"

bool UEndGame::Initialize()
{
	Super::Initialize();

	Replay->OnClicked.AddDynamic(this, &UEndGame::RestartClicked);
	return true;
}

void UEndGame::RestartClicked()
{
	UGameplayStatics::OpenLevel(this, "LightPlatforming");
}

