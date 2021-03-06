/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:51 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileCal/MobileCal-Structs.h>
#import <UIKit/UIScrollView.h>
#import <MobileCal/DayNavigationViewCellDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol DayNavigationViewCellFactory, DayNavigationWeekScrollViewDelegate;
@class NSObject, NSMutableArray, NSCalendar, NSDate, NSString;

@interface DayNavigationWeekScrollView : UIScrollView <DayNavigationViewCellDelegate, UIGestureRecognizerDelegate> {

	NSObject*<DayNavigationViewCellFactory> _cellFactory;
	NSMutableArray* _cells;
	float _cellWidth;
	float _firstCellX;
	float _pageAlignment;
	float _targetX;
	char _isScrolling;
	char _needToLayoutCells;
	char _needToHighlightCellAfterScrolling;
	char _recentering;
	float _contentOffsetBeforeResizeInCellWidths;
	NSCalendar* _calendar;
	NSDate* _today;
	NSDate* _selectedDate;
	int _selectedIndex;
	int _sideViews;
	int _maxBufferViews;
	int _weekLength;
	char _decelerationWasLastInput;
	id<DayNavigationWeekScrollViewDelegate> _navDelegate;

}

@property (nonatomic,retain) NSDate * today; 
@property (nonatomic,readonly) int sideViews; 
@property (nonatomic,readonly) int maxBufferViews; 
@property (nonatomic,readonly) NSDate * selectedDate; 
@property (nonatomic,readonly) NSDate * startDateOfSelectedWeek; 
@property (nonatomic,readonly) int cellsDisplayed; 
@property (nonatomic,readonly) NSObject*<DayNavigationViewCellFactory> cellFactory; 
@property (assign,nonatomic,__weak) id<DayNavigationWeekScrollViewDelegate> navDelegate;              //@synthesize navDelegate=_navDelegate - In the implementation block
@property (nonatomic,readonly) CGSize cellSize; 
@property (nonatomic,readonly) int firstVisibleDayOffsetFromSelectedDay; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setNavDelegate:(id<DayNavigationWeekScrollViewDelegate>)arg1 ;
-(id<DayNavigationWeekScrollViewDelegate>)navDelegate;
-(id)_weekStartForDate:(id)arg1 ;
-(void)dayNavigationCellTouchUpOccurred:(id)arg1 ;
-(void)pulseToday;
-(void)willBeginDragging;
-(NSObject*<DayNavigationViewCellFactory>)cellFactory;
-(id)initWithFrame:(CGRect)arg1 calendar:(id)arg2 selectedDate:(id)arg3 cellFactory:(id)arg4 ;
-(void)setSelectedDate:(id)arg1 animated:(char)arg2 ;
-(int)cellsDisplayed;
-(id)selectedDateAfterScrollingToPoint:(CGPoint)arg1 ;
-(void)setSelectedDateWithoutScrolling:(id)arg1 ;
-(void)updateHighlightIfNeeded;
-(void)willEndDraggingTargetX:(float)arg1 ;
-(void)updateOverlays;
-(char)canAnimateToDate:(id)arg1 ;
-(void)stopPulsingToday;
-(NSDate *)startDateOfSelectedWeek;
-(void)_createSubviewsWithFirstVisibleDate:(id)arg1 ;
-(int)sideViews;
-(int)_firstVisibleIndex;
-(int)_lastVisibleIndex;
-(int)_indexForDate:(id)arg1 ;
-(void)_addNewCellToSide:(char)arg1 ;
-(void)_setCell:(id)arg1 highlight:(char)arg2 animated:(char)arg3 ;
-(int)_indexOfCellToScrollToForDateAndBuildIfNeeded:(id)arg1 ;
-(float)_alignXToPage:(float)arg1 ;
-(void)_setOffscreenCellsHidden:(char)arg1 animated:(char)arg2 ;
-(void)_didFinishDecelerating;
-(int)_cellIndexForX:(float)arg1 ;
-(void)_setCell:(id)arg1 toDate:(id)arg2 ;
-(int)_firstVisibleIndexInView;
-(void)_adjustContentOffsetIfNeeded;
-(void)_adjustCellsIfNeeded;
-(int)_loadedBufferViewsRight;
-(int)_loadedBufferViewsLeft;
-(int)maxBufferViews;
-(float)_offsetAllViews:(float)arg1 ;
-(id)_selectedDateAsCalendarDate;
-(char)_isDateWeekend:(id)arg1 ;
-(void)setFirstVisibleDate:(id)arg1 ;
-(void)setToSelectedDateAtLocation:(CGPoint)arg1 ;
-(int)firstVisibleDayOffsetFromSelectedDay;
-(void)setToday:(NSDate *)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)sizeToFit;
-(void)_layoutCells;
-(void)setCalendar:(id)arg1 ;
-(void)didScroll;
-(CGSize)cellSize;
-(void)didFinishScrolling;
-(void)significantTimeChangeOccurred;
-(NSDate *)selectedDate;
-(NSDate *)today;
-(float)_cellWidth;
@end

