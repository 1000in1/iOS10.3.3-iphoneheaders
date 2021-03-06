/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:18 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIWindow, UIView, SBHUDView;

@interface SBHUDController : NSObject {

	UIWindow* _hudWindow;
	UIView* _hudContentView;
	SBHUDView* _hudView;
	int _orientation;
	char _hudVisibleOrFading;

}
+(id)sharedHUDController;
-(void)_orderWindowOut:(id)arg1 ;
-(id)visibleHUDView;
-(id)visibleOrFadingHUDView;
-(void)_recenterHUDView;
-(void)_createUI;
-(void)presentHUDView:(id)arg1 ;
-(void)hideHUDView;
-(void)dealloc;
-(void)_tearDown;
-(void)reorientHUDIfNeeded:(char)arg1 ;
-(void)presentHUDView:(id)arg1 autoDismissWithDelay:(double)arg2 ;
@end

