/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 7:15:12 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CallKit.framework/XPCServices/com.apple.CallKit.CallDirectory.xpc/com.apple.CallKit.CallDirectory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, AWDServerConnection;

@interface CDXAWDReporter : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	AWDServerConnection* _serverConnection;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                  //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) AWDServerConnection * serverConnection;              //@synthesize serverConnection=_serverConnection - In the implementation block
-(void)_reportMetricId:(unsigned long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)reportLoadedDataForExtensionWithIdentifier:(id)arg1 blockingEntries:(unsigned)arg2 identificationEntries:(unsigned)arg3 ;
-(void)reportSetEnabled:(char)arg1 forExtensionWithIdentifier:(id)arg2 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(AWDServerConnection *)serverConnection;
-(void)setServerConnection:(AWDServerConnection *)arg1 ;
@end

