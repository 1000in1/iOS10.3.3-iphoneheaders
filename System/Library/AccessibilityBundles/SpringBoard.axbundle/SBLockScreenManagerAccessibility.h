/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:22:25 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/AccessibilityBundles/SpringBoard.axbundle/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/__SBLockScreenManagerAccessibility_super.h>

@interface SBLockScreenManagerAccessibility : __SBLockScreenManagerAccessibility_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(void)_setUILocked:(char)arg1 ;
-(void)lockUIFromSource:(int)arg1 withOptions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(char)_finishUIUnlockFromSource:(int)arg1 withOptions:(id)arg2 ;
-(char)mesaCoordinator:(id)arg1 requestsUnlockWithIntent:(int)arg2 ;
-(void)_handleAuthenticationFeedback:(id)arg1 ;
@end

