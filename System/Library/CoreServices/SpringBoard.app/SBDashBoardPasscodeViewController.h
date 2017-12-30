/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:20 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBDashBoardViewControllerBase.h>
#import <libobjc.A.dylib/SBUIPasscodeLockViewDelegate.h>

@protocol SBUIPasscodeLockView_Internal, SBDashBoardPasscodeViewControllerDelegate;
@class SBFAuthenticationAssertion, UIView, SBDashBoardBackgroundView, NSString;

@interface SBDashBoardPasscodeViewController : SBDashBoardViewControllerBase <SBUIPasscodeLockViewDelegate> {

	char _attemptingUnlock;
	SBFAuthenticationAssertion* _sustainGracePeriodAssertion;
	SBFAuthenticationAssertion* _sustainAuthenticationAssertion;
	unsigned _options;
	UIView*<SBUIPasscodeLockView_Internal> _passcodeLockView;
	SBDashBoardBackgroundView* _backgroundView;
	id<SBDashBoardPasscodeViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SBDashBoardPasscodeViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)performCustomTransitionToVisible:(char)arg1 withAnimationSettings:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)aggregateAppearance:(id)arg1 ;
-(void)aggregateBehavior:(id)arg1 ;
-(id)displayLayoutElementIdentifier;
-(int)presentationPriority;
-(void)_passcodeLockViewPasscodeEntered:(id)arg1 viaMesa:(char)arg2 ;
-(void)_setMesaEnabledForTransientAppearanceTransition:(char)arg1 ;
-(void)setDelegate:(id<SBDashBoardPasscodeViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<SBDashBoardPasscodeViewControllerDelegate>)delegate;
-(char)handleEvent:(id)arg1 ;
-(void)loadView;
-(int)presentationStyle;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)viewDidLoad;
-(id)initWithOptions:(unsigned)arg1 ;
-(int)presentationTransition;
-(int)presentationType;
-(void)passcodeLockViewPasscodeDidChange:(id)arg1 ;
-(void)passcodeLockViewPasscodeEntered:(id)arg1 ;
-(void)passcodeLockViewCancelButtonPressed:(id)arg1 ;
-(void)passcodeLockViewEmergencyCallButtonPressed:(id)arg1 ;
-(void)passcodeLockViewPasscodeEnteredViaMesa:(id)arg1 ;
@end

