/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:36 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusFoundation/OFUIView.h>
#import <libobjc.A.dylib/OKCollectionProxyDataSource.h>
#import <libobjc.A.dylib/OKDynamicItemProxiedObject.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/OKActionResponderPrivate.h>
#import <libobjc.A.dylib/OKActionResponderPrivate.h>
#import <libobjc.A.dylib/OKSettingsSupport.h>
#import <libobjc.A.dylib/OKPresentationReadinessPrivate.h>
#import <libobjc.A.dylib/OKWidgetViewProxyExports.h>
#import <libobjc.A.dylib/OKPresentationReadiness.h>
#import <libobjc.A.dylib/OKActionResponder.h>
#import <libobjc.A.dylib/OKPlayable.h>

@protocol OKWidgetViewDelegate;
@class OKWidgetView, NSMutableArray, NSURL, UIImageView, OKWidgetContainerView, OKPresentationPage, OKPresentationWidget, NSArray, NSString, OFUIView, NSMutableDictionary, NSRecursiveLock, OKDynamicItemProxy, UISnapBehavior, OKPresentationViewController;

@interface OKWidgetViewProxy : OFUIView <OKCollectionProxyDataSource, OKDynamicItemProxiedObject, UIGestureRecognizerDelegate, OKActionResponderPrivate, OKActionResponderPrivate, OKSettingsSupport, OKPresentationReadinessPrivate, OKWidgetViewProxyExports, OKPresentationReadiness, OKActionResponder, OKPlayable> {

	UIEdgeInsets _eventsInset;
	char _ignoreEventsOnTransparentPixels;
	NSMutableArray* _subWidgetViews;
	NSURL* _borderImageURL;
	UIImageView* _borderView;
	OKWidgetContainerView* _contentContainerView;
	char _needsApplySettings;
	char _hasSettingsApplied;
	OKWidgetView* _parentWidgetView;
	id<OKWidgetViewDelegate> _delegate;
	unsigned _prepareMode;
	OKPresentationPage* _page;
	OKPresentationWidget* _widget;
	NSMutableArray* _mediaURLs;
	OKWidgetContainerView* _contentView;
	UIEdgeInsets _borderEdgeOutsets;
	UIEdgeInsets _borderImageCapEdgeInsets;
	char _shadowOptimization;
	NSArray* _contentEffects;
	char _needsZoning;
	char _antialiasing;
	CATransform3D _widgetTransform;
	CATransform3D _motionTransform;
	CATransform3D _parallaxTransform;
	CGAffineTransform _dynamicsTransform;
	float _zRotation;
	CGPoint _zRotationAnchorPoint;
	char _xFlipped;
	char _yFlipped;
	CGPoint _xyTranslation;
	CGSize _xyScale;
	char _motionEnabled;
	char _motionTiltXEnabled;
	char _motionTiltYEnabled;
	char _motionTiltZEnabled;
	CGSize _motionXMinMax;
	CGSize _motionYMinMax;
	CGSize _motionZMinMax;
	CGPoint _motionXTiltAnchorPoint;
	CGPoint _motionYTiltAnchorPoint;
	CGPoint _motionZTiltAnchorPoint;
	char _motionXTiltReversed;
	char _motionYTiltReversed;
	char _motionZTiltReversed;
	char _parallaxEnabled;
	NSString* _dynamicsCollisionActionScript;
	unsigned _presentationMode;
	OFUIView* _dimmerView;
	SCD_Struct_OK13* _focusGestureHelper;
	unsigned _focusGestureMode;
	UIEdgeInsets _focusGestureInsets;
	NSString* _prepareActionScript;
	NSString* _canPerformActionScript;
	NSArray* _layoutSteps;
	NSMutableDictionary* _actionBindings;
	char _isReady;
	NSMutableArray* _readyNotificationBlocks;
	NSRecursiveLock* _readyRecursiveLock;
	CGRect _originalFrame;
	CGSize _lastBoundsSize;
	NSMutableArray* _newSubWidgetViews;
	OKDynamicItemProxy* _dynamicProxy;
	UISnapBehavior* _dynamicSnapBehavior;

}

@property (assign,nonatomic) unsigned prepareMode;                                                     //@synthesize prepareMode=_prepareMode - In the implementation block
@property (nonatomic,retain) OKPresentationPage * page;                                                //@synthesize page=_page - In the implementation block
@property (nonatomic,readonly) OKPresentationViewController * presentationViewController; 
@property (nonatomic,retain,readonly) OKDynamicItemProxy * dynamicProxy;                               //@synthesize dynamicProxy=_dynamicProxy - In the implementation block
@property (nonatomic,retain,readonly) NSMutableArray * subWidgetViews;                                 //@synthesize subWidgetViews=_subWidgetViews - In the implementation block
@property (nonatomic,readonly) char parallaxEnabled;                                                   //@synthesize parallaxEnabled=_parallaxEnabled - In the implementation block
@property (nonatomic,readonly) char needsZoning;                                                       //@synthesize needsZoning=_needsZoning - In the implementation block
@property (assign,nonatomic) unsigned presentationMode;                                                //@synthesize presentationMode=_presentationMode - In the implementation block
@property (nonatomic,retain,readonly) OKPresentationWidget * widget;                                   //@synthesize widget=_widget - In the implementation block
@property (nonatomic,retain,readonly) NSMutableArray * mediaURLs;                                      //@synthesize mediaURLs=_mediaURLs - In the implementation block
@property (nonatomic,retain,readonly) OFUIView * contentView;                                          //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) OKWidgetView * parentWidgetView;                                          //@synthesize parentWidgetView=_parentWidgetView - In the implementation block
@property (assign,nonatomic) id<OKWidgetViewDelegate> delegate;                                        //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) CGPoint center; 
@property (assign,nonatomic) CGRect bounds; 
@property (assign,nonatomic) CGAffineTransform dynamicsTransform; 
@property (readonly) OFUIView * actionView; 
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(OFUIView *)contentView;
-(void)setDelegate:(id<OKWidgetViewDelegate>)arg1 ;
-(void)dealloc;
-(void)setBounds:(CGRect)arg1 ;
-(NSString *)description;
-(id<OKWidgetViewDelegate>)delegate;
-(id)name;
-(char)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(char)isFocused;
-(void)sizeToFit;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)commonInit;
-(char)prepareForDisplay:(char)arg1 ;
-(OKPresentationPage *)page;
-(void)setPage:(OKPresentationPage *)arg1 ;
-(void)updateShadowPath;
-(void)play;
-(char)canPerformAction:(id)arg1 ;
-(void)setCenterX:(float)arg1 ;
-(void)setCenterY:(float)arg1 ;
-(id)_borderView;
-(OKPresentationViewController *)presentationViewController;
-(void)instantPause;
-(char)parallaxEnabled;
-(id)settingObjectForKey:(id)arg1 ;
-(void)setUserSettingObject:(id)arg1 forKey:(id)arg2 ;
-(char)prepareForWarmup:(char)arg1 ;
-(char)prepareForUnload:(char)arg1 ;
-(void)networkStatusDidChange:(int)arg1 ;
-(void)setNeedsApplySettings;
-(unsigned)prepareMode;
-(void)applySettingsIfNeeded;
-(void)applyLayoutSettings;
-(void)removeAllActionBindings;
-(CGRect)originalFrame;
-(char)needsZoning;
-(NSMutableArray *)subWidgetViews;
-(OKWidgetView *)parentWidgetView;
-(void)updateWithParallaxTranslationX:(float)arg1 translationY:(float)arg2 ;
-(void)prepareForMode:(unsigned)arg1 force:(char)arg2 ;
-(NSMutableArray *)mediaURLs;
-(id)subWidgetViewForName:(id)arg1 recursively:(char)arg2 ;
-(void)updateMotion;
-(void)updateParallax;
-(void)updateDynamics;
-(void)setNeedsPrepare;
-(void)prepareForRefresh;
-(void)instantResume;
-(void)updateWithMotionTiltRotationX:(float)arg1 tiltRotationY:(float)arg2 tiltRotationZ:(float)arg3 ;
-(CGSize)layoutFactor;
-(id)_preparseLayoutString:(id)arg1 targetView:(out id*)arg2 anchorView:(out id*)arg3 ;
-(unsigned)countOfDictionaryProxy:(id)arg1 ;
-(id)allKeysForDictionaryProxy:(id)arg1 ;
-(id)dictionaryProxy:(id)arg1 objectForKey:(id)arg2 ;
-(id)allActionBindings;
-(OKDynamicItemProxy *)dynamicProxy;
-(id)subDynamicProxies;
-(void)beganCollisionWithWidgetView:(id)arg1 fromGroup:(id)arg2 ;
-(id)dictionaryProxy:(id)arg1 objectAtIndexPath:(id)arg2 ;
-(void)applySettings;
-(void)prepareForReload;
-(void)updateLayoutSteps;
-(void)setSettingParallaxEnabled:(char)arg1 ;
-(void)setSettingDynamicsEnabled:(char)arg1 ;
-(id)pageViewController;
-(CGAffineTransform)dynamicsTransform;
-(void)setDynamicsTransform:(CGAffineTransform)arg1 ;
-(void)setActivityIndicatorVisible:(char)arg1 ;
-(char)isActivityIndicatorVisible;
-(void)notifyWhenBecomesReady:(/*^block*/id)arg1 ;
-(void)removeAllReadyNotifications;
-(char)sendAction:(id)arg1 toTarget:(id)arg2 ;
-(void)setParentWidgetView:(OKWidgetView *)arg1 ;
-(char)isReady:(char)arg1 ;
-(float)readyProgress:(char)arg1 ;
-(void)setSettingBorderColor:(id)arg1 ;
-(void)setSettingBorderWidth:(float)arg1 ;
-(void)addActionBinding:(id)arg1 scope:(unsigned)arg2 ;
-(void)removeActionBinding:(id)arg1 ;
-(id)actionBindingForAction:(id)arg1 isTouchCountAgnostic:(char)arg2 ;
-(char)performActionScript:(id)arg1 withAction:(id)arg2 ;
-(char)interactivityEnabled;
-(CGSize)parentLayoutFactor;
-(id)layoutSettingsKeys;
-(void)setSettingPrepareActionScript:(id)arg1 ;
-(char)supportsReadiness;
-(void)readinessDidChange:(char)arg1 ;
-(void)becomeReady;
-(void)resignReady;
-(CGRect)settingFrame;
-(void)setSettingFrame:(CGRect)arg1 ;
-(void)setSettingCanPerformActionScript:(id)arg1 ;
-(id)settingBackgroundColor;
-(void)setSettingBackgroundColor:(id)arg1 ;
-(id)dynamicProxyForOffsetFromCenter:(UIOffset)arg1 realRemoteOffsetFromCenter:(UIOffset*)arg2 ;
-(void)setSettingActionBindings:(id)arg1 ;
-(void)setSettingMotionEnabled:(char)arg1 ;
-(void)setSettingMotionTiltXEnabled:(char)arg1 ;
-(void)setSettingMotionTiltYEnabled:(char)arg1 ;
-(void)setSettingMotionTiltZEnabled:(char)arg1 ;
-(void)setSettingMotionXMinMax:(CGSize)arg1 ;
-(void)setSettingMotionYMinMax:(CGSize)arg1 ;
-(void)setSettingMotionZMinMax:(CGSize)arg1 ;
-(void)setSettingLayoutSteps:(id)arg1 ;
-(UIEdgeInsets)settingEventsInset;
-(void)setSettingEventsInset:(UIEdgeInsets)arg1 ;
-(void)setAntialiasing:(char)arg1 ;
-(char)needsAntialiasing;
-(void)dynamicsRemoveSnapping;
-(CGRect)borderRect;
-(CGRect)calculateFrame:(CGRect)arg1 ;
-(void)updateTransforms;
-(void)updateAntialiasing;
-(id)settingActionBindings;
-(void)updateBorder;
-(void)updateContentFilters;
-(void)stopContentEffects;
-(void)updateContentEffects;
-(void)updateWidgetTransforms;
-(void)prepareContentEffects;
-(void)startContentEffects;
-(void)restartContentEffects;
-(void)reloadMediaURL:(id)arg1 size:(CGSize)arg2 mode:(int)arg3 lowQuality:(char)arg4 highQuality:(char)arg5 identifier:(id)arg6 progressHandler:(/*^block*/id)arg7 completionHandler:(/*^block*/id)arg8 ;
-(void)_reloadBorderContentInHighQuality:(char)arg1 ;
-(void)_unloadBorderContent;
-(void)setPrepareMode:(unsigned)arg1 ;
-(void)_cancelAllOperations;
-(void)_reloadBorderContent;
-(void)_stopShowingProgressIndicator;
-(void)_startShowingProgressIndicator;
-(float)_localReadyProgress;
-(void)pauseContentEffects;
-(void)resumeContentEffects:(char)arg1 ;
-(double)remainingPlayDuration;
-(CGSize)_focusSize;
-(void)_animationToFocus;
-(void)_completionToFocus:(char)arg1 ;
-(id)_contentViewToFocus;
-(void)_animationToUnfocus;
-(void)_completionToUnfocus:(char)arg1 ;
-(void)_prepareToFocus;
-(void)_animateToFocus:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)focus:(unsigned)arg1 duration:(double)arg2 completion:(/*^block*/id)arg3 ;
-(void)unfocus:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)_prepareToUnfocus;
-(void)_animateToUnfocus:(double)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned)presentationMode;
-(CATransform3D)_jsOriginalTransform;
-(CATransform3D)_jsTransform;
-(void)_jsSetTransform:(CATransform3D)arg1 ;
-(void)dynamicsSnapToPoint:(CGPoint)arg1 withDamping:(float)arg2 ;
-(id)addSubWidgetViewWithTemplateName:(id)arg1 name:(id)arg2 andSettings:(id)arg3 ;
-(CGPoint)convertPointWithParallax:(CGPoint)arg1 ;
-(id)subWidgetViewsInRect:(CGRect)arg1 ;
-(id)_dimmerView;
-(id)subWidgetViewNames;
-(CGPoint)settingCenter;
-(void)setSettingCenter:(CGPoint)arg1 ;
-(CGSize)settingSize;
-(void)setSettingSize:(CGSize)arg1 ;
-(CGPoint)settingPosition;
-(void)setSettingPosition:(CGPoint)arg1 ;
-(char)settingClipsToBounds;
-(void)setSettingClipsToBounds:(char)arg1 ;
-(char)settingUserInteractionEnabled;
-(void)setSettingUserInteractionEnabled:(char)arg1 ;
-(float)settingZPosition;
-(void)setSettingZPosition:(float)arg1 ;
-(float)settingAlpha;
-(void)setSettingAlpha:(float)arg1 ;
-(void)setSettingHidden:(char)arg1 ;
-(char)settingNeedsZoning;
-(void)setSettingNeedsZoning:(char)arg1 ;
-(float)settingCornerRadius;
-(void)setSettingCornerRadius:(float)arg1 ;
-(char)settingAntialiasing;
-(void)setSettingAntialiasing:(char)arg1 ;
-(unsigned)settingAutoresizingMask;
-(void)setSettingAutoresizingMask:(unsigned)arg1 ;
-(char)settingIgnoreEventsOnTransparentPixels;
-(void)setSettingIgnoreEventsOnTransparentPixels:(char)arg1 ;
-(id)settingShadowColor;
-(void)setSettingShadowColor:(id)arg1 ;
-(float)settingShadowRadius;
-(void)setSettingShadowRadius:(float)arg1 ;
-(float)settingShadowOpacity;
-(void)setSettingShadowOpacity:(float)arg1 ;
-(CGSize)settingShadowOffset;
-(void)setSettingShadowOffset:(CGSize)arg1 ;
-(char)settingShadowOptimization;
-(void)setSettingShadowOptimization:(char)arg1 ;
-(id)settingBorderColor;
-(float)settingBorderWidth;
-(UIEdgeInsets)settingBorderEdgeOutsets;
-(void)setSettingBorderEdgeOutsets:(UIEdgeInsets)arg1 ;
-(id)settingBorderImageURL;
-(void)setSettingBorderImageURL:(id)arg1 ;
-(UIEdgeInsets)settingBorderImageCapEdgeInsets;
-(void)setSettingBorderImageCapEdgeInsets:(UIEdgeInsets)arg1 ;
-(id)settingContentFilters;
-(void)setSettingContentFilters:(id)arg1 ;
-(id)settingContentEffects;
-(void)setSettingContentEffects:(id)arg1 ;
-(double)settingZRotation;
-(void)setSettingZRotation:(double)arg1 ;
-(CGPoint)settingZRotationAnchorPoint;
-(void)setSettingZRotationAnchorPoint:(CGPoint)arg1 ;
-(char)settingXFlipped;
-(void)setSettingXFlipped:(char)arg1 ;
-(char)settingYFlipped;
-(void)setSettingYFlipped:(char)arg1 ;
-(CGSize)settingXyScale;
-(void)setSettingXyScale:(CGSize)arg1 ;
-(CGPoint)settingXyTranslation;
-(void)setSettingXyTranslation:(CGPoint)arg1 ;
-(char)settingMotionEnabled;
-(char)settingMotionTiltXEnabled;
-(char)settingMotionTiltYEnabled;
-(char)settingMotionTiltZEnabled;
-(CGSize)settingMotionXMinMax;
-(CGSize)settingMotionYMinMax;
-(CGSize)settingMotionZMinMax;
-(CGPoint)settingMotionXTiltAnchorPoint;
-(void)setSettingMotionXTiltAnchorPoint:(CGPoint)arg1 ;
-(CGPoint)settingMotionYTiltAnchorPoint;
-(void)setSettingMotionYTiltAnchorPoint:(CGPoint)arg1 ;
-(CGPoint)settingMotionZTiltAnchorPoint;
-(void)setSettingMotionZTiltAnchorPoint:(CGPoint)arg1 ;
-(char)settingMotionXtiltReversed;
-(void)setSettingMotionXTiltReversed:(char)arg1 ;
-(char)settingMotionYTiltReversed;
-(void)setSettingMotionYTiltReversed:(char)arg1 ;
-(char)settingMotionZTiltReversed;
-(void)setSettingMotionZTiltReversed:(char)arg1 ;
-(char)settingDynamicsEnabled;
-(char)settingDynamicsGravityDisabled;
-(void)setSettingDynamicsGravityDisabled:(char)arg1 ;
-(float)settingDynamicsBodyElasticity;
-(void)setSettingDynamicsBodyElasticity:(float)arg1 ;
-(float)settingDynamicsBodyFriction;
-(void)setSettingDynamicsBodyFriction:(float)arg1 ;
-(float)settingDynamicsBodyDensity;
-(void)setSettingDynamicsBodyDensity:(float)arg1 ;
-(float)settingDynamicsBodyResistance;
-(void)setSettingDynamicsBodyResistance:(float)arg1 ;
-(float)settingDynamicsBodyAngularResistance;
-(void)setSettingDynamicsBodyAngularResistance:(float)arg1 ;
-(char)settingDynamicsBodyAllowsRotation;
-(void)setSettingDynamicsBodyAllowsRotation:(char)arg1 ;
-(id)settingDynamicsCollisionGroups;
-(void)setSettingDynamicsCollisionGroups:(id)arg1 ;
-(void)setSettingDynamicsCollisionActionScript:(id)arg1 ;
-(id)settingDynamicsAttachments;
-(void)setSettingDynamicsAttachments:(id)arg1 ;
-(id)settingDynamicsPushGroups;
-(void)setSettingDynamicsPushGroups:(id)arg1 ;
-(void)updateContentTransforms;
-(void)_cancelBorderOperations;
-(float)contentAspectRatio;
-(void)wobble;
-(void)prepareIfNeeded:(char)arg1 ;
-(void)startShowingProgressIndicator;
-(void)stopShowingProgressIndicator;
-(void)updateProgressIndicator:(float)arg1 ;
-(void)prefetchMediaURL:(id)arg1 identifier:(id)arg2 ;
-(SCD_Struct_OK13*)_focusGestureHelper;
-(void)focus:(id)arg1 ;
-(void)setPresentationMode:(unsigned)arg1 ;
-(OFUIView *)actionView;
-(OKPresentationWidget *)widget;
-(id)initWithWidget:(id)arg1 ;
@end

