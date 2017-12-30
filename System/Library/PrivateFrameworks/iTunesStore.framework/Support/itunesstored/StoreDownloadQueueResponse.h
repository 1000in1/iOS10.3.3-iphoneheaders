/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:58:02 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableOrderedSet, NSError, NSDictionary, NSData, NSArray, NSNumber, NSString, NSOrderedSet;

@interface StoreDownloadQueueResponse : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSMutableOrderedSet* _downloads;
	NSError* _error;
	NSDictionary* _itemErrors;
	NSData* _keybag;
	NSArray* _rangesToLoad;
	char _shouldCancelPurchaseBatch;
	char _triggeredQueueCheck;
	NSNumber* _userIdentifier;
	NSString* _storeCorrelationID;
	NSString* _clientIdentifier;

}

@property (readonly) NSOrderedSet * downloads; 
@property (assign) NSString * storeCorrelationID;               //@synthesize storeCorrelationID=_storeCorrelationID - In the implementation block
@property (retain) NSError * error; 
@property (readonly) NSData * keybag; 
@property (readonly) NSArray * rangesToLoad; 
@property (assign) char shouldCancelPurchaseBatch; 
@property (assign) char triggeredQueueCheck; 
@property (readonly) NSNumber * userIdentifier; 
@property (assign) NSString * clientIdentifier;                 //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
-(id)_newManifestWithStoreDownloadQueueResponse:(id)arg1 accountID:(id)arg2 accountName:(id)arg3 ;
-(id)copyJobManifestWithAccountID:(id)arg1 accountName:(id)arg2 ;
-(void)enumerateActivitiesWithAccountID:(id)arg1 accountName:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(NSString *)storeCorrelationID;
-(id)_initStoreDownloadQueueResponse;
-(id)initWithDictionary:(id)arg1 userIdentifier:(id)arg2 preferredAssetFlavor:(id)arg3 ;
-(id)_errorWithFailureType:(id)arg1 customerMessage:(id)arg2 ;
-(id)initWithDictionary:(id)arg1 userIdentifier:(id)arg2 ;
-(id)initWithError:(id)arg1 userIdentifier:(id)arg2 ;
-(id)errorForItemIdentifier:(id)arg1 ;
-(NSData *)keybag;
-(NSArray *)rangesToLoad;
-(void)setShouldCancelPurchaseBatch:(char)arg1 ;
-(void)setTriggeredQueueCheck:(char)arg1 ;
-(char)shouldCancelPurchaseBatch;
-(char)triggeredQueueCheck;
-(void)setStoreCorrelationID:(NSString *)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(NSString *)clientIdentifier;
-(NSOrderedSet *)downloads;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(NSNumber *)userIdentifier;
@end

