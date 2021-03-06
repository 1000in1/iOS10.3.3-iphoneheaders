/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:54 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/AccessibilityBundles/ChatKitFramework.axbundle/ChatKitFramework
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKitFramework/ChatKitFramework-Structs.h>
#import <ChatKitFramework/__CKEffectPickerViewAccessibility_super.h>

@interface CKEffectPickerViewAccessibility : __CKEffectPickerViewAccessibility_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(void)_axUpdateCloseButton;
-(void)_axUpdateScrollView;
-(char)accessibilityViewIsModal;
-(char)accessibilityScroll:(int)arg1 ;
-(id)accessibilityElements;
-(id)initWithFrame:(CGRect)arg1 sendButtonFrame:(CGRect)arg2 balloonViewOrigin:(CGPoint)arg3 composition:(id)arg4 color:(char)arg5 ;
-(void)addEffect:(id)arg1 withDescriptiveText:(id)arg2 withIdentifier:(id)arg3 ;
-(void)effectTypeDidChange:(id)arg1 ;
-(void)_touchUpInsideDotButton:(id)arg1 ;
-(void)cancelImpactSelection;
-(void)_accessibilityLoadAccessibilityInformation;
@end

