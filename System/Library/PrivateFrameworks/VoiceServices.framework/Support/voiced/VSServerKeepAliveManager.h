/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:55 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/voiced
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet;

@interface VSServerKeepAliveManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableSet* _activeKeepAlives;

}
-(char)hasActiveKeepAlives;
-(void)maintainKeepAlive:(id)arg1 ;
-(void)cancelKeepAlive:(id)arg1 ;
-(id)init;
@end

