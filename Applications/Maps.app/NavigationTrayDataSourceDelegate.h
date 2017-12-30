/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:40 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>

@protocol CollectionViewViewModelSearchAlongRouteCollectionViewViewModel, UIScrollViewDelegate;
@class UICollectionView, NSString;

@interface NavigationTrayDataSourceDelegate : NSObject <UICollectionViewDataSource, UICollectionViewDelegate> {

	UICollectionView* _collectionView;
	id<CollectionViewViewModel><SearchAlongRouteCollectionViewViewModel> _viewModel;
	id<UIScrollViewDelegate> _scrollViewDelegate;

}

@property (nonatomic,__weak,readonly) UICollectionView * collectionView;                                                           //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,__weak,readonly) id<CollectionViewViewModel><SearchAlongRouteCollectionViewViewModel> viewModel;              //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,__weak,readonly) id<UIScrollViewDelegate> scrollViewDelegate;                                                 //@synthesize scrollViewDelegate=_scrollViewDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCollectionView:(id)arg1 viewModel:(id)arg2 scrollViewDelegate:(id)arg3 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(UICollectionView *)collectionView;
-(id<UIScrollViewDelegate>)scrollViewDelegate;
-(id<CollectionViewViewModel><SearchAlongRouteCollectionViewViewModel>)viewModel;
@end

