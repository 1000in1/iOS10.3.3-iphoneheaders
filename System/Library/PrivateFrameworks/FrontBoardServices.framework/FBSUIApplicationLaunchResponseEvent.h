/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:48 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FBSWorkspaceEvent.h>

@class FBSUIApplicationLaunchResponse;

@interface FBSUIApplicationLaunchResponseEvent : FBSWorkspaceEvent {

	FBSUIApplicationLaunchResponse* _response;

}

@property (nonatomic,retain) FBSUIApplicationLaunchResponse * response;              //@synthesize response=_response - In the implementation block
-(void)dealloc;
-(FBSUIApplicationLaunchResponse *)response;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(void)setResponse:(FBSUIApplicationLaunchResponse *)arg1 ;
@end

