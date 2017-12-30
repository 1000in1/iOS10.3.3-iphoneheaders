/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:00 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <StoreServices/StoreServices-Structs.h>
@class NSObject, SSVURLCacheConfiguration;

@interface SSVURLCache : NSObject {

	NSObject*<OS_dispatch_queue> _accessSerialQueue;
	CFURLStorageSessionRef _cacheStorageSession;
	SSVURLCacheConfiguration* _configuration;
	CFURLCacheRef _urlCache;

}
-(id)cachedConnectionResponseForRequestProperties:(id)arg1 cachedResponse:(id*)arg2 ;
-(void)storeConnectionResponse:(id)arg1 forRequestProperties:(id)arg2 userInfo:(id)arg3 ;
-(id)cachedConnectionResponseForRequestProperties:(id)arg1 ;
-(void)loadMemoryCacheFromDisk;
-(void)saveMemoryCacheToDisk;
-(void)storeConnectionResponse:(id)arg1 forRequestProperties:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(id)initWithConfiguration:(id)arg1 ;
-(id)cachedResponseForRequest:(id)arg1 ;
-(void)storeCachedResponse:(id)arg1 forRequest:(id)arg2 ;
-(void)removeAllCachedResponses;
-(void)configureRequest:(id)arg1 ;
@end

