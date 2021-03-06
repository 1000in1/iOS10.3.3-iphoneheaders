/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:49 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileCal/MobileCal-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, EKCalendarDate;

@interface MonthTitleView : UIView {

	UILabel* _titleLabel;
	EKCalendarDate* _calendarDate;

}

@property (nonatomic,retain) EKCalendarDate * calendarDate;              //@synthesize calendarDate=_calendarDate - In the implementation block
-(void)animateVisible:(char)arg1 duration:(double)arg2 completion:(/*^block*/id)arg3 ;
-(EKCalendarDate *)calendarDate;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFont:(id)arg1 ;
-(id)backgroundImage;
-(void)setCalendarDate:(EKCalendarDate *)arg1 ;
@end

