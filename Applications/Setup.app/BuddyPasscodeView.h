/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:31 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Setup/Setup-Structs.h>
#import <Setup/BuddyTitleView.h>

@class BuddyPasscodeInput, UIViewController;

@interface BuddyPasscodeView : BuddyTitleView {

	BuddyPasscodeInput* _passcodeInputView;
	UIViewController* _passcodeViewController;
	float _currentKeyboardHeight;

}

@property (assign,nonatomic) float currentKeyboardHeight;                                   //@synthesize currentKeyboardHeight=_currentKeyboardHeight - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * passcodeViewController;              //@synthesize passcodeViewController=_passcodeViewController - In the implementation block
-(void)setPasscodeViewController:(UIViewController *)arg1 ;
-(void)transitionToPasscodeInput:(id)arg1 delegate:(id)arg2 ;
-(id)passcodeInputView;
-(void)animateTransitionToPasscodeInput:(id)arg1 animation:(unsigned)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(void)keyboardWillShow:(id)arg1 ;
-(float)currentKeyboardHeight;
-(void)setCurrentKeyboardHeight:(float)arg1 ;
-(UIViewController *)passcodeViewController;
@end

