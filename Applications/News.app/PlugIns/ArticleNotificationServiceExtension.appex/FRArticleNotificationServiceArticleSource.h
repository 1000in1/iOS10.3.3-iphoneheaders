/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:23 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/News.app/PlugIns/ArticleNotificationServiceExtension.appex/ArticleNotificationServiceExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FCContentContext;
@class NSURL, FCArticle;

@interface FRArticleNotificationServiceArticleSource : NSObject {

	id<FCContentContext> _contentContext;
	NSURL* _cachesDirectory;
	NSURL* _archiveFileURL;
	FCArticle* _loadedArticle;

}

@property (nonatomic,retain) id<FCContentContext> contentContext;              //@synthesize contentContext=_contentContext - In the implementation block
@property (nonatomic,copy) NSURL * cachesDirectory;                            //@synthesize cachesDirectory=_cachesDirectory - In the implementation block
@property (nonatomic,copy) NSURL * archiveFileURL;                             //@synthesize archiveFileURL=_archiveFileURL - In the implementation block
@property (nonatomic,retain) FCArticle * loadedArticle;                        //@synthesize loadedArticle=_loadedArticle - In the implementation block
-(void)setLoadedArticle:(FCArticle *)arg1 ;
-(id)initWithCachesDirectory:(id)arg1 ;
-(void)fetchThumbnailAndPublisherLogoWithArticleID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchThumbnailAndPublisherLogoWithThumbnailURL:(id)arg1 publisherLogoURL:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setCachesDirectory:(NSURL *)arg1 ;
-(NSURL *)archiveFileURL;
-(void)setArchiveFileURL:(NSURL *)arg1 ;
-(FCArticle *)loadedArticle;
-(NSURL *)cachesDirectory;
-(id)init;
-(void)dealloc;
-(void)setContentContext:(id<FCContentContext>)arg1 ;
-(id<FCContentContext>)contentContext;
@end
