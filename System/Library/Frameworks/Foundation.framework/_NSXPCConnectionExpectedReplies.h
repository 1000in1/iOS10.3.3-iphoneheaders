/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:45 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_group;
#import <Foundation/Foundation-Structs.h>
@class NSObject;

@interface _NSXPCConnectionExpectedReplies : NSObject {

	CFDictionaryRef _replyTable;
	int _lock;
	unsigned long long _sequence;
	NSObject*<OS_dispatch_group> _replyGroup;

}
-(void)removeSequence:(unsigned long long)arg1 ;
-(unsigned long long)sequenceWithProgress:(id)arg1 ;
-(void)incrementOutstandingReplyCount;
-(void)decrementOutstandingReplyCount;
-(id)progressForSequence:(unsigned long long)arg1 ;
-(void)addReplyCompletionBlockOnQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)init;
-(void)dealloc;
@end

