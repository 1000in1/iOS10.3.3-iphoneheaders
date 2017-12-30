/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:17 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/appstored.bundle/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AgentProgress, NSProgress;

@interface LoadingProgressCoordinator : NSObject {

	AgentProgress* _agentProgress;
	NSProgress* _proxyProgress;

}
-(id)initWithProgress:(id)arg1 forBundleID:(id)arg2 ;
-(void)cancel;
-(void)dealloc;
-(void)activate;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)pause;
-(void)finish;
-(void)fail;
-(void)wait;
@end

