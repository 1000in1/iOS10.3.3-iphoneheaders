/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:26 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Reminders.app/Reminders
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Reminders/Reminders-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol RemindersCardViewDelegate;
@class RemindersScrollingBackgroundView, UIView, CALayer, NSLayoutConstraint, NSArray, UIPanGestureRecognizer, UILongPressGestureRecognizer, UIInterpolatingMotionEffect, NSString;

@interface RemindersCardBackgroundView : UIView <UIGestureRecognizerDelegate> {

	RemindersScrollingBackgroundView* _scrollingTextureView;
	UIView* _maskingView;
	UIView* _dimmingView;
	CALayer* _cardTopLayer;
	CALayer* _cardMiddleLayer;
	CALayer* _cardBottomLayer;
	NSLayoutConstraint* _widthConstraint;
	NSLayoutConstraint* _heightConstraint;
	NSArray* _scrollingTextureMaskConstraints;
	UIPanGestureRecognizer* _panGestureRecognizer;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;
	char _canPan;
	UIInterpolatingMotionEffect* _horizontalMotionEffect;
	UIInterpolatingMotionEffect* _verticalMotionEffect;
	NSString* _cardControllerID;
	id<RemindersCardViewDelegate> _delegate;
	float _verticalMotionRelativeValue;
	float _horizontalMotionRelativeValue;

}

@property (nonatomic,retain) NSString * cardControllerID;                         //@synthesize cardControllerID=_cardControllerID - In the implementation block
@property (assign,nonatomic) id<RemindersCardViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) float verticalMotionRelativeValue;                   //@synthesize verticalMotionRelativeValue=_verticalMotionRelativeValue - In the implementation block
@property (assign,nonatomic) float horizontalMotionRelativeValue;                 //@synthesize horizontalMotionRelativeValue=_horizontalMotionRelativeValue - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)cardTopImageForSize:(CGSize)arg1 ;
+(id)cardMiddleImageForSize:(CGSize)arg1 ;
+(id)cardBottomImageForSize:(CGSize)arg1 ;
+(id)roundedTextureImage;
+(UIEdgeInsets)edgeInsets;
-(void)createSublayers;
-(void)useScrollingTexture:(char)arg1 ;
-(void)setHeight:(float)arg1 animated:(char)arg2 ;
-(void)setVerticalMotionEnabled:(char)arg1 ;
-(void)setHorizontalMotionEnabled:(char)arg1 ;
-(NSString *)cardControllerID;
-(void)setCardControllerID:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<RemindersCardViewDelegate>)arg1 ;
-(char)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id<RemindersCardViewDelegate>)delegate;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(char)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)_handlePanGesture:(id)arg1 ;
-(void)setContentOffset:(CGPoint)arg1 ;
-(CGRect)contentRect;
-(void)_handleLongPress:(id)arg1 ;
-(void)setDimmer:(float)arg1 animated:(char)arg2 ;
-(void)setHorizontalMotionRelativeValue:(float)arg1 ;
-(void)setVerticalMotionRelativeValue:(float)arg1 ;
-(void)_addPanAndLongPressGestureRecognizers;
-(void)_removePanAndLongPressGestureRecognizers;
-(float)verticalMotionRelativeValue;
-(float)horizontalMotionRelativeValue;
@end

