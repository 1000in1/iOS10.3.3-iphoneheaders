/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:14 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/AppConduit.framework/Support/appconduitd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appconduitd/PSYSyncCoordinatorDelegate.h>
#import <appconduitd/PSYInitialSyncStateObserverDelegate.h>

@class PSYSyncCoordinator, PSYInitialSyncStateObserver, NSString;

@interface ACXPairedSyncDelegate : NSObject <PSYSyncCoordinatorDelegate, PSYInitialSyncStateObserverDelegate> {

	PSYSyncCoordinator* _coordinator;
	PSYInitialSyncStateObserver* _stateObserver;

}

@property (readonly) PSYSyncCoordinator * coordinator;                         //@synthesize coordinator=_coordinator - In the implementation block
@property (readonly) PSYInitialSyncStateObserver * stateObserver;              //@synthesize stateObserver=_stateObserver - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedSyncDelegate;
-(PSYInitialSyncStateObserver *)stateObserver;
-(char)syncingIsRestrictedForPairingID:(id)arg1 ;
-(id)init;
-(PSYSyncCoordinator *)coordinator;
-(void)initialSyncStateObserver:(id)arg1 syncDidCompleteForPairingIdentifier:(id)arg2 ;
-(void)syncCoordinator:(id)arg1 beginSyncSession:(id)arg2 ;
@end

