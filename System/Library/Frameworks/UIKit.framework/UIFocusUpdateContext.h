/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:30:05 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIFocusEnvironment;
#import <UIKit/UIKit-Structs.h>
@class _UIFocusedItemInfo, UIResponder, UIImage, _UIFocusMovementInfo, _UIFocusMapSearchInfo, UIScrollView, NSArray, UIFocusGuide, UIView;

@interface UIFocusUpdateContext : NSObject {

	char _isValidated;
	char _shouldUpdateDestinationItem;
	char _sourceItemMayRemainFocused;
	char _valid;
	char _forceSourceItemMayRemainFocused;
	char _requiresDestinationItem;
	char _requiresEnvironmentValidation;
	_UIFocusedItemInfo* _destinationItemInfo;
	UIResponder* _preferredFocusResponder;
	UIImage* _regionMapSnapshotsVisualRepresentation;
	_UIFocusedItemInfo* _sourceItemInfo;
	_UIFocusMovementInfo* _focusMovement;
	_UIFocusMapSearchInfo* _focusMapSearchInfo;
	id<UIFocusEnvironment> _initialDestinationEnvironment;
	UIScrollView* _commonScrollView;
	NSArray* _regionMapSnapshots;
	float _destinationViewDistanceOffscreen;
	UIFocusGuide* _focusedGuide;

}

@property (setter=_setSourceItemInfo:,getter=_sourceItemInfo,nonatomic,copy) _UIFocusedItemInfo * sourceItemInfo;                                                       //@synthesize sourceItemInfo=_sourceItemInfo - In the implementation block
@property (getter=_destinationItemInfo,nonatomic,copy,readonly) _UIFocusedItemInfo * destinationItemInfo;                                                               //@synthesize destinationItemInfo=_destinationItemInfo - In the implementation block
@property (setter=_setFocusMovement:,getter=_focusMovement,nonatomic,copy) _UIFocusMovementInfo * focusMovement;                                                        //@synthesize focusMovement=_focusMovement - In the implementation block
@property (setter=_setFocusMapSearchInfo:,getter=_focusMapSearchInfo,nonatomic,retain) _UIFocusMapSearchInfo * focusMapSearchInfo;                                      //@synthesize focusMapSearchInfo=_focusMapSearchInfo - In the implementation block
@property (getter=_focusUpdateType,nonatomic,readonly) int focusUpdateType; 
@property (getter=_isValid,nonatomic,readonly) char valid;                                                                                                              //@synthesize valid=_valid - In the implementation block
@property (getter=_initialDestinationEnvironment,nonatomic,__weak,readonly) id<UIFocusEnvironment> initialDestinationEnvironment;                                       //@synthesize initialDestinationEnvironment=_initialDestinationEnvironment - In the implementation block
@property (getter=_preferredFocusResponder,nonatomic,__weak,readonly) UIResponder * preferredFocusResponder;                                                            //@synthesize preferredFocusResponder=_preferredFocusResponder - In the implementation block
@property (assign,setter=_setForceSourceItemMayRemainFocused:,getter=_forceSourceItemMayRemainFocused,nonatomic) char forceSourceItemMayRemainFocused;                  //@synthesize forceSourceItemMayRemainFocused=_forceSourceItemMayRemainFocused - In the implementation block
@property (assign,setter=_setRequiresDestinationItem:,getter=_requiresDestinationItem,nonatomic) char requiresDestinationItem;                                          //@synthesize requiresDestinationItem=_requiresDestinationItem - In the implementation block
@property (assign,setter=_setRequiresEnvironmentValidation:,getter=_requiresEnvironmentValidation,nonatomic) char requiresEnvironmentValidation;                        //@synthesize requiresEnvironmentValidation=_requiresEnvironmentValidation - In the implementation block
@property (setter=_setCommonScrollView:,getter=_commonScrollView,nonatomic,retain) UIScrollView * commonScrollView;                                                     //@synthesize commonScrollView=_commonScrollView - In the implementation block
@property (setter=_setRegionMapSnapshots:,getter=_regionMapSnapshots,nonatomic,retain) NSArray * regionMapSnapshots;                                                    //@synthesize regionMapSnapshots=_regionMapSnapshots - In the implementation block
@property (getter=_regionMapSnapshotsVisualRepresentation,nonatomic,readonly) UIImage * regionMapSnapshotsVisualRepresentation;                                         //@synthesize regionMapSnapshotsVisualRepresentation=_regionMapSnapshotsVisualRepresentation - In the implementation block
@property (assign,setter=_setDestinationViewDistanceOffscreen:,getter=_destinationViewDistanceOffscreen,nonatomic) float destinationViewDistanceOffscreen;              //@synthesize destinationViewDistanceOffscreen=_destinationViewDistanceOffscreen - In the implementation block
@property (getter=_sourceItem,nonatomic,__weak,readonly) id<UIFocusItem> sourceItem; 
@property (getter=_destinationItem,nonatomic,__weak,readonly) id<UIFocusItem> destinationItem; 
@property (getter=_focusedGuide,nonatomic,__weak,readonly) UIFocusGuide * focusedGuide;                                                                                 //@synthesize focusedGuide=_focusedGuide - In the implementation block
@property (getter=_focusVelocity,nonatomic,readonly) CGVector focusVelocity; 
@property (nonatomic,__weak,readonly) id<UIFocusItem> previouslyFocusedItem; 
@property (nonatomic,__weak,readonly) id<UIFocusItem> nextFocusedItem; 
@property (nonatomic,__weak,readonly) UIView * previouslyFocusedView; 
@property (nonatomic,__weak,readonly) UIView * nextFocusedView; 
@property (nonatomic,readonly) unsigned focusHeading; 
+(id)_contextWithSourceView:(id)arg1 focusedRegion:(id)arg2 movement:(id)arg3 ;
+(id)_contextWithSourceView:(id)arg1 focusedContainerGuide:(id)arg2 movement:(id)arg3 ;
-(id)init;
-(id)_screen;
-(void)_setRequiresDestinationItem:(char)arg1 ;
-(UIView *)nextFocusedView;
-(id)_initWithSourceItemInfo:(id)arg1 initialDestinationEnvironment:(id)arg2 ;
-(void)_setFocusMovement:(id)arg1 ;
-(void)_setFocusMapSearchInfo:(id)arg1 ;
-(char)_isValid;
-(id)_initWithSourceItem:(id)arg1 initialDestinationEnvironment:(id)arg2 ;
-(id)_destinationItemInfo;
-(void)_setCommonScrollView:(id)arg1 ;
-(void)_setDestinationViewDistanceOffscreen:(float)arg1 ;
-(id)_sourceItem;
-(void)_setSourceItemInfo:(id)arg1 ;
-(id)_commonScrollView;
-(id)_focusMapSearchInfo;
-(id)debugQuickLookObject;
-(id)_preferredFocusResponder;
-(id<UIFocusItem>)nextFocusedItem;
-(int)_focusUpdateType;
-(UIView *)previouslyFocusedView;
-(unsigned)focusHeading;
-(id)_destinationItem;
-(id)_initWithContext:(id)arg1 ;
-(float)_destinationViewDistanceOffscreen;
-(CGVector)_focusVelocity;
-(id)_focusedGuide;
-(void)_setFocusedGuide:(id)arg1 ;
-(id)_sourceItemInfo;
-(void)_didUpdateFocus;
-(char)_forceSourceItemMayRemainFocused;
-(void)_setForceSourceItemMayRemainFocused:(char)arg1 ;
-(void)_setRequiresEnvironmentValidation:(char)arg1 ;
-(void)_setRegionMapSnapshots:(id)arg1 ;
-(char)_validate;
-(id)_initialDestinationEnvironment;
-(char)_requiresDestinationItem;
-(char)_requiresEnvironmentValidation;
-(id<UIFocusItem>)previouslyFocusedItem;
-(void)_updateDestinationItemIfNeeded;
-(id)_overridingDestinationEnvironmentForPreferredDestinationEnvironment:(id)arg1 visitedEnvironments:(id)arg2 ;
-(id)_focusMovement;
-(id)_regionMapSnapshots;
-(id)_focusMapSnapshotDebugInfoArray;
-(id)_publicRegionMapSnapshots;
-(id)_regionMapSnapshotsVisualRepresentation;
-(void)_setInitialDestinationEnvironment:(id)arg1 ;
@end
