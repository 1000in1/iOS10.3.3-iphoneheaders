/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:55 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBDashBoardViewControllerBase.h>
#import <SpringBoard/SBAppViewControllerDelegate.h>
#import <SpringBoard/SBApplicationHosting.h>

@protocol SBDashBoardHostedAppViewControllerDelegate;
@class SBAppViewController, FBUIApplicationSceneDeactivationAssertion, SBFAuthenticationAssertion, NSString, SBAppView, NSSet;

@interface SBDashBoardHostedAppViewController : SBDashBoardViewControllerBase <SBAppViewControllerDelegate, SBApplicationHosting> {

	id<SBDashBoardHostedAppViewControllerDelegate> _delegate;
	SBAppViewController* _appViewController;
	FBUIApplicationSceneDeactivationAssertion* _resignActiveAssertion;
	SBFAuthenticationAssertion* _authenticationAssertion;
	NSString* _cachedBasicPublicDescription;

}

@property (assign,nonatomic,__weak) id<SBDashBoardHostedAppViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleIdentifier; 
@property (nonatomic,readonly) SBAppView * appView; 
@property (assign,nonatomic) unsigned options; 
@property (assign,nonatomic) int mode; 
@property (nonatomic,retain) NSSet * actionsToDeliver; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)aggregateAppearance:(id)arg1 ;
-(void)aggregateBehavior:(id)arg1 ;
-(id)displayLayoutElementIdentifier;
-(int)presentationPriority;
-(id)appearanceIdentifier;
-(id)hostedApp;
-(char)isHostingAnApp;
-(char)canHostAnApp;
-(void)hostedAppWillRotateToInterfaceOrientation:(int)arg1 ;
-(SBAppView *)appView;
-(NSSet *)actionsToDeliver;
-(void)setActionsToDeliver:(NSSet *)arg1 ;
-(void)_setResignActiveAssertionEnabled:(char)arg1 ;
-(void)_setMode:(int)arg1 fromClient:(char)arg2 forReason:(id)arg3 ;
-(void)configureDisplayLayoutElement:(id)arg1 ;
-(void)appViewController:(id)arg1 didTransitionFromMode:(int)arg2 toMode:(int)arg3 ;
-(void)appViewControllerWillActivateApplication:(id)arg1 ;
-(void)appViewControllerDidDeactivateApplication:(id)arg1 ;
-(void)setDelegate:(id<SBDashBoardHostedAppViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<SBDashBoardHostedAppViewControllerDelegate>)delegate;
-(id)initWithApplication:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(char)handleEvent:(id)arg1 ;
-(int)presentationStyle;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)viewDidLoad;
-(void)willMoveToParentViewController:(id)arg1 ;
-(unsigned)options;
-(void)setMode:(int)arg1 ;
-(int)mode;
-(void)setOptions:(unsigned)arg1 ;
-(int)presentationType;
@end
