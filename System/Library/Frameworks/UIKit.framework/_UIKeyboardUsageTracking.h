/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:27 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _UIKeyboardUsageTracking : NSObject
+(void)showLowercaseKeyplanePreference:(char)arg1 ;
+(void)keyboardExtensionPrimaryLanguageChanged;
+(void)keyboardPerformanceFromTouchStart:(double)arg1 until:(double)arg2 ;
+(void)keyboardPerformanceFromTouchRelease:(double)arg1 until:(double)arg2 ;
+(void)keyboardGestureTwoFingerTap:(char)arg1 withTapCount:(int)arg2 ;
+(void)keyboardGestureOneFingerForcePan:(char)arg1 ;
+(void)keyboardGestureOneFingerForcePress:(char)arg1 withPressCount:(int)arg2 ;
+(void)selectedPredictiveInputCandidate:(id)arg1 isAutocorrection:(char)arg2 ;
+(void)keyboardGestureSelectedPredictiveInputCandidate;
+(void)showCharacterPreviewPreference:(char)arg1 ;
+(void)panAlternateKeyFlickDownCount;
+(void)dualStringsKeyFlickUpCount;
+(void)singleStringKeyFlickUpCount;
+(void)keyboardReachabilityDistribution:(float)arg1 ;
+(void)normalPunctuationKeyCount;
+(void)undoKeyCount;
+(void)redoKeyCount;
+(void)restAndTypeTriggered;
+(void)predictionViewState:(char)arg1 forInputMode:(id)arg2 ;
+(void)keyboardSetToInputMode:(id)arg1 fromPrevious:(id)arg2 ;
+(void)keyboardExtensionCrashed;
+(void)keyboardExtensionsOnDevice;
+(void)inputSwitcherSetPredictionPreference:(char)arg1 ;
+(void)keyboardGestureSetPredictionPreference:(char)arg1 ;
+(void)keyboardTotalOnScreenTime:(double)arg1 orientation:(int)arg2 ;
@end

