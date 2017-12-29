/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:30 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class SSVSubscriptionStatusRequest, NSObject, SSVSubscriptionStatus, NSDate, NSMutableArray;

@interface SSVSubscriptionStatusCoordinator : NSObject {

	SSVSubscriptionStatusRequest* _activeRequest;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	char _didReset;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	SSVSubscriptionStatus* _lastKnownStatus;
	NSDate* _lastStatusDate;
	int _notificationToken;
	NSMutableArray* _statusBlocks;

}

@property (copy,readonly) SSVSubscriptionStatus * lastKnownStatus; 
+(id)_existingSharedCoordinator;
+(id)sharedCoordinator;
-(void)_externalChangeNotification;
-(void)_validateLastKnownStatus;
-(void)_deviceStoreFrontChangedNotification;
-(id)_copyValidStatusForStatus:(id)arg1 ;
-(id)_copyStatusDateFromUserDefaults;
-(id)_copyStatusFromUserDefaults;
-(void)_handleRequestResponseWithStatus:(id)arg1 isFinal:(char)arg2 error:(id)arg3 ;
-(void)_fireStatusBlocksWithStatus:(id)arg1 isFinal:(char)arg2 error:(id)arg3 ;
-(void)_invalidateLastKnownStatus;
-(id)init;
-(void)dealloc;
-(void)reset;
-(SSVSubscriptionStatus *)lastKnownStatus;
-(void)modifyLastKnownStatusUsingBlock:(/*^block*/id)arg1 ;
-(void)getStatusWithOptions:(id)arg1 statusBlock:(/*^block*/id)arg2 ;
@end
