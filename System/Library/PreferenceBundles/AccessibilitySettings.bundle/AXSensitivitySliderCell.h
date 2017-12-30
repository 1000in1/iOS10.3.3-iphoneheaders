/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:28:55 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSSliderTableCell.h>

@class UILabel;

@interface AXSensitivitySliderCell : PSSliderTableCell {

	UILabel* _leftLabel;
	UILabel* _rightLabel;
	UILabel* _centerLabel;

}
-(float)sensitivitySliderValue;
-(void)setSensitivitySliderValue:(float)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(id)accessibilityValue;
-(void)setAccessibilityLabel:(id)arg1 ;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
-(void)sliderValueDidChange:(id)arg1 ;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
@end

