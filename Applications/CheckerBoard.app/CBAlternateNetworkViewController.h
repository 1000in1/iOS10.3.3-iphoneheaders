/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:51 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/CheckerBoard.app/CheckerBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class NSArray, NSString, NSNumber, UITextField, PSEditableTableCell, NSTimer;

@interface CBAlternateNetworkViewController : PSListController {

	char _otherNetworkViewActive;
	char _joining;
	NSArray* _hiddenNetworkWithNoPasswordGroup;
	NSArray* _hiddenNetworkWithPasswordGroup;
	NSArray* _currentSecurityGroup;
	NSString* _networkName;
	NSNumber* _networkSecurityType;
	NSString* _networkPassword;
	UITextField* _currentlyActiveTextField;
	PSEditableTableCell* _networkNameCell;
	PSEditableTableCell* _passwordCell;
	int _indexToSelect;
	unsigned _retryJoinAttemptCount;
	NSTimer* _joinTimer;

}

@property (assign,nonatomic) char otherNetworkViewActive;                             //@synthesize otherNetworkViewActive=_otherNetworkViewActive - In the implementation block
@property (nonatomic,retain) NSArray * hiddenNetworkWithNoPasswordGroup;              //@synthesize hiddenNetworkWithNoPasswordGroup=_hiddenNetworkWithNoPasswordGroup - In the implementation block
@property (nonatomic,retain) NSArray * hiddenNetworkWithPasswordGroup;                //@synthesize hiddenNetworkWithPasswordGroup=_hiddenNetworkWithPasswordGroup - In the implementation block
@property (nonatomic,retain) NSArray * currentSecurityGroup;                          //@synthesize currentSecurityGroup=_currentSecurityGroup - In the implementation block
@property (nonatomic,retain) NSString * networkName;                                  //@synthesize networkName=_networkName - In the implementation block
@property (nonatomic,retain) NSNumber * networkSecurityType;                          //@synthesize networkSecurityType=_networkSecurityType - In the implementation block
@property (nonatomic,retain) NSString * networkPassword;                              //@synthesize networkPassword=_networkPassword - In the implementation block
@property (nonatomic,retain) UITextField * currentlyActiveTextField;                  //@synthesize currentlyActiveTextField=_currentlyActiveTextField - In the implementation block
@property (nonatomic,retain) PSEditableTableCell * networkNameCell;                   //@synthesize networkNameCell=_networkNameCell - In the implementation block
@property (nonatomic,retain) PSEditableTableCell * passwordCell;                      //@synthesize passwordCell=_passwordCell - In the implementation block
@property (assign,nonatomic) int indexToSelect;                                       //@synthesize indexToSelect=_indexToSelect - In the implementation block
@property (assign,nonatomic) char joining;                                            //@synthesize joining=_joining - In the implementation block
@property (assign,nonatomic) unsigned retryJoinAttemptCount;                          //@synthesize retryJoinAttemptCount=_retryJoinAttemptCount - In the implementation block
@property (nonatomic,retain) NSTimer * joinTimer;                                     //@synthesize joinTimer=_joinTimer - In the implementation block
-(void)_deregisterNotifications;
-(id)initWithNetworkInfo:(id)arg1 ;
-(void)_setupNavBar;
-(char)otherNetworkViewActive;
-(void)joinTapped:(id)arg1 ;
-(void)_enableRightBarButtonItem:(char)arg1 ;
-(void)setIndexToSelect:(int)arg1 ;
-(int)indexToSelect;
-(PSEditableTableCell *)networkNameCell;
-(void)setCurrentlyActiveTextField:(UITextField *)arg1 ;
-(PSEditableTableCell *)passwordCell;
-(void)_keyboardWillPresent:(id)arg1 ;
-(void)_returnKeyTapped:(id)arg1 ;
-(void)_handleAssociationEvent:(id)arg1 ;
-(NSTimer *)joinTimer;
-(void)setJoinTimer:(NSTimer *)arg1 ;
-(UITextField *)currentlyActiveTextField;
-(NSNumber *)networkSecurityType;
-(char)joining;
-(void)setJoining:(char)arg1 ;
-(void)_enableUI:(char)arg1 ;
-(void)_checkoutAndPostAssociationCompletedNotificationWithError:(int)arg1 ;
-(void)_presentFailedAssociationAlertWithTitle:(id)arg1 message:(id)arg2 ;
-(void)_networkJoinRetryTimerFired:(id)arg1 ;
-(unsigned)retryJoinAttemptCount;
-(void)setRetryJoinAttemptCount:(unsigned)arg1 ;
-(void)_joinTapped;
-(id)_securitySpecifier;
-(void)setHiddenNetworkWithNoPasswordGroup:(NSArray *)arg1 ;
-(void)setHiddenNetworkWithPasswordGroup:(NSArray *)arg1 ;
-(NSArray *)hiddenNetworkWithNoPasswordGroup;
-(void)setCurrentSecurityGroup:(NSArray *)arg1 ;
-(id)_networkNameSpecifier;
-(id)_groupSeparatorSpecifier;
-(NSArray *)currentSecurityGroup;
-(void)setNetworkSecurityType:(NSNumber *)arg1 ;
-(NSArray *)hiddenNetworkWithPasswordGroup;
-(void)setNetworkNameCell:(PSEditableTableCell *)arg1 ;
-(void)setPasswordCell:(PSEditableTableCell *)arg1 ;
-(void)_enableLeftBarButtonItem:(char)arg1 ;
-(char)_canAttemptJoin;
-(char)_passwordIsValid;
-(char)_networkNameIsValid;
-(void)setOtherNetworkViewActive:(char)arg1 ;
-(NSString *)networkName;
-(void)setNetworkName:(NSString *)arg1 ;
-(void)dealloc;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)setName:(id)arg1 ;
-(id)name;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidLoad;
-(void)_cleanUp;
-(void)setSecurityType:(id)arg1 ;
-(id)securityType;
-(void)cancelTapped:(id)arg1 ;
-(void)textFieldDidChange:(id)arg1 ;
-(void)_registerForNotifications;
-(void)_updateReturnKey;
-(void)_setReturnKeyEnabled:(char)arg1 ;
-(id)_passwordSpecifier;
-(id)password;
-(void)setPassword:(id)arg1 ;
-(void)returnPressedAtEnd;
-(void)setNetworkPassword:(NSString *)arg1 ;
-(NSString *)networkPassword;
-(id)specifiers;
@end

