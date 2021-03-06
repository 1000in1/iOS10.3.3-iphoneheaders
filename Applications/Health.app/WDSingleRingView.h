/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:22 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class HKRingsView, UIImageView, HKActivitySummary;

@interface WDSingleRingView : UIView {

	HKRingsView* _ringView;
	UIImageView* _imageView;
	unsigned _type;
	HKActivitySummary* _activitySummary;

}

@property (nonatomic,readonly) unsigned type;                                  //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) HKActivitySummary * activitySummary;              //@synthesize activitySummary=_activitySummary - In the implementation block
-(void)layoutSubviews;
-(unsigned)type;
-(id)initWithType:(unsigned)arg1 ;
-(void)setActivitySummary:(HKActivitySummary *)arg1 ;
-(HKActivitySummary *)activitySummary;
-(void)setActivitySummary:(id)arg1 animated:(char)arg2 ;
@end

