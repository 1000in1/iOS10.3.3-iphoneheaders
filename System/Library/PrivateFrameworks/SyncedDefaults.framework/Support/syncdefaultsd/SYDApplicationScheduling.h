/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:47 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SyncedDefaults.framework/Support/syncdefaultsd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <syncdefaultsd/syncdefaultsd-Structs.h>
@class SYDApplication, SYDSchedulingParameters;

@interface SYDApplicationScheduling : NSObject {

	SYDApplication* app;
	SYDSchedulingParameters* parameters;
	int nextSyncReason;
	int currentSyncReason;
	unsigned currentSyncIdentifier;
	double delayedSyncDate;
	unsigned entriesSize;
	SCD_Struct_SY2* entries;
	char disableUntilNextLaunch;
	char developmentApp;
	double lastLaunch;

}

@property (assign,nonatomic) char developmentApp; 
@property (nonatomic,retain) SYDSchedulingParameters * parameters; 
@property (nonatomic,readonly) int nextSyncReason; 
+(id)descriptionForReason:(int)arg1 ;
-(void)setDevelopmentApp:(char)arg1 ;
-(id)initWithApplication:(id)arg1 persistentState:(id)arg2 ;
-(void)disableUntilNextLaunch;
-(void)disableSyncUntil:(double)arg1 ;
-(int)nextSyncReason;
-(id)persistentState;
-(id)schedulingDescription;
-(char)requestSyncSoonForReason:(int)arg1 now:(double)arg2 ;
-(double)nextRefreshDateUsingNow:(double)arg1 ;
-(void)didFinishSyncWithIdentifier:(unsigned)arg1 success:(char)arg2 now:(double)arg3 ;
-(void)willStartSyncWithIdentifier:(unsigned)arg1 ;
-(char)isDisabledUntilNextLaunch;
-(void)resetUpdateRequests;
-(void)_resizeEntriesWithUpdatedParametersIfNecessary;
-(void)_markEntriesAsIncorrect;
-(double)_nextRefreshDateForReason:(int)arg1 usingNow:(double)arg2 ;
-(char)developmentApp;
-(void)dealloc;
-(SYDSchedulingParameters *)parameters;
-(void)setParameters:(SYDSchedulingParameters *)arg1 ;
@end

