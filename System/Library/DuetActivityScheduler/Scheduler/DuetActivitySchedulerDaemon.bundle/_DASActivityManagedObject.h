/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:38 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/DuetActivityScheduler/Scheduler/DuetActivitySchedulerDaemon.bundle/DuetActivitySchedulerDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSDate, NSData, _DASGroupManagedObject, NSSet;

@interface _DASActivityManagedObject : NSManagedObject

@property (assign,nonatomic) char beforeFirstActivityOfDay; 
@property (assign,nonatomic) char beforeUserIsActive; 
@property (assign,nonatomic) char budgeted; 
@property (nonatomic,retain) NSString * bundleID; 
@property (assign,nonatomic) char cancelAfterDeadline; 
@property (nonatomic,retain) NSDate * completedDate; 
@property (assign,nonatomic) char cpuIntensive; 
@property (assign,nonatomic) int currentState; 
@property (assign,nonatomic) char diskIntensive; 
@property (assign,nonatomic) unsigned long long duration; 
@property (nonatomic,retain) NSString * groupName; 
@property (assign,nonatomic) char isUpload; 
@property (nonatomic,retain) NSString * launchReason; 
@property (assign,nonatomic) char memoryIntensive; 
@property (nonatomic,retain) NSString * name; 
@property (assign,nonatomic) double predictedOptimalScore; 
@property (nonatomic,retain) NSDate * predictedOptimalStartDate; 
@property (nonatomic,retain) NSData * relatedApplications; 
@property (assign,nonatomic) long long relevancy; 
@property (assign,nonatomic) char requestsApplicationLaunch; 
@property (assign,nonatomic) char requiresDeviceInactivity; 
@property (assign,nonatomic) char requiresInexpensiveNetworking; 
@property (assign,nonatomic) char requiresNetwork; 
@property (assign,nonatomic) char requiresPlugin; 
@property (nonatomic,retain) NSData * schedulerRecommendedApplications; 
@property (assign,nonatomic) short schedulingPriority; 
@property (nonatomic,retain) NSDate * startAfter; 
@property (nonatomic,retain) NSDate * startBefore; 
@property (nonatomic,retain) NSDate * startDate; 
@property (nonatomic,retain) NSDate * submitDate; 
@property (assign,nonatomic) char supportsAnyApplication; 
@property (assign,nonatomic) char suspendable; 
@property (assign,nonatomic) short targetDevice; 
@property (assign,nonatomic) unsigned long long transferSize; 
@property (assign,nonatomic) char triggersRestart; 
@property (nonatomic,retain) NSData * userInfo; 
@property (nonatomic,retain) _DASGroupManagedObject * group; 
@property (nonatomic,retain) NSSet * triggers; 
@end

