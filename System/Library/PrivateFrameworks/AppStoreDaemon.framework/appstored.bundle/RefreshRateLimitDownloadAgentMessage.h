/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:15 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/appstored.bundle/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/DownloadAgentMessage.h>

@interface RefreshRateLimitDownloadAgentMessage : DownloadAgentMessage {

	int _rateLimit;

}

@property (nonatomic,readonly) int rateLimit;              //@synthesize rateLimit=_rateLimit - In the implementation block
+(id)forAgent:(id)arg1 ;
+(id)forPID:(long long)arg1 supervisor:(id)arg2 ;
-(id)__apply__rateLimit:(int)arg1 ;
-(int)rateLimit;
@end

