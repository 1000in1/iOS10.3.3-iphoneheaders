/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:09 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Support/mediaremoted
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <mediaremoted/mediaremoted-Structs.h>
@class NSObject, NSMapTable, NSMutableDictionary;

@interface MRDNowPlayingInfoServer : NSObject {

	NSObject*<OS_dispatch_queue> _serialQueue;
	NSMapTable* _nowPlayingInfoClientsForCustomOrigins;
	NSMutableDictionary* _nowPlayingInfoClientsForPIDs;

}
-(id)activeNowPlayingInfoClient;
-(id)allLocalNowPlayingInfoClients;
-(id)existingLocalNowPlayingInfoClientForPID:(int)arg1 ;
-(id)existingCustomOriginNowPlayingInfoClientForOrigin:(MROriginRef)arg1 ;
-(id)existingNowPlayingInfoClientForOrigin:(MROriginRef)arg1 pid:(int)arg2 ;
-(id)localNowPlayingInfoClientForPID:(int)arg1 ;
-(id)customOriginNowPlayingInfoClientForOrigin:(MROriginRef)arg1 ;
-(void)removeLocalNowPlayingInfoClientForPID:(int)arg1 ;
-(void)removeCustomOriginNowPlayingInfoClientForOrigin:(MROriginRef)arg1 ;
-(void)_notifyNewNowPlayingClientRegistered;
-(id)nowPlayingInfoClientForOrigin:(MROriginRef)arg1 pid:(int)arg2 ;
-(id)existingNowPlayingInfoClientForOrigin:(MROriginRef)arg1 displayID:(id)arg2 ;
-(void)removeNowPlayingInfoClientForOrigin:(MROriginRef)arg1 pid:(int)arg2 ;
-(void)handleNowPlayingInfoUpdate:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end

