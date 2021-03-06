/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:59 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileNotes/MobileNotes-Structs.h>
#import <MobileNotes/ICFreeTransformableAttachmentView.h>
#import <MobileNotes/ICImageAttachmentPresentationDelegate.h>

@class CALayer, ICImageNavigationController, UIImage, NSString;

@interface ICImageAttachmentView : ICFreeTransformableAttachmentView <ICImageAttachmentPresentationDelegate> {

	char _shouldUpdateLayoutInImageDidLoad;
	char _shouldTryToReloadImageIfLoadingFails;
	CALayer* _imageLayer;
	UIImage* _image;
	/*^block*/id _imageLoadingCancelBlock;
	ICImageNavigationController* _imageNavigationController;
	CGPoint _centerOfSalience;

}

@property (retain) CALayer * imageLayer;                                                                  //@synthesize imageLayer=_imageLayer - In the implementation block
@property (assign,nonatomic,__weak) UIImage * image;                                                      //@synthesize image=_image - In the implementation block
@property (assign) CGPoint centerOfSalience;                                                              //@synthesize centerOfSalience=_centerOfSalience - In the implementation block
@property (assign,nonatomic) char shouldUpdateLayoutInImageDidLoad;                                       //@synthesize shouldUpdateLayoutInImageDidLoad=_shouldUpdateLayoutInImageDidLoad - In the implementation block
@property (assign,nonatomic) char shouldTryToReloadImageIfLoadingFails;                                   //@synthesize shouldTryToReloadImageIfLoadingFails=_shouldTryToReloadImageIfLoadingFails - In the implementation block
@property (nonatomic,copy) id imageLoadingCancelBlock;                                                    //@synthesize imageLoadingCancelBlock=_imageLoadingCancelBlock - In the implementation block
@property (assign,nonatomic,__weak) ICImageNavigationController * imageNavigationController;              //@synthesize imageNavigationController=_imageNavigationController - In the implementation block
@property (nonatomic,readonly) char isThumbnailView; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)sharedInit;
-(void)setupEventHandling;
-(CGRect)frameForContent;
-(id)icaxHintString;
-(void)setupBorderForLayer:(id)arg1 ;
-(char)isAttachmentEditable;
-(UIView*)viewToPresentAttachmentFrom;
-(void)setImageNavigationController:(ICImageNavigationController *)arg1 ;
-(char)isThumbnailView;
-(void)setCenterOfSalience:(CGPoint)arg1 ;
-(id)imageLoadingCancelBlock;
-(void)setShouldTryToReloadImageIfLoadingFails:(char)arg1 ;
-(void)updateImageInView:(char)arg1 ;
-(void)updateImageInViewIfNecessary;
-(void)setShouldUpdateLayoutInImageDidLoad:(char)arg1 ;
-(ICImageNavigationController *)imageNavigationController;
-(void)setImageLoadingCancelBlock:(id)arg1 ;
-(void)setupImagePlaceholder;
-(void)imageDidLoad:(UIImage*)arg1 shouldFade:(char)arg2 ;
-(void)setupImagePlaceholderIfNecessary;
-(char)shouldTryToReloadImageIfLoadingFails;
-(char)shouldUpdateLayoutInImageDidLoad;
-(id)imageContentsGravity;
-(void)animateImageArrival;
-(void)updateImageSize;
-(void)updateCenterOfSalience;
-(char)supportsFreeTransformGesture;
-(id)newNavigationController;
-(CGPoint)centerOfSalience;
-(void)setFrame:(CGRect)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(UIImage *)image;
-(CGSize)imageSize;
-(id)accessibilityLabel;
-(CGRect)imageFrame;
-(CALayer *)imageLayer;
-(void)setImageLayer:(CALayer *)arg1 ;
-(void)didChangeAttachment;
-(void)didChangeMedia;
-(void)didUpdatePreviewImages;
-(void)didScrollOutOfVisibleRange;
-(void)didScrollIntoVisibleRange;
-(char)cancelDidScrollIntoVisibleRange;
-(UIImage*)attachmentImage;
@end

