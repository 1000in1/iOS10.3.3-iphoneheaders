/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:16 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/SBStatusBarStyleOverridesAssertionServer.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, NSXPCListener, NSMapTable, NSObject, FBWorkspaceEventQueue, NSString;

@interface SBStatusBarStyleOverridesAssertionManager : NSObject <NSXPCListenerDelegate, SBStatusBarStyleOverridesAssertionServer> {

	NSMutableArray* _runningUpdateTransactions;
	NSXPCListener* _xpcListener;
	NSMapTable* _assertionsByIdentifierByClientConnection;
	NSMapTable* _assertionsByStyleOverride;
	NSObject*<OS_dispatch_queue> _internalQueue;
	int _statusBarStyleOverrides;
	int _exclusiveStatusBarStyleOverrides;
	FBWorkspaceEventQueue* _eventQueue;

}

@property (nonatomic,retain) NSXPCListener * xpcListener;                                        //@synthesize xpcListener=_xpcListener - In the implementation block
@property (nonatomic,retain) NSMapTable * assertionsByIdentifierByClientConnection;              //@synthesize assertionsByIdentifierByClientConnection=_assertionsByIdentifierByClientConnection - In the implementation block
@property (nonatomic,retain) NSMapTable * assertionsByStyleOverride;                             //@synthesize assertionsByStyleOverride=_assertionsByStyleOverride - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> internalQueue;                         //@synthesize internalQueue=_internalQueue - In the implementation block
@property (nonatomic,retain) FBWorkspaceEventQueue * eventQueue;                                 //@synthesize eventQueue=_eventQueue - In the implementation block
@property (assign,nonatomic) int statusBarStyleOverrides;                                        //@synthesize statusBarStyleOverrides=_statusBarStyleOverrides - In the implementation block
@property (assign,nonatomic) int exclusiveStatusBarStyleOverrides;                               //@synthesize exclusiveStatusBarStyleOverrides=_exclusiveStatusBarStyleOverrides - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)invalidateStatusBarStyleOverridesAssertions:(id)arg1 ;
-(int)_internalQueue_removeAssertionByStyleOverrides:(id)arg1 ;
-(void)_invalidateAssertionsWithIdentifiers:(id)arg1 forClientConnection:(id)arg2 ;
-(void)_updateAppSceneSettingsForForegroundAppsAndPostAddedStyleOverrides:(int)arg1 removedStyleOverrides:(int)arg2 ;
-(void)_postStatusStringsByStyle:(id)arg1 ;
-(void)_mainQueue_getStatusBarStyleOverridesToSuppressAndStatusStringsByStyleForForegroundApplications:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)_internalQueue_deactivateStatusBarStyleOverridesAssertionsWithIdentifiers:(id)arg1 forClientConnection:(id)arg2 ;
-(int)_internalQueue_addAssertionByStyleOverrides:(id)arg1 ;
-(void)updateForegroundApplications:(id)arg1 withOptions:(unsigned)arg2 completion:(/*^block*/id)arg3 ;
-(id)_statusStringsByStyleForActiveAssertionsByStyleOverride:(id)arg1 inactiveAssertionsByStyleOverride:(id)arg2 ;
-(NSMapTable *)assertionsByIdentifierByClientConnection;
-(void)setAssertionsByIdentifierByClientConnection:(NSMapTable *)arg1 ;
-(NSMapTable *)assertionsByStyleOverride;
-(void)setAssertionsByStyleOverride:(NSMapTable *)arg1 ;
-(int)exclusiveStatusBarStyleOverrides;
-(void)setExclusiveStatusBarStyleOverrides:(int)arg1 ;
-(int)statusBarStyleOverrides;
-(void)setStatusBarStyleOverrides:(int)arg1 ;
-(void)activateStatusBarStyleOverridesAssertions:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)deactivateStatusBarStyleOverridesAssertionsWithIdentifiers:(id)arg1 ;
-(void)setStatusString:(id)arg1 forAssertionWithIdentifier:(id)arg2 ;
-(id)init;
-(FBWorkspaceEventQueue *)eventQueue;
-(void)setEventQueue:(FBWorkspaceEventQueue *)arg1 ;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(NSXPCListener *)xpcListener;
-(void)setXpcListener:(NSXPCListener *)arg1 ;
-(void)setInternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)internalQueue;
@end

