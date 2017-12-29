/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:56 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIControl.h>

@class UITabBarSwappableImageView, UIVisualEffectView, UITabBarButtonLabel, _UIBadgeView, UIImageView, UIImage, NSMutableDictionary, UIColor, UITabBar;

@interface UITabBarButton : UIControl {

	CGRect _hitRect;
	UITabBarSwappableImageView* _info;
	UIVisualEffectView* _vibrancyEffectView;
	UITabBarButtonLabel* _label;
	_UIBadgeView* _badge;
	UIImageView* _selectedIndicator;
	char _selected;
	UIEdgeInsets _infoInsets;
	UIOffset _selectedInfoOffset;
	UIOffset _infoOffset;
	UIImage* _customSelectedIndicatorImage;
	UIOffset _labelOffset;
	NSMutableDictionary* _buttonTintColorsForState;
	NSMutableDictionary* _contentTintColorsForState;
	UIColor* _badgeColor;
	NSMutableDictionary* _badgeTextAttributesForState;
	char _showsHighlightedState;
	char _centerAllContents;
	Class _appearanceGuideClass;
	UITabBar* _tabBar;

}

@property (nonatomic,__weak,readonly) UITabBar * tabBar;                                                                             //@synthesize tabBar=_tabBar - In the implementation block
@property (setter=_setAppearanceGuideClass:,nonatomic,retain) Class _appearanceGuideClass;                                           //@synthesize appearanceGuideClass=_appearanceGuideClass - In the implementation block
@property (assign,setter=_setCenterAllContents:,nonatomic) char _centerAllContents;                                                  //@synthesize centerAllContents=_centerAllContents - In the implementation block
@property (setter=_setUnselectedTintColor:,getter=_unselectedTintColor,nonatomic,retain) UIColor * unselectedTintColor; 
@property (assign,setter=_setShowsHighlightedState:,nonatomic) char _showsHighlightedState;                                          //@synthesize showsHighlightedState=_showsHighlightedState - In the implementation block
@property (assign,setter=_setSelected:,getter=_isSelected,nonatomic) char _selected; 
+(id)_defaultLabelColor;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setImage:(id)arg1 ;
-(char)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setSemanticContentAttribute:(int)arg1 ;
-(char)pointInside:(CGPoint)arg1 forEvent:(GSEventRef)arg2 ;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)setEnabled:(char)arg1 ;
-(CGSize)_sensitivitySize;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(char)canBecomeFocused;
-(char)shouldUpdateFocusInContext:(id)arg1 ;
-(CGRect)_responderSelectionRectForWindow:(id)arg1 ;
-(CGRect)_focusRegionFrameInScreen:(id)arg1 ;
-(Class)_appearanceGuideClass;
-(void)setHighlighted:(char)arg1 ;
-(void)_UIAppearance_setTitleTextAttributes:(id)arg1 forState:(unsigned)arg2 ;
-(void)_setTitleTextAttributes:(id)arg1 forState:(unsigned)arg2 ;
-(void)_setAppearanceGuideClass:(Class)arg1 ;
-(UITabBar *)tabBar;
-(id)_tabBar;
-(void)_sendFocusAction;
-(char)_isSelected;
-(void)_showSelectedIndicator:(char)arg1 changeSelection:(char)arg2 ;
-(void)_setCustomSelectedIndicatorImage:(id)arg1 ;
-(id)initWithImage:(id)arg1 selectedImage:(id)arg2 label:(id)arg3 withInsets:(UIEdgeInsets)arg4 tabBar:(id)arg5 ;
-(void)_setSelectedInfoOffset:(UIOffset)arg1 ;
-(void)_applyTabBarButtonAppearanceStorage:(id)arg1 withTaggedSelectors:(id)arg2 ;
-(char)_showsHighlightedState;
-(void)_setShowsHighlightedState:(char)arg1 ;
-(void)_setBadgeValue:(id)arg1 ;
-(void)_setTabBarHitRect:(CGRect)arg1 ;
-(id)_selectedIndicatorImage;
-(void)_setSelected:(char)arg1 ;
-(void)_setUnselectedTintColor:(id)arg1 ;
-(void)_setContentTintColor:(id)arg1 forState:(unsigned)arg2 ;
-(void)_setCenterAllContents:(char)arg1 ;
-(id)_contentTintColorForState:(unsigned)arg1 ;
-(void)_UIAppearance_setTitlePositionAdjustment:(UIOffset)arg1 ;
-(void)_setTitlePositionAdjustment:(UIOffset)arg1 ;
-(void)_UIAppearance_setBadgeColor:(id)arg1 ;
-(void)_setBadgeColor:(id)arg1 ;
-(void)_UIAppearance_setBadgeTextAttributes:(id)arg1 forState:(unsigned)arg2 ;
-(void)_setBadgeTextAttributes:(id)arg1 forState:(unsigned)arg2 ;
-(id)_unselectedTintColor;
-(void)_updateVibrancyEffectView;
-(void)_updateSelectedIndicatorView;
-(void)_updateToMatchCurrentState;
-(id)_buttonTintColorForState:(unsigned)arg1 ;
-(void)_updateBadgeAppearanceAndLayoutNow:(char)arg1 ;
-(void)_setInfoOffset:(UIOffset)arg1 ;
-(void)_positionBadge;
-(void)_positionBadgeAfterChangesIfNecessary:(/*^block*/id)arg1 ;
-(void)_updateInfoFrame;
-(void)_updateSelectedIndicatorFrame;
-(CGSize)_appleTV_sizeThatFits:(CGSize)arg1 ;
-(void)_appleTV_layoutSubviews;
-(CGRect)_responderSelectionRectForCoordinateSpace:(id)arg1 ;
-(id)_selectedIndicatorView;
-(CGRect)_tabBarHitRect;
-(void)_setImage:(id)arg1 selected:(char)arg2 offset:(UIOffset)arg3 ;
-(void)_setLabelHidden:(char)arg1 ;
-(UIOffset)_titlePositionAdjustment;
-(void)_setButtonTintColor:(id)arg1 forState:(unsigned)arg2 ;
-(char)_centerAllContents;
@end
