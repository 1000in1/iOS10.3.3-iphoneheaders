/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:39:51 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/SetupAssistantBundles/GameCenterSetupAssistant.bundle/GameCenterSetupAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AASetupAssistantDelegateService.h>

@interface GKSetupAssistant : NSObject <AASetupAssistantDelegateService> {

	char _cancelled;

}

@property (assign) char cancelled;              //@synthesize cancelled=_cancelled - In the implementation block
-(char)cancelled;
-(void)setCancelled:(char)arg1 ;
-(id)delegateServiceIdentifier;
-(id)accountSetupRequestParameters;
-(void)completeSetupWithResponseParameters:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)setupOperationFailed;
@end

