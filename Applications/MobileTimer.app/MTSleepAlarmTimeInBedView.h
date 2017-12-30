/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:16 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileTimer.app/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, DigitalClockLabel, MTSleepAlarmGraphView, UIButton, MTSleepAlarm, NSArray, UIFont;

@interface MTSleepAlarmTimeInBedView : UIView {

	UILabel* _titleLabel;
	DigitalClockLabel* _bedtimeLabel;
	DigitalClockLabel* _wakeLabel;
	MTSleepAlarmGraphView* _graphView;
	UIButton* _moreHistoryButton;

}

@property (nonatomic,retain) UILabel * titleLabel;                           //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) DigitalClockLabel * bedtimeLabel;               //@synthesize bedtimeLabel=_bedtimeLabel - In the implementation block
@property (nonatomic,retain) DigitalClockLabel * wakeLabel;                  //@synthesize wakeLabel=_wakeLabel - In the implementation block
@property (nonatomic,retain) MTSleepAlarmGraphView * graphView;              //@synthesize graphView=_graphView - In the implementation block
@property (nonatomic,retain) UIButton * moreHistoryButton;                   //@synthesize moreHistoryButton=_moreHistoryButton - In the implementation block
@property (nonatomic,copy) MTSleepAlarm * sleepAlarm; 
@property (nonatomic,retain) NSArray * sleepData; 
@property (nonatomic,readonly) UIFont * titleFont; 
-(NSArray *)sleepData;
-(void)setSleepAlarm:(MTSleepAlarm *)arg1 ;
-(void)setSleepData:(NSArray *)arg1 ;
-(void)setBedtimeLabel:(DigitalClockLabel *)arg1 ;
-(DigitalClockLabel *)bedtimeLabel;
-(void)setWakeLabel:(DigitalClockLabel *)arg1 ;
-(DigitalClockLabel *)wakeLabel;
-(void)setMoreHistoryButton:(UIButton *)arg1 ;
-(UIButton *)moreHistoryButton;
-(void)moreHistoryButtonPressed:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(id)viewForLastBaselineLayout;
-(UIFont *)titleFont;
-(id)viewForFirstBaselineLayout;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setupConstraints;
-(MTSleepAlarm *)sleepAlarm;
-(MTSleepAlarmGraphView *)graphView;
-(void)setGraphView:(MTSleepAlarmGraphView *)arg1 ;
@end

