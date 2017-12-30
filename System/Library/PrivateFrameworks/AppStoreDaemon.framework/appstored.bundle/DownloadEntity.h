/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:17 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/appstored.bundle/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSSQLiteEntity.h>

@class NSString, NSArray;

@interface DownloadEntity : SSSQLiteEntity {

	NSString* _ITunesSafeGUID;

}

@property (nonatomic,readonly) NSArray * allAssetCookies; 
@property (nonatomic,readonly) NSString * downloadKind; 
@property (nonatomic,readonly) unsigned long long itemIdentifier; 
@property (nonatomic,readonly) NSString * ITunesSafeGUID;                      //@synthesize ITunesSafeGUID=_ITunesSafeGUID - In the implementation block
+(id)copyValueDictionaryWithMetadata:(id)arg1 ;
+(id)copyJobIDsForDownloadsMatchingPredicate:(id)arg1 inDatabase:(id)arg2 ;
+(id)databasePropertyToSetClientProperty:(id)arg1 ;
+(id)joinClauseForProperty:(id)arg1 ;
+(id)databasePropertyToGetClientProperty:(id)arg1 ;
+(id)foreignDatabaseTablesToDelete;
+(id)foreignKeyColumnForTable:(id)arg1 ;
+(id)foreignDatabaseTableForProperty:(id)arg1 ;
+(id)foreignDatabaseColumnForProperty:(id)arg1 ;
+(Class)memoryEntityClass;
+(void)initialize;
+(id)databaseTable;
+(id)disambiguatedSQLForProperty:(id)arg1 ;
-(id)copyStoreDownloadMetadata;
-(id)anyAssetForAssetType:(id)arg1 ;
-(char)setAssetsUsingDownload:(id)arg1 ;
-(void)_resetAssetProperty:(id)arg1 ;
-(id)_databaseAssetForAsset:(id)arg1 ;
-(void)deleteScratchDirectory;
-(NSArray *)allAssetCookies;
-(id)copyAdditionalMetadataForStoreDownload:(id)arg1 ;
-(id)copyAssetsWithAssetType:(id)arg1 ;
-(void)resetAssetLocalPaths;
-(void)resetAssetURLs;
-(NSString *)ITunesSafeGUID;
-(NSString *)downloadKind;
-(unsigned long long)itemIdentifier;
-(char)deleteFromDatabase;
@end
