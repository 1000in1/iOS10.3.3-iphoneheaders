/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:28 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIBarItem.h>

@class NSString, UIImage, UITabBarButton, _UITabBarItemAppearanceStorage, UIColor;

@interface UITabBarItem : UIBarItem {

	NSString* _title;
	SEL _action;
	id _target;
	UIImage* _templateImage;
	UIImage* _selectedTemplateImage;
	UIImage* _selectedImage;
	UIImage* _unselectedImage;
	UIEdgeInsets _imageInsets;
	NSString* _badgeValue;
	UITabBarButton* _view;
	_UITabBarItemAppearanceStorage* _appearanceStorage;
	struct {
		unsigned enabled : 1;
		unsigned style : 3;
		unsigned isSystemItem : 1;
		unsigned systemItem : 7;
		unsigned customSelectedImage : 1;
		unsigned customUnselectedImage : 1;
	}  _tabBarItemFlags;
	int __barMetrics;
	int __imageStyle;
	UIColor* __tintColor;

}

@property (assign,setter=_setBarMetrics:,nonatomic) int _barMetrics;                              //@synthesize _barMetrics=__barMetrics - In the implementation block
@property (assign,setter=_setImageStyle:,nonatomic) int _imageStyle;                              //@synthesize _imageStyle=__imageStyle - In the implementation block
@property (setter=_setTintColor:,nonatomic,retain) UIColor * _tintColor;                          //@synthesize _tintColor=__tintColor - In the implementation block
@property (assign,setter=_setSelected:,getter=_isSelected,nonatomic) char _selected; 
@property (nonatomic,retain) UIImage * selectedImage; 
@property (nonatomic,copy) NSString * badgeValue;                                                 //@synthesize badgeValue=_badgeValue - In the implementation block
@property (assign,nonatomic) UIOffset titlePositionAdjustment; 
@property (nonatomic,copy) UIColor * badgeColor; 
+(id)_appearanceBlindViewClasses;
-(id)init;
-(void)setImage:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(id)arg1 ;
-(id)view;
-(id)title;
-(SEL)action;
-(void)setView:(id)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(id)image;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(void)_updateView;
-(char)isSystemItem;
-(int)systemItem;
-(void)setTitleTextAttributes:(id)arg1 forState:(unsigned)arg2 ;
-(void)_setTintColor:(id)arg1 ;
-(UIColor *)_tintColor;
-(void)setAction:(SEL)arg1 ;
-(id)initWithTitle:(id)arg1 image:(id)arg2 tag:(int)arg3 ;
-(UIImage *)selectedImage;
-(id)unselectedImage;
-(void)setBadgeValue:(NSString *)arg1 ;
-(id)initWithTabBarSystemItem:(int)arg1 tag:(int)arg2 ;
-(id)_internalTitle;
-(NSString *)badgeValue;
-(id)_internalTemplateImage;
-(id)titleTextAttributesForState:(unsigned)arg1 ;
-(char)_isSelected;
-(int)_barMetrics;
-(int)_imageStyle;
-(void)_setBarMetrics:(int)arg1 ;
-(void)_setImageStyle:(int)arg1 ;
-(void)_showSelectedIndicator:(char)arg1 changeSelection:(char)arg2 ;
-(void)_updateButtonForTintColor:(id)arg1 selected:(char)arg2 ;
-(id)_updateImageWithTintColor:(id)arg1 isSelected:(char)arg2 getImageOffset:(UIOffset*)arg3 ;
-(UIEdgeInsets)imageInsets;
-(void)setSelectedImage:(UIImage *)arg1 ;
-(char)hasTitle;
-(id)resolvedTitle;
-(id)_imageForState:(unsigned)arg1 metrics:(int)arg2 position:(int)arg3 type:(int)arg4 ;
-(id)_createViewForTabBar:(id)arg1 asProxyView:(char)arg2 ;
-(void)_setSelected:(char)arg1 ;
-(void)_setTitleTextAttributeValue:(id)arg1 forAttributeKey:(id)arg2 state:(unsigned)arg3 ;
-(void)_updateViewAndPositionItems:(char)arg1 ;
-(void)setImageInsets:(UIEdgeInsets)arg1 ;
-(void)setBadgeTextAttributes:(id)arg1 forState:(unsigned)arg2 ;
-(id)badgeTextAttributesForState:(unsigned)arg1 ;
-(UIColor *)badgeColor;
-(void)setBadgeColor:(UIColor *)arg1 ;
-(void)_updateToMatchCurrentState;
-(void)setTitlePositionAdjustment:(UIOffset)arg1 ;
-(UIOffset)titlePositionAdjustment;
-(void)_setInternalTitle:(id)arg1 ;
-(void)_setInternalTemplateImage:(id)arg1 ;
-(id)_internalTemplateImages;
-(void)_updateViewBadge;
-(id)initWithTitle:(id)arg1 image:(id)arg2 selectedImage:(id)arg3 ;
-(void)setFinishedSelectedImage:(id)arg1 withFinishedUnselectedImage:(id)arg2 ;
-(id)finishedSelectedImage;
-(id)finishedUnselectedImage;
-(void)setAnimatedBadge:(char)arg1 ;
-(char)animatedBadge;
-(void)setUnselectedImage:(id)arg1 ;
@end

