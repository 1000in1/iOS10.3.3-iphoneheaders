/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:52 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/iBooks.app/Frameworks/BookCore.framework/BookCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BookCore/BKSeriesInfo.h>
@class NSString, NSArray, NSURL;


@protocol BKSeriesInfo <NSObject>
@property (readonly) NSString * adamId; 
@property (readonly) NSString * author; 
@property (readonly) char isExplicit; 
@property (readonly) char isContainer; 
@property (readonly) float popularity; 
@property (readonly) NSString * seriesId; 
@property (readonly) NSString * seriesTitle; 
@property (readonly) NSString * genre; 
@property (readonly) unsigned sequenceNumber; 
@property (readonly) NSString * sequenceDisplayName; 
@property (readonly) NSString * title; 
@property (readonly) NSArray * children; 
@property (readonly) NSArray * childrenIds; 
@property (readonly) NSArray * genreNames; 
@property (readonly) NSArray * genres; 
@property (readonly) NSString * kind; 
@property (readonly) NSString * name; 
@property (readonly) NSString * nameRaw; 
@property (readonly) NSURL * shortUrl; 
@property (readonly) NSString * tellAFriendMessageContentsUrl; 
@required
-(NSString *)sequenceDisplayName;
-(NSString *)seriesId;
-(NSString *)seriesTitle;
-(NSArray *)childrenIds;
-(NSString *)nameRaw;
-(NSURL *)shortUrl;
-(NSString *)name;
-(NSString *)title;
-(NSString *)kind;
-(unsigned)sequenceNumber;
-(NSString *)author;
-(NSArray *)genres;
-(NSString *)genre;
-(NSArray *)genreNames;
-(float)popularity;
-(char)isContainer;
-(char)isExplicit;
-(NSArray *)children;
-(NSString *)tellAFriendMessageContentsUrl;
-(NSString *)adamId;

@end


@class NSString, NSArray, NSURL, NSDictionary;

@interface BKSeriesInfo : NSObject <BKSeriesInfo> {

	NSDictionary* _infoDictionary;

}

@property (copy) NSDictionary * infoDictionary;                             //@synthesize infoDictionary=_infoDictionary - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSString * adamId; 
@property (readonly) NSString * author; 
@property (readonly) char isExplicit; 
@property (readonly) char isContainer; 
@property (readonly) float popularity; 
@property (readonly) NSString * seriesId; 
@property (readonly) NSString * seriesTitle; 
@property (readonly) NSString * genre; 
@property (readonly) unsigned sequenceNumber; 
@property (readonly) NSString * sequenceDisplayName; 
@property (readonly) NSString * title; 
@property (readonly) NSArray * children; 
@property (readonly) NSArray * childrenIds; 
@property (readonly) NSArray * genreNames; 
@property (readonly) NSArray * genres; 
@property (readonly) NSString * kind; 
@property (readonly) NSString * name; 
@property (readonly) NSString * nameRaw; 
@property (readonly) NSURL * shortUrl; 
@property (readonly) NSString * tellAFriendMessageContentsUrl; 
+(id)seriesInfoWithDictionary:(id)arg1 ;
-(NSString *)sequenceDisplayName;
-(NSString *)seriesId;
-(NSString *)seriesTitle;
-(NSArray *)childrenIds;
-(NSString *)nameRaw;
-(NSURL *)shortUrl;
-(void)setInfoDictionary:(NSDictionary *)arg1 ;
-(NSString *)description;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)name;
-(NSDictionary *)infoDictionary;
-(NSString *)title;
-(NSString *)kind;
-(unsigned)sequenceNumber;
-(NSString *)author;
-(NSArray *)genres;
-(NSString *)genre;
-(NSArray *)genreNames;
-(float)popularity;
-(char)isContainer;
-(char)isExplicit;
-(NSArray *)children;
-(NSString *)tellAFriendMessageContentsUrl;
-(NSString *)adamId;
@end
