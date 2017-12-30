/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:55 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/voiced
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <voiced/voiced-Structs.h>
#import <libobjc.A.dylib/VSRemoteKeepAlive.h>

@protocol OS_os_transaction;
@class VSServerKeepAliveManager, NSObject, NSString;

@interface VSKeepAliveClient : NSObject <VSRemoteKeepAlive> {

	VSServerKeepAliveManager* _manager;
	char _isActive;
	long _activity;
	char _keepSessionActive;
	NSObject*<OS_os_transaction> _transaction;
	CFRunLoopSourceRef _registryRunLoopSource;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)_shouldChangeAudioSession;
-(oneway void)cancel;
-(void)dealloc;
-(oneway void)maintainWithAudioType:(int)arg1 keepAudioSessionActive:(char)arg2 ;
-(void)setManager:(id)arg1 ;
@end

