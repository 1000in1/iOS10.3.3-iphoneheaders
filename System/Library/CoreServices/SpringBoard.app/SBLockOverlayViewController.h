/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:24 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol SBLockOverlayViewControllerDelegate;
@interface SBLockOverlayViewController : UIViewController {

	id<SBLockOverlayViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SBLockOverlayViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) char shouldBeHidden; 
-(char)shouldBeHidden;
-(void)setDelegate:(id<SBLockOverlayViewControllerDelegate>)arg1 ;
-(id<SBLockOverlayViewControllerDelegate>)delegate;
-(id)overlayView;
@end

