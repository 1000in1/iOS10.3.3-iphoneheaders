/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:53 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/DemoApp.app/DemoApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DemoApp/DemoApp-Structs.h>
#import <UIKit/UIApplication.h>
#import <UIKit/UIApplicationDelegate.h>

@class UIWindow, DemoPlayerViewController, NSString;

@interface DemoApplication : UIApplication <UIApplicationDelegate> {

	UIWindow* _window;
	DemoPlayerViewController* _playerViewController;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIWindow * window; 
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)applicationDidFinishLaunching:(id)arg1 ;
-(void)sendEvent:(id)arg1 ;
@end

