/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:09 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Support/mediaremoted
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <mediaremoted/MRDNowPlayingInfoClient.h>

@interface MRDLocalNowPlayingInfoClient : MRDNowPlayingInfoClient {

	char _isSystemApp;
	char _systemAppFlagInitialized;
	int _pid;

}

@property (nonatomic,readonly) int pid;                       //@synthesize pid=_pid - In the implementation block
@property (nonatomic,readonly) char isSystemApp; 
-(id)initWithPID:(int)arg1 ;
-(id)description;
-(char)isSystemApp;
-(int)pid;
@end

