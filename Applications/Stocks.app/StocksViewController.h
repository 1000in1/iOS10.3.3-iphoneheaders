/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:36 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Stocks.app/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Stocks/Stocks-Structs.h>
#import <UIKit/UIViewController.h>
#import <Stocks/StockChartViewDelegate.h>
#import <Stocks/StocksStatusViewDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <Stocks/StocksTopLevelViewController.h>

@class UIView, StocksListView, StocksStatusView, UITapGestureRecognizer, StocksLayout, NSMutableDictionary, StockChartView, StockInfoView, StockNewsView, UIScrollView, NSMutableArray, NSString;

@interface StocksViewController : UIViewController <StockChartViewDelegate, StocksStatusViewDelegate, UIScrollViewDelegate, StocksTopLevelViewController> {

	UIView* _blurView;
	StocksListView* _listView;
	StocksStatusView* _statusView;
	UIView* _fullscreenBlackoutView;
	UITapGestureRecognizer* _chartTapGesture;
	char _animatingRotation;
	char _fullScreen;
	StocksLayout* _currentLayout;
	NSMutableDictionary* _layoutCache;
	StocksLayout* _transitionLayout;
	StockChartView* _chartView;
	StockInfoView* _infoView;
	StockNewsView* _newsView;
	UIScrollView* _scrollView;
	UIView* _grayView;
	UIView* _secondaryGrayView;
	UIView* _statusViewDivider;
	UIView* _primaryHorizontalDivider;
	UIView* _secondaryHorizontalDivider;
	UIView* _primaryVerticalDivider;
	UIView* _secondaryVerticalDivider;
	UIView* _blackView;
	NSMutableArray* _scrollViewSubviews;
	NSMutableArray* _chartViews;
	int _savedPageForInfiniteScrollView;

}

@property (nonatomic,retain) NSMutableDictionary * layoutCache;                                //@synthesize layoutCache=_layoutCache - In the implementation block
@property (nonatomic,retain) StocksLayout * currentLayout;                                     //@synthesize currentLayout=_currentLayout - In the implementation block
@property (nonatomic,retain) StocksLayout * transitionLayout;                                  //@synthesize transitionLayout=_transitionLayout - In the implementation block
@property (assign,nonatomic,__weak) StockChartView * chartView;                                //@synthesize chartView=_chartView - In the implementation block
@property (assign,nonatomic,__weak) StockInfoView * infoView;                                  //@synthesize infoView=_infoView - In the implementation block
@property (assign,nonatomic,__weak) StockNewsView * newsView;                                  //@synthesize newsView=_newsView - In the implementation block
@property (nonatomic,retain) UIScrollView * scrollView;                                        //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,nonatomic,__weak) UIView * grayView;                                         //@synthesize grayView=_grayView - In the implementation block
@property (assign,nonatomic,__weak) UIView * secondaryGrayView;                                //@synthesize secondaryGrayView=_secondaryGrayView - In the implementation block
@property (nonatomic,retain) UIView * statusViewDivider;                                       //@synthesize statusViewDivider=_statusViewDivider - In the implementation block
@property (nonatomic,retain) UIView * primaryHorizontalDivider;                                //@synthesize primaryHorizontalDivider=_primaryHorizontalDivider - In the implementation block
@property (nonatomic,retain) UIView * secondaryHorizontalDivider;                              //@synthesize secondaryHorizontalDivider=_secondaryHorizontalDivider - In the implementation block
@property (nonatomic,retain) UIView * primaryVerticalDivider;                                  //@synthesize primaryVerticalDivider=_primaryVerticalDivider - In the implementation block
@property (nonatomic,retain) UIView * secondaryVerticalDivider;                                //@synthesize secondaryVerticalDivider=_secondaryVerticalDivider - In the implementation block
@property (nonatomic,retain) UIView * blackView;                                               //@synthesize blackView=_blackView - In the implementation block
@property (nonatomic,retain) NSMutableArray * scrollViewSubviews;                              //@synthesize scrollViewSubviews=_scrollViewSubviews - In the implementation block
@property (nonatomic,retain) NSMutableArray * chartViews;                                      //@synthesize chartViews=_chartViews - In the implementation block
@property (assign,nonatomic) int currentPageIndex; 
@property (assign,nonatomic) int savedPageForInfiniteScrollView;                               //@synthesize savedPageForInfiniteScrollView=_savedPageForInfiniteScrollView - In the implementation block
@property (assign,nonatomic) char fullScreen;                                                  //@synthesize fullScreen=_fullScreen - In the implementation block
@property (getter=isAnimatingRotation,nonatomic,readonly) char animatingRotation;              //@synthesize animatingRotation=_animatingRotation - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)_shouldForwardViewWillTransitionToSize;
-(void)prepareForApplicationScreenshot;
-(void)setNewsView:(StockNewsView *)arg1 ;
-(StockNewsView *)newsView;
-(int)statusViewCurrentPageForPageIndicator:(id)arg1 ;
-(void)statusView:(id)arg1 updatePageControlForDirection:(int)arg2 ;
-(void)setupDefaultChartIntervalIfNecessary;
-(void)setGrayView:(UIView *)arg1 ;
-(void)setSecondaryGrayView:(UIView *)arg1 ;
-(void)chartTapped:(id)arg1 ;
-(void)_createDetailViews;
-(void)_createDividers;
-(UIView *)primaryVerticalDivider;
-(id)layoutForSize:(CGSize)arg1 fullScreen:(char)arg2 ;
-(NSMutableArray *)chartViews;
-(void)setStatusViewDivider:(UIView *)arg1 ;
-(void)setPrimaryHorizontalDivider:(UIView *)arg1 ;
-(void)setSecondaryHorizontalDivider:(UIView *)arg1 ;
-(void)setPrimaryVerticalDivider:(UIView *)arg1 ;
-(void)setSecondaryVerticalDivider:(UIView *)arg1 ;
-(NSMutableArray *)scrollViewSubviews;
-(void)setScrollViewSubviews:(NSMutableArray *)arg1 ;
-(void)_applyLayout:(id)arg1 ;
-(void)restoreSavedState;
-(void)setSavedPageForInfiniteScrollView:(int)arg1 ;
-(void)_setUpScrollViewsWithLayout:(id)arg1 ;
-(int)savedPageForInfiniteScrollView;
-(UIView *)grayView;
-(UIView *)statusViewDivider;
-(UIView *)primaryHorizontalDivider;
-(UIView *)secondaryHorizontalDivider;
-(UIView *)secondaryVerticalDivider;
-(UIView *)blackView;
-(void)moveScrollViewOffset:(id)arg1 ;
-(void)positionScrollViewSubviews;
-(void)_viewDidLayoutSubviews;
-(void)_prepareForTransitionToSize:(CGSize)arg1 ;
-(void)_animateTransitionToSize:(CGSize)arg1 duration:(double)arg2 ;
-(void)_completeTransitionToSize:(CGSize)arg1 ;
-(int)visibleDetailViewType;
-(void)setVisibleDetailViewType:(int)arg1 ;
-(void)updateChartViews;
-(void)_flashNewsViewScrollIndicatorsIfNeeded;
-(id)_stockWithOffset:(int)arg1 ;
-(void)centerScrollViewToPage:(int)arg1 ;
-(void)setLayoutCache:(NSMutableDictionary *)arg1 ;
-(UIView *)secondaryGrayView;
-(void)setBlackView:(UIView *)arg1 ;
-(void)setChartViews:(NSMutableArray *)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewWillBeginDecelerating:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(unsigned)supportedInterfaceOrientations;
-(char)shouldAutorotate;
-(void)loadView;
-(UIScrollView *)scrollView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(StocksLayout *)currentLayout;
-(void)setCurrentLayout:(StocksLayout *)arg1 ;
-(char)isLoading;
-(void)setFullScreen:(char)arg1 ;
-(char)fullScreen;
-(id)statusView;
-(int)currentPageIndex;
-(void)setCurrentPageIndex:(int)arg1 ;
-(NSMutableDictionary *)layoutCache;
-(StocksLayout *)transitionLayout;
-(void)setTransitionLayout:(StocksLayout *)arg1 ;
-(void)saveState;
-(id)layoutForSize:(CGSize)arg1 ;
-(void)setChartView:(StockChartView *)arg1 ;
-(StockChartView *)chartView;
-(void)stockChartView:(id)arg1 chartIntervalDidChange:(int)arg2 ;
-(char)stockChartViewIsCurrentChartView:(id)arg1 ;
-(void)stockChartViewNeedsLoadingStatusUpdated:(id)arg1 ;
-(void)stockChartViewFinishedInitialLoad:(id)arg1 ;
-(char)isAnimatingRotation;
-(StockInfoView *)infoView;
-(void)setInfoView:(StockInfoView *)arg1 ;
-(id)listView;
@end

