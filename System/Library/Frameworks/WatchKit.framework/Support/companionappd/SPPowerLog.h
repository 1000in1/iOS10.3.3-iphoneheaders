/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 7:34:03 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/WatchKit.framework/Support/companionappd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface SPPowerLog : NSObject {

	NSMutableDictionary* _eventsByBundleID;
	NSObject*<OS_dispatch_source> _logUpdateTimer;
	NSObject*<OS_dispatch_queue> _logQueue;

}

@property (retain) NSMutableDictionary * eventsByBundleID;                              //@synthesize eventsByBundleID=_eventsByBundleID - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> logUpdateTimer;              //@synthesize logUpdateTimer=_logUpdateTimer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> logQueue;                     //@synthesize logQueue=_logQueue - In the implementation block
+(id)sharedInstance;
-(NSObject*<OS_dispatch_queue>)logQueue;
-(void)updatePowerLogs;
-(id)newEventFromEvent:(id)arg1 usingLogEvent:(id)arg2 ;
-(void)startLogUpdateTimer;
-(void)cancelLogUpdateTimer;
-(void)logEvent:(id)arg1 withName:(id)arg2 ;
-(NSMutableDictionary *)eventsByBundleID;
-(void)setEventsByBundleID:(NSMutableDictionary *)arg1 ;
-(NSObject*<OS_dispatch_source>)logUpdateTimer;
-(void)setLogUpdateTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setLogQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)init;
@end

