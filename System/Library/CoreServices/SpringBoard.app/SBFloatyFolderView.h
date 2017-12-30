/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:25 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBFolderView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/_UISettingsKeyObserver.h>

@class SBFloatyFolderBackgroundClipView, NSMutableArray, NSMapTable, UITapGestureRecognizer, UIPinchGestureRecognizer, UILongPressGestureRecognizer, SBFolderSettings, NSString;

@interface SBFloatyFolderView : SBFolderView <UIGestureRecognizerDelegate, _UISettingsKeyObserver> {

	SBFloatyFolderBackgroundClipView* _scrollClipView;
	NSMutableArray* _pageBackgroundViews;
	NSMapTable* _pageBackgroundViewsForIconListViews;
	unsigned _scalingViewPageIndex;
	UITapGestureRecognizer* _tapGesture;
	UIPinchGestureRecognizer* _pinchGesture;
	UILongPressGestureRecognizer* _longPressGesture;
	SBFolderSettings* _folderSettings;
	CGPoint _preReachabilityTitleOrigin;
	CGPoint _reachabilityTitleOrigin;
	CGPoint _preReachabilityScaleOrigin;
	CGPoint _reachabilityScaleOrigin;
	float _reachabilityYOffset;
	char _layingOutForReachability;
	char _displayingMultipleIconLists;
	char _animatingRotation;

}

@property (assign,getter=isDisplayingMultipleIconLists,nonatomic) char displayingMultipleIconLists;              //@synthesize displayingMultipleIconLists=_displayingMultipleIconLists - In the implementation block
@property (assign,getter=isAnimatingRotation,nonatomic) char animatingRotation;                                  //@synthesize animatingRotation=_animatingRotation - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned)_countOfAdditionalPagesToKeepVisibleInOneDirection;
+(Class)_scrollViewClass;
-(id)initWithFolder:(id)arg1 orientation:(int)arg2 viewMap:(id)arg3 context:(id)arg4 ;
-(float)_offsetToCenterPageControlInSpaceForPageControl;
-(void)handleReachabilityActivated:(char)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(id)borrowScalingView;
-(void)returnScalingView;
-(void)fadeContentForMagnificationFraction:(float)arg1 ;
-(void)_configureGestures;
-(char)_shouldConvertToMultipleIconListsInLandscapeOrientation;
-(void)_convertToMultipleIconListsAnimated:(char)arg1 ;
-(void)enumeratePageBackgroundViewsUsingBlock:(/*^block*/id)arg1 ;
-(void)setAccessibilityLegibilitySettings:(id)arg1 ;
-(void)_addIconListView:(id)arg1 ;
-(char)isDisplayingMultipleIconLists;
-(id)_newPageBackgroundView;
-(void)_removeIconListView:(id)arg1 ;
-(unsigned)_countOfAdditionalPagesToKeepAnimatingInOneDirection;
-(void)_convertToSingleIconListAnimated:(char)arg1 ;
-(float)_titleFontSize;
-(void)setAnimatingRotation:(char)arg1 ;
-(CGRect)_frameForScalingView;
-(float)_titleVerticalOffsetForOrientation:(int)arg1 ;
-(CGRect)_pageBackgroundFrameForPageRect:(CGRect)arg1 ;
-(void)_updateIconListContainment:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)_updateScalingViewLocation;
-(id)iconListViewAtPoint:(CGPoint)arg1 ;
-(void)willTransitionAnimated:(char)arg1 withSettings:(id)arg2 ;
-(void)didTransitionAnimated:(char)arg1 ;
-(void)setDisplayingMultipleIconLists:(char)arg1 ;
-(void)_handleOutsideTap:(id)arg1 ;
-(char)_tapToCloseGestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)_handleReachabilityActivatedAnimate:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleReachabilityDectivatedAnimate:(char)arg1 completion:(/*^block*/id)arg2 ;
-(CGPoint)visibleFolderRelativeImageCenterForIcon:(id)arg1 ;
-(CGRect)_iconListFrameForPageRect:(CGRect)arg1 atIndex:(unsigned)arg2 ;
-(char)locationCountsAsInsideFolder:(CGPoint)arg1 ;
-(char)_showsTitle;
-(void)fadeContentForMinificationFraction:(float)arg1 ;
-(float)reachabilityYOffset;
-(void)_currentPageIndexDidChange;
-(void)dealloc;
-(char)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)setLegibilitySettings:(id)arg1 ;
-(void)setBackgroundAlpha:(float)arg1 ;
-(void)_orientationDidChange:(int)arg1 ;
-(void)_layoutSubviews;
-(void)_handleLongPressGesture:(id)arg1 ;
-(char)isAnimatingRotation;
-(void)_handlePinchGesture:(id)arg1 ;
@end

