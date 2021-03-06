/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:22 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBLayoutState.h>
#import <SpringBoard/SBMainDisplayLayoutContext.h>

@protocol SBFLockOutStatusProvider;
@class SBMainDisplaySceneManager, SBMainWorkspace, SBSideAppState, SBBreadcrumbState, NSString;

@interface SBMainDisplayLayoutState : SBLayoutState <SBMainDisplayLayoutContext> {

	SBMainDisplaySceneManager* _sceneManager;
	SBMainWorkspace* _workspace;
	SBSideAppState* _sideAppState;
	SBSideAppState* _externallyManagedSideAppState;
	/*^block*/id _appEntityGenerator;
	id<SBFLockOutStatusProvider> _lockOutController;
	SBBreadcrumbState* _breadcrumbState;

}

@property (nonatomic,readonly) SBBreadcrumbState * breadcrumbState;                         //@synthesize breadcrumbState=_breadcrumbState - In the implementation block
@property (nonatomic,readonly) SBSideAppState * sideAppState;                               //@synthesize sideAppState=_sideAppState - In the implementation block
@property (nonatomic,readonly) SBSideAppState * externallyManagedSideAppState;              //@synthesize externallyManagedSideAppState=_externallyManagedSideAppState - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) int interfaceOrientation; 
@property (nonatomic,readonly) int sideAppPresentationStyle; 
@property (nonatomic,readonly) int sideAppWidth; 
@property (nonatomic,readonly) int externallyManagedSideAppPresentationStyle; 
@property (nonatomic,readonly) int externallyManagedSideAppWidth; 
+(int)_defaultOrientation;
-(SBSideAppState *)sideAppState;
-(int)wallpaperMode;
-(int)sideAppPresentationStyle;
-(char)isEqualToLayoutState:(id)arg1 ;
-(id)_layoutStateForTransitionContext:(id)arg1 ;
-(id)_initWithElements:(id)arg1 andBreadcrumbState:(id)arg2 andSideAppState:(id)arg3 andExternallyManagedSideAppState:(id)arg4 interfaceOrientation:(int)arg5 ;
-(id)_initWithElements:(id)arg1 andBreadcrumbState:(id)arg2 andSideAppState:(id)arg3 andExternallyManagedSideAppState:(id)arg4 interfaceOrientation:(int)arg5 sceneManager:(id)arg6 appEntityGenerator:(/*^block*/id)arg7 workspace:(id)arg8 lockOutController:(id)arg9 ;
-(SBBreadcrumbState *)breadcrumbState;
-(id)_stateWithElements:(id)arg1 andBreadcrumbState:(id)arg2 andSideAppState:(id)arg3 andExternallyManagedSideAppState:(id)arg4 interfaceOrientation:(int)arg5 ;
-(int)wallpaperModeForLayoutRole:(int)arg1 ;
-(char)includesStatusBarForLayoutRole:(int)arg1 ;
-(int)sideAppWidth;
-(int)externallyManagedSideAppPresentationStyle;
-(int)externallyManagedSideAppWidth;
-(SBSideAppState *)externallyManagedSideAppState;
-(id)transitionContextForResizingSideAppToWidth:(int)arg1 ;
-(id)transitionContextForSuspendingPrimaryApp;
-(id)transitionContextForSuspendingSideApp;
-(id)transitionContextForSettingSideAppPinned:(char)arg1 ;
-(id)_initWithElements:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
@end

