/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:35 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIApplicationRotationFollowingWindow.h>

@class UIAlertController;

@interface _UIAlertControllerShimPresenterWindow : UIApplicationRotationFollowingWindow {

	UIAlertController* _alertController;

}

@property (nonatomic,retain,readonly) UIAlertController * alertController; 
-(id)init;
-(UIAlertController *)alertController;
-(void)presentAlertController:(id)arg1 animated:(char)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)_presentationViewController;
@end

