/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:19 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class UIView, UIButton, UIColor, NSString;

@interface _UIButtonMaskAnimationView : UIView <CAAnimationDelegate> {

	unsigned _hardEdge;
	UIView* _hardEdgeLine;
	UIButton* _delegate;

}

@property (assign,nonatomic) UIButton * delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (assign) float borderWidth; 
@property (assign,nonatomic) UIColor * borderColor; 
@property (assign) unsigned hardEdge; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)layoutSubviews;
-(void)setDelegate:(UIButton *)arg1 ;
-(UIButton *)delegate;
-(char)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)setBorderColor:(UIColor *)arg1 ;
-(void)setBorderWidth:(float)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(char)arg2 ;
-(UIColor *)borderColor;
-(float)borderWidth;
-(void)setHardEdge:(unsigned)arg1 ;
-(unsigned)hardEdge;
-(CGRect)_frameForLine;
@end

