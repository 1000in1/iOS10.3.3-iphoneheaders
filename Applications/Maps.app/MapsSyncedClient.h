/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:37 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSArray;


@protocol MapsSyncedClient <NSObject>
@property (nonatomic,readonly) NSString * syncIdentifier; 
@property (nonatomic,readonly) NSArray * syncedItems; 
@property (nonatomic,readonly) char syncSupportsKVO; 
@property (nonatomic,readonly) char syncInvertedOrdering; 
@property (nonatomic,readonly) char syncShouldUseItemPositions; 
@property (nonatomic,readonly) char syncShouldUseCustomStore; 
@optional
-(char)shouldAddSyncedItem:(id)arg1 atIndex:(unsigned)arg2;
-(void)insertSyncedItems:(id)arg1 atIndexes:(id)arg2;
-(void)removeSyncedItemsAtIndexes:(id)arg1;
-(void)updateSyncedItemAtIndexes:(id)arg1;
-(void)syncManagerDidUpdateSyncedItems:(id)arg1;
-(char)syncInvertedOrdering;
-(char)syncShouldUseItemPositions;
-(char)syncShouldUseCustomStore;

@required
-(id)newSyncedItemForSyncData:(id)arg1;
-(NSArray *)syncedItems;
-(char)syncSupportsKVO;
-(NSString *)syncIdentifier;

@end

