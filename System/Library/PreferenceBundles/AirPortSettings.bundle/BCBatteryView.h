/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:29:02 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/AirPortSettings.bundle/AirPortSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AirPortSettings/AirPortSettings-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView;

@interface BCBatteryView : UIView {

	UIImageView* _shellImageView;
	UIImageView* _highCapacityFillImageView;
	UIImageView* _lowCapacityFillImageView;
	char _lowBattery;
	unsigned _percentCharge;

}

@property (assign,nonatomic) unsigned percentCharge;                           //@synthesize percentCharge=_percentCharge - In the implementation block
@property (assign,getter=isLowBattery,nonatomic) char lowBattery;              //@synthesize lowBattery=_lowBattery - In the implementation block
+(id)chargeGlyph;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)_batteryColorForLowCapacity:(char)arg1 ;
-(void)_setPercentCharge:(unsigned)arg1 force:(char)arg2 ;
-(UIEdgeInsets)_edgeInsetsForBatteryInsidesForScale:(float)arg1 ;
-(void)setPercentCharge:(unsigned)arg1 ;
-(unsigned)percentCharge;
-(char)isLowBattery;
-(void)setLowBattery:(char)arg1 ;
@end

