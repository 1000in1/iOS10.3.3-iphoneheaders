/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:36 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/MapsLargerHitTargetButton.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIFocusEnvironment.h>

@class NSArray, UIView, UILongPressGestureRecognizer, UITapGestureRecognizer, CALayer, UIBezierPath, NSString;

@interface CarPanButton : MapsLargerHitTargetButton <UIGestureRecognizerDelegate, UIFocusEnvironment> {

	UILongPressGestureRecognizer* _longPressRecognizer;
	UITapGestureRecognizer* _tapRecognizer;
	UILongPressGestureRecognizer* _physicalLongPressRecognizer;
	UITapGestureRecognizer* _physicalTapRecognizer;
	CALayer* _backgroundLayer;
	UIBezierPath* _touchAreaExtended;
	int _direction;

}

@property (nonatomic,readonly) int direction;                                          //@synthesize direction=_direction - In the implementation block
@property (nonatomic,readonly) UIBezierPath * touchAreaExtended;                       //@synthesize touchAreaExtended=_touchAreaExtended - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * preferredFocusEnvironments; 
@property (nonatomic,__weak,readonly) UIView * preferredFocusedView; 
+(id)arrowImageForDirection:(int)arg1 ;
-(UIBezierPath *)touchAreaExtended;
-(void)layoutSubviews;
-(char)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(NSString *)description;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(char)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(char)_isChargeEnabled;
-(char)canBecomeFocused;
-(void)didUpdateFocusFromView:(id)arg1 ;
-(void)setCharge:(float)arg1 ;
-(int)direction;
-(void)handleLongPress:(id)arg1 ;
-(void)handleTap:(id)arg1 ;
-(id)initWithDirection:(int)arg1 ;
@end

