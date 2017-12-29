/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:28 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Podcasts.app/PlugIns/com.apple.podcasts.SpotlightIndexExtension.appex/com.apple.podcasts.SpotlightIndexExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface ITMLibraryPlist : NSObject {

	NSString* _path;
	NSString* _directory;

}

@property (nonatomic,retain) NSString * path;                       //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) NSString * sidecarPath; 
@property (nonatomic,retain) NSString * directory;                  //@synthesize directory=_directory - In the implementation block
+(id)keyNameForDeletesArray;
+(id)keyNameForBooksArray;
+(id)keyNameForPath;
+(id)keyNameForAuthor;
+(id)keyNameForSortAuthor;
+(id)keyNameForTitle;
+(id)keyNameForSortTitle;
+(id)keyNameForGenre;
+(id)keyNameForExplicitContent;
+(id)folderNameFromPlistEntry:(id)arg1 ;
+(id)keyNameForPublicationVersion;
+(id)keyNameForHumanReadablePublicationVersion;
+(id)keyNameForPageProgression;
+(id)keyNameForAssetType;
+(id)languagesFromPlistEntry:(id)arg1 ;
+(id)primaryLanguageFromPlistEntry:(id)arg1 ;
+(id)keyNameForCoverWritingMode;
+(id)keyNameForScrollDirection;
+(id)keyNameForLanguages;
+(id)keyNameForPrimaryLanguage;
+(id)keyNameForUniqueId;
+(id)authorFromPlistEntry:(id)arg1 ;
+(id)sortAuthorFromPlistEntry:(id)arg1 ;
+(id)titleFromPlistEntry:(id)arg1 ;
+(id)sortTitleFromPlistEntry:(id)arg1 ;
+(id)genreFromPlistEntry:(id)arg1 ;
+(id)isExplicitContentFromPlistEntry:(id)arg1 ;
+(id)temporaryItemIdentifierFromPlistEntry:(id)arg1 ;
+(id)persistentIDFromPlistEntry:(id)arg1 ;
+(id)bookEpubIdFromPlistEntry:(id)arg1 ;
+(id)albumFromPlistEntry:(id)arg1 ;
+(id)isItunesUFromPlistEntry:(id)arg1 ;
+(id)feedURLFromPlistEntry:(id)arg1 ;
+(id)mimeTypeFromPlistEntry:(id)arg1 ;
+(id)extensionFromPlistEntry:(id)arg1 ;
+(id)publicationVersionFromPlistEntry:(id)arg1 ;
+(id)humanReadablePublicationVersionFromPlistEntry:(id)arg1 ;
+(id)pageProgressionFromPlistEntry:(id)arg1 ;
+(id)assetTypeFromPlistEntry:(id)arg1 ;
+(id)languageFromPlistEntry:(id)arg1 ;
+(id)coverWritingModeFromPlistEntry:(id)arg1 ;
+(id)scrollDirectionFromPlistEntry:(id)arg1 ;
+(id)keyNameForStoreId;
+(id)keyNameForSubject;
+(id)uniqueIdFromPlistEntry:(id)arg1 ;
+(id)isSampleFromPlistEntry:(id)arg1 ;
+(id)coverPathFromPlistEntry:(id)arg1 ;
+(char)isThinnedAssetFromPlistEntry:(id)arg1 ;
+(id)storeIdFromPlistEntry:(id)arg1 ;
-(id)_contents:(id)arg1 ;
-(NSString *)sidecarPath;
-(id)unfilteredContents;
-(id)unfilteredSidecarContents;
-(void)rewriteSidecarWithDeletes:(id)arg1 ;
-(char)bumpModificationDate;
-(id)initWithDirectory:(id)arg1 fileName:(id)arg2 ;
-(id)calculateChecksum;
-(char)isPathInDirectory:(id)arg1 ;
-(void)addDeletedPaths:(id)arg1 ;
-(void)removeDeletedPaths:(id)arg1 ;
-(void)dealloc;
-(NSString *)path;
-(id)contents;
-(void)setPath:(NSString *)arg1 ;
-(void)setDirectory:(NSString *)arg1 ;
-(NSString *)directory;
@end
