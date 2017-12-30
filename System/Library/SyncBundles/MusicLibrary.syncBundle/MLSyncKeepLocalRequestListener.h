/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:40:12 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/SyncBundles/MusicLibrary.syncBundle/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MLSyncKeepLocalRequestListener <NSObject>
@required
-(void)cancelDownloads;
-(void)enqueueAssetForDownload:(long long)arg1 withCompletionBlock:(/*^block*/id)arg2;
-(void)handleKeepLocalStatusChanged:(int)arg1 forLibraryIdentifier:(long long)arg2 entityType:(int)arg3 withCompletionBlock:(/*^block*/id)arg4;

@end

