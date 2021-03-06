/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:13 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <UIKit/UIView.h>

@class _UIBackdropView, TabBarItemView, TabOverviewItemView;

@interface TabDragView : UIView {

	float _tabHeight;
	_UIBackdropView* _backdropView;
	char _hasDarkBackground;
	TabBarItemView* _tabBarItemView;
	TabOverviewItemView* _tabOverviewItemView;
	unsigned _presentationType;
	CGSize _contentsSize;

}

@property (nonatomic,readonly) TabBarItemView * tabBarItemView;                        //@synthesize tabBarItemView=_tabBarItemView - In the implementation block
@property (nonatomic,readonly) TabOverviewItemView * tabOverviewItemView;              //@synthesize tabOverviewItemView=_tabOverviewItemView - In the implementation block
@property (assign,nonatomic) CGSize contentsSize;                                      //@synthesize contentsSize=_contentsSize - In the implementation block
@property (assign,nonatomic) char hasDarkBackground;                                   //@synthesize hasDarkBackground=_hasDarkBackground - In the implementation block
@property (assign,nonatomic) unsigned presentationType;                                //@synthesize presentationType=_presentationType - In the implementation block
-(void)setContentsSize:(CGSize)arg1 ;
-(void)setPresentationType:(unsigned)arg1 ;
-(TabBarItemView *)tabBarItemView;
-(TabOverviewItemView *)tabOverviewItemView;
-(CGSize)contentsSize;
-(void)_updatePresentationType;
-(void)layoutSubviews;
-(id)initWithTabBar:(id)arg1 ;
-(unsigned)presentationType;
-(char)hasDarkBackground;
-(void)setHasDarkBackground:(char)arg1 ;
@end

