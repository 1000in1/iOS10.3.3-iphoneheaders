/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:54 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MobileCal/MobileCal-Structs.h>
@class EKDayOccurrenceView;

@interface EKAllDayOccurrenceBlock : NSObject {

	unsigned _eventIndex;
	NSRange _dayRange;
	unsigned _calendarOrder;
	EKDayOccurrenceView* _occurrenceView;

}

@property (nonatomic,readonly) unsigned eventIndex;                             //@synthesize eventIndex=_eventIndex - In the implementation block
@property (nonatomic,readonly) unsigned calendarOrder;                          //@synthesize calendarOrder=_calendarOrder - In the implementation block
@property (nonatomic,readonly) unsigned length; 
@property (nonatomic,readonly) unsigned rangeStart; 
@property (nonatomic,readonly) unsigned rangeEnd; 
@property (nonatomic,retain) EKDayOccurrenceView * occurrenceView;              //@synthesize occurrenceView=_occurrenceView - In the implementation block
-(id)initWithEventIndex:(unsigned)arg1 calendarOrder:(unsigned)arg2 dayRange:(NSRange)arg3 ;
-(id)lengthForSorting;
-(unsigned)gapBetweenBlock:(id)arg1 ;
-(void)setOccurrenceView:(EKDayOccurrenceView *)arg1 ;
-(unsigned)rangeStart;
-(unsigned)rangeEnd;
-(unsigned)length;
-(unsigned)eventIndex;
-(EKDayOccurrenceView *)occurrenceView;
-(unsigned)calendarOrder;
@end
