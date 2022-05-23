// Fill out your copyright notice in the Description page of Project Settings.

#include "Double_Amir_Temur/Public/VideoPlane.h"

#include "DesktopPlatformModule.h"
#include "FileMediaSource.h"
#include "IDesktopPlatform.h"
#include "MediaSoundComponent.h"

// Sets default values
void AVideoPlane::BeginPlay() {
	Super::BeginPlay();

	if (MediaPlayer) {
		// FString Path;
		//
		// IDesktopPlatform* DesktopPlatform = FDesktopPlatformModule::Get();
		// if (DesktopPlatform) {
		// 	TArray<FString> OutFileNames;
		//
		// 	const FString FileTypes = "All Files(*.PNG;*.JPG;*.MP4)|*.PNG;*.JPG;*.MP4|"
		// 		"Image Files(*.PNG;*.JPG;)|*.PNG;*.JPG;|"
		// 		"Video Files(*.MP4)|*.MP4";
		// 	const uint32 SelectionFlag = 0;
		// 	DesktopPlatform->OpenFileDialog(
		// 		FSlateApplication::Get().FindBestParentWindowHandleForDialogs(nullptr),
		// 		"Choose content", "", "", FileTypes, SelectionFlag, OutFileNames);
		//
		// 	if (OutFileNames.Num() > 0) {
		// 		Path = OutFileNames[0];
		// 	}
		// }
	
		FString Path = "X:\\Download\\1.mp4";
		UFileMediaSource* MediaSource = NewObject<UFileMediaSource>();
		MediaSource->FilePath = Path;
		MediaPlayer->OpenSource(MediaSource);
		
		UMediaSoundComponent* Comp = NewObject<UMediaSoundComponent>(this);
		Comp->SetMediaPlayer(MediaPlayer);
		Comp->RegisterComponent();
	}
}
