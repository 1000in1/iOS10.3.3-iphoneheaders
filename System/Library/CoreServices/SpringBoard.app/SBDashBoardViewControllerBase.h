/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:24 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <SpringBoard/SBDashBoardViewPresenting.h>

@protocol SBDashBoardViewPresenting;
@class SBDashBoardAppearance, SBDashBoardBehavior, SBDashBoardPresentation, _UILegibilitySettings, FBDisplayLayoutElement, SBDashBoardIsolatingViewController, NSHashTable, UIViewController, NSString, NSSet, UIColor, NSArray;

@interface SBDashBoardViewControllerBase : UIViewController <BSDescriptionProviding, SBDashBoardViewPresenting> {

	SBDashBoardAppearance* _appearance;
	SBDashBoardBehavior* _behavior;
	SBDashBoardPresentation* _presentation;
	_UILegibilitySettings* _legibilitySettings;
	FBDisplayLayoutElement* _displayLayoutElement;
	SBDashBoardIsolatingViewController* _isolatingViewController;
	SBDashBoardViewControllerBase* _isolatedViewController;
	Class _isolationClass;
	NSHashTable* _regionProviders;
	char _forcingLayoutForPresentation;
	char _isBeingPresented;
	id<SBDashBoardViewPresenting> _presenter;

}

@property (getter=isIsolatingContent,nonatomic,readonly) char isolatingContent; 
@property (nonatomic,readonly) SBDashBoardViewControllerBase * isolatedViewController; 
@property (nonatomic,readonly) UIViewController * isolatingViewController;                            //@synthesize isolatingViewController=_isolatingViewController - In the implementation block
@property (getter=isPresentation,nonatomic,readonly) char presentation;                               //@synthesize isBeingPresented=_isBeingPresented - In the implementation block
@property (getter=isDisappeared,nonatomic,readonly) char disappeared; 
@property (nonatomic,readonly) UIViewController * kitPresentedViewController; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * appearanceIdentifier; 
@property (nonatomic,readonly) int backgroundStyle; 
@property (nonatomic,copy,readonly) NSSet * components; 
@property (nonatomic,readonly) _UILegibilitySettings * legibilitySettings;                            //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (nonatomic,readonly) UIColor * backgroundColor; 
@property (nonatomic,readonly) int idleTimerDuration; 
@property (nonatomic,readonly) int idleTimerMode; 
@property (nonatomic,readonly) int idleWarnMode; 
@property (nonatomic,readonly) int scrollingStrategy; 
@property (nonatomic,readonly) int notificationBehavior; 
@property (nonatomic,readonly) unsigned restrictedCapabilities; 
@property (nonatomic,readonly) int proximityDetectionMode; 
@property (nonatomic,__weak,readonly) id<UICoordinateSpace> presentationCoordinateSpace; 
@property (nonatomic,copy,readonly) NSArray * presentationRegions; 
@property (nonatomic,copy,readonly) NSString * dashBoardIdentifier; 
@property (nonatomic,readonly) int participantState; 
@property (assign,nonatomic,__weak) id<SBDashBoardViewPresenting> presenter;                          //@synthesize presenter=_presenter - In the implementation block
@property (nonatomic,readonly) int presentationStyle; 
@property (nonatomic,readonly) int presentationType; 
@property (nonatomic,readonly) int presentationTransition; 
@property (nonatomic,readonly) int presentationPriority; 
@property (nonatomic,readonly) int presentationAltitude; 
@property (nonatomic,copy,readonly) SBDashBoardAppearance * activeAppearance; 
@property (nonatomic,copy,readonly) SBDashBoardBehavior * activeBehavior; 
@property (nonatomic,copy,readonly) SBDashBoardPresentation * externalPresentation; 
+(id)dashBoardIdentifier;
+(Class)isolationViewControllerClass;
+(Class)viewClass;
-(void)isolateViewController:(id)arg1 ;
-(void)synchronizeDrawingWithIsolatedContent;
-(void)performCustomTransitionToVisible:(char)arg1 withAnimationSettings:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)aggregateAppearance:(id)arg1 ;
-(void)aggregateBehavior:(id)arg1 ;
-(void)rebuildAppearance;
-(void)rebuildBehavior;
-(SBDashBoardAppearance *)activeAppearance;
-(id)displayLayoutElementIdentifier;
-(int)presentationPriority;
-(NSString *)dashBoardIdentifier;
-(NSString *)appearanceIdentifier;
-(char)isDisappeared;
-(void)updateBehaviorForController:(id)arg1 ;
-(void)updateAppearanceForController:(id)arg1 ;
-(void)updateAppearanceForController:(id)arg1 withAnimationSettings:(id)arg2 completion:(/*^block*/id)arg3 ;
-(SBDashBoardPresentation *)externalPresentation;
-(int)presentationAltitude;
-(int)scrollingStrategy;
-(int)proximityDetectionMode;
-(int)idleTimerDuration;
-(int)idleWarnMode;
-(id<UICoordinateSpace>)presentationCoordinateSpace;
-(NSArray *)presentationRegions;
-(char)wouldHandleButtonEvent:(id)arg1 ;
-(void)registerView:(id)arg1 forRole:(int)arg2 ;
-(SBDashBoardViewControllerBase *)isolatedViewController;
-(void)updateAppearance:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(char)isIsolatingContent;
-(UIViewController *)kitPresentedViewController;
-(void)rebuildEverythingForReason:(id)arg1 ;
-(id)_presenter;
-(void)unregisterAllViews;
-(void)configureDisplayLayoutElement:(id)arg1 ;
-(void)aggregatePresentation:(id)arg1 ;
-(char)handleAppearanceUpdateFromController:(id)arg1 animationSettings:(inout id*)arg2 ;
-(UIViewController *)isolatingViewController;
-(void)willTransitionToPresented:(char)arg1 ;
-(void)didTransitionToPresented:(char)arg1 ;
-(void)_rebuildDisposition;
-(char)_presentationParticipant;
-(void)registerView:(id)arg1 forRole:(int)arg2 options:(unsigned)arg3 ;
-(char)_rebuildPresentation;
-(id)_regionsForView:(id)arg1 ;
-(char)_rebuildAppearance;
-(void)_layoutIfNeededForPresentation;
-(char)_rebuildBehavior;
-(char)handleAction:(id)arg1 fromController:(id)arg2 ;
-(void)unregisterView:(id)arg1 ;
-(void)updateAppearance:(/*^block*/id)arg1 ;
-(void)updateBehavior:(/*^block*/id)arg1 ;
-(UIColor *)backgroundColor;
-(void)dealloc;
-(NSString *)description;
-(int)backgroundStyle;
-(char)handleEvent:(id)arg1 ;
-(void)loadView;
-(int)presentationStyle;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLoad;
-(void)dismiss;
-(_UILegibilitySettings *)legibilitySettings;
-(char)isPresentation;
-(NSSet *)components;
-(int)idleTimerMode;
-(unsigned)restrictedCapabilities;
-(int)notificationBehavior;
-(void)updateForPresentation:(id)arg1 ;
-(int)presentationTransition;
-(int)presentationType;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id<SBDashBoardViewPresenting>)presenter;
-(void)setPresenter:(id<SBDashBoardViewPresenting>)arg1 ;
-(void)sendAction:(id)arg1 ;
-(void)handleAction:(id)arg1 fromSender:(id)arg2 ;
-(int)participantState;
-(SBDashBoardBehavior *)activeBehavior;
@end

