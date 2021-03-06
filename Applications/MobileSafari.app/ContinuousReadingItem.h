/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:13 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WebBookmark, WBSAutomaticReadingListItem, NSString, NSURL;

@interface ContinuousReadingItem : NSObject {

	WebBookmark* _readingListBookmark;
	WBSAutomaticReadingListItem* _automaticReadingListItem;

}

@property (setter=_setReadingListBookmark:,nonatomic,retain) WebBookmark * readingListBookmark;              //@synthesize readingListBookmark=_readingListBookmark - In the implementation block
@property (nonatomic,readonly) int type; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (nonatomic,copy,readonly) NSString * extraTitleInfo; 
@property (nonatomic,copy,readonly) NSString * previewText; 
@property (nonatomic,retain,readonly) NSURL * URL; 
@property (nonatomic,readonly) char wantsTopBanner; 
@property (nonatomic,retain,readonly) WBSAutomaticReadingListItem * automaticReadingListItem;                //@synthesize automaticReadingListItem=_automaticReadingListItem - In the implementation block
+(id)itemWithReadingListItem:(id)arg1 ;
+(id)itemWithAutomaticReadingListItem:(id)arg1 ;
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
-(WBSAutomaticReadingListItem *)automaticReadingListItem;
-(WebBookmark *)readingListBookmark;
-(NSString *)extraTitleInfo;
-(id)_initWithReadingListItem:(id)arg1 ;
-(id)_initWithAutomaticReadingListItem:(id)arg1 ;
-(id)_siteNameForReadingListItem;
-(void)_readingListItemDidUpdate:(id)arg1 ;
-(void)_setReadingListBookmark:(id)arg1 ;
-(char)wantsTopBanner;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)title;
-(int)type;
-(NSURL *)URL;
-(NSString *)subtitle;
-(NSString *)previewText;
@end

