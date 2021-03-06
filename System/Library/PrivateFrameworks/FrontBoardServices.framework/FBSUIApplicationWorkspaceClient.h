/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:48 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FBSWorkspaceClient.h>

@interface FBSUIApplicationWorkspaceClient : FBSWorkspaceClient

@property (nonatomic,readonly) id<FBSUIApplicationWorkspaceClientDelegate> delegate; 
-(char)_queue_handleMessageWithType:(int)arg1 message:(id)arg2 ;
-(void)_queue_handleLaunch:(id)arg1 ;
-(void)_queue_handleExit:(id)arg1 ;
-(void)_queue_handleAssertionExpirationImminent:(id)arg1 ;
-(char)willObserveLayersManually;
@end

