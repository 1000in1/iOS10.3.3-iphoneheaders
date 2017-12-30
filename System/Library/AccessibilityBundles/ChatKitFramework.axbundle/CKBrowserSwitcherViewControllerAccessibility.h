/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:53 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/AccessibilityBundles/ChatKitFramework.axbundle/ChatKitFramework
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKitFramework/__CKBrowserSwitcherViewControllerAccessibility_super.h>
#import <UIKit/UIScrollViewAccessibilityDelegate.h>

@class NSString;

@interface CKBrowserSwitcherViewControllerAccessibility : __CKBrowserSwitcherViewControllerAccessibility_super <UIScrollViewAccessibilityDelegate>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(char)_axIsScrollingByDragGesture;
-(void)_axSetIsScrollingByDragGesture:(char)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)loadView;
-(char)accessibilityPerformEscape;
-(id)accessibilityScrollStatusForScrollView:(id)arg1 ;
-(void)showSelectionViewController:(char)arg1 animated:(char)arg2 ;
-(void)setCurrentViewController:(id)arg1 ;
-(void)_accessibilityLoadAccessibilityInformation;
@end

