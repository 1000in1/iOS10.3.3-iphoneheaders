/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:40 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_tcp_listener;
#import <CFNetwork/CFNetwork-Structs.h>
@class NSMutableArray, NSObject;

@interface NSNetServicesInternal : NSObject {

	NSMutableArray* _monitors;
	NSObject*<OS_tcp_listener> _listener;
	CFRunLoopRef _scheduledRunLoop;
	CFStringRef _scheduledMode;

}

@property (retain) NSMutableArray * monitors;              //@synthesize monitors=_monitors - In the implementation block
-(void)copyScheduledRunLoop:(_CFRunLoop*)arg1 andMode:(const _CFString*)arg2 ;
-(void)setScheduledRunLoop:(CFRunLoopRef)arg1 andMode:(CFStringRef)arg2 ;
-(NSMutableArray *)monitors;
-(void)setMonitors:(NSMutableArray *)arg1 ;
-(void)dealloc;
-(id)listener;
-(void)setListener:(id)arg1 ;
-(void)finalize;
@end

