/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:12 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/ReportCrash
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ReportCrash/ReportCrash-Structs.h>
#import <CrashReporterSupport/AppleErrorReport.h>
#import <DumpPanic/ConcreteReport.h>

@class NSString, NSMutableArray;

@interface JetsamReport : AppleErrorReport <ConcreteReport> {

	NSString* _largestProcess;
	NSString* _largestActiveApp;
	NSMutableArray* _killedActiveApps;
	unsigned long long _wiredBytes;
	unsigned _killed_or_suspended_count;
	char _isSuspendedOnlyJetsam;
	jetsam_snapshot* _snapshot;
	NSString* _event_reason;
	unsigned long long _event_code;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long)_daysSince1970;
-(id)initWithIncidentID:(id)arg1 ;
-(void)acquireJetsamData;
-(void)_getSnapshotWithFlags:(unsigned)arg1 ;
-(BOOL)alreadyDumpedSuspendedJetsamLogToday;
-(void)_setDumpedSuspendedJetsamLog;
-(id)reportNamePrefix;
-(id)appleCareDetails;
-(void)generateLogAtLevel:(char)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)problemType;
-(char)isActionable;
@end

