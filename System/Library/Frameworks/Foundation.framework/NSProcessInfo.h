/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:42 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@class NSDictionary, NSArray, NSString;

@interface NSProcessInfo : NSObject {

	NSDictionary* environment;
	NSArray* arguments;
	NSString* hostName;
	NSString* name;
	int automaticTerminationOptOutCounter;

}

@property (copy,readonly) NSString * userName; 
@property (copy,readonly) NSString * fullUserName; 
@property (copy,readonly) NSDictionary * environment; 
@property (copy,readonly) NSArray * arguments; 
@property (copy,readonly) NSString * hostName; 
@property (copy) NSString * processName; 
@property (readonly) int processIdentifier; 
@property (copy,readonly) NSString * globallyUniqueString; 
@property (copy,readonly) NSString * operatingSystemVersionString; 
@property (readonly) SCD_Struct_NS43 operatingSystemVersion; 
@property (readonly) unsigned processorCount; 
@property (readonly) unsigned activeProcessorCount; 
@property (readonly) unsigned long long physicalMemory; 
@property (readonly) double systemUptime; 
@property (assign) char automaticTerminationSupportEnabled; 
+(id)processInfo;
-(void)performExpiringActivityWithReason:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_registerForHardwareStateNotifications;
-(id)beginActivityWithOptions:(unsigned long long)arg1 reason:(id)arg2 ;
-(void)_reactivateActivity:(id)arg1 ;
-(void)endActivity:(id)arg1 ;
-(unsigned)operatingSystem;
-(void)setArguments:(NSArray *)arg1 ;
-(NSString *)hostName;
-(void)setProcessName:(NSString *)arg1 ;
-(NSString *)userName;
-(id)userFullName;
-(id)operatingSystemName;
-(NSString *)operatingSystemVersionString;
-(char)isOperatingSystemAtLeastVersion:(SCD_Struct_NS43)arg1 ;
-(unsigned long long)physicalMemory;
-(char)isTranslated;
-(void)disableSuddenTermination;
-(void)enableSuddenTermination;
-(void)_exitIfSuddenTerminationEnabledWithStatus:(int)arg1 ;
-(void)_exitWhenSuddenTerminationEnabledWithStatus:(int)arg1 ;
-(int)_suddenTerminationDisablingCount;
-(void)disableAutomaticTermination:(id)arg1 ;
-(void)enableAutomaticTermination:(id)arg1 ;
-(void)setAutomaticTerminationSupportEnabled:(char)arg1 ;
-(char)automaticTerminationSupportEnabled;
-(void)_disableAutomaticTerminationOnly:(id)arg1 ;
-(void)_enableAutomaticTerminationOnly:(id)arg1 ;
-(void)performActivityWithOptions:(unsigned long long)arg1 reason:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)beginSuspensionOfSystemBehaviors:(unsigned long long)arg1 reason:(id)arg2 ;
-(void)endSystemBehaviorSuspension:(id)arg1 ;
-(void)performActivityWithOptions:(unsigned long long)arg1 reason:(id)arg2 block:(/*^block*/id)arg3 ;
-(char)isLowPowerModeEnabled;
-(void)dealloc;
-(NSDictionary *)environment;
-(id)userHomeDirectory;
-(NSString *)processName;
-(double)systemUptime;
-(unsigned)processorCount;
-(int)processIdentifier;
-(SCD_Struct_NS43)operatingSystemVersion;
-(NSArray *)arguments;
-(unsigned)activeProcessorCount;
-(NSString *)globallyUniqueString;
@end

