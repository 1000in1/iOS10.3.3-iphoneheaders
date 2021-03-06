/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:21 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIBarButtonItem, UIImageView, NSArray, UIColor, UITapGestureRecognizer, NSString;

@interface UIDimmingView : UIView <UIGestureRecognizerDelegate> {

	UIBarButtonItem* _highlightedBarButtonItem;
	UIImageView* _highlightedImageView;
	UIImageView* _backgroundGlow;
	NSArray* _passthroughViews;
	char _ignoresTouches;
	char _displayed;
	char _inPassthroughHitTest;
	UIColor* _dimmingColor;
	UITapGestureRecognizer* _singleFingerTapRecognizer;
	char _suppressesBackdrops;
	id _delegate;

}

@property (assign,nonatomic,__weak) id delegate;                                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * highlightedBarButtonItem; 
@property (nonatomic,retain) NSArray * passthroughViews;                              //@synthesize passthroughViews=_passthroughViews - In the implementation block
@property (assign,nonatomic) char ignoresTouches;                                     //@synthesize ignoresTouches=_ignoresTouches - In the implementation block
@property (assign,nonatomic) char displayed;                                          //@synthesize displayed=_displayed - In the implementation block
@property (nonatomic,retain) UIColor * dimmingColor;                                  //@synthesize dimmingColor=_dimmingColor - In the implementation block
@property (assign,nonatomic) char suppressesBackdrops;                                //@synthesize suppressesBackdrops=_suppressesBackdrops - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultDimmingColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)delegate;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)setDimmingColor:(UIColor *)arg1 ;
-(UIColor *)dimmingColor;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(id)hitTest:(CGPoint)arg1 forEvent:(GSEventRef)arg2 ;
-(char)displayed;
-(void)setIgnoresTouches:(char)arg1 ;
-(void)setSuppressesBackdrops:(char)arg1 ;
-(void)display:(char)arg1 withAnimationDuration:(float)arg2 afterDelay:(float)arg3 ;
-(void)mouseUp:(GSEventRef)arg1 ;
-(void)display:(char)arg1 ;
-(void)handleSingleTap:(id)arg1 ;
-(char)suppressesBackdrops;
-(id)_backdropViewsToAnimate;
-(void)dimmingRemovalAnimationDidStop;
-(void)setHighlightedBarButtonItem:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)highlightedBarButtonItem;
-(void)_simulateTap;
-(NSArray *)passthroughViews;
-(void)setPassthroughViews:(NSArray *)arg1 ;
-(char)ignoresTouches;
-(void)setDisplayed:(char)arg1 ;
@end

