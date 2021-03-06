/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:41 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIViewController.h>
#import <Maps/DataSourceDelegate.h>
#import <Maps/FilterCategoriesViewDelegate.h>
#import <Maps/ErrorResultsViewDelegate.h>
#import <libobjc.A.dylib/GEOLogContextDelegate.h>
#import <Maps/SearchResultQuickActionMenuPresenterDelegate.h>
#import <Maps/PPTTestChromeScrollable.h>

@protocol ActionCoordination;
@class DataSource, UITableView, ErrorResultsView, LoadingModeView, FilterCategoriesView, FavoritesDataSource, SearchResultsDataSource, NSDictionary, SearchResultQuickActionMenuPresenter, SearchViewController, NSArray, SearchInfo, NSString;

@interface ResultsViewController : UIViewController <DataSourceDelegate, FilterCategoriesViewDelegate, ErrorResultsViewDelegate, GEOLogContextDelegate, SearchResultQuickActionMenuPresenterDelegate, PPTTestChromeScrollable> {

	DataSource* _currentDataSource;
	UITableView* _contentTableView;
	ErrorResultsView* _errorResultsView;
	LoadingModeView* _loadingModeView;
	FilterCategoriesView* _filterView;
	unsigned _containerStyle;
	FavoritesDataSource* _favoritesDataSource;
	SearchResultsDataSource* _searchResultsDataSource;
	NSDictionary* _subcategories;
	char _footerHidden;
	char _footerHiddenWaiting;
	SearchResultQuickActionMenuPresenter* _quickActionMenuPresenter;
	char _showingFavorites;
	char _forceHideFooter;
	id<ActionCoordination> _delegate;
	SearchViewController* _searchViewController;
	NSArray* _resultsList;

}

@property (nonatomic,retain) NSArray * resultsList;                                           //@synthesize resultsList=_resultsList - In the implementation block
@property (assign,nonatomic,__weak) id<ActionCoordination> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) SearchViewController * searchViewController;              //@synthesize searchViewController=_searchViewController - In the implementation block
@property (assign,nonatomic) char showingFavorites;                                           //@synthesize showingFavorites=_showingFavorites - In the implementation block
@property (nonatomic,readonly) float contentHeight; 
@property (nonatomic,readonly) char hasResults; 
@property (assign,nonatomic) char forceHideFooter;                                            //@synthesize forceHideFooter=_forceHideFooter - In the implementation block
@property (nonatomic,readonly) SearchInfo * favoritesSearchResults; 
@property (assign,nonatomic) char footerHidden;                                               //@synthesize footerHidden=_footerHidden - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateTheme;
-(id)pptTestScrollView;
-(void)dataSource:(id)arg1 searchResultNeedsEditing:(id)arg2 completion:(/*^block*/id)arg3 ;
-(int)listForDataSource:(id)arg1 ;
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
-(id)loadingModeView;
-(char)quickActionMenuPresenter:(id)arg1 isPopularNearbyAtIndexPath:(id)arg2 ;
-(int)uiTargetForQuickActionMenu;
-(void)updateSearchSession;
-(void)updateDataSource;
-(void)searchDidCancel;
-(void)errorResultsView:(id)arg1 suggestionSelected:(id)arg2 ;
-(void)filterView:(id)arg1 indexSelected:(unsigned)arg2 ;
-(int)refineSearchSessionType;
-(id)refineSearchText;
-(SearchInfo *)favoritesSearchResults;
-(id)favoritesDataSource;
-(id)errorResultsView;
-(id)contentTableView;
-(id)noResultString;
-(char)hasSuggestionsForError;
-(void)setShowingFavorites:(char)arg1 ;
-(id)originalSearchInfo;
-(void)setResultsList:(NSArray *)arg1 ;
-(void)setForceHideFooter:(char)arg1 ;
-(void)_buildSubcategories;
-(void)waitingData;
-(void)updateFooterInset;
-(void)setFavoritesData;
-(void)_sendShowResultsAnalytics;
-(char)showingFavorites;
-(char)forceHideFooter;
-(char)footerHidden;
-(NSArray *)resultsList;
-(void)dataSourceUpdated:(id)arg1 ;
-(void)setDataSource:(id)arg1 ;
-(void)setDelegate:(id<ActionCoordination>)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(id<ActionCoordination>)delegate;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)setLayoutStyle:(unsigned)arg1 ;
-(int)currentUITargetForAnalytics;
-(int)currentMapViewTargetForAnalytics;
-(float)contentHeight;
-(void)setFooterHidden:(char)arg1 ;
-(void)setupConstraints;
-(void)showError:(id)arg1 ;
-(SearchViewController *)searchViewController;
-(void)setSearchViewController:(SearchViewController *)arg1 ;
-(char)hasResults;
-(void)_updateFooter;
-(char)showFooter;
@end

