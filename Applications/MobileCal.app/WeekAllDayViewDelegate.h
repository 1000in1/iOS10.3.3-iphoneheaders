/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:50 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WeekAllDayViewDelegate <NSObject>
@optional
-(id)weekAllDayViewForTimeframeBefore:(id)arg1;
-(id)weekAllDayViewForTimeframeAfter:(id)arg1;
-(void)weekAllDayView:(id)arg1 didCreateOccurrenceViews:(id)arg2;
-(void)weekAllDayViewStartDrag:(id)arg1;
-(void)weekAllDayView:(id)arg1 didFinishScrollingToOccurrence:(id)arg2;
-(void)weekAllDayViewDidScroll:(id)arg1;
-(void)weekAllDayView:(id)arg1 didSelectEvent:(id)arg2;
-(void)weekAllDayView:(id)arg1 occurrenceClicked:(id)arg2 onDay:(double)arg3;
-(void)weekAllDayViewEmptySpaceClick:(id)arg1 onDay:(double)arg2;
-(void)weekAllDayView:(id)arg1 occurrencePressed:(id)arg2 onDay:(double)arg3;

@end

