/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:24 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUIServices/SBUIEmergencyCallHostViewController.h>

@protocol SBLockScreenEmergencyCallViewControllerDelegate;
@interface SBLockScreenEmergencyCallViewController : SBUIEmergencyCallHostViewController {

	id<SBLockScreenEmergencyCallViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SBLockScreenEmergencyCallViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(int)_wallpaperStyleFromUIBackgroundStyle:(int)arg1 ;
-(void)setDelegate:(id<SBLockScreenEmergencyCallViewControllerDelegate>)arg1 ;
-(id<SBLockScreenEmergencyCallViewControllerDelegate>)delegate;
-(void)setBackgroundStyle:(int)arg1 ;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)dismiss;
-(id)tintColorForBackgroundStyle:(int)arg1 outBlurRadius:(float*)arg2 ;
@end

