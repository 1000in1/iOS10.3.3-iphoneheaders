/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:22:33 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/AccessibilityBundles/VoiceOver.axuiservice/VoiceOver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceOver/VoiceOver-Structs.h>
#import <UIKit/UIView.h>

@class UIImage, MarkerImageView, NSMutableArray;

@interface VOTUIRotorKnob : UIView {

	int _position;
	int _count;
	UIImage* _emptyMarkImage;
	UIImage* _selectedMarkImage;
	MarkerImageView* _knobImageView;
	char _lastMovementWasForward;
	char _lastMovementSkippedEmptySpace;
	char _needsLayout;
	NSMutableArray* _markerImageViews;

}

@property (assign,nonatomic) int count;              //@synthesize count=_count - In the implementation block
-(void)updatePosition:(char)arg1 ;
-(void)_updateSelectedMarker;
-(void)_layoutKnob;
-(CGPoint)_trackPointForPlacement:(float)arg1 ;
-(void)_layoutMarkerAtPosition:(CGPoint)arg1 withCircleLocation:(float)arg2 withImageView:(id)arg3 ;
-(void)_layoutTrackMarks:(int)arg1 placements:(double)arg2 ;
-(void)_layoutTrackMarks;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(int)count;
-(void)reset;
-(void)setCount:(int)arg1 ;
@end

