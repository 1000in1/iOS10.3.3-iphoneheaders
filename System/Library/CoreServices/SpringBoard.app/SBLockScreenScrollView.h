/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:17 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIScrollView.h>

@protocol SBUIPasscodeLockView;
@class SBLockScreenView;

@interface SBLockScreenScrollView : UIScrollView {

	id<SBUIPasscodeLockView> _passcodeView;
	SBLockScreenView* _lockScreenView;

}

@property (assign,nonatomic,__weak) id<SBUIPasscodeLockView> passcodeView;              //@synthesize passcodeView=_passcodeView - In the implementation block
@property (assign,nonatomic,__weak) SBLockScreenView * lockScreenView;                  //@synthesize lockScreenView=_lockScreenView - In the implementation block
-(SBLockScreenView *)lockScreenView;
-(void)setLockScreenView:(SBLockScreenView *)arg1 ;
-(void)setUserInteractionEnabled:(char)arg1 ;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(char)touchesShouldCancelInContentView:(id)arg1 ;
-(void)setPasscodeView:(id<SBUIPasscodeLockView>)arg1 ;
-(id<SBUIPasscodeLockView>)passcodeView;
@end

