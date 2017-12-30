/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:29:20 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/UsageSettings.bundle/UsageSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIBarButtonItem, UILabel, NSArray, UsageStorageCache;

@interface UsageStorageMonitor : NSObject {

	float _availableSize;
	UIBarButtonItem* _footerItem;
	UILabel* _footerLabel;
	NSArray* _footerItems;
	int _storageClientCount;
	UsageStorageCache* _cache;
	float _usedSize;

}

@property (assign,nonatomic) float usedSize;                       //@synthesize usedSize=_usedSize - In the implementation block
@property (nonatomic,readonly) NSArray * footerItems; 
@property (nonatomic,readonly) float availableSize;                //@synthesize availableSize=_availableSize - In the implementation block
+(id)sharedMonitor;
-(void)setUsedSize:(float)arg1 ;
-(void)flushViews;
-(void)_setAvailable:(float)arg1 ;
-(id)mediaCollectionForKey:(id)arg1 ;
-(void)removeMediaCollectionCacheForKey:(id)arg1 ;
-(void)clearUsageDataCache;
-(float)availableSize;
-(void)populateUsageDataWithProgressBlock:(/*^block*/id)arg1 ;
-(void)registerUsageStorageClient;
-(void)deregisterUsageStorageClient;
-(float)usedSize;
-(id)init;
-(NSArray *)footerItems;
-(void)fetchSystemSizeStrings;
@end

