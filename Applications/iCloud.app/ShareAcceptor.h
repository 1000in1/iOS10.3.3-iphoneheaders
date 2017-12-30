/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:50 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/iCloud.app/iCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iCloud/RetrievingDialogDelegate.h>

@class NSURL, RetrievingDialog, CKShareMetadata, NSString, NSArray, NSDictionary, CKShareParticipant, NSPersonNameComponents, CKContainer, NSXPCConnection, NSError;

@interface ShareAcceptor : NSObject <RetrievingDialogDelegate> {

	char _hasValidConnection;
	char _accepting;
	char _cancelled;
	unsigned _backgroundTaskID;
	NSURL* _url;
	RetrievingDialog* _retrievingDialog;
	CKShareMetadata* _shareMetadata;
	NSString* _shareName;
	NSArray* _whitelistedAppBundleIDs;
	NSArray* _whitelistedDaemonBundleIDs;
	NSDictionary* _localBundleIDsToDisplayNames;
	NSString* _chosenAppBundleID;
	CKShareParticipant* _singleOONMatch;
	NSPersonNameComponents* _currentUserNameComponents;
	NSString* _currentUserEmail;
	CKContainer* _clouddContainer;
	CKContainer* _metadataIndicatedContainer;
	NSXPCConnection* _xpcConnection;
	int _state;
	NSError* _fallbackFlowCause;
	NSString* _webFlowReason;

}

@property (nonatomic,retain,readonly) RetrievingDialog * retrievingDialog;                  //@synthesize retrievingDialog=_retrievingDialog - In the implementation block
@property (nonatomic,copy) CKShareMetadata * shareMetadata;                                 //@synthesize shareMetadata=_shareMetadata - In the implementation block
@property (nonatomic,copy) NSString * shareName;                                            //@synthesize shareName=_shareName - In the implementation block
@property (nonatomic,copy) NSArray * whitelistedAppBundleIDs;                               //@synthesize whitelistedAppBundleIDs=_whitelistedAppBundleIDs - In the implementation block
@property (nonatomic,copy) NSArray * whitelistedDaemonBundleIDs;                            //@synthesize whitelistedDaemonBundleIDs=_whitelistedDaemonBundleIDs - In the implementation block
@property (nonatomic,copy) NSDictionary * localBundleIDsToDisplayNames;                     //@synthesize localBundleIDsToDisplayNames=_localBundleIDsToDisplayNames - In the implementation block
@property (nonatomic,copy) NSString * chosenAppBundleID;                                    //@synthesize chosenAppBundleID=_chosenAppBundleID - In the implementation block
@property (nonatomic,copy) CKShareParticipant * singleOONMatch;                             //@synthesize singleOONMatch=_singleOONMatch - In the implementation block
@property (nonatomic,copy) NSPersonNameComponents * currentUserNameComponents;              //@synthesize currentUserNameComponents=_currentUserNameComponents - In the implementation block
@property (nonatomic,copy) NSString * currentUserEmail;                                     //@synthesize currentUserEmail=_currentUserEmail - In the implementation block
@property (nonatomic,retain) CKContainer * clouddContainer;                                 //@synthesize clouddContainer=_clouddContainer - In the implementation block
@property (nonatomic,retain) CKContainer * metadataIndicatedContainer;                      //@synthesize metadataIndicatedContainer=_metadataIndicatedContainer - In the implementation block
@property (nonatomic,retain) NSXPCConnection * xpcConnection;                               //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (assign,nonatomic) char hasValidConnection;                                       //@synthesize hasValidConnection=_hasValidConnection - In the implementation block
@property (assign,nonatomic) char accepting;                                                //@synthesize accepting=_accepting - In the implementation block
@property (assign) char cancelled;                                                          //@synthesize cancelled=_cancelled - In the implementation block
@property (assign,setter=setState:,nonatomic) int state;                                    //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSError * fallbackFlowCause;                                   //@synthesize fallbackFlowCause=_fallbackFlowCause - In the implementation block
@property (nonatomic,retain) NSString * webFlowReason;                                      //@synthesize webFlowReason=_webFlowReason - In the implementation block
@property (assign,nonatomic) unsigned backgroundTaskID;                                     //@synthesize backgroundTaskID=_backgroundTaskID - In the implementation block
@property (nonatomic,copy) NSURL * url;                                                     //@synthesize url=_url - In the implementation block
-(unsigned)backgroundTaskID;
-(void)setBackgroundTaskID:(unsigned)arg1 ;
-(void)retrievingDialogCancelled;
-(char)retrievingDialogShouldDisplay;
-(id)initWithCloudKitURL:(id)arg1 ;
-(char)shouldShowRetrievingDialogForState:(int)arg1 ;
-(RetrievingDialog *)retrievingDialog;
-(NSError *)fallbackFlowCause;
-(char)_shouldSendURLToBladeRunner:(id)arg1 ;
-(void)setWebFlowReason:(NSString *)arg1 ;
-(NSString *)webFlowReason;
-(char)_promptToOpenAppStoreLink:(id*)arg1 alertOptions:(id)arg2 appURL:(id)arg3 ;
-(NSArray *)whitelistedAppBundleIDs;
-(id)_findStoreDataForBundleIDs:(id)arg1 error:(id*)arg2 ;
-(id)_iosHandleMultipleAppStoreCandidates:(id)arg1 error:(id*)arg2 ;
-(NSString *)shareName;
-(NSString *)chosenAppBundleID;
-(NSDictionary *)localBundleIDsToDisplayNames;
-(char)_checkDataclass:(id)arg1 withContainer:(id)arg2 error:(id*)arg3 ;
-(CKContainer *)metadataIndicatedContainer;
-(void)setFallbackFlowCause:(NSError *)arg1 ;
-(void)setLocalBundleIDsToDisplayNames:(NSDictionary *)arg1 ;
-(void)setClouddContainer:(CKContainer *)arg1 ;
-(CKContainer *)clouddContainer;
-(void)setCurrentUserNameComponents:(NSPersonNameComponents *)arg1 ;
-(void)setCurrentUserEmail:(NSString *)arg1 ;
-(void)setChosenAppBundleID:(NSString *)arg1 ;
-(NSPersonNameComponents *)currentUserNameComponents;
-(id)_fetchCurrentUserNameComponents;
-(NSString *)currentUserEmail;
-(void)setShareName:(NSString *)arg1 ;
-(void)_extractEmailAddressesFromProperties:(id)arg1 into:(id)arg2 ;
-(id)_iosShowVettingAlert;
-(id)_trySelectingOONParticipant;
-(void)setSingleOONMatch:(CKShareParticipant *)arg1 ;
-(CKShareParticipant *)singleOONMatch;
-(void)_initiateVettingForParticipantID:(id)arg1 address:(id)arg2 andThen:(/*^block*/id)arg3 ;
-(id)_showVettingAlert;
-(id)_deduplicateBundleToNamesMapping:(id)arg1 ;
-(id)_iosShowAppSelectionDialogWithTitlesDictionary:(id)arg1 ;
-(char)_shouldShowICloudLoginPrompt:(id)arg1 ;
-(char)_urlIsALegacyiWorkShareURL:(id)arg1 ;
-(char)_urlIsAniWorkShareURL:(id)arg1 ;
-(char)_urlHasALongToken:(id)arg1 ;
-(void)setWhitelistedDaemonBundleIDs:(NSArray *)arg1 ;
-(void)setWhitelistedAppBundleIDs:(NSArray *)arg1 ;
-(NSArray *)whitelistedDaemonBundleIDs;
-(char)_handleAppleInternalDaemon:(id)arg1 response:(id)arg2 error:(id*)arg3 ;
-(char)shareNeedsAcceptance;
-(id)promptForSingleBundleID;
-(id)chooseFromMultipleBundleIDs;
-(int)initiateVetting;
-(char)_validateShareURL:(id*)arg1 ;
-(char)_notifyBladeRunner:(id*)arg1 ;
-(char)_fetchMetadata:(id*)arg1 ;
-(char)_getShareName;
-(char)_lookUpWhitelistedBundleIDs:(id*)arg1 ;
-(char)_handlePotentialAppleInternalDaemon:(id*)arg1 ;
-(int)_lookUpLocalBundleIDs:(id*)arg1 success:(char*)arg2 ;
-(int)_handlePotentialOONMatches;
-(int)_checkICloudDriveEnabled:(id*)arg1 appCandidatesPresent:(char)arg2 ;
-(char)_checkNotesDataclass:(id*)arg1 ;
-(char)_promptAppSelection:(id*)arg1 ;
-(char)_verifySelectedApp:(id*)arg1 ;
-(char)_launchApp:(id*)arg1 ;
-(char)_initiateVettingOfSingleOONMatch:(id*)arg1 ;
-(char)_requestSelectionFromMultipleOONMatches:(id*)arg1 ;
-(char)_fallbackFlowWarnShareUnavailable:(id*)arg1 ;
-(char)_fallbackFlowWarnNetworkUnavailable:(id*)arg1 ;
-(char)_fallbackFlowWarnServiceUnavailable:(id*)arg1 ;
-(int)_fallbackFlowICloudAccountSettings:(id*)arg1 success:(char*)arg2 ;
-(char)_fallbackFlowWebRedirect:(id*)arg1 ;
-(char)_fallbackFlowDownloadApp:(id*)arg1 ;
-(char)_fallbackFlowDownloadAppUpdate:(id*)arg1 ;
-(id)initWithShareMetadata:(id)arg1 shareURL:(id)arg2 ;
-(void)acceptShareWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setMetadataIndicatedContainer:(CKContainer *)arg1 ;
-(char)accepting;
-(id)fetchMetadata;
-(int)state;
-(void)setState:(int)arg1 ;
-(CKShareMetadata *)shareMetadata;
-(NSURL *)url;
-(char)cancelled;
-(void)setCancelled:(char)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(void)_cancel;
-(char)hasValidConnection;
-(void)setHasValidConnection:(char)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(void)setAccepting:(char)arg1 ;
-(void)setShareMetadata:(CKShareMetadata *)arg1 ;
-(char)makeStateTransition:(id*)arg1 ;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
@end

