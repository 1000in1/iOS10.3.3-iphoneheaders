/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:57 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/AccessibilityBundles/EventKitUIFramework.axbundle/EventKitUIFramework
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUIFramework/EventKitUIFramework-Structs.h>
#import <UIKit/UIAccessibilityElement.h>

@class NSDate, UIView;

@interface MobileCalHourAccessibilityElement : UIAccessibilityElement {

	NSDate* hourDate;
	UIView* _dayGridView;

}

@property (nonatomic,retain) NSDate * hourDate; 
@property (assign,nonatomic,__weak) UIView * dayGridView;              //@synthesize dayGridView=_dayGridView - In the implementation block
-(UIView *)dayGridView;
-(void)setHourDate:(NSDate *)arg1 ;
-(void)setDayGridView:(UIView *)arg1 ;
-(NSDate *)hourDate;
-(CGRect)accessibilityFrame;
-(id)accessibilityLabel;
-(char)isAccessibilityElement;
-(CGRect)accessibilityFrameForScrolling;
-(char)_accessibilityIsSpeakThisElement;
@end

