/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:36 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/ControlContaineeViewController.h>
#import <UIKit/UISearchBarDelegate.h>
#import <UIKit/UITextFieldDelegate.h>
#import <UIKit/UIKeyboardInput.h>
#import <Maps/SearchDataSourceDelegate.h>
#import <Maps/BrowseDataSourceDelegate.h>
#import <Maps/RefreshViewDelegate.h>
#import <libobjc.A.dylib/GEOLogContextDelegate.h>
#import <Maps/SearchResultQuickActionMenuPresenterDelegate.h>
#import <Maps/PPTTestChromeScrollable.h>

@protocol UITableViewDelegateUITableViewDataSource;
@class PassthruSearchBar, UITextField, NSString, UITableView, RecentsDataSource, SearchDataSource, BrowseDataSource, DataSource, RefreshButtonViewController, SearchFieldItem, UIView, NSLayoutConstraint, MKViewWithHairline, TokenView, UIImage, GEOSearchCategory, SearchResultQuickActionMenuPresenter, ResultsViewController, PersonalizedItemManager;

@interface SearchViewController : ControlContaineeViewController <UISearchBarDelegate, UITextFieldDelegate, UIKeyboardInput, SearchDataSourceDelegate, BrowseDataSourceDelegate, RefreshViewDelegate, GEOLogContextDelegate, SearchResultQuickActionMenuPresenterDelegate, PPTTestChromeScrollable> {

	PassthruSearchBar* _searchBar;
	UITextField* _searchField;
	NSString* _userTypedSearchString;
	UITableView* _contentTableView;
	RecentsDataSource* _recentsDataSource;
	SearchDataSource* _searchDataSource;
	BrowseDataSource* _browseDataSource;
	DataSource*<UITableViewDelegate>*<UITableViewDataSource> _currentDataSource;
	RefreshButtonViewController* _refreshButtonViewController;
	SearchFieldItem* _searchItem;
	UIView* _defaultLeftView;
	UIView* _grabberView;
	UIView* _hideableFooterView;
	NSLayoutConstraint* _bottomHideableFooterConstraint;
	MKViewWithHairline* _grabberFooterView;
	TokenView* _tokenView;
	char _showResultsView;
	char _showRefreshFooter;
	char _needsUpdateContentState;
	char _needsSearchFieldLayout;
	char _hasEdited;
	char _wasEmptyAtFocus;
	UIImage* _defaultImage;
	GEOSearchCategory* _lastPopularCategory;
	SearchResultQuickActionMenuPresenter* _quickActionMenuPresenter;
	ResultsViewController* _resultsViewController;
	PersonalizedItemManager* _personalizedItemManager;
	UIView* _header;

}

@property (nonatomic,readonly) UIView * header;                                                                         //@synthesize header=_header - In the implementation block
@property (nonatomic,readonly) DataSource*<UITableViewDelegate>*<UITableViewDataSource> currentDataSource;              //@synthesize currentDataSource=_currentDataSource - In the implementation block
@property (nonatomic,readonly) ResultsViewController * resultsViewController;                                           //@synthesize resultsViewController=_resultsViewController - In the implementation block
@property (assign,nonatomic,__weak) PersonalizedItemManager * personalizedItemManager;                                  //@synthesize personalizedItemManager=_personalizedItemManager - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)floatingControlsOptions;
-(unsigned)defaultLayoutForStyle:(unsigned)arg1 ;
-(void)willBecomeCurrent:(char)arg1 ;
-(void)willChangeLayout:(unsigned)arg1 ;
-(void)didChangeLayout:(unsigned)arg1 ;
-(void)willChangeContainerStyle:(unsigned)arg1 ;
-(char)supportOverridenLayout;
-(char)useDefaultLayout;
-(char)updateConstraintsForLayout:(unsigned)arg1 ;
-(char)updateHeightConstraintWithValue:(float)arg1 ;
-(float)heightForLayout:(unsigned)arg1 ;
-(PersonalizedItemManager *)personalizedItemManager;
-(void)updateTheme;
-(id)pptTestScrollView;
-(id)currentSearchSession;
-(int)listForDataSource:(id)arg1 ;
-(void)dataSource:(id)arg1 itemTapped:(id)arg2 ;
-(void)setPersonalizedItemManager:(PersonalizedItemManager *)arg1 ;
-(void)quickActionMenuPresenter:(id)arg1 selectedDirectionsTo:(id)arg2 ;
-(void)quickActionMenuPresenter:(id)arg1 selectedCall:(id)arg2 ;
-(void)quickActionMenuPresenter:(id)arg1 selectedViewWebsiteFor:(id)arg2 ;
-(void)quickActionMenuPresenter:(id)arg1 selectedShareLocationOf:(id)arg2 ;
-(void)quickActionMenuPresenter:(id)arg1 selectedShowPlaceCard:(id)arg2 ;
-(char)shouldQuickActionMenuPresenter:(id)arg1 presentAtLocation:(CGPoint)arg2 inView:(id)arg3 ;
-(id)mapServiceTraitsForQuickActionPresenter:(id)arg1 ;
-(void)quickActionMenuPresenter:(id)arg1 selectedRemoveDroppedPinOf:(id)arg2 ;
-(void)quickActionMenuPresenter:(id)arg1 selectedViewTransitLinesOnMap:(id)arg2 ;
-(void)_addRecentPlaceForSearchResult:(id)arg1 ;
-(void)refreshViewContentSizeChanged;
-(void)refreshViewSelected:(id)arg1 ;
-(id)refreshButtonViewController;
-(void)refreshCurrentSearch;
-(id)suggestionsItemSource;
-(char)quickActionMenuPresenter:(id)arg1 isPopularNearbyAtIndexPath:(id)arg2 ;
-(int)uiTargetForQuickActionMenu;
-(id)currentTraitsForBrowseDataSource:(id)arg1 ;
-(void)browseDataSourceNearbySelected:(id)arg1 ;
-(id)animationForBrowseDataSource:(id)arg1 ;
-(void)enableTextNotification:(char)arg1 ;
-(ResultsViewController *)resultsViewController;
-(void)setNeedsUpdateContentState;
-(void)_setPlaceHolder;
-(void)_initPlaceholder;
-(void)showToken:(char)arg1 ;
-(void)setShowResultsView:(char)arg1 ;
-(void)setCurrentDataSource:(DataSource*<UITableViewDelegate>*<UITableViewDataSource>)arg1 ;
-(id)currentCategory;
-(void)_updateSearchFieldView;
-(void)setSearchFieldNeedsLayout;
-(void)updateSearchSession;
-(void)updateContentState;
-(void)updateDataSource;
-(void)updateSeachFieldWithItem:(id)arg1 ;
-(void)cleanSearchAndRestoreCurrentSearchString;
-(void)cleanSearch;
-(void)cleanSearchAndStartEditing;
-(void)showLoadingState;
-(void)searchDidCancel;
-(void)searchBarBecomeFirstResponder;
-(void)sendSearchRequestFromRefresh:(char)arg1 ;
-(void)sendACRequest;
-(void)setupResultsConstraints;
-(float)heightForContaineeLayoutMedium;
-(void)showGrabberFooter:(char)arg1 ;
-(void)updateRefreshFooter;
-(void)addRefreshFooter:(char)arg1 animated:(char)arg2 ;
-(void)selectNearByCategoryAtIndex:(unsigned)arg1 ;
-(void)scrollContentToPosition:(int)arg1 ;
-(id)scrollViewForProactive;
-(DataSource*<UITableViewDelegate>*<UITableViewDataSource>)currentDataSource;
-(void)dataSourceUpdated:(id)arg1 ;
-(id)init;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidLayoutSubviews;
-(char)textFieldShouldBeginEditing:(id)arg1 ;
-(void)endEditing;
-(void)viewDidLoad;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(char)textFieldShouldEndEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(char)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(char)textFieldShouldClear:(id)arg1 ;
-(char)textFieldShouldReturn:(id)arg1 ;
-(void)searchBarCancelButtonClicked:(id)arg1 ;
-(char)hasCategory;
-(int)currentUITargetForAnalytics;
-(int)currentMapViewTargetForAnalytics;
-(void)_textFieldDidChange:(id)arg1 ;
-(void)setupConstraints;
-(UIView *)header;
-(void)mapView:(id)arg1 regionDidChangeAnimated:(char)arg2 ;
-(char)hasSearchResults;
@end

