/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:49 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FBSSystemServiceFacilityClient.h>

@interface SBSServiceFacilityClient : FBSSystemServiceFacilityClient {

	int _numberOfCheckOuts;

}
+(id)serviceFacilityIdentifier;
+(id)checkOutClientWithClass:(Class)arg1 ;
+(void)checkInClient:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 calloutQueue:(id)arg2 ;
-(id)initWithCalloutQueue:(id)arg1 ;
-(void)_incrementCheckout;
-(char)_decrementCheckout;
@end

