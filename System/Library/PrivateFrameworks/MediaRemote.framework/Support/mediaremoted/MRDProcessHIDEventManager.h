/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:09 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Support/mediaremoted
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <mediaremoted/mediaremoted-Structs.h>
#import <mediaremoted/MRDHIDEventManager.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface MRDProcessHIDEventManager : MRDHIDEventManager {

	NSObject*<OS_dispatch_queue> _serialQueue;
	NSString* _bundleID;
	int _processID;

}

@property (nonatomic,readonly) NSString * bundleID;              //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,readonly) int processID;                    //@synthesize processID=_processID - In the implementation block
-(void)dispatchHIDEvent:(IOHIDEventRef)arg1 ;
-(id)initWithBundleID:(id)arg1 processID:(int)arg2 ;
-(void)dealloc;
-(int)processID;
-(NSString *)bundleID;
@end

