/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:19 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBSStatusBarStyleOverridesAssertionClient.h>

@protocol OS_dispatch_queue;
@class NSMapTable, NSXPCConnection, NSObject, NSString;

@interface SBSStatusBarStyleOverridesAssertionManager : NSObject <SBSStatusBarStyleOverridesAssertionClient> {

	NSMapTable* _assertionsByIdentifier;
	NSXPCConnection* _sbXPCConnection;
	NSObject*<OS_dispatch_queue> _internalQueue;

}

@property (nonatomic,retain) NSMapTable * assertionsByIdentifier;                     //@synthesize assertionsByIdentifier=_assertionsByIdentifier - In the implementation block
@property (nonatomic,retain) NSXPCConnection * sbXPCConnection;                       //@synthesize sbXPCConnection=_sbXPCConnection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> internalQueue;              //@synthesize internalQueue=_internalQueue - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)removeStatusBarStyleOverridesAssertion:(id)arg1 ;
-(void)updateStatusStringForAssertion:(id)arg1 ;
-(void)addStatusBarStyleOverridesAssertion:(id)arg1 withHandler:(/*^block*/id)arg2 onQueue:(id)arg3 ;
-(void)invalidateStatusBarStyleOverridesAssertionsWithIdentifiers:(id)arg1 ;
-(void)_reactivateAssertions;
-(void)_internalQueue_removeStatusBarStyleOverridesAssertionWithIdentifier:(id)arg1 invalidate:(char)arg2 ;
-(NSMapTable *)assertionsByIdentifier;
-(void)setAssertionsByIdentifier:(NSMapTable *)arg1 ;
-(NSXPCConnection *)sbXPCConnection;
-(void)setSbXPCConnection:(NSXPCConnection *)arg1 ;
-(id)init;
-(void)_tearDownXPCConnection;
-(void)setInternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)internalQueue;
@end
