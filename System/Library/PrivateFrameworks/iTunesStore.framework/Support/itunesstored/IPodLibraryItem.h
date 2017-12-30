/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:58:03 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunesstored/itunesstored-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSData, NSArray, NSObject, NSString, StoreDownload, NSDictionary;

@interface IPodLibraryItem : NSObject <NSCopying> {

	NSMutableDictionary* _additionalEntityProperties;
	int _assetType;
	NSData* _artworkData;
	NSArray* _chapters;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSString* _downloadIdentifier;
	int _downloadType;
	double _durationInSeconds;
	long long _libraryPersistentIdentifier;
	NSString* _mediaPath;
	StoreDownload* _metadata;
	int _protectionType;
	int _updateType;

}

@property (assign) int assetType; 
@property (copy) NSArray * chapters; 
@property (getter=isDownloading,readonly) char downloading; 
@property (assign) double durationInSeconds; 
@property (assign) int downloadType; 
@property (copy) NSString * itemDownloadIdentifier; 
@property (assign) long long libraryPersistentIdentifier; 
@property (readonly) char hasItemArtwork; 
@property (copy) NSData * itemArtworkData; 
@property (copy) NSString * itemMediaPath; 
@property (assign) int protectionType; 
@property (copy) StoreDownload * itemMetadata; 
@property (assign) int updateType; 
@property (copy) NSDictionary * additionalEntityProperties; 
+(unsigned long)mediaTypeForStoreDownload:(id)arg1 ;
-(long long)libraryPersistentIdentifier;
-(void)setLibraryPersistentIdentifier:(long long)arg1 ;
-(void)setDownloadType:(int)arg1 ;
-(void)setItemMetadata:(StoreDownload *)arg1 ;
-(void)setItemDownloadIdentifier:(NSString *)arg1 ;
-(NSString *)itemMediaPath;
-(void)setItemArtworkData:(NSData *)arg1 ;
-(StoreDownload *)itemMetadata;
-(NSData *)itemArtworkData;
-(NSString *)itemDownloadIdentifier;
-(id)_copyChapterVideoTracksForAsset:(id)arg1 ;
-(NSDictionary *)additionalEntityProperties;
-(int)downloadType;
-(char)hasItemArtwork;
-(void)loadPropertiesFromMediaPath:(id)arg1 ;
-(void)setAdditionalEntityProperties:(NSDictionary *)arg1 ;
-(void)setDurationInSeconds:(double)arg1 ;
-(void)setItemMediaPath:(NSString *)arg1 ;
-(void)setValue:(id)arg1 forAdditionalEntityProperty:(id)arg2 ;
-(void)setAssetType:(int)arg1 ;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)durationInSeconds;
-(NSArray *)chapters;
-(int)protectionType;
-(void)setProtectionType:(int)arg1 ;
-(void)setChapters:(NSArray *)arg1 ;
-(int)updateType;
-(int)assetType;
-(char)isDownloading;
-(void)setUpdateType:(int)arg1 ;
@end
