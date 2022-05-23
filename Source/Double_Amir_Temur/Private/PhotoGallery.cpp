#include "Double_Amir_Temur/Public/PhotoGallery.h"

#if PLATFORM_IOS

void IOSPhotoLibrary::OpenGallery()
{
#if PLATFORM_IOS
// assign event from interface
ImageSelectedFromGalleryProxy = OnImageSelected;
// run photo gallery in main iOS thread
dispatch_async(dispatch_get_main_queue(),
^{
[MyViewController runSelectPhoto];
}
);
#endif
}

}
#endif
#if PLATFORM_ANDROID
void AndroidPhotoGallery::OpenGallery()
{
//do Android code here
}
#endif
