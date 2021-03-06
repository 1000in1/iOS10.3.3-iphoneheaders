/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:08 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUI.framework/XPCServices/com.apple.accessibility.AccessibilityUIServer.xpc/com.apple.accessibility.AccessibilityUIServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <com.apple.accessibility.AccessibilityUIServer/com.apple.accessibility.AccessibilityUIServer-Structs.h>
#import <UIKit/UIApplication.h>

@interface AXUIApplication : UIApplication

@property (nonatomic,readonly) int _expectedViewOrientation; 
-(void)_run;
-(char)_shouldAllowKeyboardArbiter;
-(int)_expectedViewOrientation;
-(CGRect)accessibilityFrame;
-(id)accessibilityLabel;
-(char)_accessibilityIsAccessibilityUIServer;
-(char)_accessibilityUseWindowBoundsForOutOfBoundsChecking;
-(id)_accessibilityIsolatedWindows;
-(int)_accessibilityOrientationForCompareGeometry;
@end

