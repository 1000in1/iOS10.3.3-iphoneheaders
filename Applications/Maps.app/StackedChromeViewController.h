/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:40 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/ChromeViewController.h>

@class UINavigationController, NSMutableSet;

@interface StackedChromeViewController : ChromeViewController {

	UINavigationController* _navController;
	NSMutableSet* _transitionContexts;

}

@property (assign,getter=isNavigationBarHidden,nonatomic) char navigationBarHidden; 
+(Class)chromeViewItemClass;
+(Class)navigationBarClass;
+(Class)navigationControllerClass;
-(void)didSuppress;
-(void)didUnsuppress;
-(void)_createNavigationControllerIfNeeded;
-(char)navigationTransitionShouldOccurImmediately;
-(void)_navigationControllerWillShowMode:(id)arg1 fromMode:(id)arg2 animated:(char)arg3 ;
-(void)_navigationControllerWillPopMode:(id)arg1 toMode:(id)arg2 ;
-(char)_navigationControllerCarplayHackShouldPopToMode:(id)arg1 ;
-(void)currentModeWillChangeByMovingToItem:(id)arg1 fromItem:(id)arg2 animated:(char)arg3 ;
-(void)currentModeDidChangeByMovingToItem:(id)arg1 fromItem:(id)arg2 animated:(char)arg3 ;
-(id)enteredForegroundDate;
-(void)_addNavigationController;
-(void)updateNavigationViewController;
-(void)_removeNavigationController;
-(void)loadMapViewIfNeeded;
-(id)topStackedMode;
-(id)_itemForViewController:(id)arg1 ;
-(char)_useBuiltinTransitions;
-(void)_setMapEdgeInsetsWithoutAnimating:(UIEdgeInsets)arg1 forMode:(id)arg2 ;
-(void)setMapEdgeInsets:(UIEdgeInsets)arg1 forMode:(id)arg2 animated:(char)arg3 ;
-(void)prepareRemovingMapViewFromViewHierarchyWithReplacement:(id)arg1 retainOwnershipOfMapView:(char)arg2 ;
-(void)reinsertMapViewInViewHierarchy;
-(void)_pushMode:(id)arg1 withTransition:(id)arg2 animated:(char)arg3 ;
-(void)pushMode:(id)arg1 withTransition:(id)arg2 ;
-(void)pushMode:(id)arg1 animated:(char)arg2 ;
-(void)_popModeIncludeNavController:(char)arg1 withTransition:(id)arg2 animated:(char)arg3 completion:(/*^block*/id)arg4 ;
-(void)_popToMode:(id)arg1 includeNavController:(char)arg2 withTransition:(id)arg3 animated:(char)arg4 completion:(/*^block*/id)arg5 ;
-(void)popModeAnimated:(char)arg1 ;
-(void)popModeAnimated:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)popModeWithTransition:(id)arg1 ;
-(void)popModeWithTransition:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_popToRootModeWithTransition:(id)arg1 animated:(char)arg2 ;
-(void)popToRootModeWithTransition:(id)arg1 ;
-(void)popToRootModeAnimated:(char)arg1 ;
-(void)_popToMode:(id)arg1 withTransition:(id)arg2 animated:(char)arg3 ;
-(void)popToMode:(id)arg1 withTransition:(id)arg2 ;
-(void)popToMode:(id)arg1 animated:(char)arg2 ;
-(void)popToMode:(id)arg1 push:(id)arg2 animated:(char)arg3 ;
-(void)popToFirstModeOfClass:(Class)arg1 push:(id)arg2 animated:(char)arg3 ;
-(void)_replaceTopModeWithMode:(id)arg1 withTransition:(id)arg2 animated:(char)arg3 ;
-(void)replaceTopModeWithMode:(id)arg1 withTransition:(id)arg2 ;
-(void)replaceTopModeWithMode:(id)arg1 animated:(char)arg2 ;
-(void)_replaceMode:(id)arg1 withMode:(id)arg2 withTransition:(id)arg3 animated:(char)arg4 ;
-(void)replaceMode:(id)arg1 withMode:(id)arg2 withTransition:(id)arg3 ;
-(void)replaceMode:(id)arg1 withMode:(id)arg2 animated:(char)arg3 ;
-(void)_removeMode:(id)arg1 withTransition:(id)arg2 animated:(char)arg3 ;
-(void)removeMode:(id)arg1 withTransition:(id)arg2 ;
-(void)removeMode:(id)arg1 animated:(char)arg2 ;
-(void)_insertMode:(id)arg1 aboveMode:(id)arg2 withTransition:(id)arg3 animated:(char)arg4 ;
-(void)insertMode:(id)arg1 aboveMode:(id)arg2 withTransition:(id)arg3 ;
-(void)insertMode:(id)arg1 aboveMode:(id)arg2 animated:(char)arg3 ;
-(void)_setModes:(id)arg1 withTransition:(id)arg2 animated:(char)arg3 ;
-(void)setModes:(id)arg1 withTransition:(id)arg2 ;
-(void)setModes:(id)arg1 animated:(char)arg2 ;
-(id)_transitionContextForFromController:(id)arg1 toController:(id)arg2 ;
-(char)containsMode:(id)arg1 ;
-(char)containsModeOfClass:(Class)arg1 ;
-(id)topmostModeOfClass:(Class)arg1 ;
-(void)startingViewControllerTransitionFromMode:(id)arg1 toMode:(id)arg2 ;
-(void)stackWillChangeByMovingToItem:(id)arg1 fromItem:(id)arg2 ;
-(void)stackDidChangeByMovingToItem:(id)arg1 fromItem:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(char)isNavigationBarHidden;
-(id)topViewController;
-(unsigned)supportedInterfaceOrientations;
-(char)shouldAutorotate;
-(void)viewDidLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLoad;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(char)arg3 ;
-(id)navigationController:(id)arg1 animationControllerForOperation:(int)arg2 fromViewController:(id)arg3 toViewController:(id)arg4 ;
-(char)_navigationControllerShouldUseBuiltinInteractionController:(id)arg1 ;
-(id)interactivePopGestureRecognizer;
-(void)setNavigationBarHidden:(char)arg1 animated:(char)arg2 ;
-(void)setNavigationBarHidden:(char)arg1 ;
-(id)mapView:(id)arg1 painterForVectorOverlay:(id)arg2 ;
-(id)_navController;
-(id)mapView:(id)arg1 viewForAnnotation:(id)arg2 ;
@end
