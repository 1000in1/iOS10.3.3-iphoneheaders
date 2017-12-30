/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:15 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/appstored.bundle/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, NSArray, NSMutableArray;

@interface PurchaseManagerBatchResponse : NSObject {

	NSMutableSet* _incompletePurchaseIDs;
	/*^block*/id _purchaseCompletionBlock;
	NSArray* _purchases;
	NSMutableArray* _responses;

}
-(void)addCompletedPurchaseResponse:(id)arg1 ;
-(void)addPendingPurchase:(id)arg1 ;
-(void)notifyCompletedWithError:(id)arg1 ;
-(char)isPendingPurchase:(id)arg1 ;
-(id)purchaseForPurchaseID:(id)arg1 ;
-(id)initWithCompletionBlock:(/*^block*/id)arg1 ;
-(char)isComplete;
@end

