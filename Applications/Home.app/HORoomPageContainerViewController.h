/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:25 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Home.app/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/HFItemManagerDelegate.h>
#import <UIKit/UIPageViewControllerDelegate.h>
#import <UIKit/UIPageViewControllerDataSource.h>
#import <libobjc.A.dylib/HUPresentationDelegate.h>
#import <Home/HORoomListViewControllerDelegate.h>
#import <Home/HORoomViewControllerDelegate.h>
#import <Home/HUEditRoomViewControllerPresentationDelegate.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <libobjc.A.dylib/HUPreloadableViewController.h>

@class HORoomPageItemManager, UIPageViewController, HUGridLayoutOptions, UIBarButtonItem, NAFuture, HORoomViewController, NSIndexPath, HMRoom, NSString;

@interface HORoomPageContainerViewController : UIViewController <HFItemManagerDelegate, UIPageViewControllerDelegate, UIPageViewControllerDataSource, HUPresentationDelegate, HORoomListViewControllerDelegate, HORoomViewControllerDelegate, HUEditRoomViewControllerPresentationDelegate, UIViewControllerTransitioningDelegate, HUPreloadableViewController> {

	HORoomPageItemManager* _roomPageItemManager;
	UIPageViewController* _pageViewController;
	HUGridLayoutOptions* _layoutOptions;
	UIBarButtonItem* _addBarButtonItem;
	NAFuture* _firstLayoutFuture;
	NAFuture* _preloadInitialRoomViewControllerFuture;
	NAFuture* _pageViewControllerReadyFuture;
	HORoomViewController* _weakInitialRoomViewController;
	NSIndexPath* _targetRoomIndexPath;
	NSIndexPath* _currentRoomIndexPath;
	HMRoom* _newlyCreatedRoom;

}

@property (nonatomic,retain) HORoomPageItemManager * roomPageItemManager;                              //@synthesize roomPageItemManager=_roomPageItemManager - In the implementation block
@property (nonatomic,retain) UIPageViewController * pageViewController;                                //@synthesize pageViewController=_pageViewController - In the implementation block
@property (nonatomic,retain) HUGridLayoutOptions * layoutOptions;                                      //@synthesize layoutOptions=_layoutOptions - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * addBarButtonItem;                                       //@synthesize addBarButtonItem=_addBarButtonItem - In the implementation block
@property (nonatomic,retain) NAFuture * firstLayoutFuture;                                             //@synthesize firstLayoutFuture=_firstLayoutFuture - In the implementation block
@property (nonatomic,retain) NAFuture * preloadInitialRoomViewControllerFuture;                        //@synthesize preloadInitialRoomViewControllerFuture=_preloadInitialRoomViewControllerFuture - In the implementation block
@property (nonatomic,retain) NAFuture * pageViewControllerReadyFuture;                                 //@synthesize pageViewControllerReadyFuture=_pageViewControllerReadyFuture - In the implementation block
@property (assign,nonatomic,__weak) HORoomViewController * weakInitialRoomViewController;              //@synthesize weakInitialRoomViewController=_weakInitialRoomViewController - In the implementation block
@property (nonatomic,retain) NSIndexPath * targetRoomIndexPath;                                        //@synthesize targetRoomIndexPath=_targetRoomIndexPath - In the implementation block
@property (nonatomic,retain) NSIndexPath * currentRoomIndexPath;                                       //@synthesize currentRoomIndexPath=_currentRoomIndexPath - In the implementation block
@property (nonatomic,retain) HMRoom * newlyCreatedRoom;                                                //@synthesize newlyCreatedRoom=_newlyCreatedRoom - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)presentRoomListPickerForRoomViewController:(id)arg1 fromView:(id)arg2 ;
-(void)presentRoomEditorForRoomViewController:(id)arg1 ;
-(void)roomListViewControllerDidFinish:(id)arg1 ;
-(void)roomListViewController:(id)arg1 wantsToShowRoom:(id)arg2 ;
-(id)showRoom:(id)arg1 ;
-(void)setRoomPageItemManager:(HORoomPageItemManager *)arg1 ;
-(HORoomPageItemManager *)roomPageItemManager;
-(NAFuture *)pageViewControllerReadyFuture;
-(id)_navigateToSelectedRoom:(id)arg1 ;
-(NAFuture *)firstLayoutFuture;
-(NSIndexPath *)currentRoomIndexPath;
-(void)_setupInitialRoomViewController;
-(HMRoom *)newlyCreatedRoom;
-(void)setNewlyCreatedRoom:(HMRoom *)arg1 ;
-(void)setCurrentRoomIndexPath:(NSIndexPath *)arg1 ;
-(id)_roomViewControllerForItemAtIndexPath:(id)arg1 ;
-(void)_navigateToRoomViewController:(id)arg1 indexPath:(id)arg2 animated:(char)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)_newCurrentRoomIndexPath;
-(void)setWeakInitialRoomViewController:(HORoomViewController *)arg1 ;
-(NAFuture *)preloadInitialRoomViewControllerFuture;
-(void)setPreloadInitialRoomViewControllerFuture:(NAFuture *)arg1 ;
-(id)_roomViewControllerForRoomOffsetFromViewController:(id)arg1 offset:(int)arg2 outIndexPath:(id*)arg3 ;
-(id)_indexPathForRoom:(id)arg1 ;
-(void)setTargetRoomIndexPath:(NSIndexPath *)arg1 ;
-(NSIndexPath *)targetRoomIndexPath;
-(void)_presentRoomListFromRoom:(id)arg1 fromView:(id)arg2 ;
-(void)_presentRoomEditorForRoom:(id)arg1 ;
-(HORoomViewController *)weakInitialRoomViewController;
-(UIBarButtonItem *)addBarButtonItem;
-(void)setAddBarButtonItem:(UIBarButtonItem *)arg1 ;
-(void)setFirstLayoutFuture:(NAFuture *)arg1 ;
-(void)setPageViewControllerReadyFuture:(NAFuture *)arg1 ;
-(id)init;
-(int)preferredStatusBarStyle;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(void)pageViewController:(id)arg1 willTransitionToViewControllers:(id)arg2 ;
-(void)pageViewController:(id)arg1 didFinishAnimating:(char)arg2 previousViewControllers:(id)arg3 transitionCompleted:(char)arg4 ;
-(id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2 ;
-(id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2 ;
-(UIPageViewController *)pageViewController;
-(void)setPageViewController:(UIPageViewController *)arg1 ;
-(HUGridLayoutOptions *)layoutOptions;
-(void)setLayoutOptions:(HUGridLayoutOptions *)arg1 ;
-(id)hu_preloadContent;
-(void)finishPresentation:(id)arg1 animated:(char)arg2 ;
-(char)itemManager:(id)arg1 performBatchUpdateBlock:(/*^block*/id)arg2 ;
-(void)editRoomViewControllerDidFinish:(id)arg1 withNewRoom:(id)arg2 ;
@end

