/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:15 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileTimer.app/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <UIKit/UIViewController.h>
#import <MobileTimer/TKTonePickerViewControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <MobileTimer/StateManagement.h>
#import <MobileTimer/TimerControlsTarget.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <MobileTimer/ClockManagerNotificationObserver.h>

@class TimerControlsView, TKTonePickerViewController, NSString, NSTimer, NSUserActivity;

@interface TimerViewController : UIViewController <TKTonePickerViewControllerDelegate, UINavigationControllerDelegate, StateManagement, TimerControlsTarget, UIPopoverPresentationControllerDelegate, ClockManagerNotificationObserver> {

	TimerControlsView* _timerControlsView;
	TKTonePickerViewController* _tonePickerViewController;
	NSString* _soundIdentifier;
	NSTimer* _timer;
	double _time;
	char _layoutForTraitChange;
	int _style;
	NSUserActivity* _userActivity;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateShortcutItemForCurrentState;
-(id)shortcutItemForCurrentState;
-(id)defaultShortcutItem;
-(id)updateSelectedSoundUIForIdentifier:(id)arg1 ;
-(void)timerTick:(id)arg1 ;
-(void)startUpdatingTimerUI;
-(void)stopUpdatingTimerUI;
-(void)prepareUIForState:(int)arg1 ;
-(void)dismissSoundPicker;
-(void)handleEnterBackground;
-(void)updateSelectedSoundUI;
-(id)startTimerShortcutItem;
-(id)stopTimerShortcutItem;
-(void)confirmPickingSound;
-(void)cancelTimer:(id)arg1 ;
-(void)pauseResumeTimer:(id)arg1 ;
-(void)showSoundPicker:(id)arg1 ;
-(void)handleStartTimerShortcutAction;
-(void)handleStopTimerShortcutAction;
-(id)init;
-(void)dealloc;
-(void)traitCollectionDidChange:(id)arg1 ;
-(char)prefersStatusBarHidden;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(void)setStyle:(int)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(unsigned)navigationControllerSupportedInterfaceOrientations:(id)arg1 ;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg1 ;
-(void)saveState;
-(void)startTimer:(id)arg1 ;
-(void)localNotificationsDidChangeForClockManager:(id)arg1 ;
-(void)reloadState;
-(void)tonePickerViewController:(id)arg1 selectedToneWithIdentifier:(id)arg2 ;
@end

