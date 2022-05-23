#include "Double_Amir_Temur/Public/IOSPhotoLibrary.h"
#if PLATFORM_IOS
@interface MyViewController() // default constructor
+ (MyViewController*)GetDelegate
{
	static MyViewController * Singleton = [[MyViewController alloc] init];
	return Singleton;
}

-(void)selectPhoto
{
	// create the Photo Library display object
	UIImagePickerController *picker = [[UIImagePickerController alloc] init];
	// type of picker interface to be displayed by the controller
	picker.sourceType = UIImagePickerControllerSourceTypePhotoLibrary;
	// delegate object which receives notification when the user picks an image
	or exits the picker interface
	picker.delegate = self;
	// show object
	// the UIImagePickerController is ONLY supported in portrait mode (see
	http://stackoverflow.com/a/16346664/4228316)
	[[IOSAppDelegate GetDelegate].IOSController presentViewController : picker
	animated : NO completion : nil];
}

+(void)runSelectPhoto
{
// perform this action on the iOS main thread
[[MyViewController GetDelegate]
performSelectorOnMainThread:@selector(selectPhoto) withObject:nil waitUntilDone
: NO];
}

- (void)imagePickerController:(UIImagePickerController *)picker
didFinishPickingMediaWithInfo : (NSDictionary *)info
{
}

- (void)imagePickerController:(UIImagePickerController *)picker
didFinishPickingMediaWithInfo : (NSDictionary *)info
{
//store chosen image
_chosenImage = info[UIImagePickerControllerOriginalImage];
// get bytes from stored image
NSData *data = UIImagePNGRepresentation(_chosenImage);
uint8_t* bytes = (uint8_t*)data.bytes;
//convert to UE4 format
TArray<uint8> UEBytes = TArray<uint8>(bytes, data.length);
// send it to the main thread
ImageSelectedFromGalleryProxy.ExecuteIfBound(UEBytes);
// close created gallery view
[picker dismissViewControllerAnimated : YES completion : NULL];
}

@end
@implementation MyViewController // actual interface implementation
@end
#endif


void IOSPhotoLibrary::OpenGallery() {
}
