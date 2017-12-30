/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:28:55 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilitySettings/AccessibilitySettings-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UILabel, NSString, UIControl, UIView;

@interface ASTButtonCell : UIView {

	UIImageView* _imageView;
	UILabel* _label;
	UIImageView* _borderView;
	char _newIcon;
	/*^block*/id _activateCellBlock;
	NSString* _location;
	NSString* _iconKey;
	UIControl* _controlIcon;
	CGPoint _centerPoint;

}

@property (nonatomic,copy) id activateCellBlock;                     //@synthesize activateCellBlock=_activateCellBlock - In the implementation block
@property (nonatomic,retain) NSString * location;                    //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) NSString * iconKey;                     //@synthesize iconKey=_iconKey - In the implementation block
@property (nonatomic,readonly) UIControl * controlIcon;              //@synthesize controlIcon=_controlIcon - In the implementation block
@property (nonatomic,readonly) UIView * borderView;                  //@synthesize borderView=_borderView - In the implementation block
@property (assign,nonatomic) CGPoint centerPoint;                    //@synthesize centerPoint=_centerPoint - In the implementation block
@property (assign,nonatomic) char newIcon;                           //@synthesize newIcon=_newIcon - In the implementation block
-(NSString *)iconKey;
-(id)initWithFrame:(CGRect)arg1 location:(id)arg2 iconKey:(id)arg3 ;
-(void)setNewIcon:(char)arg1 ;
-(void)setActivateCellBlock:(id)arg1 ;
-(UIView *)borderView;
-(id)activateCellBlock;
-(void)setIconKey:(NSString *)arg1 ;
-(id)_iconColor;
-(char)newIcon;
-(void)_unhighlightIcon:(id)arg1 ;
-(UIControl *)controlIcon;
-(void)_highlightIcon:(id)arg1 ;
-(void)_activate:(id)arg1 ;
-(CGPoint)centerPoint;
-(void)layoutSubviews;
-(void)dealloc;
-(NSString *)location;
-(CGRect)accessibilityFrame;
-(id)accessibilityLabel;
-(id)accessibilityValue;
-(id)accessibilityHint;
-(char)isAccessibilityElement;
-(void)setLocation:(NSString *)arg1 ;
-(void)setCenterPoint:(CGPoint)arg1 ;
@end

