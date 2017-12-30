/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:20 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/PairedSync.framework/Support/pairedsyncd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <pairedsyncd/PSDSchedulerObserver.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, PSDSchedulerAWDSessionState, NSObject, NSString;

@interface PSDSchedulerAWDLogger : NSObject <NSSecureCoding, PSDSchedulerObserver> {

	NSMutableDictionary* _cumulativeStatisticsCollections;
	NSMutableDictionary* _segmentStartingStatisticsCollections;
	PSDSchedulerAWDSessionState* _sessionState;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) PSDSchedulerAWDSessionState * sessionState;              //@synthesize sessionState=_sessionState - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                      //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
+(id)defaultLogger;
-(void)scheduler:(id)arg1 willStartSyncSession:(id)arg2 ;
-(void)scheduler:(id)arg1 didUpdateSyncSessionWithUpdate:(id)arg2 ;
-(void)bookmarkCurrentStatistics:(id)arg1 ;
-(void)saveSessionState;
-(void)accumulateStatisticsForSegment:(id)arg1 ;
-(void)logAWDDurationsForSync;
-(void)clearSessionState;
-(id)AWDKeyForActivityIdentifier:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)initialize;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(PSDSchedulerAWDSessionState *)sessionState;
-(void)setSessionState:(PSDSchedulerAWDSessionState *)arg1 ;
@end

