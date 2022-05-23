#pragma once

#include "CoreMinimal.h"
#include "PhotoGalleryInterface.h"

class AndroidPhotoLibrary : public IPhotoLibrary
{
public:
	virtual void OpenGallery() override;
};
