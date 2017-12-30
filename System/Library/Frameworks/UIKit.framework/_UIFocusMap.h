/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:29 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UIFocusRegionContainer, _UIFocusMapDelegate;
#import <UIKit/UIKit-Structs.h>
@class _UIFocusedItemRegion, UIScreen, _UIFocusMapSearchInfo;

@interface _UIFocusMap : NSObject {

	char _minimumSearchAreaIsEmpty;
	char _trackingSearchInfo;
	char _needsSearchInfo;
	_UIFocusedItemRegion* _focusedRegion;
	UIScreen* _screen;
	id<_UIFocusRegionContainer> _rootContainer;
	int _focusMovementStyle;
	id<_UIFocusMapDelegate> _delegate;
	_UIFocusMapSearchInfo* _defaultItemSearchInfo;
	_UIFocusMapSearchInfo* _focusMovementSearchInfo;
	CGRect _minimumSearchArea;

}

@property (getter=_defaultItemSearchContext,nonatomic,readonly) _UIFocusMapSearchInfo * defaultItemSearchInfo;                              //@synthesize defaultItemSearchInfo=_defaultItemSearchInfo - In the implementation block
@property (getter=_focusMovementSearchContext,nonatomic,readonly) _UIFocusMapSearchInfo * focusMovementSearchInfo;                          //@synthesize focusMovementSearchInfo=_focusMovementSearchInfo - In the implementation block
@property (nonatomic,copy,readonly) _UIFocusedItemRegion * focusedRegion;                                                                   //@synthesize focusedRegion=_focusedRegion - In the implementation block
@property (getter=_screen,nonatomic,__weak,readonly) UIScreen * screen;                                                                     //@synthesize screen=_screen - In the implementation block
@property (assign,setter=_setRootContainer:,getter=_rootContainer,nonatomic,__weak) id<_UIFocusRegionContainer> rootContainer;              //@synthesize rootContainer=_rootContainer - In the implementation block
@property (assign,setter=_setMinimumSearchArea:,getter=_minimumSearchArea,nonatomic) CGRect minimumSearchArea;                              //@synthesize minimumSearchArea=_minimumSearchArea - In the implementation block
@property (assign,nonatomic) int focusMovementStyle;                                                                                        //@synthesize focusMovementStyle=_focusMovementStyle - In the implementation block
@property (assign,setter=_setDelegate:,getter=_delegate,nonatomic,__weak) id<_UIFocusMapDelegate> delegate;                                 //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id)_screen;
-(id)_delegate;
-(_UIFocusedItemRegion *)focusedRegion;
-(id)_initWithScreen:(id)arg1 focusedRegion:(id)arg2 ;
-(void)_setDelegate:(id)arg1 ;
-(void)_setRootContainer:(id)arg1 ;
-(void)_setMinimumSearchArea:(CGRect)arg1 ;
-(void)setFocusMovementStyle:(int)arg1 ;
-(void)_beginTrackingSearches;
-(id)_destinationItemForFocusMovement:(id)arg1 ;
-(id)_stopTrackingSearches;
-(id)_initWithScreen:(id)arg1 ;
-(id)_allFocusableItemsInEnvironment:(id)arg1 ;
-(id)_closestFocusableItemToPoint:(CGPoint)arg1 inRect:(CGRect)arg2 excludingItems:(id)arg3 ;
-(id)_rootContainer;
-(id)_allDefaultFocusableRegionsInContainer:(id)arg1 intersectingRegion:(id)arg2 ;
-(id)_destinationItemForFocusMovement:(id)arg1 startingFromRegion:(id)arg2 inRegions:(id)arg3 ;
-(id)_initWithScreen:(id)arg1 focusedItem:(id)arg2 ;
-(char)_isValidFocusMap;
-(id)_defaultMapSnapshotOptions;
-(id)_defaultFocusItemInEnvironment:(id)arg1 limitScopeUsingFocusPreferences:(char)arg2 ;
-(void)_beginTrackingDefaultItemSearchInfoIfNecessary;
-(id)_defaultItemSearchContext;
-(void)_beginTrackingFocusMovementSearchInfoIfNecessary;
-(id)_destinationItemForFocusMovement:(id)arg1 startingFromRegion:(id)arg2 ;
-(CGRect)_minimumSearchArea;
-(id)_focusMovementSearchContext;
-(int)focusMovementStyle;
-(id)_findAllDefaultFocusableRegionsWithOptions:(id)arg1 ;
-(id)_defaultFocusItemInEnvironment:(id)arg1 ;
-(id)_allDefaultFocusableRegionsInContainer:(id)arg1 ;
-(void)_trackExternalSnapshot:(id)arg1 ;
@end

