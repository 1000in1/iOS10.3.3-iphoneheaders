/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:42 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class UIImage, NSMutableDictionary;

@interface _UISegmentedControlAppearanceStorage : NSObject {

	UIImage* _optionsBackgroundImage;
	NSMutableDictionary* _backgroundImages;
	NSMutableDictionary* _miniBackgroundImages;
	NSMutableDictionary* _dividerImages;
	NSMutableDictionary* _miniDividerImages;
	NSMutableDictionary* _textAttributesForState;
	NSMutableDictionary* _backgroundPositionAdjustmentsForBarMetrics;
	NSMutableDictionary* _contentPositionOffsets;
	NSMutableDictionary* _miniContentPositionOffsets;
	char _legacyDontHighlight;
	char _legacySuppressOptionsBackground;
	char _isTiled;
	unsigned _leftCapWidth;
	unsigned _rightCapWidth;

}

@property (nonatomic,retain) UIImage * optionsBackgroundImage;              //@synthesize optionsBackgroundImage=_optionsBackgroundImage - In the implementation block
-(id)init;
-(id)textAttributesForState:(unsigned)arg1 ;
-(void)setTextAttributes:(id)arg1 forState:(unsigned)arg2 ;
-(id)contentPositionOffsetForSegment:(int)arg1 inMiniBar:(char)arg2 noFallback:(char)arg3 ;
-(id)backgroundImageForState:(unsigned)arg1 isMini:(char)arg2 withFallback:(char)arg3 ;
-(id)anyDividerImageForMini:(char)arg1 ;
-(id)dividerImageForLeftSegmentState:(unsigned)arg1 rightSegmentState:(unsigned)arg2 isMini:(char)arg3 withFallback:(char)arg4 ;
-(void)setContentPositionOffset:(id)arg1 forSegment:(int)arg2 inMiniBar:(char)arg3 ;
-(void)setBackgroundImage:(id)arg1 forState:(unsigned)arg2 isMini:(char)arg3 ;
-(void)setDividerImage:(id)arg1 forLeftSegmentState:(unsigned)arg2 rightSegmentState:(unsigned)arg3 isMini:(char)arg4 ;
-(void)takeTextAttributesFrom:(SCD_Struct_UI33)arg1 forState:(unsigned)arg2 ;
-(char)wantsTrackingSuppressed;
-(void)setBackgroundPositionAdjustment:(float)arg1 forBarMetrics:(int)arg2 ;
-(float)backgroundPositionAdjustmentForBarMetrics:(int)arg1 ;
-(id)contentPositionOffsetForSegment:(int)arg1 inMiniBar:(char)arg2 ;
-(id)backgroundImageForState:(unsigned)arg1 isMini:(char)arg2 ;
-(id)anyDividerImage;
-(id)dividerImageForLeftSegmentState:(unsigned)arg1 rightSegmentState:(unsigned)arg2 isMini:(char)arg3 ;
-(char)legacySuppressOptionsBackground;
-(void)setDetail:(SCD_Struct_UI34*)arg1 ;
-(void)setIsTiled:(char)arg1 leftCapWidth:(unsigned)arg2 rightCapWidth:(unsigned)arg3 ;
-(UIImage *)optionsBackgroundImage;
-(void)setOptionsBackgroundImage:(UIImage *)arg1 ;
@end
