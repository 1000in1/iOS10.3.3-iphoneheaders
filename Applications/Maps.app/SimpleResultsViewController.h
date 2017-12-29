/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:41 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/ContaineeViewController.h>
#import <Maps/HeaderViewDelegate.h>
#import <Maps/DataSourceDelegate.h>
#import <libobjc.A.dylib/GEOLogContextDelegate.h>
#import <Maps/SearchResultQuickActionMenuPresenterDelegate.h>

@protocol ShareDelegate, ActionCoordination, SimpleResultsViewControllerDelegate, SARSearchResultTableViewCellDelegate;
@class ContainerHeaderView, UITableView, SearchResultsDataSource, SearchResultQuickActionMenuPresenter, VKLabelMarker, NSString;

@interface SimpleResultsViewController : ContaineeViewController <HeaderViewDelegate, DataSourceDelegate, GEOLogContextDelegate, SearchResultQuickActionMenuPresenterDelegate> {

	id<ShareDelegate> _shareDelegate;
	ContainerHeaderView* _titleHeaderView;
	UITableView* _tableView;
	SearchResultsDataSource* _resultsDataSource;
	SearchResultQuickActionMenuPresenter* _quickActionMenuPresenter;
	char _enableQuickActionMenu;
	char _isPresentingSearchAlongTheRouteResults;
	VKLabelMarker* _cluster;
	id<ActionCoordination> _coordinator;
	id<SimpleResultsViewControllerDelegate> _resultsDelegate;
	id<SARSearchResultTableViewCellDelegate> _searchAlongTheRouteCellDelegate;

}

@property (nonatomic,retain) VKLabelMarker * cluster;                                                                      //@synthesize cluster=_cluster - In the implementation block
@property (assign,nonatomic,__weak) id<ActionCoordination> coordinator;                                                    //@synthesize coordinator=_coordinator - In the implementation block
@property (assign,nonatomic,__weak) id<SimpleResultsViewControllerDelegate> resultsDelegate;                               //@synthesize resultsDelegate=_resultsDelegate - In the implementation block
@property (assign,nonatomic) char enableQuickActionMenu;                                                                   //@synthesize enableQuickActionMenu=_enableQuickActionMenu - In the implementation block
@property (assign,nonatomic) char isPresentingSearchAlongTheRouteResults;                                                  //@synthesize isPresentingSearchAlongTheRouteResults=_isPresentingSearchAlongTheRouteResults - In the implementation block
@property (assign,nonatomic,__weak) id<SARSearchResultTableViewCellDelegate> searchAlongTheRouteCellDelegate;              //@synthesize searchAlongTheRouteCellDelegate=_searchAlongTheRouteCellDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)willBecomeCurrent:(char)arg1 ;
-(void)willChangeContainerStyle:(unsigned)arg1 ;
-(char)updateConstraintsForLayout:(unsigned)arg1 ;
-(float)heightForLayout:(unsigned)arg1 ;
-(void)headerViewButtonTapped:(id)arg1 ;
-(void)setCoordinator:(id<ActionCoordination>)arg1 ;
-(void)dataSource:(id)arg1 itemTapped:(id)arg2 ;
-(void)quickActionMenuPresenter:(id)arg1 selectedDirectionsTo:(id)arg2 ;
-(void)quickActionMenuPresenter:(id)arg1 selectedCall:(id)arg2 ;
-(void)quickActionMenuPresenter:(id)arg1 selectedViewWebsiteFor:(id)arg2 ;
-(void)quickActionMenuPresenter:(id)arg1 selectedShareLocationOf:(id)arg2 ;
-(void)quickActionMenuPresenter:(id)arg1 selectedShowPlaceCard:(id)arg2 ;
-(char)shouldQuickActionMenuPresenter:(id)arg1 presentAtLocation:(CGPoint)arg2 inView:(id)arg3 ;
-(id)mapServiceTraitsForQuickActionPresenter:(id)arg1 ;
-(void)quickActionMenuPresenter:(id)arg1 selectedRemoveDroppedPinOf:(id)arg2 ;
-(void)quickActionMenuPresenter:(id)arg1 selectedViewTransitLinesOnMap:(id)arg2 ;
-(void)setIsPresentingSearchAlongTheRouteResults:(char)arg1 ;
-(void)setSearchAlongTheRouteCellDelegate:(id<SARSearchResultTableViewCellDelegate>)arg1 ;
-(char)isPresentingSearchAlongTheRouteResults;
-(id<SARSearchResultTableViewCellDelegate>)searchAlongTheRouteCellDelegate;
-(char)quickActionMenuPresenter:(id)arg1 isPopularNearbyAtIndexPath:(id)arg2 ;
-(int)uiTargetForQuickActionMenu;
-(id)initWithShareDelegate:(id)arg1 ;
-(id)initWithShareDelegate:(id)arg1 visualEffectDisabled:(char)arg2 ;
-(char)containsMapItem:(id)arg1 ;
-(void)_updateHeaderWithContainerStyle:(unsigned)arg1 traitCollection:(id)arg2 ;
-(char)enableQuickActionMenu;
-(void)setEnableQuickActionMenu:(char)arg1 ;
-(void)dataSourceUpdated:(id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLoad;
-(id<ActionCoordination>)coordinator;
-(VKLabelMarker *)cluster;
-(int)currentUITargetForAnalytics;
-(int)currentMapViewTargetForAnalytics;
-(id<SimpleResultsViewControllerDelegate>)resultsDelegate;
-(void)setResultsDelegate:(id<SimpleResultsViewControllerDelegate>)arg1 ;
-(void)updateTitle;
-(void)setSearchResults:(id)arg1 ;
-(void)setCluster:(VKLabelMarker *)arg1 ;
@end
