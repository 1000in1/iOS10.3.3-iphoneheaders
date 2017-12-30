/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:58 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/FaceTime.app/FaceTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FaceTime/FaceTime-Structs.h>
#import <TelephonyUI/TPPhonePad.h>

@class _UIFocusLinearMovementSequence;

@interface PHStaticDialerPad : TPPhonePad {

	_UIFocusLinearMovementSequence* _linearSequence;
	int _dialerType;

}

@property (assign) int dialerType;              //@synthesize dialerType=_dialerType - In the implementation block
-(void)setDialerType:(int)arg1 ;
-(void)keyPressed:(id)arg1 ;
-(id)initWithDialerType:(int)arg1 ;
-(int)dialerType;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)_linearFocusMovementSequences;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(char)canBecomeFocused;
-(CGSize)intrinsicContentSize;
-(id)_keypadImage;
-(float)_yFudge;
-(id)_pressedImage;
-(id)_highlightedImage;
@end

