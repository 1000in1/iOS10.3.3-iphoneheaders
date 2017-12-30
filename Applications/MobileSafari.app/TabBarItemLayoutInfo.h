/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:12 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MobileSafari/MobileSafari-Structs.h>
@class TabBarItemView, TabBar, TabBarItem;

@interface TabBarItemLayoutInfo : NSObject {

	TabBarItemView* _leadingView;
	TabBarItemView* _trailingView;
	char _canClose;
	char _reordering;
	char _leadingEdgeVisible;
	char _trailingEdgeVisible;
	char _hidesTitleText;
	char _visibleInTabBar;
	char _removedFromTabBar;
	TabBar* _tabBar;
	TabBarItem* _tabBarItem;
	float _titleLayoutWidth;
	float _titleAnchorAdditionalOffset;
	unsigned _activeAnimationCount;
	CGRect _frame;

}

@property (nonatomic,__weak,readonly) TabBar * tabBar;                                           //@synthesize tabBar=_tabBar - In the implementation block
@property (nonatomic,__weak,readonly) TabBarItem * tabBarItem;                                   //@synthesize tabBarItem=_tabBarItem - In the implementation block
@property (assign,nonatomic) CGRect frame;                                                       //@synthesize frame=_frame - In the implementation block
@property (assign,nonatomic) char canClose;                                                      //@synthesize canClose=_canClose - In the implementation block
@property (assign,getter=isReordering,nonatomic) char reordering;                                //@synthesize reordering=_reordering - In the implementation block
@property (assign,getter=isLeadingEdgeVisible,nonatomic) char leadingEdgeVisible;                //@synthesize leadingEdgeVisible=_leadingEdgeVisible - In the implementation block
@property (assign,getter=isTrailingEdgeVisible,nonatomic) char trailingEdgeVisible;              //@synthesize trailingEdgeVisible=_trailingEdgeVisible - In the implementation block
@property (assign,nonatomic) float titleLayoutWidth;                                             //@synthesize titleLayoutWidth=_titleLayoutWidth - In the implementation block
@property (assign,nonatomic) char hidesTitleText;                                                //@synthesize hidesTitleText=_hidesTitleText - In the implementation block
@property (assign,nonatomic) float titleAnchorAdditionalOffset;                                  //@synthesize titleAnchorAdditionalOffset=_titleAnchorAdditionalOffset - In the implementation block
@property (nonatomic,readonly) TabBarItemView * leadingView; 
@property (nonatomic,readonly) TabBarItemView * trailingView; 
@property (nonatomic,readonly) char hasViews; 
@property (assign,getter=isVisibleInTabBar,nonatomic) char visibleInTabBar;                      //@synthesize visibleInTabBar=_visibleInTabBar - In the implementation block
@property (assign,getter=isRemovedFromTabBar,nonatomic) char removedFromTabBar;                  //@synthesize removedFromTabBar=_removedFromTabBar - In the implementation block
@property (assign,nonatomic) unsigned activeAnimationCount;                                      //@synthesize activeAnimationCount=_activeAnimationCount - In the implementation block
-(TabBarItemView *)trailingView;
-(TabBarItemView *)leadingView;
-(void)_clearViews;
-(void)_ensureViews;
-(void)_clearViewsIfNeeded;
-(void)setHidesTitleText:(char)arg1 ;
-(void)updateTabBarStyle;
-(char)hasViews;
-(void)_updateHidesTitleText;
-(int)_visibleEdgeForViewWithTitleAnchorEdge:(int)arg1 ;
-(void)setTitleLayoutWidth:(float)arg1 ;
-(void)setTitleAnchorAdditionalOffset:(float)arg1 ;
-(void)updateTitleTruncation;
-(void)closeButtonTapped:(id)arg1 ;
-(char)_requiresViews;
-(id)_reusableViewWithTitleAnchorEdge:(int)arg1 ;
-(void)_clearView:(id)arg1 ;
-(id)initWithTabBar:(id)arg1 item:(id)arg2 ;
-(void)itemDidUpdateTitle;
-(void)itemDidUpdateIsActive;
-(void)itemDidUpdateIsPlaceholder;
-(void)setCanClose:(char)arg1 ;
-(void)setLeadingEdgeVisible:(char)arg1 ;
-(void)setTrailingEdgeVisible:(char)arg1 ;
-(void)setVisibleInTabBar:(char)arg1 ;
-(void)setRemovedFromTabBar:(char)arg1 ;
-(void)setActiveAnimationCount:(unsigned)arg1 ;
-(char)canClose;
-(char)isLeadingEdgeVisible;
-(char)isTrailingEdgeVisible;
-(float)titleLayoutWidth;
-(char)hidesTitleText;
-(float)titleAnchorAdditionalOffset;
-(char)isVisibleInTabBar;
-(char)isRemovedFromTabBar;
-(unsigned)activeAnimationCount;
-(id)init;
-(void)setFrame:(CGRect)arg1 ;
-(void)dealloc;
-(CGRect)frame;
-(TabBarItem *)tabBarItem;
-(TabBar *)tabBar;
-(void)setReordering:(char)arg1 ;
-(char)isReordering;
@end

