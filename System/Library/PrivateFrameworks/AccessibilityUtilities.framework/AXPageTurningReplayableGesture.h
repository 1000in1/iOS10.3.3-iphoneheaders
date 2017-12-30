/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:51:58 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
#import <AccessibilityUtilities/AXReplayableGesture.h>

@interface AXPageTurningReplayableGesture : AXReplayableGesture {

	char _isLeftToRightSwipe;
	char _isLandscape;

}

@property (assign,nonatomic) char isLeftToRightSwipe;              //@synthesize isLeftToRightSwipe=_isLeftToRightSwipe - In the implementation block
@property (assign,nonatomic) char isLandscape;                     //@synthesize isLandscape=_isLandscape - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)fingerIdentifiersAtEventIndex:(unsigned)arg1 ;
-(double)timeAtEventIndex:(unsigned)arg1 ;
-(CGPoint)pointForFingerIdentifier:(id)arg1 atEventIndex:(unsigned)arg2 ;
-(float)forceForFingerIdentifier:(id)arg1 atEventIndex:(unsigned)arg2 ;
-(char)arePointsDeviceRelative;
-(void)updateForLandscape:(char)arg1 ;
-(char)isLeftToRightSwipe;
-(id)initForLeftToRightSwipe:(char)arg1 ;
-(void)setIsLeftToRightSwipe:(char)arg1 ;
-(char)isLandscape;
-(void)setIsLandscape:(char)arg1 ;
-(unsigned)numberOfEvents;
@end
