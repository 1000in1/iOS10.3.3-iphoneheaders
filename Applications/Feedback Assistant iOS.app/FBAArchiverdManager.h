/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:01 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Feedback Assistant iOS.app/Feedback Assistant iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Feedback Assistant iOS/FBAArchiverdClientStateDelegate.h>

@class FBAArchiverdClient, NSMutableSet, NSMutableDictionary, NSTimer, NSString;

@interface FBAArchiverdManager : NSObject <FBAArchiverdClientStateDelegate> {

	FBAArchiverdClient* _client;
	NSMutableSet* _synchingPaths;
	NSMutableDictionary* _ackBlocks;
	NSTimer* _watchdogTimer;

}

@property (retain) FBAArchiverdClient * client;                     //@synthesize client=_client - In the implementation block
@property (retain) NSMutableSet * synchingPaths;                    //@synthesize synchingPaths=_synchingPaths - In the implementation block
@property (retain) NSMutableDictionary * ackBlocks;                 //@synthesize ackBlocks=_ackBlocks - In the implementation block
@property (retain) NSTimer * watchdogTimer;                         //@synthesize watchdogTimer=_watchdogTimer - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)testSharedInstance;
+(char)wasLaunchedByFeedbackarchiverd:(id)arg1 ;
+(id)sharedInstance;
-(void)updateFormResponsesForfinishedTarGzs:(id)arg1 enqueued:(id)arg2 workingTarGz:(id)arg3 ;
-(void)clientDidReceiveUnreachableUrl:(id)arg1 ;
-(void)clientDidReceiveFinishedArchive:(id)arg1 ack:(/*^block*/id)arg2 ;
-(void)clientDidReceiveJobAcknowledgement:(id)arg1 ;
-(void)didLaunchWithOptions:(id)arg1 ;
-(void)syncWithDaemon;
-(void)sendCompressingJob:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setSynchingPaths:(NSMutableSet *)arg1 ;
-(void)setAckBlocks:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)ackBlocks;
-(id)uploadTaskForSubmissionArchive:(id)arg1 ;
-(void)deleteTaskForBadUrl:(id)arg1 inContext:(id)arg2 ;
-(void)handleTaskReadyToUpload:(id)arg1 ;
-(void)handleStuckUploadTask:(id)arg1 ;
-(void)setWatchdogTimer:(NSTimer *)arg1 ;
-(void)didFinishWorkingOnPath:(id)arg1 ;
-(NSMutableSet *)synchingPaths;
-(void)finishBackgroundWork;
-(id)init;
-(void)commonInit;
-(FBAArchiverdClient *)client;
-(void)setClient:(FBAArchiverdClient *)arg1 ;
-(NSTimer *)watchdogTimer;
-(id)initWithClient:(id)arg1 ;
@end

