/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:16 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/appstored.bundle/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/DownloadAgentTransitionContext.h>

@class NSError, NSNumber;

@interface DownloadStateRestartingAgentTransitionContext : DownloadAgentTransitionContext {

	long long _assetPID;
	NSError* _error;
	NSNumber* _reason;

}
+(id)forAgentState:(id)arg1 ;
-(char)applyToEntity:(id)arg1 inTransaction:(id)arg2 ;
-(id)__apply__error:(id)arg1 retryAssetPID:(long long)arg2 ;
-(id)__apply__error:(id)arg1 blockAssetPID:(long long)arg2 withReason:(id)arg3 ;
@end

