/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:34 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class StackedChromeViewController;


@protocol StackedChromeModeController <NSObject,ChromeModeController>
@property (assign,nonatomic,__weak) StackedChromeViewController * chromeViewController; 
@optional
-(char)navigationTransitionShouldOccurImmediately;
-(void)modeWillPop;
-(void)updateViewMode:(int)arg1 animated:(char)arg2;
-(char)usesDefaultTransitions;
-(id)pushTransitionController;
-(id)popTransitionController;
-(char)showsNavigationBar;

@required
-(char)showsMapView;
-(StackedChromeViewController *)chromeViewController;
-(void)setChromeViewController:(id)arg1;
-(void)becomeCurrentModeWithViews:(id)arg1 animated:(char)arg2 state:(id)arg3 fromMode:(id)arg4;
-(void)resignCurrentModeAnimated:(char)arg1 toMode:(id)arg2;
-(id)viewController;

@end

