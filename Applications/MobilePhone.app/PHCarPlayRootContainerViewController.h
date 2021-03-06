/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:08 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobilePhone.app/MobilePhone
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UINavigationControllerDelegate.h>

@class UINavigationController, PHCarPlayMainMenuContainerViewController, NSString;

@interface PHCarPlayRootContainerViewController : UIViewController <UINavigationControllerDelegate> {

	UINavigationController* _wrapperNavigationController;
	PHCarPlayMainMenuContainerViewController* _mainMenuContainerViewController;

}

@property (retain) PHCarPlayMainMenuContainerViewController * mainMenuContainerViewController;              //@synthesize mainMenuContainerViewController=_mainMenuContainerViewController - In the implementation block
@property (retain) UINavigationController * wrapperNavigationController;                                    //@synthesize wrapperNavigationController=_wrapperNavigationController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UINavigationController *)wrapperNavigationController;
-(void)setMainMenuContainerViewController:(PHCarPlayMainMenuContainerViewController *)arg1 ;
-(PHCarPlayMainMenuContainerViewController *)mainMenuContainerViewController;
-(void)setWrapperNavigationController:(UINavigationController *)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)preferredFocusEnvironments;
-(void)viewWillAppear:(char)arg1 ;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(char)arg3 ;
@end

