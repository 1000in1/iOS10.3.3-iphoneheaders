/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:40 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Tips.app/PlugIns/TipsNotificationExtension.appex/TipsNotificationExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TipsNotificationExtension/TipsNotificationExtension-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/UNNotificationContentExtension.h>
#import <TipsNotificationExtension/TPSSingleTipViewControllerDelegate.h>

@class UIColor, TPSSingleTipViewController, TPSAppController, NSXPCConnection, NSString;

@interface TPSNotificationExtensionViewController : UIViewController <UNNotificationContentExtension, TPSSingleTipViewControllerDelegate> {

	TPSSingleTipViewController* _singleTipViewController;
	TPSAppController* _appController;
	NSXPCConnection* _xpcConnection;

}

@property (nonatomic,retain) NSXPCConnection * xpcConnection;                             //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned mediaPlayPauseButtonType; 
@property (nonatomic,readonly) CGRect mediaPlayPauseButtonFrame; 
@property (nonatomic,copy,readonly) UIColor * mediaPlayPauseButtonTintColor; 
-(void)singleTipViewControllerContentSizeChanged:(id)arg1 ;
-(void)clearNotificationIgnoreCount;
-(void)dealloc;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)viewDidLoad;
-(NSXPCConnection *)xpcConnection;
-(void)_destroyXPCConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(void)didReceiveNotification:(id)arg1 ;
-(void)didReceiveNotificationResponse:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
@end

