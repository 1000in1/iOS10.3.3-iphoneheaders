/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:35 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKPageViewController.h>
#import <UIKit/UIDynamicAnimatorDelegate.h>
#import <UIKit/UICollisionBehaviorDelegate.h>
#import <libobjc.A.dylib/OKCollectionProxyDataSource.h>
#import <libobjc.A.dylib/OKWidgetViewDelegate.h>
#import <libobjc.A.dylib/OKPageViewControllerProxyExport.h>

@class NSMutableArray, UIDynamicAnimator, UIGravityBehavior, UICollisionBehavior, NSMutableDictionary, OKPageView, NSArray, NSString;

@interface OKPageUXViewController : OKPageViewController <UIDynamicAnimatorDelegate, UICollisionBehaviorDelegate, OKCollectionProxyDataSource, OKWidgetViewDelegate, OKPageViewControllerProxyExport> {

	NSMutableArray* _widgetViews;
	NSMutableArray* _newWidgetViews;
	NSMutableArray* _pageViewZones;
	CGSize _pageViewZoneSize;
	char _parallaxEnabled;
	float _parallaxRatioX;
	float _parallaxRatioY;
	CGPoint _lastParallaxOffset;
	char _dynamicsEnabled;
	UIDynamicAnimator* _dynamicsAnimator;
	UIGravityBehavior* _dynamicsGravityBehavior;
	char _dynamicsGravityBehaviorMotionDriven;
	UICollisionBehavior* _dynamicsPageCollisionBehavior;
	NSMutableDictionary* _dynamicsWidgetCollisionBehaviors;
	NSMutableDictionary* _dynamicsPushBehaviors;
	OKPageView* _pageView;

}

@property (assign,nonatomic) float parallaxRatioX;                                       //@synthesize parallaxRatioX=_parallaxRatioX - In the implementation block
@property (assign,nonatomic) float parallaxRatioY;                                       //@synthesize parallaxRatioY=_parallaxRatioY - In the implementation block
@property (assign,nonatomic) CGPoint lastParallaxOffset;                                 //@synthesize lastParallaxOffset=_lastParallaxOffset - In the implementation block
@property (nonatomic,retain,readonly) UIDynamicAnimator * dynamicsAnimator;              //@synthesize dynamicsAnimator=_dynamicsAnimator - In the implementation block
@property (nonatomic,retain,readonly) OKPageView * pageView;                             //@synthesize pageView=_pageView - In the implementation block
@property (nonatomic,retain,readonly) NSArray * widgetViews;                             //@synthesize widgetViews=_widgetViews - In the implementation block
@property (nonatomic,readonly) char parallaxEnabled;                                     //@synthesize parallaxEnabled=_parallaxEnabled - In the implementation block
@property (nonatomic,readonly) char dynamicsEnabled;                                     //@synthesize dynamicsEnabled=_dynamicsEnabled - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)viewClass;
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
-(void)dealloc;
-(void)viewDidLoad;
-(void)dynamicAnimatorWillResume:(id)arg1 ;
-(void)dynamicAnimatorDidPause:(id)arg1 ;
-(void)collisionBehavior:(id)arg1 beganContactForItem:(id)arg2 withItem:(id)arg3 atPoint:(CGPoint)arg4 ;
-(void)collisionBehavior:(id)arg1 endedContactForItem:(id)arg2 withItem:(id)arg3 ;
-(void)collisionBehavior:(id)arg1 beganContactForItem:(id)arg2 withBoundaryIdentifier:(id)arg3 atPoint:(CGPoint)arg4 ;
-(void)collisionBehavior:(id)arg1 endedContactForItem:(id)arg2 withBoundaryIdentifier:(id)arg3 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)commonInit;
-(char)prepareForDisplay;
-(OKPageView *)pageView;
-(void)instantPause;
-(char)parallaxEnabled;
-(id)settingObjectForKey:(id)arg1 ;
-(id)visibleWidgets;
-(id)pageViewForWidgetView:(id)arg1 ;
-(id)widgetViewResolution:(id)arg1 ;
-(void)widgetViewCancelAllOperations:(id)arg1 ;
-(void)widgetViewCancelAllOperations:(id)arg1 withIdentifier:(id)arg2 ;
-(void)widgetView:(id)arg1 addHighSpeedOperations:(id)arg2 andConsumingOperations:(id)arg3 ;
-(NSArray *)widgetViews;
-(void)networkStatusDidChange:(int)arg1 ;
-(void)resolutionDidChange;
-(void)layoutDidChange;
-(void)reloadPageViewZones;
-(id)widgetViewForName:(id)arg1 recursively:(char)arg2 ;
-(CGRect)calculateVisibleRectForWidgetRect:(CGRect)arg1 withParallax:(float)arg2 ;
-(void)reloadPageViewZonesWithSize:(CGSize)arg1 ;
-(CGRect)calculateVisibleRectForWidget:(id)arg1 ;
-(id)pageViewZonesInRect:(CGRect)arg1 ;
-(void)reloadPageViewZonesForSubwidgets:(id)arg1 withParallax:(float)arg2 ;
-(CGPoint)lastParallaxOffset;
-(CGPoint)parallaxWithOffsetX:(float)arg1 offsetY:(float)arg2 zPosition:(float)arg3 ;
-(void)removeWidgetViewInPageViewZones:(id)arg1 ;
-(id)newWidgetViewWithTemplateName:(id)arg1 name:(id)arg2 andSettings:(id)arg3 ;
-(void)addWidgetViewInPageViewZones:(id)arg1 ;
-(id)mediaURLs;
-(void)widgetViewsInDisplayRect:(CGRect)arg1 displaySet:(id)arg2 andWarmupRect:(CGRect)arg3 warmupSet:(id)arg4 ;
-(id)widgetViewsInRect:(CGRect)arg1 ;
-(void)updateMotion;
-(void)updateParallax;
-(void)updateDynamics;
-(char)prepareForWarmup;
-(char)prepareForUnload;
-(void)prepareForRefresh;
-(void)instantResume;
-(void)updateWithMotionTiltRotationX:(float)arg1 tiltRotationY:(float)arg2 tiltRotationZ:(float)arg3 ;
-(void)setLastParallaxOffset:(CGPoint)arg1 ;
-(float)parallaxRatioX;
-(float)parallaxRatioY;
-(id)_preparseLayoutString:(id)arg1 targetView:(out id*)arg2 anchorView:(out id*)arg3 ;
-(unsigned)countOfDictionaryProxy:(id)arg1 ;
-(id)widgetViewNames;
-(id)allKeysForDictionaryProxy:(id)arg1 ;
-(id)dictionaryProxy:(id)arg1 objectForKey:(id)arg2 ;
-(id)_remoteWidgetsForWidgetView:(id)arg1 keyPath:(id)arg2 ;
-(char)settingDynamicsGravityEnabled;
-(char)settingDynamicsCollisionConfinementEnabled;
-(void)reloadDynamics;
-(void)resetDynamics;
-(void)removeWidgetView:(id)arg1 ;
-(char)hasWidgetFocused;
-(id)addWidgetViewWithTemplateName:(id)arg1 name:(id)arg2 andSettings:(id)arg3 ;
-(CGPoint)convertPointWithMotionAndParallax:(CGPoint)arg1 andZPosition:(float)arg2 ;
-(void)applySettings;
-(void)updateWidgetViewInPageViewZones:(id)arg1 ;
-(void)prepareWidgetsInRect:(CGRect)arg1 ;
-(void)prepareForReload;
-(void)prepareAllWidgets;
-(void)updateMotionForWidgetView:(id)arg1 ;
-(void)updateParallaxWithOffsetX:(float)arg1 offsetY:(float)arg2 ;
-(void)updateParallaxForWidgetView:(id)arg1 ;
-(void)updateLayoutSteps;
-(id)currentRemoteWidgets;
-(void)setSettingParallaxEnabled:(char)arg1 ;
-(void)setSettingParallaxRatioX:(double)arg1 ;
-(void)setSettingParallaxRatioY:(double)arg1 ;
-(void)setSettingDynamicsEnabled:(char)arg1 ;
-(void)setSettingDynamicsGravityEnabled:(char)arg1 ;
-(void)setSettingDynamicsGravityAngle:(float)arg1 ;
-(void)setSettingDynamicsGravityMagnitude:(float)arg1 ;
-(void)setSettingDynamicsGravityMotionDriven:(char)arg1 ;
-(void)setSettingDynamicsCollisionConfinementEnabled:(char)arg1 ;
-(void)setSettingDynamicsPushBehaviors:(id)arg1 ;
-(char)dynamicsEnabled;
-(void)setParallaxRatioX:(float)arg1 ;
-(void)setParallaxRatioY:(float)arg1 ;
-(UIDynamicAnimator *)dynamicsAnimator;
@end
