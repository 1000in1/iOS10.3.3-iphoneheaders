/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:28:59 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/ActiveSyncSettings.bundle/ActiveSyncSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataAccessUI/DASettingsDataclassConfigurationViewController.h>
#import <libobjc.A.dylib/DAOofResponseDelegate.h>

@class UIView, PSSpecifier, NSMutableArray, DAOofSettingsInfo, DAOofParams, DAEASOAuthWebViewController, NSNumber;

@interface ASSettingsDataclassConfigurationViewController : DASettingsDataclassConfigurationViewController <DAOofResponseDelegate> {

	char _outOfOfficeEnabled;
	UIView* _originalAccessoryView;
	PSSpecifier* _outOfOfficeSpecifier;
	NSMutableArray* _reauthSpecifiers;
	DAOofSettingsInfo* _DASettingsInfo;
	DAOofParams* _serverOutOfOfficeInformation;
	unsigned _numberOfRetriedFetchingOutOfOfficeCounter;
	DAEASOAuthWebViewController* _webAuthController;
	/*^block*/id _completion;
	NSNumber* _isOofSupported;

}

@property (nonatomic,retain) UIView * originalAccessoryView;                                  //@synthesize originalAccessoryView=_originalAccessoryView - In the implementation block
@property (nonatomic,retain) PSSpecifier * outOfOfficeSpecifier;                              //@synthesize outOfOfficeSpecifier=_outOfOfficeSpecifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * reauthSpecifiers;                               //@synthesize reauthSpecifiers=_reauthSpecifiers - In the implementation block
@property (nonatomic,retain) DAOofSettingsInfo * DASettingsInfo;                              //@synthesize DASettingsInfo=_DASettingsInfo - In the implementation block
@property (nonatomic,retain) DAOofParams * serverOutOfOfficeInformation;                      //@synthesize serverOutOfOfficeInformation=_serverOutOfOfficeInformation - In the implementation block
@property (assign,nonatomic) char outOfOfficeEnabled;                                         //@synthesize outOfOfficeEnabled=_outOfOfficeEnabled - In the implementation block
@property (assign,nonatomic) unsigned numberOfRetriedFetchingOutOfOfficeCounter;              //@synthesize numberOfRetriedFetchingOutOfOfficeCounter=_numberOfRetriedFetchingOutOfOfficeCounter - In the implementation block
@property (nonatomic,retain) DAEASOAuthWebViewController * webAuthController;                 //@synthesize webAuthController=_webAuthController - In the implementation block
@property (nonatomic,copy) id completion;                                                     //@synthesize completion=_completion - In the implementation block
@property (nonatomic,retain) NSNumber * isOofSupported;                                       //@synthesize isOofSupported=_isOofSupported - In the implementation block
+(char)isHotmailAccount;
-(void)viewWillAppear:(char)arg1 ;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(void)handleURL:(id)arg1 ;
-(id)otherSpecifiers;
-(Class)accountInfoControllerClass;
-(void)dataclassSwitchStateDidChange:(id)arg1 withSpecifier:(id)arg2 ;
-(NSNumber *)isOofSupported;
-(UIView *)originalAccessoryView;
-(void)setOriginalAccessoryView:(UIView *)arg1 ;
-(DAEASOAuthWebViewController *)webAuthController;
-(void)setWebAuthController:(DAEASOAuthWebViewController *)arg1 ;
-(id)_reAuthenticationSectionSpecifiers;
-(void)_reAuthenticationButtonTapped;
-(void)reloadAccount;
-(void)setAccountIntegerProperty:(id)arg1 withSpecifier:(id)arg2 ;
-(id)accountIntegerPropertyWithSpecifier:(id)arg1 ;
-(void)setIsOofSupported:(NSNumber *)arg1 ;
-(void)fetchingOutOfOfficeState;
-(void)removeOutOfOfficeSpecifier;
-(void)saveOutOfOfficeData:(id)arg1 ;
-(id)outOfOfficeEnabled:(id)arg1 ;
-(void)setOutOfOfficeSpecifier:(PSSpecifier *)arg1 ;
-(PSSpecifier *)outOfOfficeSpecifier;
-(void)_purgeDownloadedMailForAccount;
-(DAOofParams *)serverOutOfOfficeInformation;
-(void)setOutOfOfficeEnabled:(char)arg1 ;
-(unsigned)numberOfRetriedFetchingOutOfOfficeCounter;
-(void)setNumberOfRetriedFetchingOutOfOfficeCounter:(unsigned)arg1 ;
-(void)setServerOutOfOfficeInformation:(DAOofParams *)arg1 ;
-(void)updateOutOfOfficeSpecifier;
-(void)setDASettingsInfo:(DAOofSettingsInfo *)arg1 ;
-(DAOofSettingsInfo *)DASettingsInfo;
-(char)outOfOfficeEnabled;
-(void)oofRequestInfo:(id)arg1 finishedWithResult:(id)arg2 error:(id)arg3 ;
-(id)accountDescriptionForFirstTimeSetup;
-(id)numFoldersToPushString:(id)arg1 ;
-(NSMutableArray *)reauthSpecifiers;
-(void)setReauthSpecifiers:(NSMutableArray *)arg1 ;
-(id)specifiers;
@end

