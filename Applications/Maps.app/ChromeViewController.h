/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:43 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/MKMapViewDelegate.h>
#import <Maps/MKMapViewDelegatePrivate.h>
#import <Maps/MapsChromeViews.h>
#import <libobjc.A.dylib/MKMapViewDelegate.h>
#import <Maps/MKMapViewDelegatePrivate.h>

@protocol ChromeModeController;
@class MKMapView, UIView, NSMutableArray, UserLocationView, NSMutableSet, NSDate, NSTimer, NSString, MapsChromeViewItem, NSArray;

@interface ChromeViewController : UIViewController <MKMapViewDelegate, MKMapViewDelegatePrivate, MapsChromeViews, MKMapViewDelegate, MKMapViewDelegatePrivate> {

	NSMutableArray* _itemsStack;
	UserLocationView* _userLocationView;
	MKMapView* _mapView;
	UIView* _mapReplacementView;
	char _isViewLoading;
	char _topModeWasSentModeWillDidAppear;
	char _chromeDidReceiveModeWillAppear;
	char _chromeDidReceiveModeDidAppear;
	char _isAnyModeCurrent;
	char _isTopModeBecomingCurrent;
	char _isMapViewDisownedByPrepareMethods;
	char _animatingMapInsets;
	double _reAnimateMapInsetsRequestedWithDuration;
	int _currentlyRunningLabelEdgeInsetsAnimationsCount;
	NSMutableSet* _modesBeingRemoved;
	unsigned _clientsAllowingInsetsAnimation;
	char _hasAttemptedLoadingViewportChangeDateFromDefaults;
	char _hasEverScheduledSavingViewportChangeDateInDefaults;
	NSDate* _lastViewportChangeDate;
	NSTimer* _lastViewportSaveTimer;
	unsigned _layoutsCount;
	char _isChangingMapViewFrame;
	UIView* _containingView;
	char _suppressed;
	char _forceAccessoryAnimationForNextPush;
	char _changingCurrentMode;
	char _inactive;
	NSString* _searchContextDefaultsKeysPrefix;
	id<ChromeModeController> _modeBecomingCurrent;
	id<ChromeModeController> _modeResigningCurrent;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) MapsChromeViewItem * topItem; 
@property (nonatomic,readonly) NSArray * itemsStack; 
@property (nonatomic,retain) MKMapView * mapView; 
@property (nonatomic,retain) UIView * containingView;                                              //@synthesize containingView=_containingView - In the implementation block
@property (getter=isChangingCurrentMode,nonatomic,readonly) char changingCurrentMode;              //@synthesize changingCurrentMode=_changingCurrentMode - In the implementation block
@property (nonatomic,__weak,readonly) id<ChromeModeController> modeBecomingCurrent;                //@synthesize modeBecomingCurrent=_modeBecomingCurrent - In the implementation block
@property (nonatomic,__weak,readonly) id<ChromeModeController> modeResigningCurrent;               //@synthesize modeResigningCurrent=_modeResigningCurrent - In the implementation block
@property (nonatomic,copy) NSArray * modes; 
@property (nonatomic,readonly) id<ChromeModeController> currentMode; 
@property (nonatomic,readonly) id<ChromeModeController> topMode; 
@property (nonatomic,readonly) CGRect unobscuredBoundsInContainingView; 
@property (nonatomic,readonly) UserLocationView * userLocationView; 
@property (nonatomic,readonly) UserLocationView * userLocationViewIfExists; 
@property (assign,getter=isSuppressed,nonatomic) char suppressed;                                  //@synthesize suppressed=_suppressed - In the implementation block
@property (assign,getter=isInactive,nonatomic) char inactive;                                      //@synthesize inactive=_inactive - In the implementation block
@property (nonatomic,readonly) UIView * mapOrReplacementView; 
@property (nonatomic,readonly) UIView * mapReplacementView; 
@property (nonatomic,readonly) char supportsSuppression; 
@property (nonatomic,copy) NSString * searchContextDefaultsKeysPrefix;                             //@synthesize searchContextDefaultsKeysPrefix=_searchContextDefaultsKeysPrefix - In the implementation block
@property (assign,nonatomic) char forceAccessoryAnimationForNextPush;                              //@synthesize forceAccessoryAnimationForNextPush=_forceAccessoryAnimationForNextPush - In the implementation block
+(Class)containingViewClass;
+(Class)chromeViewItemClass;
+(id)mapReplacementColor;
+(Class)userLocationViewClass;
+(id)localizedLocationAuthorizationMessage;
+(id)localizedLocationAuthorizationTitle;
+(char)canTransitionWithoutMap;
-(id)newTraits;
-(void)setSuppressed:(char)arg1 ;
-(void)didSuppress;
-(void)didUnsuppress;
-(id)createMapReplacementView;
-(char)getPreferredUserInterfaceIdiom:(out int*)arg1 ;
-(void)layoutForUnobscuredBoundsChange;
-(UIEdgeInsets)obscuredInsetsForBoundsOptions:(int)arg1 ;
-(UIEdgeInsets)mapInsetsIncludingBarsWithNonopaqueParts:(char)arg1 ;
-(void)currentModeWillChangeByMovingToItem:(id)arg1 fromItem:(id)arg2 animated:(char)arg3 ;
-(void)currentModeDidChangeByMovingToItem:(id)arg1 fromItem:(id)arg2 animated:(char)arg3 ;
-(id<ChromeModeController>)topMode;
-(/*^block*/id)presentInterruptionOfKind:(int)arg1 userInfo:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)mapViewInstanceDidChange;
-(void)invalidateMapInsetsAnimated:(char)arg1 ;
-(/*^block*/id)presentUnhandledInterruptionOfKind:(int)arg1 userInfo:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)passThroughView;
-(void)mapView:(id)arg1 willChangeRotation:(double)arg2 ;
-(id)enteredForegroundDate;
-(void)prepareRemovingMapViewFromViewHierarchyWithReplacement:(id)arg1 retainOwnershipOfMapView:(char)arg2 ;
-(void)reinsertMapViewInViewHierarchy;
-(void)pushMode:(id)arg1 animated:(char)arg2 ;
-(void)popModeAnimated:(char)arg1 ;
-(void)popToRootModeAnimated:(char)arg1 ;
-(void)popToMode:(id)arg1 animated:(char)arg2 ;
-(void)replaceTopModeWithMode:(id)arg1 animated:(char)arg2 ;
-(void)replaceMode:(id)arg1 withMode:(id)arg2 animated:(char)arg3 ;
-(void)removeMode:(id)arg1 animated:(char)arg2 ;
-(void)insertMode:(id)arg1 aboveMode:(id)arg2 animated:(char)arg3 ;
-(void)setModes:(id)arg1 animated:(char)arg2 ;
-(void)stackWillChangeByMovingToItem:(id)arg1 fromItem:(id)arg2 ;
-(void)stackDidChangeByMovingToItem:(id)arg1 fromItem:(id)arg2 ;
-(char)_shouldRecordViewportChange;
-(UserLocationView *)userLocationViewIfExists;
-(char)removesMapViewWhenInactive;
-(char)isCurrentMode:(id)arg1 ;
-(char)isTopMode:(id)arg1 ;
-(id)chromeViewItemForMode:(id)arg1 ;
-(void)_popToItem:(id)arg1 atIndex:(unsigned)arg2 animated:(char)arg3 ;
-(id)_newChromeItemForMode:(id)arg1 ;
-(void)_performTransitionWithAnimation:(char)arg1 toItem:(id)arg2 fromItem:(id)arg3 itemsLeavingTheStack:(id)arg4 byChangingStackInBlock:(/*^block*/id)arg5 ;
-(id)_whenNextCurrentBlocksDictionaryForMode:(id)arg1 creatingIfMissing:(char)arg2 ;
-(void)_invokeWhenNextCurrentBlocksForMode:(id)arg1 animated:(char)arg2 ;
-(void)_removeWhenNextCurrentBlocksDictionaryFromMode:(id)arg1 ;
-(void)whenModeNextBecomesCurrent:(id)arg1 performActionWithKey:(id)arg2 block:(/*^block*/id)arg3 ;
-(char)isWhenNextCurrentActionScheduledWithKey:(id)arg1 forMode:(id)arg2 ;
-(void)cancelWhenNextCurrentActionWithKey:(id)arg1 forMode:(id)arg2 ;
-(NSArray *)itemsStack;
-(void)willLoadView;
-(void)didLoadView;
-(char)isViewLoadedOrLoading;
-(void)_loadMapViewIfNeeded;
-(CGRect)unobscuredBoundsInContainingView;
-(CGRect)unobscuredBoundsInContainingViewWithOptions:(int)arg1 ;
-(void)setMapEdgeInsets:(UIEdgeInsets)arg1 forMode:(id)arg2 ;
-(void)setMapEdgeInsets:(UIEdgeInsets)arg1 animated:(char)arg2 forMode:(id)arg3 ;
-(void)_scheduleAnimationForUpdatingEdgeInsetsForCurrentMode;
-(void)_scheduleAnimationForUpdatingEdgeInsetsForCurrentModeDuration:(double)arg1 ;
-(UIEdgeInsets)mapAttributionInsets;
-(void)invalidateMapInsets;
-(void)invalidateMapInsetsAnimated:(char)arg1 duration:(double)arg2 ;
-(void)invalidateLabelEdgeInsetsWithAnimation:(id)arg1 ;
-(void)invalidateLabelEdgeInsetsWithAnimation:(id)arg1 animationShouldHideLabelsAtStart:(char)arg2 ;
-(void)performAllowingInsetsAnimation:(/*^block*/id)arg1 ;
-(void)setVKApplicationUILayout:(int)arg1 ;
-(void)prepareRemovingMapViewFromViewHierarchyWithReplacement:(id)arg1 ;
-(UIView *)mapReplacementView;
-(UIView *)mapOrReplacementView;
-(void)_replaceMapWithView:(id)arg1 ;
-(void)addReplacementViewToViewHierarchy:(id)arg1 ;
-(void)reinsertMapViewInViewHierarchy:(id)arg1 userLocationView:(id)arg2 ;
-(void)_removeMapReplacementView;
-(CGSize)attributionAnchorOffset;
-(void)pushTopItemOnTopOfStackAfterViewLoadIfNeeded;
-(char)supportsSuppression;
-(id)mapViewDelegateForSelector:(SEL)arg1 ;
-(id)_lastViewportChangeDateDefaultsKey;
-(char)_shouldSaveLastViewportChangeDateInDefaults;
-(void)_saveLastViewportChangeDate;
-(id)_lastViewportChangeDateLoadingFromDefaultsIfNeeded;
-(id)lastViewportChangedDate;
-(void)moveToAccessoryViewsForMode:(id)arg1 animation:(id)arg2 ;
-(void)dismissAllModalViewsIfPresentWithCompletion:(/*^block*/id)arg1 ;
-(char)forceAccessoryAnimationForNextPush;
-(void)setForceAccessoryAnimationForNextPush:(char)arg1 ;
-(char)isChangingCurrentMode;
-(NSString *)searchContextDefaultsKeysPrefix;
-(void)setSearchContextDefaultsKeysPrefix:(NSString *)arg1 ;
-(id<ChromeModeController>)modeBecomingCurrent;
-(id<ChromeModeController>)modeResigningCurrent;
-(id)init;
-(void)dealloc;
-(void)loadView;
-(UIView *)containingView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)viewDidLayoutSubviews;
-(MapsChromeViewItem *)topItem;
-(id<ChromeModeController>)currentMode;
-(void)setContainingView:(UIView *)arg1 ;
-(void)_updateInsets;
-(void)_setInactive:(char)arg1 ;
-(void)mapView:(id)arg1 didDeselectLabelMarker:(id)arg2 ;
-(void)_mapView:(id)arg1 willDeselectAnnotationView:(id)arg2 ;
-(void)_mapView:(id)arg1 willDeselectLabelMarker:(id)arg2 ;
-(void)mapView:(id)arg1 didSelectLabelMarker:(id)arg2 ;
-(void)setLabelEdgeInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)labelEdgeInsets;
-(void)_mapView:(id)arg1 calloutDidAppearForAnnotationView:(id)arg2 ;
-(void)mapView:(id)arg1 labelMarker:(id)arg2 calloutAccessoryControlTapped:(id)arg3 ;
-(void)mapViewDidAnimateInAnnotationViews:(id)arg1 ;
-(void)mapViewWillAnimateInAnnotationViews:(id)arg1 ;
-(void)mapViewDidFinishCalloutExpansion:(id)arg1 ;
-(CGPoint)mapView:(id)arg1 focusPointForPoint:(CGPoint)arg2 gesture:(int)arg3 ;
-(double)mapView:(id)arg1 shouldDelayTapResponse:(id)arg2 onAnnotationView:(id)arg3 forDuration:(double)arg4 ;
-(char)mapView:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)mapView:(id)arg1 didStopRespondingToGesture:(int)arg2 zoomDirection:(int)arg3 didDecelerate:(char)arg4 tiltDirection:(int)arg5 ;
-(void)mapView:(id)arg1 willStartRespondingToGesture:(int)arg2 animated:(char)arg3 ;
-(void)mapViewDidStopUserInteraction:(id)arg1 ;
-(void)mapViewDidStartUserInteraction:(id)arg1 ;
-(void)mapView:(id)arg1 flyoverModeWillChange:(int)arg2 ;
-(void)mapView:(id)arg1 flyoverModeDidChange:(int)arg2 ;
-(void)mapView:(id)arg1 showingFlyoverDidChange:(char)arg2 ;
-(void)mapView:(id)arg1 canShowFlyoverDidChange:(char)arg2 ;
-(void)mapView:(id)arg1 canEnter3DModeDidChange:(char)arg2 ;
-(void)mapView:(id)arg1 canZoomOutDidChange:(char)arg2 ;
-(void)mapView:(id)arg1 canZoomInDidChange:(char)arg2 ;
-(void)mapView:(id)arg1 didBecomePitched:(char)arg2 ;
-(void)mapViewDidChangeVisibleRegion:(id)arg1 ;
-(void)mapView:(id)arg1 flyoverTourLabelDidChange:(id)arg2 ;
-(void)mapView:(id)arg1 didStopFlyoverTourCompleted:(char)arg2 ;
-(void)mapViewWillStartFlyoverTour:(id)arg1 ;
-(void)mapViewDidFinishInitialUserTrackingModeAnimation:(id)arg1 ;
-(id)mapView:(id)arg1 painterForVectorOverlay:(id)arg2 ;
-(id)mapViewCurrentRouteMatch:(id)arg1 ;
-(char)mapView:(id)arg1 shouldSelectLabelMarker:(id)arg2 ;
-(void)mapView:(id)arg1 didChangeUserTrackingMode:(int)arg2 animated:(char)arg3 fromTrackingButton:(char)arg4 ;
-(void)mapView:(id)arg1 didChangeMapType:(unsigned)arg2 ;
-(UserLocationView *)userLocationView;
-(void)setInactive:(char)arg1 ;
-(char)isInactive;
-(NSArray *)modes;
-(void)setMapView:(MKMapView *)arg1 ;
-(void)mapView:(id)arg1 didAddAnnotationViews:(id)arg2 ;
-(void)mapView:(id)arg1 regionWillChangeAnimated:(char)arg2 ;
-(void)mapView:(id)arg1 regionDidChangeAnimated:(char)arg2 ;
-(void)mapViewWillStartLoadingMap:(id)arg1 ;
-(void)mapViewDidFinishLoadingMap:(id)arg1 ;
-(void)mapViewDidFailLoadingMap:(id)arg1 withError:(id)arg2 ;
-(void)mapViewWillStartRenderingMap:(id)arg1 ;
-(void)mapViewDidFinishRenderingMap:(id)arg1 fullyRendered:(char)arg2 ;
-(id)mapView:(id)arg1 viewForAnnotation:(id)arg2 ;
-(void)mapView:(id)arg1 annotationView:(id)arg2 calloutAccessoryControlTapped:(id)arg3 ;
-(void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2 ;
-(void)mapView:(id)arg1 didDeselectAnnotationView:(id)arg2 ;
-(void)mapViewWillStartLocatingUser:(id)arg1 ;
-(void)mapViewDidStopLocatingUser:(id)arg1 ;
-(void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2 ;
-(void)mapView:(id)arg1 didFailToLocateUserWithError:(id)arg2 ;
-(void)mapView:(id)arg1 annotationView:(id)arg2 didChangeDragState:(unsigned)arg3 fromOldState:(unsigned)arg4 ;
-(void)mapView:(id)arg1 didChangeUserTrackingMode:(int)arg2 animated:(char)arg3 ;
-(id)mapView:(id)arg1 rendererForOverlay:(id)arg2 ;
-(void)mapView:(id)arg1 didAddOverlayRenderers:(id)arg2 ;
-(MKMapView *)mapView;
-(void)setModes:(NSArray *)arg1 ;
-(id)mapViewDelegate;
-(char)isSuppressed;
@end

