/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:24 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class SBDashBoardAppearance, SBDashBoardBehavior, SBDashBoardPresentation;


@protocol SBDashBoardViewPresenting <SBDashBoardViewControlling,SBDashBoardActionHandling>
@property (nonatomic,copy,readonly) SBDashBoardAppearance * activeAppearance; 
@property (nonatomic,copy,readonly) SBDashBoardBehavior * activeBehavior; 
@property (nonatomic,copy,readonly) SBDashBoardPresentation * externalPresentation; 
@required
-(SBDashBoardAppearance *)activeAppearance;
-(void)updateBehaviorForController:(id)arg1;
-(void)updateAppearanceForController:(id)arg1;
-(void)updateAppearanceForController:(id)arg1 withAnimationSettings:(id)arg2 completion:(/*^block*/id)arg3;
-(SBDashBoardPresentation *)externalPresentation;
-(SBDashBoardBehavior *)activeBehavior;

@end

