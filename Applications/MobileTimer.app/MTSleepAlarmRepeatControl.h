/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:15 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileTimer.app/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <UIKit/UIControl.h>

@class NSArray;

@interface MTSleepAlarmRepeatControl : UIControl {

	int _repeatSchedule;
	NSArray* _buttons;
	NSArray* _backgroundImages;

}

@property (nonatomic,retain) NSArray * buttons;                       //@synthesize buttons=_buttons - In the implementation block
@property (nonatomic,retain) NSArray * backgroundImages;              //@synthesize backgroundImages=_backgroundImages - In the implementation block
@property (assign,nonatomic) int repeatSchedule;                      //@synthesize repeatSchedule=_repeatSchedule - In the implementation block
-(void)toggleRepeats:(id)arg1 ;
-(void)setBackgroundImages:(NSArray *)arg1 ;
-(NSArray *)backgroundImages;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSArray *)buttons;
-(void)setButtons:(NSArray *)arg1 ;
-(void)setupConstraints;
-(void)setRepeatSchedule:(int)arg1 ;
-(int)repeatSchedule;
-(void)_updateSelectedDays;
@end

