/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:26 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBRemoteAlert <NSObject>
@property (nonatomic,__weak,readonly) id<SBRemoteAlertDelegate> remoteAlertDelegate; 
@required
+(void)requestWithDefinition:(id)arg1 context:(id)arg2 delegate:(id)arg3 completion:(/*^block*/id)arg4;
-(id<SBRemoteAlertDelegate>)remoteAlertDelegate;

@end

