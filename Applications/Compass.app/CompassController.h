/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:51 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Compass.app/Compass
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/CLLocationManagerDelegate.h>
#import <UIKit/UIPageViewControllerDataSource.h>
#import <UIKit/UIPageViewControllerDelegate.h>

@class CLLocationManager, CompassPageViewController, LevelPageViewController, UIPageViewController, UIPageControl, NSArray, CADisplayLink, NSString;

@interface CompassController : UIViewController <CLLocationManagerDelegate, UIPageViewControllerDataSource, UIPageViewControllerDelegate> {

	CLLocationManager* _sharedLocManager;
	CompassPageViewController* _compassPageController;
	LevelPageViewController* _levelPageController;
	UIPageViewController* _pageViewController;
	UIPageControl* _pageControl;
	NSArray* _pages;
	CADisplayLink* _displayLink;

}

@property (nonatomic,retain) CLLocationManager * sharedLocManager;              //@synthesize sharedLocManager=_sharedLocManager - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)startLocationUpdatesIfNecessary;
-(void)startAnimations;
-(void)_setSharedLocationManagerOnPagesIfNeeded;
-(void)selectedPage:(id)arg1 ;
-(CLLocationManager *)sharedLocManager;
-(void)selectPage:(int)arg1 ;
-(void)setSharedLocManager:(CLLocationManager *)arg1 ;
-(id)init;
-(void)dealloc;
-(int)preferredStatusBarStyle;
-(void)loadView;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidLoad;
-(id)childViewControllerForStatusBarStyle;
-(id)childViewControllerForStatusBarHidden;
-(void)pageViewController:(id)arg1 didFinishAnimating:(char)arg2 previousViewControllers:(id)arg3 transitionCompleted:(char)arg4 ;
-(id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2 ;
-(id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2 ;
-(void)stopAnimations;
-(void)updateDisplay:(id)arg1 ;
-(void)locationManager:(id)arg1 didUpdateToLocation:(id)arg2 fromLocation:(id)arg3 ;
-(char)locationManagerShouldDisplayHeadingCalibration:(id)arg1 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)stopLocationUpdates;
@end

