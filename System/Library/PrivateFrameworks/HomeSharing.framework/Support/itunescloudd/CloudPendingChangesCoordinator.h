/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:57 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject;

@interface CloudPendingChangesCoordinator : NSObject {

	NSString* _name;
	NSString* _pendingChangesPath;
	NSObject*<OS_dispatch_queue> _queue;
	Class _loggable;

}
+(id)sagaPendingChangesCoordinator;
+(id)jaliscoPendingChangesCoordinator;
+(id)jaliscoAppLibraryPendingChangesCoordinator;
-(void)processPendingChangesUsingLibrary:(id)arg1 ;
-(void)removeAllPendingChanges;
-(id)initWithPrefix:(id)arg1 loggable:(Class)arg2 ;
-(id)_pendingChanges;
-(char)_savePendingChanges:(id)arg1 ;
-(void)addPendingChange:(id)arg1 ;
@end

