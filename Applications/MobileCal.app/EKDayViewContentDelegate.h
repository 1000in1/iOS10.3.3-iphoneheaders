/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:54 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol EKDayViewContentDelegate <NSObject>
@optional
-(void)dayViewContent:(id)arg1 didSelectEvent:(id)arg2;
-(void)dayViewContent:(id)arg1 didCreateOccurrenceViews:(id)arg2;
-(void)occurrencePressed:(id)arg1 onDay:(double)arg2;

@required
-(void)dayViewContent:(id)arg1 didTapPinnedOccurrence:(id)arg2;
-(void)dayViewContent:(id)arg1 didTapInEmptySpaceOnDay:(double)arg2;

@end
