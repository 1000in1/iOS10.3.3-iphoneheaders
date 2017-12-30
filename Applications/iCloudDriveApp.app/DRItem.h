/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:51 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/iCloudDriveApp.app/iCloudDriveApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSString, NSNumber, NSDate, NSArray, UIImage;

@interface DRItem : NSObject {

	char _isContainer;
	char _isDirectory;
	char _isPackage;
	char _hasHiddenExtension;
	char _canPreview;
	char _renameable;
	char _isBookmark;
	char _isDownloaded;
	char _isSymlink;
	char _thumbnailFetched;
	char _isPromise;
	NSURL* _url;
	NSURL* _resolvedURL;
	NSString* _localizedName;
	NSString* _typeIdentifier;
	NSString* _localizedTypeDescription;
	NSNumber* _fileSize;
	NSString* _friendlyFileSize;
	NSDate* _creationDate;
	NSDate* _contentModificationDate;
	NSURL* _parentDirectoryURL;
	NSArray* _tags;
	UIImage* _thumbnail;
	NSURL* _promiseURL;
	NSString* _symlinkTarget;

}

@property (nonatomic,retain) NSURL * resolvedURL;                              //@synthesize resolvedURL=_resolvedURL - In the implementation block
@property (nonatomic,retain) NSString * localizedName;                         //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,retain) NSString * typeIdentifier;                        //@synthesize typeIdentifier=_typeIdentifier - In the implementation block
@property (nonatomic,retain) NSString * localizedTypeDescription;              //@synthesize localizedTypeDescription=_localizedTypeDescription - In the implementation block
@property (nonatomic,retain) NSNumber * fileSize;                              //@synthesize fileSize=_fileSize - In the implementation block
@property (nonatomic,retain) NSString * friendlyFileSize;                      //@synthesize friendlyFileSize=_friendlyFileSize - In the implementation block
@property (nonatomic,retain) NSDate * creationDate;                            //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,retain) NSDate * contentModificationDate;                 //@synthesize contentModificationDate=_contentModificationDate - In the implementation block
@property (nonatomic,retain) NSURL * parentDirectoryURL;                       //@synthesize parentDirectoryURL=_parentDirectoryURL - In the implementation block
@property (assign,nonatomic) char isContainer;                                 //@synthesize isContainer=_isContainer - In the implementation block
@property (assign,nonatomic) char isDirectory;                                 //@synthesize isDirectory=_isDirectory - In the implementation block
@property (assign,nonatomic) char hasHiddenExtension;                          //@synthesize hasHiddenExtension=_hasHiddenExtension - In the implementation block
@property (nonatomic,retain) UIImage * thumbnail;                              //@synthesize thumbnail=_thumbnail - In the implementation block
@property (assign,nonatomic) char thumbnailFetched;                            //@synthesize thumbnailFetched=_thumbnailFetched - In the implementation block
@property (assign,nonatomic) char renameable;                                  //@synthesize renameable=_renameable - In the implementation block
@property (assign,nonatomic) char isBookmark;                                  //@synthesize isBookmark=_isBookmark - In the implementation block
@property (nonatomic,retain) NSArray * tags;                                   //@synthesize tags=_tags - In the implementation block
@property (nonatomic,retain) NSURL * promiseURL;                               //@synthesize promiseURL=_promiseURL - In the implementation block
@property (assign,nonatomic) char isDownloaded;                                //@synthesize isDownloaded=_isDownloaded - In the implementation block
@property (assign,nonatomic) char isPromise;                                   //@synthesize isPromise=_isPromise - In the implementation block
@property (nonatomic,readonly) NSString * symlinkTarget;                       //@synthesize symlinkTarget=_symlinkTarget - In the implementation block
@property (nonatomic,retain) NSURL * url;                                      //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) char isPackage;                                 //@synthesize isPackage=_isPackage - In the implementation block
@property (nonatomic,readonly) char canPreview;                                //@synthesize canPreview=_canPreview - In the implementation block
@property (nonatomic,readonly) char isSymlink;                                 //@synthesize isSymlink=_isSymlink - In the implementation block
+(id)getThumbnailQueue;
-(char)thumbnailFetched;
-(void)setThumbnailFetched:(char)arg1 ;
-(NSString *)friendlyFileSize;
-(NSString *)localizedTypeDescription;
-(char)hasHiddenExtension;
-(void)initFromKeysAndValues:(id)arg1 withURL:(id)arg2 ;
-(char)initFromAttributes;
-(id)resolveFinderAlias:(id)arg1 ;
-(unsigned long long)sizeOfPackage:(id)arg1 ;
-(char)isPromise;
-(id)friendlyDate:(id)arg1 style:(unsigned)arg2 ;
-(void)updateThumbnailImage:(id)arg1 ;
-(id)friendlyCreationDate:(unsigned)arg1 ;
-(id)friendlyContentModificationDate:(unsigned)arg1 ;
-(char)canGenerateThumbnail;
-(void)generateThumbnail:(/*^block*/id)arg1 ;
-(void)setLocalizedTypeDescription:(NSString *)arg1 ;
-(void)setFriendlyFileSize:(NSString *)arg1 ;
-(NSURL *)parentDirectoryURL;
-(void)setParentDirectoryURL:(NSURL *)arg1 ;
-(void)setHasHiddenExtension:(char)arg1 ;
-(char)canPreview;
-(void)setRenameable:(char)arg1 ;
-(char)isBookmark;
-(void)setIsBookmark:(char)arg1 ;
-(void)setIsDownloaded:(char)arg1 ;
-(void)setIsPromise:(char)arg1 ;
-(char)isDirectory;
-(NSArray *)tags;
-(char)isPackage;
-(void)setPromiseURL:(NSURL *)arg1 ;
-(NSURL *)promiseURL;
-(char)isDownloaded;
-(id)init;
-(id)description;
-(NSURL *)url;
-(id)initWithURL:(id)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(NSString *)localizedName;
-(void)clearValues;
-(NSString *)typeIdentifier;
-(UIImage *)thumbnail;
-(void)setThumbnail:(UIImage *)arg1 ;
-(NSNumber *)fileSize;
-(void)setIsContainer:(char)arg1 ;
-(NSURL *)resolvedURL;
-(char)isContainer;
-(void)setFileSize:(NSNumber *)arg1 ;
-(void)setIsDirectory:(char)arg1 ;
-(void)setResolvedURL:(NSURL *)arg1 ;
-(NSDate *)creationDate;
-(void)setCreationDate:(NSDate *)arg1 ;
-(NSDate *)contentModificationDate;
-(char)isSymlink;
-(void)setTags:(NSArray *)arg1 ;
-(NSString *)symlinkTarget;
-(void)setContentModificationDate:(NSDate *)arg1 ;
-(void)setTypeIdentifier:(NSString *)arg1 ;
-(void)setLocalizedName:(NSString *)arg1 ;
-(char)renameable;
-(char)cacheValues;
@end

