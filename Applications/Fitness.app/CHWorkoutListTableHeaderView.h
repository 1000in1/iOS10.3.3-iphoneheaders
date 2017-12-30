/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:19 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Fitness.app/Fitness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Fitness/Fitness-Structs.h>
#import <UIKit/UIView.h>

@class UIVisualEffectView, UIView, UILabel, NSLayoutConstraint, NSDate;

@interface CHWorkoutListTableHeaderView : UIView {

	UIVisualEffectView* _blurView;
	UIView* _dividerView;
	UILabel* _dateLabel;
	UILabel* _totalHeaderLabel;
	UILabel* _averageHeaderLabel;
	UILabel* _detailLabel;
	NSLayoutConstraint* _dateLabelWidthConstraint;
	int _type;
	NSDate* _date;

}

@property (assign,nonatomic) int type;                   //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSDate * date;              //@synthesize date=_date - In the implementation block
+(id)_monthYearDateFormatter;
+(float)preferredHeight;
+(id)_yearDateFormatter;
-(void)setDate:(id)arg1 type:(int)arg2 detailText:(id)arg3 ;
-(void)constrainViews;
-(void)_setDateTextForMonthView;
-(void)_setDateTextForYearView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setType:(int)arg1 ;
-(int)type;
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
@end

