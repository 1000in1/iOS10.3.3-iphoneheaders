/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:01 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileNotes/MobileNotes-Structs.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>
#import <UIKit/UIViewControllerInteractiveTransitioning.h>

@protocol UIViewControllerContextTransitioning;
@class CALayer, UIView, NSString;

@interface ICFreeTransformInteractiveTransition : NSObject <UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning> {

	char _autoFinish;
	char _postitionLayerUnderTopViewController;
	id<UIViewControllerContextTransitioning> _transitionContext;
	CALayer* _animatedImageLayer;
	CALayer* _animatedImageContentsLayer;
	CALayer* _inlineImageLayer;
	CALayer* _inlineImageContentsLayer;
	CALayer* _scrimLayer;
	int _imageOrientation;
	UIView* _viewWithUserInteractionDisabled;
	CGPoint _originalOrigin;

}

@property (assign,nonatomic,__weak) id<UIViewControllerContextTransitioning> transitionContext;              //@synthesize transitionContext=_transitionContext - In the implementation block
@property (nonatomic,retain) CALayer * animatedImageLayer;                                                   //@synthesize animatedImageLayer=_animatedImageLayer - In the implementation block
@property (nonatomic,retain) CALayer * animatedImageContentsLayer;                                           //@synthesize animatedImageContentsLayer=_animatedImageContentsLayer - In the implementation block
@property (nonatomic,retain) CALayer * inlineImageLayer;                                                     //@synthesize inlineImageLayer=_inlineImageLayer - In the implementation block
@property (nonatomic,retain) CALayer * inlineImageContentsLayer;                                             //@synthesize inlineImageContentsLayer=_inlineImageContentsLayer - In the implementation block
@property (nonatomic,retain) CALayer * scrimLayer;                                                           //@synthesize scrimLayer=_scrimLayer - In the implementation block
@property (assign,nonatomic) CGPoint originalOrigin;                                                         //@synthesize originalOrigin=_originalOrigin - In the implementation block
@property (assign,nonatomic) int imageOrientation;                                                           //@synthesize imageOrientation=_imageOrientation - In the implementation block
@property (assign,nonatomic,__weak) UIView * viewWithUserInteractionDisabled;                                //@synthesize viewWithUserInteractionDisabled=_viewWithUserInteractionDisabled - In the implementation block
@property (assign,nonatomic) char autoFinish;                                                                //@synthesize autoFinish=_autoFinish - In the implementation block
@property (nonatomic,readonly) char isTransitioningToFullscreen; 
@property (assign,nonatomic) char postitionLayerUnderTopViewController;                                      //@synthesize postitionLayerUnderTopViewController=_postitionLayerUnderTopViewController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) float completionSpeed; 
@property (nonatomic,readonly) int completionCurve; 
@property (nonatomic,readonly) char wantsInteractiveStart; 
-(void)setPostitionLayerUnderTopViewController:(char)arg1 ;
-(void)setAutoFinish:(char)arg1 ;
-(CGPoint)originalOrigin;
-(CALayer *)animatedImageLayer;
-(CALayer *)inlineImageLayer;
-(CALayer *)scrimLayer;
-(void)performFinishAnimation;
-(void)setScrimLayer:(CALayer *)arg1 ;
-(char)postitionLayerUnderTopViewController;
-(void)setAnimatedImageLayer:(CALayer *)arg1 ;
-(void)setAnimatedImageContentsLayer:(CALayer *)arg1 ;
-(CALayer *)animatedImageContentsLayer;
-(void)setInlineImageLayer:(CALayer *)arg1 ;
-(void)setInlineImageContentsLayer:(CALayer *)arg1 ;
-(CALayer *)inlineImageContentsLayer;
-(void)setViewWithUserInteractionDisabled:(UIView *)arg1 ;
-(void)setupImageOrientationForContentsRect:(CGRect)arg1 ;
-(void)setOriginalOrigin:(CGPoint)arg1 ;
-(void)performStartAnimation;
-(char)autoFinish;
-(UIView *)viewWithUserInteractionDisabled;
-(double)fadeDuration;
-(void)dealloc;
-(void)setTransitionContext:(id<UIViewControllerContextTransitioning>)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(void)cancelInteractiveTransition;
-(void)animateTransition:(id)arg1 ;
-(void)animationEnded:(char)arg1 ;
-(id<UIViewControllerContextTransitioning>)transitionContext;
-(void)finishInteractiveTransition;
-(void)startInteractiveTransition:(id)arg1 ;
-(void)updateInteractiveTransition:(CGAffineTransform)arg1 ;
-(int)imageOrientation;
-(void)setImageOrientation:(int)arg1 ;
-(char)isTransitioningToFullscreen;
@end

