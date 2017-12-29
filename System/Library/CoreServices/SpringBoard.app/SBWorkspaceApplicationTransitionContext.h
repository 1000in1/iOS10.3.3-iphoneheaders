/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:52 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBWorkspaceTransitionContext.h>

@class NSSet, SBWorkspaceEntity, SBWorkspaceApplication;

@interface SBWorkspaceApplicationTransitionContext : SBWorkspaceTransitionContext {

	/*^block*/id _resultBlock;
	char _background;
	char _fencesAnimations;
	char _alwaysRunsWatchdog;
	char _waitsForSceneUpdates;
	char _sentActivationResult;
	int _interfaceOrientation;
	int _preferredInterfaceOrientation;

}

@property (assign,getter=isBackground,nonatomic) char background;                         //@synthesize background=_background - In the implementation block
@property (assign,nonatomic) char fencesAnimations;                                       //@synthesize fencesAnimations=_fencesAnimations - In the implementation block
@property (assign,nonatomic) char alwaysRunsWatchdog;                                     //@synthesize alwaysRunsWatchdog=_alwaysRunsWatchdog - In the implementation block
@property (assign,nonatomic) char waitsForSceneUpdates;                                   //@synthesize waitsForSceneUpdates=_waitsForSceneUpdates - In the implementation block
@property (nonatomic,copy) id resultBlock;                                                //@synthesize resultBlock=_resultBlock - In the implementation block
@property (nonatomic,copy,readonly) NSSet * applications; 
@property (nonatomic,copy,readonly) NSSet * previousApplications; 
@property (assign,nonatomic) int interfaceOrientation;                                    //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
@property (assign,nonatomic) int preferredInterfaceOrientation;                           //@synthesize preferredInterfaceOrientation=_preferredInterfaceOrientation - In the implementation block
@property (nonatomic,retain) SBWorkspaceEntity * activatingEntity; 
@property (nonatomic,retain) SBWorkspaceApplication * activatingApplication; 
-(void)setEntity:(id)arg1 forLayoutRole:(int)arg2 ;
-(void)setActivatingEntity:(SBWorkspaceEntity *)arg1 ;
-(void)setActivatingApplication:(SBWorkspaceApplication *)arg1 ;
-(void)setWaitsForSceneUpdates:(char)arg1 ;
-(id)entityForLayoutRole:(int)arg1 ;
-(void)sendActivationResultErrorCode:(int)arg1 reason:(id)arg2 ;
-(SBWorkspaceApplication *)activatingApplication;
-(id)compactDescriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)previousEntityForLayoutRole:(int)arg1 ;
-(NSSet *)previousApplications;
-(id)_realActivatingEntity;
-(SBWorkspaceEntity *)activatingEntity;
-(int)_lockedInterfaceOrientation;
-(id)sceneIdentifierForApplication:(id)arg1 ;
-(double)_watchdogScaleFactorForApplication:(id)arg1 ;
-(char)hasSentActivationResult;
-(void)setApplication:(id)arg1 forLayoutRole:(int)arg2 ;
-(void)setPreviousEntity:(id)arg1 forLayoutRole:(int)arg2 ;
-(id)applicationForBundleID:(id)arg1 ;
-(id)previousApplicationForBundleID:(id)arg1 ;
-(id)sceneSettingsForApplication:(id)arg1 ;
-(id)sceneTransitionContextForApplication:(id)arg1 ;
-(id)sceneClientSettingsForApplication:(id)arg1 withSceneSettings:(id)arg2 ;
-(id)executionContextForApplication:(id)arg1 ;
-(char)fencesAnimations;
-(void)setFencesAnimations:(char)arg1 ;
-(char)alwaysRunsWatchdog;
-(void)setAlwaysRunsWatchdog:(char)arg1 ;
-(char)waitsForSceneUpdates;
-(id)init;
-(void)dealloc;
-(int)interfaceOrientation;
-(void)setInterfaceOrientation:(int)arg1 ;
-(id)_display;
-(void)setBackground:(char)arg1 ;
-(char)isBackground;
-(void)setResultBlock:(id)arg1 ;
-(id)resultBlock;
-(id)succinctDescriptionBuilder;
-(id)applicationForLayoutRole:(int)arg1 ;
-(id)previousApplicationForLayoutRole:(int)arg1 ;
-(NSSet *)applications;
-(void)finalize;
-(int)preferredInterfaceOrientation;
-(void)setPreferredInterfaceOrientation:(int)arg1 ;
@end
