/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:29:18 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/SIMSettings.bundle/SIMSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/TPSetPINViewControllerDelegate.h>

@protocol PHSIMPINUnlockViewControllerDelegate;
@class TPSetPINViewController;

@interface PHSIMPINUnlockViewController : UIViewController <TPSetPINViewControllerDelegate> {

	char _locking;
	id<PHSIMPINUnlockViewControllerDelegate> _delegate;
	TPSetPINViewController* _setPINViewController;

}

@property (retain) TPSetPINViewController * setPINViewController;                  //@synthesize setPINViewController=_setPINViewController - In the implementation block
@property (assign) char locking;                                                   //@synthesize locking=_locking - In the implementation block
@property (assign) id<PHSIMPINUnlockViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<PHSIMPINUnlockViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<PHSIMPINUnlockViewControllerDelegate>)delegate;
-(void)loadView;
-(void)setPINViewControllerFinished:(id)arg1 success:(char)arg2 oldPIN:(id)arg3 newPIN:(id)arg4 ;
-(void)setSetPINViewController:(TPSetPINViewController *)arg1 ;
-(TPSetPINViewController *)setPINViewController;
-(void)setLocking:(char)arg1 ;
-(void)_simLockChangedAfterSave:(id)arg1 ;
-(char)locking;
-(id)initForLocking:(char)arg1 ;
@end

