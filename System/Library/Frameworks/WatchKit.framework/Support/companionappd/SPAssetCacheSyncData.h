/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 7:34:03 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/WatchKit.framework/Support/companionappd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SPAssetCacheAssets, NSString;

@interface SPAssetCacheSyncData : NSObject {

	SPAssetCacheAssets* _permanentCache;
	SPAssetCacheAssets* _transientCache;
	NSString* _cacheIdentifier;

}

@property (nonatomic,retain) SPAssetCacheAssets * permanentCache;              //@synthesize permanentCache=_permanentCache - In the implementation block
@property (nonatomic,retain) SPAssetCacheAssets * transientCache;              //@synthesize transientCache=_transientCache - In the implementation block
@property (nonatomic,retain) NSString * cacheIdentifier;                       //@synthesize cacheIdentifier=_cacheIdentifier - In the implementation block
+(id)toProto:(id)arg1 ;
+(id)fromProto:(id)arg1 ;
-(id)init;
-(void)setCacheIdentifier:(NSString *)arg1 ;
-(NSString *)cacheIdentifier;
-(SPAssetCacheAssets *)permanentCache;
-(void)setPermanentCache:(SPAssetCacheAssets *)arg1 ;
-(SPAssetCacheAssets *)transientCache;
-(void)setTransientCache:(SPAssetCacheAssets *)arg1 ;
@end

