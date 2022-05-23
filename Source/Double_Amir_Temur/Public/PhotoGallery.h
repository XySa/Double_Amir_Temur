#pragma once
#include "Double_Amir_Temur/Public/PhotoGalleryInterface.h"

#if PLATFORM_IOS
class iOSPhotoGallery : public IPhotoLibrary
{
public:
virtual void OpenGallery() override;
}
#endif
#if PLATFORM_ANDROID
class AndroidPhotoGallery : public IPhotoLibrary
{
public:
virtual void OpenGallery() override;
}
#endif
