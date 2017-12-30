/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:16 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/appstored.bundle/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/PlaceholderInstallAgentMessage.h>

@class NSError;

@interface CompletedPlaceholderInstallAgentMessage : PlaceholderInstallAgentMessage {

	char _result;
	NSError* _error;

}

@property (nonatomic,readonly) char result;                  //@synthesize result=_result - In the implementation block
@property (nonatomic,readonly) NSError * error;              //@synthesize error=_error - In the implementation block
+(id)forAgent:(id)arg1 ;
+(id)forPID:(long long)arg1 supervisor:(id)arg2 ;
-(id)__apply__result:(char)arg1 error:(id)arg2 ;
-(char)result;
-(NSError *)error;
@end

