/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:34 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/ServerDocuments.app/Frameworks/ServerDocsClient.framework/ServerDocsClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL, NSDate, NSNumber, NSData, NSURLSessionDownloadTask;

@interface SVMetadataItem : NSObject {

	char _isDirectory;
	char _isPackage;
	char _hasHiddenExtension;
	char _isReadable;
	char _isWritable;
	char _needsUpload;
	char _enabled;
	char _shouldRefresh;
	NSString* _filePath;
	NSURL* _fileURL;
	NSString* _name;
	NSDate* _dateCreated;
	NSDate* _contentDateModified;
	NSDate* _attributesDateModified;
	NSString* _typeIdentifier;
	NSString* _localizedTypeDescription;
	NSNumber* _fileSize;
	NSNumber* _numberOfItems;
	NSURL* _thumbnailURL;
	NSData* _thumbnailVersionIdentifier;
	NSString* _lastModifiedByUser;
	NSString* _lastModifiedByDevice;
	int _numberOfUploadRetries;
	int _type;
	NSURLSessionDownloadTask* _downloadTask;

}

@property (nonatomic,retain) NSURLSessionDownloadTask * downloadTask;                    //@synthesize downloadTask=_downloadTask - In the implementation block
@property (nonatomic,readonly) NSString * filePath;                                      //@synthesize filePath=_filePath - In the implementation block
@property (nonatomic,retain) NSURL * fileURL;                                            //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,readonly) NSString * name;                                          //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSDate * dateCreated;                                     //@synthesize dateCreated=_dateCreated - In the implementation block
@property (nonatomic,readonly) NSDate * contentDateModified;                             //@synthesize contentDateModified=_contentDateModified - In the implementation block
@property (nonatomic,readonly) NSDate * attributesDateModified;                          //@synthesize attributesDateModified=_attributesDateModified - In the implementation block
@property (nonatomic,readonly) NSDate * sortDate; 
@property (nonatomic,readonly) NSString * typeIdentifier;                                //@synthesize typeIdentifier=_typeIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * localizedTypeDescription;                      //@synthesize localizedTypeDescription=_localizedTypeDescription - In the implementation block
@property (nonatomic,readonly) NSNumber * fileSize;                                      //@synthesize fileSize=_fileSize - In the implementation block
@property (nonatomic,readonly) NSNumber * numberOfItems;                                 //@synthesize numberOfItems=_numberOfItems - In the implementation block
@property (nonatomic,readonly) char isDirectory;                                         //@synthesize isDirectory=_isDirectory - In the implementation block
@property (nonatomic,readonly) char isPackage;                                           //@synthesize isPackage=_isPackage - In the implementation block
@property (nonatomic,readonly) char hasHiddenExtension;                                  //@synthesize hasHiddenExtension=_hasHiddenExtension - In the implementation block
@property (nonatomic,readonly) char isAnImage; 
@property (nonatomic,retain) NSURL * thumbnailURL;                                       //@synthesize thumbnailURL=_thumbnailURL - In the implementation block
@property (nonatomic,retain) NSData * thumbnailVersionIdentifier;                        //@synthesize thumbnailVersionIdentifier=_thumbnailVersionIdentifier - In the implementation block
@property (nonatomic,readonly) char needsToFetchThumbnailURL; 
@property (nonatomic,readonly) char isReadable;                                          //@synthesize isReadable=_isReadable - In the implementation block
@property (nonatomic,readonly) char isWritable;                                          //@synthesize isWritable=_isWritable - In the implementation block
@property (nonatomic,readonly) char isDropBox; 
@property (nonatomic,readonly) NSString * lastModifiedByUser;                            //@synthesize lastModifiedByUser=_lastModifiedByUser - In the implementation block
@property (nonatomic,readonly) NSString * lastModifiedByDevice;                          //@synthesize lastModifiedByDevice=_lastModifiedByDevice - In the implementation block
@property (nonatomic,readonly) char isDownloading; 
@property (nonatomic,readonly) float downloadProgress; 
@property (nonatomic,readonly) char needsUpload;                                         //@synthesize needsUpload=_needsUpload - In the implementation block
@property (assign,nonatomic) int numberOfUploadRetries;                                  //@synthesize numberOfUploadRetries=_numberOfUploadRetries - In the implementation block
@property (assign,nonatomic) char enabled;                                               //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) int type;                                                 //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * friendlyName; 
@property (nonatomic,readonly) NSString * friendlyWherePath; 
@property (nonatomic,readonly) NSString * friendlyFileSize; 
@property (nonatomic,readonly) NSString * friendlyNumberOfItemsInDirectory; 
@property (assign,nonatomic) char shouldRefresh;                                         //@synthesize shouldRefresh=_shouldRefresh - In the implementation block
-(NSString *)friendlyFileSize;
-(NSString *)friendlyNumberOfItemsInDirectory;
-(id)thumbnailWithSize:(float)arg1 ;
-(char)needsToFetchThumbnailURL;
-(id)badgeImageForSize:(float)arg1 ;
-(void)updateFromAttributesDictionary:(id)arg1 ;
-(id)initWithParentDirectoryPath:(id)arg1 attributes:(id)arg2 ;
-(NSData *)thumbnailVersionIdentifier;
-(int)numberOfUploadRetries;
-(NSDate *)contentDateModified;
-(NSDate *)attributesDateModified;
-(id)initWithParentDirectoryPath:(id)arg1 sourceURL:(id)arg2 ;
-(char)isAnImage;
-(NSString *)friendlyWherePath;
-(NSString *)localizedTypeDescription;
-(char)hasHiddenExtension;
-(void)setThumbnailVersionIdentifier:(NSData *)arg1 ;
-(NSString *)lastModifiedByUser;
-(NSString *)lastModifiedByDevice;
-(void)setNumberOfUploadRetries:(int)arg1 ;
-(char)shouldRefresh;
-(void)setShouldRefresh:(char)arg1 ;
-(char)isDirectory;
-(char)isPackage;
-(char)enabled;
-(NSString *)name;
-(int)type;
-(void)setEnabled:(char)arg1 ;
-(NSNumber *)numberOfItems;
-(NSString *)typeIdentifier;
-(NSURL *)fileURL;
-(NSString *)filePath;
-(NSNumber *)fileSize;
-(void)setThumbnailURL:(NSURL *)arg1 ;
-(NSURL *)thumbnailURL;
-(char)hasThumbnail;
-(float)downloadProgress;
-(NSString *)friendlyName;
-(NSDate *)dateCreated;
-(void)setFileURL:(NSURL *)arg1 ;
-(char)isDownloading;
-(char)isWritable;
-(char)needsUpload;
-(NSDate *)sortDate;
-(char)isReadable;
-(char)isDropBox;
-(NSURLSessionDownloadTask *)downloadTask;
-(void)setDownloadTask:(NSURLSessionDownloadTask *)arg1 ;
@end
