/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:17 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBDashBoardViewControllerBase.h>

@protocol SBLockScreenBatteryChargingViewControllerDelegate;
@class SBLockScreenBatteryChargingView, NSTimer, NSMutableArray;

@interface SBLockScreenBatteryChargingViewController : SBDashBoardViewControllerBase {

	char _shouldDisplayBattery;
	SBLockScreenBatteryChargingView* _chargingView;
	NSTimer* _visibilityTimer;
	NSMutableArray* _connectedDevices;
	id<SBLockScreenBatteryChargingViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SBLockScreenBatteryChargingViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(char)batteryVisible;
-(void)_clearVisibilityTimer;
-(id)initForDisplayOfBattery:(char)arg1 ;
-(void)presentWithAnimation:(char)arg1 ;
-(void)prepareForDismissalWithAnimation:(char)arg1 ;
-(id)chargingView;
-(void)_visibilityTimerFired:(id)arg1 ;
-(void)showChargeLevelWithBatteryVisible:(char)arg1 ;
-(void)setDelegate:(id<SBLockScreenBatteryChargingViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<SBLockScreenBatteryChargingViewControllerDelegate>)delegate;
-(void)loadView;
-(int)presentationStyle;
@end

