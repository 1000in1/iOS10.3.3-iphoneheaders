/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:20 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBIconImageView.h>
#import <SpringBoard/SBFolderIconObserver.h>
#import <SpringBoard/SBIconBlurryBackgroundViewObserver.h>

@class SBFolderIconBackgroundView, UIView, _SBIconGridWrapperView, NSMutableArray, SBFloatyFolderView, NSString;

@interface SBFolderIconImageView : SBIconImageView <SBFolderIconObserver, SBIconBlurryBackgroundViewObserver> {

	SBFolderIconBackgroundView* _backgroundView;
	UIView* _accessibilityBackgroundView;
	UIView* _pageGridContainer;
	_SBIconGridWrapperView* _leftWrapperView;
	_SBIconGridWrapperView* _rightWrapperView;
	NSMutableArray* _pageElements;
	unsigned _currentPageIndex;
	SBFloatyFolderView* _crossfadeFolderView;
	UIView* _crossfadeScalingView;
	char _animating;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)folderIcon:(id)arg1 didUpdateGridImage:(id)arg2 forListIndex:(unsigned)arg3 forContainedIconImageUpdate:(id)arg4 ;
-(Class)_iconGridImageClass;
-(void)scrollToFirstGapAnimated:(char)arg1 ;
-(CGRect)frameForMiniIconAtIndex:(unsigned)arg1 ;
-(unsigned)firstVisibleMiniIconIndex;
-(id)_folderIcon;
-(void)_updateRasterization;
-(void)_updateAccessibilityBackgroundContrast;
-(void)_setPageElements:(id)arg1 ;
-(void)scrollToTopOfFirstPageAnimated:(char)arg1 ;
-(void)setBackgroundAndIconGridImageAlpha:(float)arg1 ;
-(CGSize)_interiorGridSizeClipRect;
-(CGSize)_interPageSpacing;
-(void)scrollToTopOfPage:(unsigned)arg1 animated:(char)arg2 ;
-(void)_performScrollingMovingToLeft:(char)arg1 movingToRight:(char)arg2 targetPageIndex:(unsigned)arg3 targetPageScrollRow:(unsigned)arg4 newLeftElement:(id)arg5 newRightElement:(id)arg6 animated:(char)arg7 ;
-(id)_currentPageElement;
-(unsigned)visibleMiniIconCount;
-(CGRect)frameForMiniIconAtIndexPath:(id)arg1 ;
-(void)setWallpaperRelativeCenter:(CGPoint)arg1 ;
-(void)setFloatyFolderCrossfadeFraction:(float)arg1 ;
-(void)_showLeftMinigrid;
-(void)_showRightMinigrid;
-(void)updateImageAnimated:(char)arg1 ;
-(void)setIcon:(id)arg1 location:(int)arg2 animated:(char)arg3 ;
-(void)_setupGridViewsInDefaultConfiguration;
-(void)blurryBackgroundViewDidChangeWhetherBlurring:(id)arg1 ;
-(id)_generateSquareContentsImage;
-(id)darkeningOverlayImage;
-(void)scrollToGapOrTopIfFullOfPage:(unsigned)arg1 animated:(char)arg2 ;
-(unsigned)visibleMiniIconListIndex;
-(unsigned)centerVisibleMiniIconIndex;
-(unsigned)lastVisibleMiniIconIndex;
-(CGRect)visibleImageRelativeFrameForMiniIconAtIndex:(unsigned)arg1 ;
-(void)setIconGridImageAlpha:(float)arg1 ;
-(void)setSuppressesBlurryBackgroundChanges:(char)arg1 ;
-(void)prepareToCrossfadeWithFloatyFolderView:(id)arg1 allowFolderInteraction:(char)arg2 ;
-(void)cleanupAfterFloatyFolderCrossfade;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(id)snapshot;
-(void)_setAnimating:(char)arg1 ;
-(void)prepareForReuse;
-(id)backgroundView;
-(id)contentsImage;
-(void)setBackgroundScale:(float)arg1 ;
@end

