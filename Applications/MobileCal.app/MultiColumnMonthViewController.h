/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:51 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileCal/MobileCal-Structs.h>
#import <MobileCal/CompactMonthViewController.h>
#import <MobileCal/CompactMonthListViewControllerDelegate.h>
#import <libobjc.A.dylib/EKEventViewDelegate.h>
#import <libobjc.A.dylib/EKEventViewDelegatePrivate.h>
#import <MobileCal/ListViewControllerDelegate.h>

@class EKCalendarDate, TappableDayNumber, CompactMonthWeekView, UIView, CompactMonthListViewController, ListViewController, NSCalendar, UIButton, PaletteView, UINavigationController, UIViewController, LargeDayNavigationWrapperView, NSTimer, UITapGestureRecognizer, UILongPressGestureRecognizer, NSString;

@interface MultiColumnMonthViewController : CompactMonthViewController <CompactMonthListViewControllerDelegate, EKEventViewDelegate, EKEventViewDelegatePrivate, ListViewControllerDelegate> {

	EKCalendarDate* _pressedDay;
	TappableDayNumber* _pressHighlight;
	CompactMonthWeekView* _pressedMonthView;
	CompactMonthWeekView* _selectedMonthWeekView;
	UIView* _listViewContainer;
	CompactMonthListViewController* _singleDayListViewController;
	ListViewController* _multiDayListViewController;
	NSCalendar* _weekCalculationCalendar;
	UIView* _dividerLineBetweenListAndMonth;
	UIView* _dividerLineBetweenListAndEventDetails;
	char _shouldSetSelectedDate;
	char _isRotating;
	char _loadingOccurrenceCache;
	char _currentlyVisible;
	char _needToReloadEventsOnAppear;
	char _eventLoadingSuspendedForScroll;
	char _reloadAfterStoppedScrolling;
	EKCalendarDate* _navigationBarDisplayedDate;
	char _editorDismissedFromDelete;
	char _listViewContainerDidScrollMessagesSuppressed;
	char _viewingEventDetailsColumn;
	UIButton* _cancelEventDetailViewModeButton;
	PaletteView* _palette;
	UINavigationController* _eventDetailsColumnNavigationController;
	UIViewController* _blankViewController;
	LargeDayNavigationWrapperView* _navigationWrapperView;
	UIViewController* _currentDetailsView;
	NSTimer* _refreshTimer;
	UITapGestureRecognizer* _dayCellsTapGestureRecognizer;
	UILongPressGestureRecognizer* _dayCellsScrubbingGestureRecognizer;

}

@property (nonatomic,retain) UITapGestureRecognizer * dayCellsTapGestureRecognizer;                          //@synthesize dayCellsTapGestureRecognizer=_dayCellsTapGestureRecognizer - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * dayCellsScrubbingGestureRecognizer;              //@synthesize dayCellsScrubbingGestureRecognizer=_dayCellsScrubbingGestureRecognizer - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)_shouldForwardViewWillTransitionToSize;
-(void)didEndScrolling;
-(void)showDate:(id)arg1 animated:(char)arg2 ;
-(void)showEvent:(id)arg1 animated:(char)arg2 showDetails:(char)arg3 context:(NSDictionary*)arg4 ;
-(void)showEvent:(id)arg1 animated:(char)arg2 showDetails:(char)arg3 showComments:(char)arg4 context:(NSDictionary*)arg5 ;
-(void)listViewController:(id)arg1 didScrollToDate:(id)arg2 ;
-(char)wantsScrollingMessagesOnEveryFrameFromListViewController:(id)arg1 ;
-(char)listViewControllerContainerHandlesShowEvent;
-(void)showEvent:(id)arg1 animated:(char)arg2 context:(NSDictionary*)arg3 ;
-(void)updatePalette:(id)arg1 ;
-(id)bestDateForNewEvent;
-(int)supportedToggleMode;
-(void)updateNavigationBarDisplayedDateString;
-(float)heightForSubviewWithCalendarDate:(id)arg1 ;
-(float)decelerationDistanceThresholdForPreferringMonthBoundary;
-(float)decelerationDistanceThresholdForDisplayingMonthBanner;
-(float)decelerationDistanceThresholdToStopShowingMonthBanner;
-(float)showDateVerticalOffset;
-(void)willEndDraggingWithVelocity:(CGPoint)arg1 targetContentOffset:(inout CGPoint*)arg2 ;
-(CGRect)frameForWeekContainingDate:(id)arg1 ;
-(int)presentationStyleOverrideForChildViewControllers;
-(void)_occurrencesChanged:(id)arg1 ;
-(void)compactMonthListViewController:(id)arg1 wantsToCommitViewControllerFromPreview:(id)arg2 ;
-(void)compactMonthListViewController:(id)arg1 didSelectEvent:(id)arg2 ;
-(id)pushedWeekViewControllerWithDate:(id)arg1 animated:(char)arg2 ;
-(void)setupUIForTraitCollection:(id)arg1 ;
-(id)createInitialViewForDate:(id)arg1 ;
-(float)topInsetForSubviewWithCalendarDate:(id)arg1 ;
-(unsigned)maximumCachedReusableViews;
-(char)shouldUpdateSelectedDateWithCentralView;
-(id)newTopViewAboveViewWithCalendarDate:(id)arg1 ;
-(id)newBottomViewBelowViewWithCalendarDate:(id)arg1 ;
-(void)showDate:(id)arg1 animated:(char)arg2 completionBlock:(/*^block*/id)arg3 ;
-(CGRect)frameOfListView;
-(void)_cachedOccurrencesChanged:(id)arg1 ;
-(void)_setupListViewController;
-(void)_updateListViewFrame;
-(void)_setSelectedDay:(id)arg1 onMonthWeekView:(id)arg2 animated:(char)arg3 ;
-(void)_loadEventsForAllSubviews;
-(void)_removeMonthHighlight;
-(id)_loadEventsForStartDate:(id)arg1 endDate:(id)arg2 ;
-(char)_shouldAnimateDots;
-(void)_showDetailsForEvent:(id)arg1 animated:(char)arg2 showComments:(char)arg3 context:(NSDictionary*)arg4 ;
-(id)monthWeekViewForCalendarDate:(id)arg1 ;
-(void)setDayCellsTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(UITapGestureRecognizer *)dayCellsTapGestureRecognizer;
-(void)_tapGestureCallback:(id)arg1 ;
-(void)setDayCellsScrubbingGestureRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(UILongPressGestureRecognizer *)dayCellsScrubbingGestureRecognizer;
-(void)_scrubGestureCallback:(id)arg1 ;
-(void)monthView:(id)arg1 gestureBegan:(id)arg2 ;
-(void)monthView:(id)arg1 gestureEnded:(id)arg2 ;
-(void)monthView:(id)arg1 gestureChanged:(id)arg2 ;
-(void)monthView:(id)arg1 gestureCancelled:(id)arg2 ;
-(void)_setSelectedDay:(id)arg1 ;
-(id)_dayInMonth:(id)arg1 fromGesture:(id)arg2 ;
-(void)_createMonthHighlightForMonthView:(id)arg1 day:(id)arg2 ;
-(id)_viewFromGesture:(id)arg1 ;
-(void)_loadEventsForViewsInRangeStartingAt:(id)arg1 endingAt:(id)arg2 ;
-(float)_scrollViewVerticalVelocity;
-(void)_showDetailsForEvent:(id)arg1 animated:(char)arg2 context:(NSDictionary*)arg3 ;
-(int)eventCountDisplayedForDate:(id)arg1 ;
-(float)rightSplitViewSideInset;
-(float)detailsLeftInsetAdjustment;
-(float)detailsRightInsetAdjustment;
-(float)palleteViewXOffset;
-(char)_shouldDisplayThreeColumns;
-(char)_viewingEventDetailsColumn;
-(void)_autoSelectEvent;
-(void)_slideToHideEventDetailsAnimated:(char)arg1 ;
-(void)_refreshListView;
-(void)_resetPaletteState;
-(void)_invalidateUpdateTimer;
-(void)_updateInfiniteScrollViewFrame;
-(void)_updateEventDetailsColumnViewFrame;
-(char)_threeColumnsDisplayIsAllowed;
-(void)_slideToAnimatePalleteShowingBackButton:(char)arg1 animated:(char)arg2 ;
-(void)_setPaletteDisplaced;
-(void)_cancelEventDetailViewModeButtonPressed:(id)arg1 ;
-(char)_monthWeekViewsUseVerticalCompression;
-(char)_monthWeekViewsUseHorizontalCompression;
-(void)_scrollListToNewSelectedDateAnimated:(char)arg1 ;
-(char)_allowedToDisplayEventDetailsColumn;
-(void)_createEventDetailsColumn;
-(float)_showDateVerticalOffsetWithVerticalCompression:(char)arg1 ;
-(float)_listviewColumnCollapsedWidth;
-(void)_updateListViewModeForCurrentTraits;
-(char)_listViewShowsSingleDay;
-(void)_slideToShowEventDetails:(id)arg1 animated:(char)arg2 ;
-(void)dealloc;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLoad;
-(unsigned)edgesForExtendedLayout;
-(void)didScroll;
-(CGRect)frameForTodayHighlight;
-(void)eventViewControllerWillFinishEditingEvent:(id)arg1 deleted:(char)arg2 ;
-(void)eventViewController:(id)arg1 requestsDismissalOfEditViewController:(id)arg2 ;
-(char)eventViewControllerShouldHideInlineEditButton;
-(void)eventViewControllerWillDisappear:(id)arg1 ;
-(void)eventViewController:(id)arg1 didCompleteWithAction:(int)arg2 ;
-(void)_startUpdateTimer;
-(void)_updateTimerFired;
@end

