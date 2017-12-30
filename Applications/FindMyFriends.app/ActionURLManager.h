/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:14 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/FindMyFriends.app/FindMyFriends
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString;

@interface ActionURLManager : NSObject {

	NSDictionary* _pendingAppURLInfo;
	NSDictionary* _pendingPushData;
	NSString* _pendingAirdropOfferId;

}

@property (nonatomic,retain) NSDictionary * pendingAppURLInfo;              //@synthesize pendingAppURLInfo=_pendingAppURLInfo - In the implementation block
@property (nonatomic,retain) NSDictionary * pendingPushData;                //@synthesize pendingPushData=_pendingPushData - In the implementation block
@property (nonatomic,retain) NSString * pendingAirdropOfferId;              //@synthesize pendingAirdropOfferId=_pendingAirdropOfferId - In the implementation block
-(void)handleIncomingUrl:(id)arg1 ;
-(void)handleIncomingPushData:(id)arg1 ;
-(void)handlePendingAirdropOffer;
-(void)setPendingAppURLInfo:(NSDictionary *)arg1 ;
-(id)findAppURLType:(id)arg1 withData:(id)arg2 ;
-(void)handleAirdropOfferForURL:(id)arg1 ;
-(void)resetPendingAppURLInfo;
-(NSDictionary *)pendingAppURLInfo;
-(void)performActionForURLInfo:(id)arg1 ;
-(void)setPendingPushData:(NSDictionary *)arg1 ;
-(void)handlePendingPushData;
-(NSDictionary *)pendingPushData;
-(void)setPendingAirdropOfferId:(NSString *)arg1 ;
-(void)airdropImportCompletedWithId:(id)arg1 ;
-(NSString *)pendingAirdropOfferId;
-(void)handlePendingURL;
@end

