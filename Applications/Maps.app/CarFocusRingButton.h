/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:37 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/CarFocusableButton.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class CALayer, NSString;

@interface CarFocusRingButton : CarFocusableButton <UIGestureRecognizerDelegate> {

	CALayer* _knobFocusLayer;
	char _showSelection;
	char _reducedFocusLayerHeight;
	UIEdgeInsets _focusLayerInsets;

}

@property (assign,nonatomic) char showSelection;                                                         //@synthesize showSelection=_showSelection - In the implementation block
@property (assign,getter=isReducedFocusLayerHeight,nonatomic) char reducedFocusLayerHeight;              //@synthesize reducedFocusLayerHeight=_reducedFocusLayerHeight - In the implementation block
@property (assign,nonatomic) UIEdgeInsets focusLayerInsets;                                              //@synthesize focusLayerInsets=_focusLayerInsets - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setShowSelection:(char)arg1 ;
-(void)setReducedFocusLayerHeight:(char)arg1 ;
-(char)isReducedFocusLayerHeight;
-(UIEdgeInsets)focusLayerInsets;
-(void)setFocusLayerInsets:(UIEdgeInsets)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(char)showSelection;
@end

