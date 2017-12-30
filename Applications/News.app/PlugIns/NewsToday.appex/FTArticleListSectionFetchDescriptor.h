/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:19 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/News.app/PlugIns/NewsToday.appex/NewsToday
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsToday/NewsToday-Structs.h>
#import <NewsToday/FTSectionFetchDescriptor.h>

@class NTPBArticleListWidgetSectionSpecificConfig, NSString;

@interface FTArticleListSectionFetchDescriptor : NSObject <FTSectionFetchDescriptor> {

	NTPBArticleListWidgetSectionSpecificConfig* _articleListRequest;

}

@property (nonatomic,copy) NTPBArticleListWidgetSectionSpecificConfig * articleListRequest;              //@synthesize articleListRequest=_articleListRequest - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)configureCatchUpOperationWithFetchRequest:(id)arg1 ;
-(id)extractResultsFromCatchUpOperation:(id)arg1 ;
-(id)sortTransformationWithFeedPersonalizer:(id)arg1 ;
-(id)limitTransformationWithFeedPersonalizer:(id)arg1 limit:(unsigned)arg2 ;
-(NTPBArticleListWidgetSectionSpecificConfig *)articleListRequest;
-(id)initWithArticleListConfiguration:(id)arg1 ;
-(void)setArticleListRequest:(NTPBArticleListWidgetSectionSpecificConfig *)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

