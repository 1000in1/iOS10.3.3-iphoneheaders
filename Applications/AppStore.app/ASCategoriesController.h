/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:44 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/AppStore.app/AppStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStore/AppStore-Structs.h>
#import <AppStore/ASCategoriesDatasourceDelegate.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <AppStore/ASCategoriesControllerProtocol.h>

@protocol ASCategoriesDatasourceProtocol, ASCategoriesControllerDelegate, ASCategoryProtocol;
@class UICollectionView, NSString;

@interface ASCategoriesController : NSObject <ASCategoriesDatasourceDelegate, UICollectionViewDelegateFlowLayout, ASCategoriesControllerProtocol> {

	NSString* _title;
	char _loadingData;
	char _hasCachedData;
	id<ASCategoriesDatasourceProtocol> _categoriesDatasource;
	UICollectionView* _collectionView;
	id<ASCategoriesControllerDelegate> _delegate;
	id<ASCategoryProtocol> _selectedCategory;
	CGSize _viewSize;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<ASCategoriesControllerDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) id<ASCategoriesDatasourceProtocol> categoriesDatasource;              //@synthesize categoriesDatasource=_categoriesDatasource - In the implementation block
@property (nonatomic,retain) UICollectionView * collectionView;                                      //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,copy,readonly) NSString * title; 
@property (assign,nonatomic) CGSize viewSize;                                                        //@synthesize viewSize=_viewSize - In the implementation block
@property (nonatomic,retain) id<ASCategoryProtocol> selectedCategory;                                //@synthesize selectedCategory=_selectedCategory - In the implementation block
-(void)categoriesDatasource:(id)arg1 dataChangedAt:(id)arg2 ;
-(void)categoriesDatasourceBeganLoading:(id)arg1 ;
-(void)categoriesDatasourceEndedLoading:(id)arg1 ;
-(void)categoriesDatasource:(id)arg1 failedToLoad:(id)arg2 ;
-(id<ASCategoriesDatasourceProtocol>)categoriesDatasource;
-(void)toggleSelectionHighlight:(char)arg1 ;
-(void)fetchDatasourceIgnoringCache:(char)arg1 ;
-(void)setSelectedCategory:(id<ASCategoryProtocol>)arg1 ;
-(id<ASCategoryProtocol>)selectedCategory;
-(char)_collectionViewHasCells;
-(void)_refetchData;
-(id)init;
-(void)setDelegate:(id<ASCategoriesControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<ASCategoriesControllerDelegate>)delegate;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(float)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(int)arg3 ;
-(NSString *)title;
-(UICollectionView *)collectionView;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(int)arg3 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(CGSize)viewSize;
-(void)_storefrontDidChangeNotification:(id)arg1 ;
-(id)initWithDatasource:(id)arg1 ;
-(void)setViewSize:(CGSize)arg1 ;
@end

