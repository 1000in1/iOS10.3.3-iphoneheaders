/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:49 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreData/CoreData-Structs.h>
@interface _PFTask : NSObject {

	int _cd_rc;
	void* _task;
	void* arguments;
	opaque_pthread_mutex_t lock;
	opaque_pthread_cond_t condition;
	int isFinishedFlag;

}
+(int)getNumActiveProcessors;
+(double)getProcessorSpeed;
+(unsigned long long)getPhysicalMemory;
-(id)initWithFunction:(/*function pointer*/void*)arg1 withArgument:(void*)arg2 andPriority:(int)arg3 ;
-(oneway void)release;
-(void)dealloc;
-(id)retain;
-(unsigned)retainCount;
-(char)_isDeallocating;
-(char)_tryRetain;
-(void)finalize;
@end

