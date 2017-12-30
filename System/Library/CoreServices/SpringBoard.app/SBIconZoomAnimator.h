/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:20 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBIconAnimator.h>
#import <SpringBoard/SBIconIndexNodeObserver.h>

@class NSMapTable, NSSet, SBIconListModel, SBIconModel, SBIconListView, SBIconZoomSettings, NSString;

@interface SBIconZoomAnimator : SBIconAnimator <SBIconIndexNodeObserver> {

	NSMapTable* _listIconToViewMap;
	NSMapTable* _dockIconToViewMap;
	NSSet* _criticalIconNodeIdentifiers;
	SBIconListModel* _iconListModel;
	SBIconModel* _iconModel;
	double _startTime;
	SBIconListView* _iconListView;
	SBIconListView* _dockListView;

}

@property (nonatomic,readonly) SBIconListView * iconListView;                  //@synthesize iconListView=_iconListView - In the implementation block
@property (nonatomic,readonly) SBIconListView * dockListView;                  //@synthesize dockListView=_dockListView - In the implementation block
@property (nonatomic,retain) NSSet * criticalIconNodeIdentifiers;              //@synthesize criticalIconNodeIdentifiers=_criticalIconNodeIdentifiers - In the implementation block
@property (nonatomic,readonly) double startTime; 
@property (nonatomic,retain) SBIconZoomSettings * settings; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_cleanupAnimation;
-(void)_prepareAnimation;
-(SBIconListView *)dockListView;
-(id)initWithFolderController:(id)arg1 ;
-(void)setCriticalIconNodeIdentifiers:(NSSet *)arg1 ;
-(void)_setAnimationFraction:(float)arg1 ;
-(unsigned)_numberOfSignificantAnimations;
-(void)_performAnimationToFraction:(float)arg1 withCentralAnimationSettings:(id)arg2 delay:(double)arg3 alreadyAnimating:(char)arg4 sharedCompletion:(/*^block*/id)arg5 ;
-(void)node:(id)arg1 didAddContainedNodeIdentifiers:(id)arg2 ;
-(void)node:(id)arg1 didRemoveContainedNodeIdentifiers:(id)arg2 ;
-(char)isPastPointOfNoReturn;
-(void)_iconModelDidRelayout:(id)arg1 ;
-(void)_iconModelDidReload:(id)arg1 ;
-(void)_clearObservers;
-(void)_cleanupZoom;
-(void)_setIconListView:(id)arg1 ;
-(void)_setDockListView:(id)arg1 ;
-(void)_applyLabelAlphaFraction:(float)arg1 ;
-(void)_animateToFraction:(float)arg1 afterDelay:(double)arg2 withSharedCompletion:(/*^block*/id)arg3 ;
-(void)_invalidateAnimationForSignificantIconModelChangesForReason:(id)arg1 ;
-(void)enumerateIconsAndIconViewsWithHandler:(/*^block*/id)arg1 ;
-(unsigned)listIconCount;
-(unsigned)dockIconCount;
-(void)cleanupZoom;
-(NSSet *)criticalIconNodeIdentifiers;
-(SBIconListView *)iconListView;
-(id)iconViewForIcon:(id)arg1 ;
-(void)dealloc;
-(double)startTime;
@end

