#include "StartMenu.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"

bool UStartMenu::Initialize()
{
	Super::Initialize();

	Start->OnClicked.AddDynamic(this, &UStartMenu::StartClicked);
	return true;
}

void UStartMenu::StartClicked()
{
	UGameplayStatics::OpenLevel(this, "LightPlatforming");
}

