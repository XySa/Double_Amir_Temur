#pragma once

#include "PhotoGalleryInterface.generated.h"
UINTERFACE(MinimalAPI, Blueprintable)
class UPhotoLibrary : public UInterface
{
GENERATED_BODY()
};
class IPhotoLibrary
{
GENERATED_BODY()
public:
virtual void OpenGallery() = 0;
};
