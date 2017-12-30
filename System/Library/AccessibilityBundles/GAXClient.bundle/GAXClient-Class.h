/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:22:00 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/AccessibilityBundles/GAXClient.bundle/GAXClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GAXClient/GAXClient-Structs.h>
@class AXIPCClient, AXIPCServer;

@interface GAXClient : NSObject {

	char _enabled;
	char _allowsMotion;
	char _allowsKeyboardTextInput;
	char _providesViewServices;
	AXIPCClient* _backboardClient;
	AXIPCServer* _appServer;
	unsigned _serverMode;

}

@property (nonatomic,retain) AXIPCClient * backboardClient;                        //@synthesize backboardClient=_backboardClient - In the implementation block
@property (nonatomic,retain) AXIPCServer * appServer;                              //@synthesize appServer=_appServer - In the implementation block
@property (assign,nonatomic) unsigned serverMode;                                  //@synthesize serverMode=_serverMode - In the implementation block
@property (assign,nonatomic) char allowsMotion;                                    //@synthesize allowsMotion=_allowsMotion - In the implementation block
@property (assign,nonatomic) char allowsKeyboardTextInput;                         //@synthesize allowsKeyboardTextInput=_allowsKeyboardTextInput - In the implementation block
@property (assign,getter=isEnabled,nonatomic) char enabled;                        //@synthesize enabled=_enabled - In the implementation block
@property (getter=isActive,nonatomic,readonly) char active; 
@property (getter=isInWorkspace,nonatomic,readonly) char inWorkspace; 
@property (assign,nonatomic) char providesViewServices;                            //@synthesize providesViewServices=_providesViewServices - In the implementation block
+(id)sharedInstance;
-(unsigned)serverMode;
-(AXIPCClient *)backboardClient;
-(AXIPCServer *)appServer;
-(id)_hashForView:(id)arg1 ;
-(void)setServerMode:(unsigned)arg1 ;
-(char)_sendMessageToBackboardWithIdentifier:(int)arg1 payload:(id)arg2 replyMessage:(id*)arg3 description:(id)arg4 error:(id*)arg5 ;
-(int)_stateForRestrictionWithIdentifier:(id)arg1 ;
-(char)providesViewServices;
-(id)_handleRestrictionDidChangeState:(id)arg1 ;
-(void)_notifyGuidedAccessClientDidLoad;
-(char)isInWorkspace;
-(id)_handleGetRestrictionIdentifiers:(id)arg1 ;
-(id)_messageServiceName;
-(void)setAppServer:(AXIPCServer *)arg1 ;
-(void)setAllowsMotion:(char)arg1 ;
-(void)_handlePreferenceDidChange:(id)arg1 ;
-(void)setBackboardClient:(AXIPCClient *)arg1 ;
-(id)_allWindowsIncludingStaticChromeForClassicMode:(char)arg1 includingStatusBarWindow:(char)arg2 ;
-(void)setProvidesViewServices:(char)arg1 ;
-(CGRect)_selectionTargetFrameForView:(id)arg1 ;
-(id)_handleSettingsDidChange:(id)arg1 ;
-(id)_guidedAccessRestrictionDelegate;
-(id)_ancestorView:(id)arg1 matchesBlock:(/*^block*/id)arg2 ;
-(void)asynchronouslyPresentGuidedAccessActiveBanner;
-(char)isViewInIgnoredTouchRegion:(id)arg1 ;
-(char)allowsKeyboardTextInput;
-(id)_handleHideKeyboard:(id)arg1 ;
-(id)_handlePrepareClientAppForTransitionToWorkspace:(id)arg1 ;
-(id)_handleGetAffectedViewsForPath:(id)arg1 ;
-(id)_tableViewCellAncestorForView:(id)arg1 ;
-(char)_viewShouldBeIgnored:(id)arg1 ;
-(id)_affectedViewsForPath:(id)arg1 ;
-(char)_viewRequiresPadding:(id)arg1 ;
-(void)_notifyAppDidBecomeActive;
-(void)setAllowsKeyboardTextInput:(char)arg1 ;
-(char)shouldShowKeyboardsInViewServices;
-(char)allowsMotion;
-(void)_handleAppDidBecomeActive:(id)arg1 ;
-(int)stateForRestrictionWithIdentifier:(id)arg1 ;
-(id)_controlAncestorForView:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(char)isActive;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(void)setPasscode:(id)arg1 ;
@end

