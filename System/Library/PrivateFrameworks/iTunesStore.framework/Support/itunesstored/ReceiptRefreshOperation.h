/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:58:02 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@protocol SKPaymentQueueClient;
@class SSPurchaseReceipt;

@interface ReceiptRefreshOperation : ISOperation {

	id<SKPaymentQueueClient> _client;
	SSPurchaseReceipt* _existingReceipt;
	unsigned _flags;
	/*^block*/id _resultBlock;

}

@property (copy) id resultBlock; 
-(char)_isSandboxed;
-(id)_postBodyData;
-(id)initWithClient:(id)arg1 receiptFlags:(unsigned)arg2 ;
-(void)run;
-(void)setResultBlock:(id)arg1 ;
-(id)resultBlock;
@end

