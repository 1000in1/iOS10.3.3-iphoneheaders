/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:29:06 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/CarKitSettings.bundle/CarKitSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UICollectionViewDataSource.h>

@class CRCollectionView, _CRCollectionTableCell, NSArray, NSIndexPath, NSString;

@interface CRGridPageDataSource : NSObject <UICollectionViewDataSource> {

	CRCollectionView* _collectionView;
	_CRCollectionTableCell* _parentTableCell;
	NSArray* _icons;
	unsigned _columnCount;
	unsigned _rowCount;

}

@property (nonatomic,__weak,readonly) CRCollectionView * collectionView;                   //@synthesize collectionView=_collectionView - In the implementation block
@property (assign,nonatomic,__weak) _CRCollectionTableCell * parentTableCell;              //@synthesize parentTableCell=_parentTableCell - In the implementation block
@property (nonatomic,retain) NSArray * icons;                                              //@synthesize icons=_icons - In the implementation block
@property (nonatomic,readonly) unsigned columnCount;                                       //@synthesize columnCount=_columnCount - In the implementation block
@property (nonatomic,readonly) unsigned rowCount;                                          //@synthesize rowCount=_rowCount - In the implementation block
@property (nonatomic,readonly) unsigned maxItemsInSection; 
@property (nonatomic,readonly) NSArray * hiddenBundleIdentifiers; 
@property (nonatomic,readonly) NSIndexPath * indexPathOfPlaceholderCell; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(_CRCollectionTableCell *)parentTableCell;
-(id)initWithCollectionView:(id)arg1 columnCount:(unsigned)arg2 rowCount:(unsigned)arg3 icons:(id)arg4 ;
-(void)setParentTableCell:(_CRCollectionTableCell *)arg1 ;
-(id)iconAtIndexPath:(id)arg1 ;
-(char)_itemIsPlaceholder:(id)arg1 ;
-(void)insertPlaceholderCellAtIndexPath:(id)arg1 ;
-(void)removeIconAtIndexPath:(id)arg1 ;
-(void)replaceItemAtIndexPath:(id)arg1 withItem:(id)arg2 ;
-(NSIndexPath *)indexPathOfPlaceholderCell;
-(unsigned)maxItemsInSection;
-(void)insertIcon:(id)arg1 atIndexPath:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)animateCellAtIndexPath:(id)arg1 destinationDataSource:(id)arg2 destinationIndexPath:(id)arg3 inParentView:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)indexPathForIcon:(id)arg1 ;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInCollectionView:(id)arg1 ;
-(char)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(CRCollectionView *)collectionView;
-(void)setIcons:(NSArray *)arg1 ;
-(NSArray *)icons;
-(unsigned)columnCount;
-(NSArray *)hiddenBundleIdentifiers;
-(unsigned)rowCount;
@end
