/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:50 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileCal/MobileCal-Structs.h>
#import <UIKit/UIView.h>

@protocol LargeMonthWeekViewOccurrencesViewDelegate;
@class NSMutableArray, _MoreEventsLabel, EKCalendarDate, EKEvent, NSObject;

@interface LargeMonthWeekOccurrencesView : UIView {

	opaque_pthread_mutex_t _drawLock;
	CGRect _dayFrames[7];
	int _firstDayIndex;
	NSMutableArray* _layedOutRows;
	NSMutableArray* _singleDayEventBuckets;
	unsigned _numberOfVisibleRows;
	_MoreEventsLabel* _moreEventsLabels[7];
	char _isZoomedDay;
	char _hasDrawnBefore;
	EKCalendarDate* _startDate;
	EKCalendarDate* _endDate;
	int _dayCount;
	EKEvent* _selectedOccurrence;
	NSObject*<LargeMonthWeekViewOccurrencesViewDelegate> _delegate;

}

@property (assign) char hasDrawnBefore;                                                                         //@synthesize hasDrawnBefore=_hasDrawnBefore - In the implementation block
@property (nonatomic,retain) EKCalendarDate * startDate;                                                        //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) EKCalendarDate * endDate;                                                          //@synthesize endDate=_endDate - In the implementation block
@property (assign,nonatomic) int dayCount;                                                                      //@synthesize dayCount=_dayCount - In the implementation block
@property (nonatomic,retain) EKEvent * selectedOccurrence;                                                      //@synthesize selectedOccurrence=_selectedOccurrence - In the implementation block
@property (assign,nonatomic) char isZoomedDay;                                                                  //@synthesize isZoomedDay=_isZoomedDay - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<LargeMonthWeekViewOccurrencesViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)occurrenceAtPoint:(CGPoint)arg1 ;
-(CGRect)frameForOccurrence:(id)arg1 onDay:(id)arg2 ;
-(CGRect)frameForOccurrenceAfterLastOnDay:(id)arg1 ;
-(id)occurrenceViewForOccurrence:(id)arg1 onDay:(id)arg2 ;
-(void)setStartDate:(id)arg1 endDate:(id)arg2 dayCount:(int)arg3 ;
-(CGRect)frameForLastOccurrenceOnDay:(id)arg1 ;
-(void)setDayFrames:(CGRect*)arg1 ;
-(void)setDayCount:(int)arg1 ;
-(int)dayCount;
-(id)_occurrenceViewForEventOccurrence:(id)arg1 ;
-(CGRect)_frameForStartColumn:(unsigned)arg1 endColumn:(unsigned)arg2 dayRow:(unsigned)arg3 occurrenceRow:(unsigned)arg4 ;
-(void)_updateOccurrencesBounds;
-(NSRange)_dayRangeForOccurrence:(id)arg1 useProposedTime:(char)arg2 ;
-(id)_dequeueNextOccurrenceforDay:(unsigned)arg1 ;
-(void)_layoutSingleOccurrence:(id)arg1 index:(unsigned)arg2 ;
-(void)drawIntoContext:(CGContextRef)arg1 ;
-(id)firstNonAllDayEvent;
-(char)isZoomedDay;
-(void)setIsZoomedDay:(char)arg1 ;
-(char)hasDrawnBefore;
-(void)setHasDrawnBefore:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setNeedsDisplay;
-(void)setDelegate:(NSObject*<LargeMonthWeekViewOccurrencesViewDelegate>)arg1 ;
-(void)dealloc;
-(id)description;
-(NSObject*<LargeMonthWeekViewOccurrencesViewDelegate>)delegate;
-(void)displayLayer:(id)arg1 ;
-(void)willMoveToSuperview:(id)arg1 ;
-(void)setOccurrences:(id)arg1 ;
-(char)hasOccurrences;
-(EKEvent *)selectedOccurrence;
-(void)setSelectedOccurrence:(EKEvent *)arg1 ;
-(void)setEndDate:(EKCalendarDate *)arg1 ;
-(void)setStartDate:(EKCalendarDate *)arg1 ;
-(EKCalendarDate *)startDate;
-(EKCalendarDate *)endDate;
@end

