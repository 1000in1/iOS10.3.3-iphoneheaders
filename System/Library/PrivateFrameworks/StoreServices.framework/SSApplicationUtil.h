/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:00 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class SSXPCConnection, NSObject;

@interface SSApplicationUtil : NSObject {

	SSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _serialQueue;

}
-(id)init;
-(id)_connection;
-(void)restartApplication:(/*^block*/id)arg1 ;
@end

