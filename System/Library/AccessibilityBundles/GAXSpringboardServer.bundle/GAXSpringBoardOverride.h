/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:22:01 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/AccessibilityBundles/GAXSpringboardServer.bundle/GAXSpringboardServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GAXSpringboardServer/GAXSpringboardServer-Structs.h>
#import <GAXSpringboardServer/__GAXSpringBoardOverride_super.h>

@interface GAXSpringBoardOverride : __GAXSpringBoardOverride_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(void)statusBarReturnActionTap:(GSEventRef)arg1 ;
-(char)_gaxShouldAllowOpeningURL:(id)arg1 ;
-(void)_applicationOpenURL:(id)arg1 withApplication:(id)arg2 publicURLsOnly:(char)arg3 animating:(char)arg4 activationSettings:(id)arg5 withResult:(/*^block*/id)arg6 ;
-(char)_requestPermissionToOpenURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleGotoHomeScreenShortcut:(id)arg1 ;
-(char)handleEvent:(GSEventRef)arg1 withNewEvent:(id)arg2 ;
-(void)batteryStatusDidChange:(id)arg1 ;
-(void)_toggleSearch;
@end

