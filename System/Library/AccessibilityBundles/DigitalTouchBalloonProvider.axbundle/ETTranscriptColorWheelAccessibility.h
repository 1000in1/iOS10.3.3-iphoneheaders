/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:56 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/AccessibilityBundles/DigitalTouchBalloonProvider.axbundle/DigitalTouchBalloonProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DigitalTouchBalloonProvider/DigitalTouchBalloonProvider-Structs.h>
#import <DigitalTouchBalloonProvider/__ETTranscriptColorWheelAccessibility_super.h>

@interface ETTranscriptColorWheelAccessibility : __ETTranscriptColorWheelAccessibility_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(float)_accessibilityOriginalPickerRotation;
-(float)_accessibilityDifferenceBetweenAngle:(float)arg1 andAngle:(float)arg2 ;
-(void)_accessibilitySpeakPickerColor;
-(void)_accessibilitySetOriginalPickerRotation:(float)arg1 ;
-(void)_accessibilityAdjustColorPickerBy:(float)arg1 ;
-(void)_accessibilityIncrementColorPicker;
-(void)_accessibilityDecrementColorPicker;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)_accessibilityLoadAccessibilityInformation;
-(void)updatePickerPositionForPoint:(CGPoint)arg1 ;
@end

