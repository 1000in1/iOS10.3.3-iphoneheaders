/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:17 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/FindMyiPhone.app/FindMyiPhone
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FMCore/FMServerInteractionController.h>

@class NSMutableSet, NSString, NSTimer;

@interface ServerInteractionController : FMServerInteractionController {

	char needsSessionCreation;
	char sessionCreationInProgress;
	NSMutableSet* nonIgnoredErrorsSet;
	NSString* _mocku;
	NSString* _mockp;
	NSTimer* _sessionExpiryTimer;

}

@property (nonatomic,retain) NSTimer * sessionExpiryTimer;              //@synthesize sessionExpiryTimer=_sessionExpiryTimer - In the implementation block
@property (nonatomic,retain) NSString * mocku;                          //@synthesize mocku=_mocku - In the implementation block
@property (nonatomic,retain) NSString * mockp;                          //@synthesize mockp=_mockp - In the implementation block
-(void)cannotAcceptRequestFromYourself:(id)arg1 ;
-(void)modelIsOld:(id)arg1 ;
-(void)sendFMFCommand:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_processCommandResponse:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(int)_fmfServerErrorForCommand:(id)arg1 ;
-(void)_handleFMFServerErrorForCommand:(id)arg1 ;
-(void)_refreshAllDataFromServer;
-(NSTimer *)sessionExpiryTimer;
-(void)setSessionExpiryTimer:(NSTimer *)arg1 ;
-(void)_sessionExpiryTimerFired:(id)arg1 ;
-(void)userDeepLocateFriend:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)autoDeepLocateFriend:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(char)checkSessionExpiry;
-(void)startSessionExpiryTimer;
-(void)stopSessionExpiryTimer;
-(void)_resetSessionExpiryTimer:(double)arg1 ;
-(NSString *)mocku;
-(void)setMocku:(NSString *)arg1 ;
-(NSString *)mockp;
-(void)setMockp:(NSString *)arg1 ;
-(id)init;
-(void)dealloc;
-(void)networkActivityStatus:(char)arg1 ;
-(void)cancelAllCommands;
@end

