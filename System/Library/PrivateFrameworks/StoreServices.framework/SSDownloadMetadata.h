/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:00 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/SSXPCCoding.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSLock, NSDictionary, NSData, NSURL, NSString, NSNumber, NSArray, NSDate, SSItemImageCollection;

@interface SSDownloadMetadata : NSObject <SSXPCCoding, NSCoding, NSCopying> {

	NSMutableDictionary* _dictionary;
	int _keyStyle;
	NSLock* _lock;

}

@property (readonly) NSDictionary * primaryAssetDictionary; 
@property (assign) int keyStyle; 
@property (retain,readonly) NSData * appReceiptData; 
@property (getter=isAutomaticDownload) char automaticDownload; 
@property (retain) NSURL * cancelDownloadURL; 
@property (retain) NSString * copyright; 
@property (getter=isDeviceBasedVPP) char deviceBasedVPP; 
@property (retain) NSDictionary * dictionary; 
@property (retain) NSString * downloadKey; 
@property (readonly) NSNumber * downloaderAccountIdentifier; 
@property (retain) NSData * epubRightsData; 
@property (retain) NSString * fileExtension; 
@property (copy) NSURL * hlsPlaylistURL; 
@property (getter=isTvTemplate) char tvTemplate; 
@property (retain) NSURL * launchExtrasUrl; 
@property (readonly) NSArray * MD5HashStrings; 
@property (readonly) NSNumber * numberOfBytesToHash; 
@property (copy) NSString * pageProgressionDirection; 
@property (assign) unsigned long long preOrderIdentifier; 
@property (retain) NSURL * primaryAssetURL; 
@property (copy) NSString * preferredAssetFlavor; 
@property (copy) NSURL * transitMapDataURL; 
@property (copy) NSString * redownloadActionParameters; 
@property (getter=isRedownloadDownload) char redownloadDownload; 
@property (retain) NSString * releaseDateString; 
@property (copy) NSNumber * rentalID; 
@property (copy) id requiredDeviceCapabilities; 
@property (getter=isContentRestricted,readonly) char contentRestricted; 
@property (assign) char shouldDownloadAutomatically; 
@property (retain) NSString * sortArtistName; 
@property (retain) NSString * sortCollectionName; 
@property (retain) NSString * sortTitle; 
@property (retain) NSArray * sinfs; 
@property (getter=isSoftwareKind,readonly) char softwareKind; 
@property (getter=isVideosKind,readonly) char videosKind; 
@property (assign) unsigned long long artistIdentifier; 
@property (copy) NSString * artistName; 
@property (retain) NSURL * fullSizeImageURL; 
@property (retain) NSString * genre; 
@property (assign) unsigned long long genreIdentifier; 
@property (assign) unsigned long long itemIdentifier; 
@property (retain) NSString * kind; 
@property (copy) NSString * longDescription; 
@property (retain) NSDate * releaseDate; 
@property (retain) NSNumber * releaseYear; 
@property (copy) NSString * shortDescription; 
@property (retain) NSString * subtitle; 
@property (retain) NSString * title; 
@property (retain) NSString * transactionIdentifier; 
@property (readonly) SSItemImageCollection * thumbnailImageCollection; 
@property (retain) NSString * thumbnailNewsstandBindingEdge; 
@property (retain) NSString * thumbnailNewsstandBindingType; 
@property (retain) NSURL * thumbnailImageURL; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_assetDictionary;
-(NSNumber *)downloaderAccountIdentifier;
-(id)newDownloadProperties;
-(NSURL *)fullSizeImageURL;
-(id)podcastFeedURL;
-(void)setValuesFromDownload:(id)arg1 ;
-(unsigned long long)preOrderIdentifier;
-(void)setPreOrderIdentifier:(unsigned long long)arg1 ;
-(unsigned long long)artistIdentifier;
-(void)setArtistIdentifier:(unsigned long long)arg1 ;
-(id)collectionArtistName;
-(void)setCollectionArtistName:(id)arg1 ;
-(id)collectionIndexInCollectionGroup;
-(void)setCollectionIndexInCollectionGroup:(id)arg1 ;
-(void)setComposerName:(id)arg1 ;
-(id)episodeIdentifier;
-(void)setEpisodeIdentifier:(id)arg1 ;
-(id)episodeSortIdentifier;
-(void)setEpisodeSortIdentifier:(id)arg1 ;
-(unsigned long long)genreIdentifier;
-(void)setGenreIdentifier:(unsigned long long)arg1 ;
-(id)networkName;
-(void)setNetworkName:(id)arg1 ;
-(id)numberOfCollectionsInCollectionGroup;
-(void)setNumberOfCollectionsInCollectionGroup:(id)arg1 ;
-(id)numberOfItemsInCollection;
-(void)setNumberOfItemsInCollection:(id)arg1 ;
-(id)podcastEpisodeGUID;
-(void)setPodcastEpisodeGUID:(id)arg1 ;
-(void)setVideoDetailsDictionary:(id)arg1 ;
-(void)setArtworkIsPrerendered:(char)arg1 ;
-(void)setThumbnailNewsstandBindingEdge:(NSString *)arg1 ;
-(void)setThumbnailNewsstandBindingType:(NSString *)arg1 ;
-(void)setPodcastType:(id)arg1 ;
-(void)setPodcastFeedURL:(id)arg1 ;
-(void)setPrimaryAssetURL:(NSURL *)arg1 ;
-(void)setDownloadKey:(NSString *)arg1 ;
-(id)valueForFirstAvailableKey:(id)arg1 ;
-(id)_stringValueForValue:(id)arg1 ;
-(id)_urlValueForValue:(id)arg1 ;
-(id)_dateValueForValue:(id)arg1 ;
-(id)_releaseDateValue;
-(int)keyStyle;
-(void)_setValueCopy:(id)arg1 forMetadataKey:(id)arg2 ;
-(id)_newImageCollectionWithURLString:(id)arg1 ;
-(id)_thumbnailArtworkImage;
-(id)betaExternalVersionIdentifier;
-(id)cloudIdentifier;
-(id)downloadPermalink;
-(id)documentTargetIdentifier;
-(id)enableExtensions;
-(id)longSeasonDescription;
-(id)messagesArtworkURL;
-(NSString *)pageProgressionDirection;
-(id)podcastType;
-(id)purchaseDate;
-(id)publicationVersion;
-(NSURL *)cancelDownloadURL;
-(NSString *)redownloadActionParameters;
-(NSString *)thumbnailNewsstandBindingEdge;
-(NSString *)thumbnailNewsstandBindingType;
-(id)viewStoreItemURL;
-(char)artworkIsPrerendered;
-(char)isDeviceBasedVPP;
-(char)isSharedResource;
-(char)isTvTemplate;
-(char)launchProhibited;
-(unsigned long long)composerIdentifier;
-(NSURL *)hlsPlaylistURL;
-(id)_valueForFirstAvailableTopLevelKey:(id)arg1 ;
-(id)_newDateFormatter;
-(void)_setValue:(id)arg1 forTopLevelKey:(id)arg2 ;
-(void)setBetaExternalVersionIdentifier:(id)arg1 ;
-(void)setDownloadPermalink:(id)arg1 ;
-(void)setCancelDownloadURL:(NSURL *)arg1 ;
-(void)setCloudIdentifier:(id)arg1 ;
-(void)setEnableExtensions:(id)arg1 ;
-(void)setLongSeasonDescription:(id)arg1 ;
-(void)setMessagesArtworkURL:(id)arg1 ;
-(void)setPageProgressionDirection:(NSString *)arg1 ;
-(void)setPurchaseDate:(id)arg1 ;
-(void)setPublicationVersion:(id)arg1 ;
-(void)setRedownloadActionParameters:(NSString *)arg1 ;
-(void)setViewStoreItemURL:(id)arg1 ;
-(void)setComposerIdentifier:(unsigned long long)arg1 ;
-(void)setAutomaticDownload:(char)arg1 ;
-(void)setHasMessagesExtension:(char)arg1 ;
-(void)setDeviceBasedVPP:(char)arg1 ;
-(void)setSharedResource:(char)arg1 ;
-(void)setTvTemplate:(char)arg1 ;
-(void)setLaunchProhibited:(char)arg1 ;
-(void)setPreferredAssetFlavor:(NSString *)arg1 ;
-(SSItemImageCollection *)thumbnailImageCollection;
-(NSURL *)launchExtrasUrl;
-(NSDictionary *)primaryAssetDictionary;
-(unsigned long long)sagaIdentifier;
-(void)setHlsPlaylistURL:(NSURL *)arg1 ;
-(void)setLaunchExtrasUrl:(NSURL *)arg1 ;
-(void)setRentalID:(NSNumber *)arg1 ;
-(void)setSagaIdentifier:(unsigned long long)arg1 ;
-(void)setSortArtistName:(NSString *)arg1 ;
-(void)setSortCollectionName:(NSString *)arg1 ;
-(NSString *)sortArtistName;
-(NSString *)sortCollectionName;
-(id)videoDetailsDictionary;
-(NSData *)appReceiptData;
-(id)copyWritableMetadata;
-(NSData *)epubRightsData;
-(char)isAutomaticDownload;
-(char)isRedownloadDownload;
-(char)isSoftwareKind;
-(char)isVideosKind;
-(NSArray *)MD5HashStrings;
-(NSNumber *)numberOfBytesToHash;
-(NSString *)preferredAssetFlavor;
-(id)requiredDeviceCapabilities;
-(void)setEpubRightsData:(NSData *)arg1 ;
-(void)setKeyStyle:(int)arg1 ;
-(void)setMD5HashStrings:(id)arg1 numberOfBytesToHash:(id)arg2 ;
-(void)setRedownloadDownload:(char)arg1 ;
-(void)setShouldDownloadAutomatically:(char)arg1 ;
-(void)setTransitMapDataURL:(NSURL *)arg1 ;
-(char)shouldDownloadAutomatically;
-(NSURL *)transitMapDataURL;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)bundleIdentifier;
-(NSDictionary *)dictionary;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(id)applicationIdentifier;
-(void)setBundleIdentifier:(id)arg1 ;
-(NSString *)shortDescription;
-(void)setDictionary:(NSDictionary *)arg1 ;
-(NSString *)kind;
-(NSString *)sortTitle;
-(void)setSortTitle:(NSString *)arg1 ;
-(void)setDurationInMilliseconds:(id)arg1 ;
-(NSNumber *)releaseYear;
-(void)setReleaseYear:(NSNumber *)arg1 ;
-(NSString *)genre;
-(id)composerName;
-(char)isExplicitContent;
-(char)isCompilation;
-(id)movementName;
-(id)movementCount;
-(id)movementNumber;
-(NSDate *)releaseDate;
-(id)showComposer;
-(id)seasonNumber;
-(id)workName;
-(void)setGenre:(NSString *)arg1 ;
-(void)setCompilation:(char)arg1 ;
-(NSNumber *)rentalID;
-(char)isMusicShow;
-(void)setMusicShow:(char)arg1 ;
-(void)setReleaseDate:(NSDate *)arg1 ;
-(NSArray *)sinfs;
-(void)setSinfs:(NSArray *)arg1 ;
-(void)setExplicitContent:(char)arg1 ;
-(void)setSeasonNumber:(id)arg1 ;
-(NSString *)downloadKey;
-(id)seriesName;
-(void)setSeriesName:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(NSString *)longDescription;
-(void)setLongDescription:(NSString *)arg1 ;
-(NSString *)fileExtension;
-(void)setCollectionIdentifier:(unsigned long long)arg1 ;
-(void)setCollectionName:(id)arg1 ;
-(unsigned long long)collectionIdentifier;
-(void)setFileExtension:(NSString *)arg1 ;
-(void)setShortDescription:(NSString *)arg1 ;
-(void)setValue:(id)arg1 forMetadataKey:(id)arg2 ;
-(id)valueForMetadataKey:(id)arg1 ;
-(NSString *)copyright;
-(void)setDocumentTargetIdentifier:(id)arg1 ;
-(void)setCopyright:(NSString *)arg1 ;
-(id)initWithItem:(id)arg1 offer:(id)arg2 ;
-(char)isContentRestricted;
-(unsigned long long)itemIdentifier;
-(void)setItemIdentifier:(unsigned long long)arg1 ;
-(id)variantIdentifier;
-(void)setVariantIdentifier:(id)arg1 ;
-(char)isSample;
-(void)setRequiredDeviceCapabilities:(id)arg1 ;
-(NSString *)artistName;
-(char)hasMessagesExtension;
-(id)collectionName;
-(NSString *)releaseDateString;
-(void)setArtistName:(NSString *)arg1 ;
-(void)setReleaseDateString:(NSString *)arg1 ;
-(id)initWithItem:(id)arg1 ;
-(NSURL *)primaryAssetURL;
-(char)isRental;
-(void)setThumbnailImageURL:(NSURL *)arg1 ;
-(void)setHighDefinition:(char)arg1 ;
-(void)setRental:(char)arg1 ;
-(void)setContentRating:(id)arg1 ;
-(id)contentRating;
-(char)isHighDefinition;
-(id)indexInCollection;
-(void)setIndexInCollection:(id)arg1 ;
-(NSURL *)thumbnailImageURL;
-(void)setTransactionIdentifier:(NSString *)arg1 ;
-(void)setFullSizeImageURL:(NSURL *)arg1 ;
-(void)setKind:(NSString *)arg1 ;
-(void)setSample:(char)arg1 ;
-(NSString *)transactionIdentifier;
-(id)durationInMilliseconds;
-(id)initWithKind:(id)arg1 ;
@end

