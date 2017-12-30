/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:39 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/DuetKnowledgeBase/Monitors/DuetKnowledgeMonitor.bundle/DuetKnowledgeMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DuetKnowledgeMonitor/_DKMonitor.h>
#import <libobjc.A.dylib/_DKNotificationReceiver.h>

@class NSString;

@interface _DKNotificationScreenLockMonitor : _DKMonitor <_DKNotificationReceiver> {

	char _enabled;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_eventWithState:(id)arg1 ;
+(char)shouldMergeUnchangedEvents;
+(id)eventStream;
+(void)setIsLocked:(char)arg1 ;
+(id)entitlements;
-(void)stop;
-(void)start;
-(void)synchronouslyReflectCurrentValue;
-(void)receiveNotificationEvent:(id)arg1 ;
@end

