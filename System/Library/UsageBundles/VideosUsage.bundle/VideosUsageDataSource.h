/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:40:29 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/UsageBundles/VideosUsage.bundle/VideosUsage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPUFoundation/MPUQueryDataSource.h>

@class NSString;

@interface VideosUsageDataSource : MPUQueryDataSource {

	NSString* _categoryIdentifier;
	/*^block*/id _itemBlock;
	/*^block*/id _headerBlock;

}

@property (nonatomic,copy) id itemBlock;                                        //@synthesize itemBlock=_itemBlock - In the implementation block
@property (nonatomic,copy) id headerBlock;                                      //@synthesize headerBlock=_headerBlock - In the implementation block
@property (nonatomic,copy,readonly) NSString * categoryIdentifier;              //@synthesize categoryIdentifier=_categoryIdentifier - In the implementation block
-(id)usageItemForEntity:(id)arg1 ;
-(id)_prunedDataSource;
-(id)initWithQuery:(id)arg1 entityType:(int)arg2 categoryIdentifier:(id)arg3 usageItemBlock:(/*^block*/id)arg4 usageHeaderBlock:(/*^block*/id)arg5 ;
-(id)headerBlock;
-(id)itemBlock;
-(void)setItemBlock:(id)arg1 ;
-(void)setHeaderBlock:(id)arg1 ;
-(unsigned)count;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)categoryIdentifier;
-(id)headerItem;
@end

