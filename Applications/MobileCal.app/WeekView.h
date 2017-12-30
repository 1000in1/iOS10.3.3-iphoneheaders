/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:50 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileCal/MobileCal-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/EKDayViewContentDelegate.h>
#import <MobileCal/WeekAllDayViewDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/EKCurrentTimeMarkerViewUpdating.h>

@protocol WeekViewDataSource, WeekViewDelegate;
@class WeekAllDayView, EKDayViewContent, UIScrollView, UIImageView, UIImage, CalendarOccurrencesCollection, NSDateComponents, NSCalendar, NSDate, NSTimeZone, NSArray, NSString;

@interface WeekView : UIView <EKDayViewContentDelegate, WeekAllDayViewDelegate, UIScrollViewDelegate, EKCurrentTimeMarkerViewUpdating> {

	WeekAllDayView* _allDayView;
	EKDayViewContent* _content;
	UIScrollView* _scrollView;
	UIImageView* _gridExtensionView;
	int _daysToDisplay;
	UIImage* _verticalGridExtensionImage;
	CalendarOccurrencesCollection* _events;
	NSDateComponents* _highlightedDateComponents;
	int _selectedSecond;
	id<WeekViewDataSource> _dataSource;
	id<WeekViewDelegate> _delegate;
	NSDateComponents* _weekStartDate;
	NSCalendar* _calendar;
	int _orientation;
	float _hourHeightScale;

}

@property (assign,nonatomic,__weak) id<WeekViewDataSource> dataSource;                  //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<WeekViewDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSDateComponents * weekStartDate;                            //@synthesize weekStartDate=_weekStartDate - In the implementation block
@property (nonatomic,readonly) NSDateComponents * lastDateOfWeek; 
@property (nonatomic,readonly) NSDate * lastSecondOfWeek; 
@property (nonatomic,copy) NSCalendar * calendar;                                       //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,copy) NSTimeZone * timeZone; 
@property (nonatomic,readonly) char hasAllDayEvents; 
@property (assign,nonatomic) int orientation;                                           //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) float hourHeightScale;                                     //@synthesize hourHeightScale=_hourHeightScale - In the implementation block
@property (nonatomic,retain) NSDateComponents * highlightedDateComponents; 
@property (nonatomic,readonly) WeekAllDayView * allDayView;                             //@synthesize allDayView=_allDayView - In the implementation block
@property (nonatomic,readonly) EKDayViewContent * content;                              //@synthesize content=_content - In the implementation block
@property (nonatomic,readonly) UIScrollView * scrollView;                               //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,readonly) NSArray * occurrenceViews; 
@property (assign,nonatomic) char showsTimeMarker; 
@property (assign,nonatomic) int firstVisibleSecond; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(float)dayWidthForOrientation:(int)arg1 ;
+(float)windowSpaceForOrientation:(int)arg1 ;
+(unsigned)displayedDaysForOrientation:(int)arg1 ;
+(float)standardWidthForOrientation:(int)arg1 ;
-(id)weekAllDayViewForTimeframeBefore:(id)arg1 ;
-(id)weekAllDayViewForTimeframeAfter:(id)arg1 ;
-(void)weekAllDayViewDidScroll:(id)arg1 ;
-(void)weekAllDayView:(id)arg1 didSelectEvent:(id)arg2 ;
-(void)weekAllDayViewEmptySpaceClick:(id)arg1 onDay:(double)arg2 ;
-(void)showOverlayMonthInCellAtOffset:(float)arg1 animated:(char)arg2 ;
-(id)initWithFrame:(CGRect)arg1 orientation:(int)arg2 daysToDisplay:(int)arg3 ;
-(void)scrollToSecond:(int)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)_updateTimeMarkerDotDay;
-(void)_updateHighlightedDay;
-(NSDateComponents *)weekStartDate;
-(NSDate *)lastSecondOfWeek;
-(void)scrollToEvent:(id)arg1 animateWithDuration:(double)arg2 completion:(/*^block*/id)arg3 ;
-(id)viewForEvent:(id)arg1 ;
-(id)_verticalGridExtensionImage;
-(id)dateForXOffset:(float)arg1 ;
-(void)setWeekStartDate:(NSDateComponents *)arg1 ;
-(void)setHighlightedDateComponents:(NSDateComponents *)arg1 ;
-(NSDateComponents *)highlightedDateComponents;
-(NSDateComponents *)lastDateOfWeek;
-(void)adjustForVisibleRect:(CGRect)arg1 ;
-(void)updateTimeMarkerForDayChange;
-(char)hasAllDayEvents;
-(id)_createOccurrenceView:(id)arg1 ;
-(void)scrollToEvent:(id)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(char)isAnimatingScroll;
-(char)scrollerIsParentOfView:(id)arg1 isAllDay:(char)arg2 ;
-(float)yPositionPerhapsMatchingAllDayOccurrence:(id)arg1 atPoint:(CGPoint)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDataSource:(id<WeekViewDataSource>)arg1 ;
-(void)setDelegate:(id<WeekViewDelegate>)arg1 ;
-(void)reloadData;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<WeekViewDataSource>)dataSource;
-(id<WeekViewDelegate>)delegate;
-(EKDayViewContent *)content;
-(void)setOrientation:(int)arg1 ;
-(int)orientation;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(UIScrollView *)scrollView;
-(NSTimeZone *)timeZone;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(NSCalendar *)calendar;
-(NSArray *)occurrenceViews;
-(void)dayViewContent:(id)arg1 didSelectEvent:(id)arg2 ;
-(void)dayViewContent:(id)arg1 didTapPinnedOccurrence:(id)arg2 ;
-(void)dayViewContent:(id)arg1 didTapInEmptySpaceOnDay:(double)arg2 ;
-(void)setShowsTimeMarker:(char)arg1 ;
-(float)_verticalOffset;
-(void)updateMarkerPosition;
-(void)setFirstVisibleSecond:(int)arg1 ;
-(char)showsTimeMarker;
-(int)_secondAtPosition:(float)arg1 ;
-(int)firstVisibleSecond;
-(float)_positionOfSecond:(int)arg1 ;
-(void)setHourHeightScale:(float)arg1 ;
-(WeekAllDayView *)allDayView;
-(CGPoint)pointAtDate:(id)arg1 isAllDay:(char)arg2 ;
-(char)scrollTowardPoint:(CGPoint)arg1 ;
-(void)addViewToScroller:(id)arg1 isAllDay:(char)arg2 ;
-(float)hourHeightScale;
-(char)containsDate:(id)arg1 ;
@end

