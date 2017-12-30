/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:11 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/OTACrashCopier
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableString, NSArray, OTATaskingAgentClient, NSData;

@interface OTATask : NSObject {

	NSString* _selectedOS;
	NSMutableString* _taskDigest;
	NSArray* _verifiedTask;
	OTATaskingAgentClient* _taskingAgentClient;
	char _isValid;
	int _taskType;
	NSString* _taskId;
	NSData* _rawBlob;

}

@property (nonatomic,readonly) int taskType;                   //@synthesize taskType=_taskType - In the implementation block
@property (nonatomic,readonly) NSString * taskId;              //@synthesize taskId=_taskId - In the implementation block
@property (nonatomic,readonly) NSData * rawBlob;               //@synthesize rawBlob=_rawBlob - In the implementation block
@property (nonatomic,readonly) char isValid;                   //@synthesize isValid=_isValid - In the implementation block
+(id)descriptionForTaskType:(int)arg1 ;
+(id)taskIdForInstalledTaskOfType:(int)arg1 ;
+(char)_taskConfigStructureIsValid:(id)arg1 ;
+(id)getTaskPathForType:(int)arg1 ;
+(char)_uninstallTaskOfType:(int)arg1 ;
-(id)initWithBlobData:(id)arg1 taskId:(id)arg2 type:(int)arg3 withInfo:(id)arg4 ;
-(id)initWithTasking:(int)arg1 taskId:(id)arg2 withInfo:(id)arg3 ;
-(char)_matchSelector:(id)arg1 withValue:(id)arg2 ofConfig:(id)arg3 ;
-(id)_findFirstMatchingConfig:(id)arg1 withInfo:(id)arg2 ;
-(NSData *)rawBlob;
-(char)_taskPlistStructureIsValid:(id)arg1 withInfo:(id)arg2 ;
-(id)initTaskId:(id)arg1 type:(int)arg2 withInfo:(id)arg3 ;
-(char)_verifySignedBlobWithInfo:(id)arg1 ;
-(char)saveToPath:(id)arg1 ;
-(char)defer;
-(void)dealloc;
-(char)isValid;
-(NSString *)taskId;
-(int)taskType;
-(char)install;
@end

