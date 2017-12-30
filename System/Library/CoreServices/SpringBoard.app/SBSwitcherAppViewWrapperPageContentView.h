/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:21 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBSwitcherWallpaperPageContentView.h>

@protocol SBSwitcherAppViewWrapperPageContentViewDelegate;
@class UIView, SBAppView, SBOrientationTransformWrapperView, SBDisplayItem, SBLayoutState, SBFakeStatusBarView, SBAppSwitcherSettings;

@interface SBSwitcherAppViewWrapperPageContentView : SBSwitcherWallpaperPageContentView {

	UIView* _rasterizationWrapperView;
	SBAppView* _appView;
	SBOrientationTransformWrapperView* _appTransformView;
	SBDisplayItem* _displayItem;
	SBLayoutState* _layoutState;
	SBFakeStatusBarView* _fakeStatusBar;
	id<SBSwitcherAppViewWrapperPageContentViewDelegate> _delegate;
	SBAppSwitcherSettings* _settings;
	char _presenting;
	char _interactive;
	int _savedStatusBarStyleOverride;

}

@property (nonatomic,retain) SBAppView * appView;                                                              //@synthesize appView=_appView - In the implementation block
@property (nonatomic,retain) SBDisplayItem * displayItem;                                                      //@synthesize displayItem=_displayItem - In the implementation block
@property (assign,nonatomic,__weak) id<SBSwitcherAppViewWrapperPageContentViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)prepareToBecomeVisibleIfNecessary;
-(void)viewPresenting:(id)arg1 withInteraction:(char)arg2 andInitialProgress:(float)arg3 forTransitionRequest:(id)arg4 ;
-(void)interactionDidEnd:(char)arg1 ;
-(SBAppView *)appView;
-(id)_viewForWallpaperWrapper;
-(void)_createStatusBarIfNeeded;
-(id)initWithFrame:(CGRect)arg1 appView:(id)arg2 displayItem:(id)arg3 layoutState:(id)arg4 delegate:(id)arg5 ;
-(void)_layoutFakeStatusBar;
-(void)_updateBreadcrumbOverrides;
-(void)setAppView:(SBAppView *)arg1 ;
-(void)setDisplayItem:(SBDisplayItem *)arg1 ;
-(SBDisplayItem *)displayItem;
-(void)viewDismissing:(id)arg1 withInteraction:(char)arg2 andInitialProgress:(float)arg3 forTransitionRequest:(id)arg4 ;
-(void)invalidate;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setCornerRadius:(float)arg1 ;
-(float)cornerRadius;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<SBSwitcherAppViewWrapperPageContentViewDelegate>)arg1 ;
-(id<SBSwitcherAppViewWrapperPageContentViewDelegate>)delegate;
-(void)setContentMode:(int)arg1 ;
-(void)setOrientation:(int)arg1 ;
-(char)_shouldAnimatePropertyWithKey:(id)arg1 ;
@end

