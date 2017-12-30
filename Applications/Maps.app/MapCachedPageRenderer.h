/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:34 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/MapPageRenderer.h>

@class NSCache, NSString;

@interface MapCachedPageRenderer : MapPageRenderer {

	NSCache* _printAreaToPrintInfoCache;

}

@property (nonatomic,readonly) NSCache * printAreaToPrintInfoCache;              //@synthesize printAreaToPrintInfoCache=_printAreaToPrintInfoCache - In the implementation block
@property (nonatomic,readonly) NSString * currentCacheKey; 
@property (nonatomic,readonly) id currentPrintInfo; 
-(id)computeCurrentPrintInfo;
-(NSString *)currentCacheKey;
-(id)currentPrintInfo;
-(NSCache *)printAreaToPrintInfoCache;
-(id)init;
@end

