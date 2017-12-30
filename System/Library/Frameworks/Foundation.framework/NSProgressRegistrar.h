/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:41 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/NSProgressRegistrar.h>

@protocol NSProgressRegistrar
@required
-(oneway void)removePublisherForID:(id)arg1;
-(oneway void)observePublisherForID:(id)arg1 value:(id)arg2 forKey:(id)arg3 inUserInfo:(char)arg4;
-(oneway void)removeSubscriberForID:(id)arg1;
-(oneway void)addPublisher:(id)arg1 forID:(id)arg2 acknowledgementAppBundleIDs:(id)arg3 category:(id)arg4 fileURL:(id)arg5 initialValues:(id)arg6 completionHandler:(/*^block*/id)arg7;
-(oneway void)addSubscriber:(id)arg1 forID:(id)arg2 appBundleID:(id)arg3 category:(id)arg4 completionHandler:(/*^block*/id)arg5;
-(oneway void)addSubscriber:(id)arg1 forID:(id)arg2 appBundleID:(id)arg3 fileURL:(id)arg4 completionHandler:(/*^block*/id)arg5;

@end


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSFileAccessNode, NSMutableSet, NSString;

@interface NSProgressRegistrar : NSObject <NSXPCListenerDelegate, NSProgressRegistrar> {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _publishersByID;
	NSMutableDictionary* _subscribersByID;
	NSFileAccessNode* _rootFileAccessNode;
	NSMutableSet* _pendingFileSubscriberIDs;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(oneway void)removePublisherForID:(id)arg1 ;
-(oneway void)observePublisherForID:(id)arg1 value:(id)arg2 forKey:(id)arg3 inUserInfo:(char)arg4 ;
-(oneway void)removeSubscriberForID:(id)arg1 ;
-(void)_getRemoteProcessWithIdentifier:(int)arg1 canReadItemAtURL:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(oneway void)addPublisher:(id)arg1 forID:(id)arg2 acknowledgementAppBundleIDs:(id)arg3 category:(id)arg4 fileURL:(id)arg5 initialValues:(id)arg6 completionHandler:(/*^block*/id)arg7 ;
-(oneway void)addSubscriber:(id)arg1 forID:(id)arg2 appBundleID:(id)arg3 category:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(oneway void)addSubscriber:(id)arg1 forID:(id)arg2 appBundleID:(id)arg3 fileURL:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)initWithQueue:(id)arg1 rootFileAccessNode:(id)arg2 ;
-(void)dealloc;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
@end

