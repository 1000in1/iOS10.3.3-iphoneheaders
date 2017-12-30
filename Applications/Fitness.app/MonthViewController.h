/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:19 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Fitness.app/Fitness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Fitness/Fitness-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <UIKit/UIAdaptivePresentationControllerDelegate.h>
#import <Fitness/MonthScrollViewDelegate.h>

@class UIPanGestureRecognizer, PaletteViewController, FitnessDateCache, CHWorkoutsListDataProvider, CHActivityChartDataCache, FIUIModel, UILabel, MonthScrollViewController, NSString;

@interface MonthViewController : UIViewController <UIGestureRecognizerDelegate, UIPopoverPresentationControllerDelegate, UIAdaptivePresentationControllerDelegate, MonthScrollViewDelegate> {

	UIPanGestureRecognizer* _panGestureRecognizer;
	float _panXMax;
	float _panXStart;
	float _panYStart;
	float _panXPercent;
	PaletteViewController* _paletteVC;
	FitnessDateCache* _dateCache;
	CHWorkoutsListDataProvider* _workoutsDataProvider;
	CHActivityChartDataCache* _chartDataCache;
	FIUIModel* _model;
	int _currentMonth;
	UILabel* _leftTitleLabel;
	MonthScrollViewController* _scrollVC;

}

@property (nonatomic,retain) MonthScrollViewController * scrollVC;              //@synthesize scrollVC=_scrollVC - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithModel:(id)arg1 dateCache:(id)arg2 workoutsDataProvider:(id)arg3 chartDataCache:(id)arg4 ;
-(void)scrolledPastMonthWithDate:(id)arg1 ;
-(void)dateSelected:(id)arg1 ;
-(MonthScrollViewController *)scrollVC;
-(id)_leftTitleStringForDate:(id)arg1 ;
-(void)handleMonthsViewGesture:(id)arg1 ;
-(void)_updateBackButtonOnDateChange:(id)arg1 ;
-(void)setScrollVC:(MonthScrollViewController *)arg1 ;
-(void)dealloc;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(char)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(char)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(char)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)_registerForNotifications;
@end

