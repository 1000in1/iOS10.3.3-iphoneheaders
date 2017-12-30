/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:51 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Compass.app/Compass
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Compass/Compass-Structs.h>
#import <CompassUI/CompassRotatingView.h>

@class CompassBackgroundView, CompassLabelsView, CompassTriangleView, CompassBearingView, UIGestureRecognizer;

@interface CompassView : CompassRotatingView {

	CompassBackgroundView* _compassBackground;
	CompassLabelsView* _compassLabelsView;
	CompassTriangleView* _compassTriangleView;
	CompassBearingView* _compassBearingView;
	double _compassHeading;
	UIGestureRecognizer* _tapRecognizer;
	char _hasBearing;
	char _needsDisplay;

}
-(void)tappedCompass:(id)arg1 ;
-(void)updateDisplayIfNeeded;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)backgroundView;
-(double)compassHeading;
-(void)setCompassHeading:(double)arg1 ;
-(void)setCrosshairOffset:(CGSize)arg1 ;
@end

