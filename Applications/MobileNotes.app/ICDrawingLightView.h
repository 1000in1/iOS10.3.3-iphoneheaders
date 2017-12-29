/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:04 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileNotes/MobileNotes-Structs.h>
#import <UIKit/UIView.h>

@protocol ICDrawingProvider;
@class ICDrawingViewController, CALayer, UIImage;

@interface ICDrawingLightView : UIView {

	id<ICDrawingProvider> _drawingProvider;
	int _cachedOrientation;
	float _adjustScale;
	ICDrawingViewController* _viewController;
	CALayer* _imageLayer;

}

@property (nonatomic,retain) CALayer * imageLayer;                                         //@synthesize imageLayer=_imageLayer - In the implementation block
@property (nonatomic,readonly) UIImage * image; 
@property (nonatomic,readonly) CGRect imageFrame; 
@property (assign,nonatomic,__weak) id<ICDrawingProvider> drawingProvider;                 //@synthesize drawingProvider=_drawingProvider - In the implementation block
@property (assign,nonatomic) int cachedOrientation;                                        //@synthesize cachedOrientation=_cachedOrientation - In the implementation block
@property (nonatomic,readonly) CGPoint drawingCenterOffset; 
@property (assign,nonatomic) float adjustScale;                                            //@synthesize adjustScale=_adjustScale - In the implementation block
@property (assign,nonatomic,__weak) ICDrawingViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
-(id<ICDrawingProvider>)drawingProvider;
-(void)setDrawingProvider:(id<ICDrawingProvider>)arg1 ;
-(void)setDrawingProvider:(id)arg1 orientation:(int)arg2 ;
-(void)setCachedOrientation:(int)arg1 ;
-(void)asyncUpdateImage;
-(void)updateLayerImageFrame;
-(UIImage*)imageOrientated:(char)arg1 ;
-(void)_updateImage:(UIImage*)arg1 ;
-(void)asyncImageOrientated:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateLayerImageFrameAnimationDuration:(float)arg1 ;
-(int)cachedOrientation;
-(CGRect)frameForFullscreenDrawing;
-(float)adjustScale;
-(CGAffineTransform)viewOrientationTransformForOrientation:(int)arg1 ;
-(CGPoint)drawingCenterOffset;
-(CGAffineTransform)viewOrientationTransform;
-(CGAffineTransform)transformToAccountForViewOrientationAndSize;
-(id)initWithFrame:(CGRect)arg1 withImageLayer:(char)arg2 ;
-(void)setAdjustScale:(float)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)undoManager;
-(UIImage *)image;
-(char)canBecomeFirstResponder;
-(void)setViewController:(ICDrawingViewController *)arg1 ;
-(ICDrawingViewController *)viewController;
-(void)done;
-(void)updateImage;
-(CGRect)imageFrame;
-(CALayer *)imageLayer;
-(void)setImageLayer:(CALayer *)arg1 ;
@end
