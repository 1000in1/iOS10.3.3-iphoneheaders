/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:52 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <QuartzCore/CALayer.h>

@class _UILabelContentLayer;

@interface _UILabelLayer : CALayer {

	_UILabelContentLayer* _contentLayer;
	char _contentInsetsValid;
	UIEdgeInsets _contentInsets;

}
-(void)setFrame:(CGRect)arg1 ;
-(void)setNeedsDisplayOnBoundsChange:(char)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setMasksToBounds:(char)arg1 ;
-(void)setContentsFormat:(id)arg1 ;
-(void)setContentsGravity:(id)arg1 ;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(void)setContentsMultiplyColor:(CGColorRef)arg1 ;
-(id)_labelLayerToClipDuringBoundsSizeAnimation;
-(void)_setLabelMasksToBoundsForAnimation:(char)arg1 ;
-(void)invalidateContentInsets;
-(void)_clearContents;
-(void)_updateContentLayer;
-(void)updateContentInsets;
-(void)updateContentLayerSize;
-(void)layoutSublayers;
-(void)_setFrameOrBounds:(CGRect)arg1 settingAction:(/*^block*/id)arg2 ;
@end
