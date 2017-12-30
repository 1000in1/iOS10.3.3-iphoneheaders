/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:40:12 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/SyncBundles/MusicLibrary.syncBundle/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ATClient <NSObject>
@optional
-(id)disabledAssetTypes;
-(void)prioritizeAsset:(id)arg1;
-(id)outstandingAssetTransfersWithDownloadManager:(id)arg1;
-(id)outstandingAssetTransfers;
-(void)assetTransfer:(id)arg1 updatedProgress:(double)arg2;
-(void)assetTransfer:(id)arg1 succeeded:(char)arg2 withError:(id)arg3;
-(void)assetInstallSucceeded:(id)arg1;
-(void)assetInstallFailed:(id)arg1 withError:(id)arg2;
-(void)initiateAssetDownloadsWithCompletion:(/*^block*/id)arg1;
-(void)cancelSyncOperations;
-(void)syncEndedWithSuccess:(char)arg1;
-(char)prepareForSyncWithHostAnchor:(id)arg1 progressCallback:(/*^block*/id)arg2 error:(id*)arg3;
-(char)prepareForSyncWithHostAnchor:(id)arg1 progressCallback:(/*^block*/id)arg2 grappaID:(unsigned long)arg3 hostVersion:(id)arg4 error:(id*)arg5;
-(char)reconcileSync:(unsigned)arg1 withNewAnchor:(id)arg2 progressCallback:(/*^block*/id)arg3 error:(id*)arg4;
-(void)metadataUpdate:(id)arg1 forAsset:(id)arg2 withNewAnchor:(id)arg3;
-(void)restoreEndedWithError:(id)arg1;
-(void)registerMessageHandlersWithLink:(id)arg1;
-(id)currentSyncAnchor;
-(char)reconcileRestoreWithError:(id*)arg1;
-(char)reconcileRestoreOfType:(int)arg1 withError:(id*)arg2;
-(void)assetTransferEndedWithSuccess:(char)arg1;
-(void)prepareForBackup;
-(void)backupEnded;
-(void)pathsToBackup:(id*)arg1 pathsNotToBackup:(id*)arg2;
-(id)appleIDsForAssets;
-(char)shouldRestoreFile:(id)arg1 backupManager:(id)arg2;
-(char)shouldBackgroundRestorePath:(id)arg1 backupManager:(id)arg2;
-(char)shouldBackgroundRestoreFile:(id)arg1 backupManager:(id)arg2;
-(void)clearSyncData;
-(id)installedAssetMetrics;
-(id)installedAssets;

@required
-(id)supportedDataclasses;

@end

