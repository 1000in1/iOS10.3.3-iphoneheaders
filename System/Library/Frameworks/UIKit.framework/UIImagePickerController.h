/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:19 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UINavigationController.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSArray, NSMutableDictionary, UIView;

@interface UIImagePickerController : UINavigationController <NSCoding> {

	int _sourceType;
	id _image;
	CGRect _cropRect;
	NSArray* _mediaTypes;
	NSMutableDictionary* _properties;
	int _previousStatusBarStyle;
	char _previousStatusBarHidden;
	struct {
		unsigned visible : 1;
		unsigned isCleaningUp : 1;
		unsigned savingOptions : 3;
		unsigned didRevertStatusBar : 1;
	}  _imagePickerFlags;

}

@property (assign,nonatomic,__weak) id<UINavigationControllerDelegate><UIImagePickerControllerDelegate> delegate; 
@property (assign,nonatomic) int sourceType; 
@property (nonatomic,copy) NSArray * mediaTypes; 
@property (assign,nonatomic) char allowsEditing; 
@property (assign,nonatomic) char allowsImageEditing; 
@property (assign,nonatomic) double videoMaximumDuration; 
@property (assign,nonatomic) int videoQuality; 
@property (assign,nonatomic) char showsCameraControls; 
@property (nonatomic,retain) UIView * cameraOverlayView; 
@property (assign,nonatomic) CGAffineTransform cameraViewTransform; 
@property (assign,nonatomic) int cameraCaptureMode; 
@property (assign,nonatomic) int cameraDevice; 
@property (assign,nonatomic) int cameraFlashMode; 
+(char)isSourceTypeAvailable:(int)arg1 ;
+(char)_isMediaTypeAvailable:(id)arg1 forSource:(int)arg2 ;
+(char)isCameraDeviceAvailable:(int)arg1 ;
+(char)_reviewCapturedItems;
+(id)availableMediaTypesForSourceType:(int)arg1 ;
+(id)availableCaptureModesForCameraDevice:(int)arg1 ;
+(char)isFlashAvailableForCameraDevice:(int)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned)supportedInterfaceOrientations;
-(char)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)_populateArchivedChildViewControllers:(id)arg1 ;
-(void)viewWillUnload;
-(char)_isSupportedInterfaceOrientation:(int)arg1 ;
-(CGSize)_adjustedContentSizeForPopover:(CGSize)arg1 ;
-(id)_valueForProperty:(id)arg1 ;
-(int)sourceType;
-(void)_setAllowsImageEditing:(char)arg1 ;
-(char)_allowsImageEditing;
-(void)setCameraCaptureMode:(int)arg1 ;
-(void)_setupControllersForCurrentSourceType;
-(void)_updateCameraCaptureMode;
-(void)_setupControllersForCurrentMediaTypes;
-(void)_setValue:(id)arg1 forProperty:(id)arg2 ;
-(void)_initializeProperties;
-(char)_sourceTypeIsCamera;
-(id)_cameraViewController;
-(char)_isCameraCaptureModeValid:(int)arg1 ;
-(void)_removeAllChildren;
-(id)_properties;
-(void)setSourceType:(int)arg1 ;
-(id)_createInitialController;
-(void)_autoDismiss;
-(void)_imagePickerDidCancel;
-(void)_imagePickerDidCompleteWithInfo:(id)arg1 ;
-(id)_initWithSourceImageData:(id)arg1 cropRect:(CGRect)arg2 ;
-(void)setMediaTypes:(NSArray *)arg1 ;
-(NSArray *)mediaTypes;
-(char)_allowsMultipleSelection;
-(void)_setAllowsMultipleSelection:(char)arg1 ;
-(char)_allowsIris;
-(void)_setAllowsIris:(char)arg1 ;
-(char)allowsImageEditing;
-(void)setAllowsImageEditing:(char)arg1 ;
-(char)allowsEditing;
-(void)setAllowsEditing:(char)arg1 ;
-(double)videoMaximumDuration;
-(void)setVideoMaximumDuration:(double)arg1 ;
-(int)videoQuality;
-(void)setVideoQuality:(int)arg1 ;
-(void)_setProperties:(id)arg1 ;
-(void)_setImagePickerSavingOptions:(unsigned)arg1 ;
-(unsigned)_imagePickerSavingOptions;
-(char)showsCameraControls;
-(void)setShowsCameraControls:(char)arg1 ;
-(UIView *)cameraOverlayView;
-(void)setCameraOverlayView:(UIView *)arg1 ;
-(CGAffineTransform)cameraViewTransform;
-(void)setCameraViewTransform:(CGAffineTransform)arg1 ;
-(void)takePicture;
-(char)startVideoCapture;
-(void)stopVideoCapture;
-(int)cameraDevice;
-(void)setCameraDevice:(int)arg1 ;
-(int)cameraCaptureMode;
-(int)cameraFlashMode;
-(void)setCameraFlashMode:(int)arg1 ;
-(char)_didRevertStatusBar;
-(void)_imagePickerDidCompleteWithInfoArray:(id)arg1 ;
@end

