/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:31 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Setup/SetupChoiceController.h>

@class PSKeychainSyncManager, NSTimer, SetupChoice;

@interface BuddyAppleIDKeychainSyncPage : SetupChoiceController {

	PSKeychainSyncManager* _manager;
	char _brokenMode;
	NSTimer* _initializationTimeoutTimer;
	char _circleExists;
	char _isBackupEnabled;
	char _restoreFlow;
	SetupChoice* _enableChoice;
	SetupChoice* _disableChoice;
	SetupChoice* _otherDeviceChoice;
	SetupChoice* _securityCodeChoice;
	/*^block*/id _extendedInitializationCompletion;

}

@property (nonatomic,retain) SetupChoice * enableChoice;                     //@synthesize enableChoice=_enableChoice - In the implementation block
@property (nonatomic,retain) SetupChoice * disableChoice;                    //@synthesize disableChoice=_disableChoice - In the implementation block
@property (nonatomic,retain) SetupChoice * otherDeviceChoice;                //@synthesize otherDeviceChoice=_otherDeviceChoice - In the implementation block
@property (nonatomic,retain) SetupChoice * securityCodeChoice;               //@synthesize securityCodeChoice=_securityCodeChoice - In the implementation block
@property (nonatomic,copy) id extendedInitializationCompletion;              //@synthesize extendedInitializationCompletion=_extendedInitializationCompletion - In the implementation block
@property (assign,nonatomic) char restoreFlow;                               //@synthesize restoreFlow=_restoreFlow - In the implementation block
+(char)controllerNeedsToRun;
-(char)controllerAllowsNavigatingBack;
-(void)performExtendedInitializationWithCompletion:(/*^block*/id)arg1 ;
-(char)wantsNextButton;
-(id)footerDetailText;
-(char)useTableLayout;
-(id)footerIconName;
-(id)learnMoreButtonText;
-(void)setEnableChoice:(SetupChoice *)arg1 ;
-(void)setDisableChoice:(SetupChoice *)arg1 ;
-(SetupChoice *)enableChoice;
-(SetupChoice *)disableChoice;
-(void)_setBrokenMode:(char)arg1 ;
-(id)extendedInitializationCompletion;
-(void)setExtendedInitializationCompletion:(id)arg1 ;
-(void)loadOptions;
-(void)initializationTimeoutTimerFired:(id)arg1 ;
-(void)loadSecureBackupState;
-(void)setSecurityCodeChoice:(SetupChoice *)arg1 ;
-(void)setOtherDeviceChoice:(SetupChoice *)arg1 ;
-(void)_controllerDone;
-(void)_startEnableFlow;
-(SetupChoice *)otherDeviceChoice;
-(void)_showPeerApprovalAcknowledgement;
-(SetupChoice *)securityCodeChoice;
-(char)restoreFlow;
-(void)setRestoreFlow:(char)arg1 ;
-(id)init;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(int)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(int)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(id)titleText;
-(void)controllerDone;
-(void)reloadOptions;
-(void)learnMoreButtonTapped:(id)arg1 ;
@end

