/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:52 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/iBooks.app/Frameworks/BookStoreUI.framework/BookStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BookStoreUI/BKBookCoverInfo.h>

@class NSString, NSDictionary, NSURL, BCLazyValue;

@interface BSUIItemDescription : NSObject <BKBookCoverInfo> {

	NSString* _storeID;
	float _artworkAspect;
	NSString* _artworkURLTemplate;
	NSString* _title;
	NSString* _author;
	float _averageRating;
	unsigned _ratingCount;
	NSDictionary* _metrics;
	NSURL* _productURL;
	NSString* _kind;
	NSURL* _sampleDownloadURL;
	BCLazyValue* _lazyNotes;

}

@property (nonatomic,retain) BCLazyValue * lazyNotes;                               //@synthesize lazyNotes=_lazyNotes - In the implementation block
@property (nonatomic,copy,readonly) NSString * storeID;                             //@synthesize storeID=_storeID - In the implementation block
@property (nonatomic,readonly) float artworkAspect;                                 //@synthesize artworkAspect=_artworkAspect - In the implementation block
@property (nonatomic,copy,readonly) NSString * artworkURLTemplate;                  //@synthesize artworkURLTemplate=_artworkURLTemplate - In the implementation block
@property (nonatomic,copy,readonly) NSString * notes; 
@property (nonatomic,copy,readonly) NSString * title;                               //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * author;                              //@synthesize author=_author - In the implementation block
@property (nonatomic,readonly) float averageRating;                                 //@synthesize averageRating=_averageRating - In the implementation block
@property (nonatomic,readonly) unsigned ratingCount;                                //@synthesize ratingCount=_ratingCount - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * metrics;                         //@synthesize metrics=_metrics - In the implementation block
@property (nonatomic,copy,readonly) NSURL * productURL;                             //@synthesize productURL=_productURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * kind;                                //@synthesize kind=_kind - In the implementation block
@property (nonatomic,copy,readonly) NSURL * sampleDownloadURL;                      //@synthesize sampleDownloadURL=_sampleDownloadURL - In the implementation block
@property (nonatomic,readonly) id<BKBookCoverInfo> bookCoverInfo; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * bookCoverIdentifier; 
@property (nonatomic,readonly) NSString * bookCoverTitle; 
@property (nonatomic,readonly) NSString * bookCoverAuthor; 
@property (nonatomic,readonly) NSString * bookCoverArtworkURLTemplate; 
@property (nonatomic,readonly) NSString * bookCoverLanguage; 
@property (nonatomic,readonly) NSString * bookCoverWritingMode; 
@property (nonatomic,readonly) char bookCoverIsAudiobook; 
@property (nonatomic,readonly) char bookCoverIsRightToLeft; 
@property (nonatomic,readonly) char bookCoverIsPreorder; 
@property (nonatomic,readonly) char bookCoverIsDownloading; 
@property (nonatomic,readonly) char bookCoverIsLocal; 
-(NSString *)artworkURLTemplate;
-(NSString *)bookCoverIdentifier;
-(char)bookCoverIsDownloading;
-(char)bookCoverIsLocal;
-(NSString *)bookCoverArtworkURLTemplate;
-(NSString *)bookCoverAuthor;
-(NSString *)bookCoverTitle;
-(char)bookCoverIsAudiobook;
-(char)bookCoverIsRightToLeft;
-(char)bookCoverIsPreorder;
-(NSString *)bookCoverWritingMode;
-(NSString *)bookCoverLanguage;
-(id<BKBookCoverInfo>)bookCoverInfo;
-(id)initWithCachedItemDescription:(id)arg1 lazyNotes:(id)arg2 ;
-(float)artworkAspect;
-(NSURL *)sampleDownloadURL;
-(BCLazyValue *)lazyNotes;
-(void)setLazyNotes:(BCLazyValue *)arg1 ;
-(NSString *)description;
-(NSString *)title;
-(NSString *)kind;
-(NSDictionary *)metrics;
-(NSString *)author;
-(float)averageRating;
-(NSString *)notes;
-(NSURL *)productURL;
-(unsigned)ratingCount;
-(NSString *)storeID;
-(id)initWithProfile:(id)arg1 ;
@end
