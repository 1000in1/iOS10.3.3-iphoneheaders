/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:10 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/AccessibilityBundles/ZoomWindow.axuiservice/ZoomWindow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ZoomWindow/ZoomWindow-Structs.h>
#import <UIKit/UIView.h>

@protocol ZWTouchTrapViewDelegate;
@interface ZWTouchTrapView : UIView {

	id<ZWTouchTrapViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<ZWTouchTrapViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char enabled; 
-(char)enabled;
-(void)setDelegate:(id<ZWTouchTrapViewDelegate>)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(char)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id<ZWTouchTrapViewDelegate>)delegate;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setEnabled:(char)arg1 ;
-(id)accessibilityLabel;
-(id)accessibilityHint;
-(unsigned long long)accessibilityTraits;
-(char)isAccessibilityElement;
-(char)accessibilityActivate;
-(char)_accessibilityViewIsVisible;
@end
