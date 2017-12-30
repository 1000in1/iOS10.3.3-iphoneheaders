/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:28 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/InCallService.app/InCallService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <InCallService/InCallService-Structs.h>
#import <FaceTime/PHAbstractDialerView.h>
#import <FaceTime/TPDialerKeypadDelegate.h>

@class UIView, NSLayoutConstraint, NSString;

@interface PHHandsetDialerView : PHAbstractDialerView <TPDialerKeypadDelegate> {

	UIView* _leftBlankView;
	UIView* _rightBlankView;
	UIView* _bottomBlankView;
	UIView* _topBlankView;
	NSLayoutConstraint* _statusBarToLCDViewConstraint;
	NSLayoutConstraint* _phonePadViewTopConstraint;
	NSLayoutConstraint* _callButtonKeypadOffsetConstraint;

}

@property (retain) NSLayoutConstraint * statusBarToLCDViewConstraint;                  //@synthesize statusBarToLCDViewConstraint=_statusBarToLCDViewConstraint - In the implementation block
@property (retain) NSLayoutConstraint * phonePadViewTopConstraint;                     //@synthesize phonePadViewTopConstraint=_phonePadViewTopConstraint - In the implementation block
@property (retain) NSLayoutConstraint * callButtonKeypadOffsetConstraint;              //@synthesize callButtonKeypadOffsetConstraint=_callButtonKeypadOffsetConstraint - In the implementation block
@property (retain) UIView * leftBlankView;                                             //@synthesize leftBlankView=_leftBlankView - In the implementation block
@property (retain) UIView * rightBlankView;                                            //@synthesize rightBlankView=_rightBlankView - In the implementation block
@property (retain) UIView * bottomBlankView;                                           //@synthesize bottomBlankView=_bottomBlankView - In the implementation block
@property (retain) UIView * topBlankView;                                              //@synthesize topBlankView=_topBlankView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setInCallMode:(char)arg1 ;
-(id)dialerColor;
-(id)newLCDView;
-(id)newNumberPadView;
-(id)newCallButton;
-(void)setLeftBlankView:(UIView *)arg1 ;
-(void)setRightBlankView:(UIView *)arg1 ;
-(void)setBottomBlankView:(UIView *)arg1 ;
-(void)setTopBlankView:(UIView *)arg1 ;
-(UIView *)leftBlankView;
-(UIView *)rightBlankView;
-(UIView *)bottomBlankView;
-(UIView *)topBlankView;
-(float)_yOffsetForLCDView;
-(void)setStatusBarToLCDViewConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)statusBarToLCDViewConstraint;
-(float)_yOffsetForKeypadView;
-(void)setPhonePadViewTopConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)phonePadViewTopConstraint;
-(float)_keypadToCallButtonYSpacing;
-(void)setCallButtonKeypadOffsetConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)callButtonKeypadOffsetConstraint;
-(void)updateContraintsForStatusBar;
-(char)dialerIsNumericOnly;
-(id)numberPadButtonsForCharacters:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)createConstraints;
@end

