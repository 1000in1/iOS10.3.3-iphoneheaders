/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:15 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/appstored.bundle/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SSPurchaseManagerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, SSPurchaseManager, NSMutableSet, NSMutableArray, NSString;

@interface PurchaseManager : NSObject <SSPurchaseManagerDelegate> {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	SSPurchaseManager* _purchaseManager;
	NSMutableSet* _inflightPurchases;
	NSMutableArray* _completionBlocks;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedPurchaseManager;
-(id)_hasExistingJobForBundleID:(id)arg1 userInitiated:(char)arg2 ;
-(id)_createVendorIDForName:(id)arg1 bundleID:(id)arg2 ;
-(id)_createStorePurchaseFromPurchase:(id)arg1 ;
-(void)_addBatchResponse:(id)arg1 ;
-(void)_notifyBatchResponse:(id)arg1 completedWithError:(id)arg2 ;
-(void)makePurchases:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)_trackInflightPurchase:(id)arg1 ;
-(char)_processPurchaseResponse:(id)arg1 purchasesContainedSoftwareUpdates:(char*)arg2 ;
-(void)_removeCompletedPurchases:(id)arg1 ;
-(id)_newManifestWithStorePurchaseItems:(id)arg1 accountID:(id)arg2 accountName:(id)arg3 isBackgroundRequest:(char)arg4 isUpdate:(char)arg5 ;
-(void)_resetUpdateWithBundleID:(id)arg1 ;
-(id)_createJobsWithPurchaseResponse:(id)arg1 isUpdate:(char)arg2 ;
-(void)_removeVendorIDForName:(id)arg1 bundleID:(id)arg2 ;
-(void)_notifyPurchaseCompleted:(id)arg1 withResponse:(id)arg2 results:(id)arg3 ;
-(id)_mapTransactionIDsToStoreDownloads:(id)arg1 ;
-(void)makePurchases:(id)arg1 withPurchaseCompletionBlock:(/*^block*/id)arg2 ;
-(id)init;
-(void)purchaseManager:(id)arg1 didFinishPurchasesWithResponses:(id)arg2 ;
@end

