/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:38 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/DuetActivityScheduler/Scheduler/DuetActivitySchedulerDaemon.bundle/DuetActivitySchedulerDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DuetActivitySchedulerDaemon/_DASActivityPolicy.h>

@class NSString, NSArray;

@interface _DASCarPlayPolicy : NSObject <_DASActivityPolicy> {

	NSString* _policyName;
	NSArray* _triggers;

}

@property (nonatomic,copy) NSString * policyName;                   //@synthesize policyName=_policyName - In the implementation block
@property (nonatomic,retain) NSArray * triggers;                    //@synthesize triggers=_triggers - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)policyInstance;
-(void)setPolicyName:(NSString *)arg1 ;
-(double)weightForActivity:(id)arg1 ;
-(id)initializeTriggers;
-(char)indicatesDeterioratingConditionsForTrigger:(id)arg1 withState:(id)arg2 ;
-(char)appliesToActivity:(id)arg1 ;
-(NSString *)policyName;
-(id)responseForActivity:(id)arg1 withState:(id)arg2 ;
-(id)init;
-(NSArray *)triggers;
-(void)setTriggers:(NSArray *)arg1 ;
@end

