/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:29:23 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/WirelessModemSettings.bundle/WirelessModemSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WirelessModemSettings/WirelessModemSettings-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, NSMutableArray, UIImageView;

@interface SetupView : UIView {

	UILabel* _title;
	NSMutableArray* _setupSteps;
	UIImageView* _icon;
	int _layoutDirection;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(void)setTitle:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)title;
-(void)setIcon:(id)arg1 ;
-(id)icon;
-(void)addStep:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 shouldSetSize:(char)arg2 ;
-(id)_preferenceLabelWithText:(id)arg1 ;
@end

