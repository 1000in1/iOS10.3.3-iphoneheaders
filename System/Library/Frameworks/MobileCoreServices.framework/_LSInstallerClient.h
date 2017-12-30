/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:46 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileCoreServices/MobileCoreServices-Structs.h>
#import <libobjc.A.dylib/LSInstallationServiceCallbackProtocol.h>

@protocol OS_dispatch_queue;
@class NSString, NSXPCConnection, NSObject, NSURL, NSDictionary;

@interface _LSInstallerClient : NSObject <LSInstallationServiceCallbackProtocol> {

	opaque_pthread_mutex_t _callbacksCompleteCondMutex;
	opaque_pthread_cond_t _callbacksCompleteCond;
	char _uninstaller;
	char _allCallbacksDeleviered;
	unsigned _operationType;
	NSString* _operationTypeString;
	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _progressBlock;
	NSString* _bundleID;
	NSURL* _bundleURL;
	NSDictionary* _options;

}

@property (nonatomic,retain) NSXPCConnection * connection;                       //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                 //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) id progressBlock;                                     //@synthesize progressBlock=_progressBlock - In the implementation block
@property (nonatomic,retain) NSString * bundleID;                                //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) NSURL * bundleURL;                                  //@synthesize bundleURL=_bundleURL - In the implementation block
@property (nonatomic,retain) NSDictionary * options;                             //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) unsigned operationType;                           //@synthesize operationType=_operationType - In the implementation block
@property (nonatomic,readonly) NSString * operationTypeString;                   //@synthesize operationTypeString=_operationTypeString - In the implementation block
@property (assign,getter=isUninstaller,nonatomic) char uninstaller;              //@synthesize uninstaller=_uninstaller - In the implementation block
@property (assign,nonatomic) char allCallbacksDeleviered;                        //@synthesize allCallbacksDeleviered=_allCallbacksDeleviered - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)installerWithBundleID:(id)arg1 bundleURL:(id)arg2 options:(id)arg3 callbackBlock:(/*^block*/id)arg4 ;
+(id)unInstallerWithBundleID:(id)arg1 options:(id)arg2 callbackBlock:(/*^block*/id)arg3 ;
+(id)installerWithBundleID:(id)arg1 options:(id)arg2 callbackBlock:(/*^block*/id)arg3 ;
-(NSString *)operationTypeString;
-(void)_waitForAllCallbackMessagesToExecute;
-(void)setAllCallbacksDeleviered:(char)arg1 ;
-(void)setUninstaller:(char)arg1 ;
-(char)allCallbacksDeleviered;
-(char)isUninstaller;
-(id)installTypeString;
-(void)updateCallbackWithData:(id)arg1 ;
-(void)callbackDeliveryComplete;
-(id)init;
-(void)dealloc;
-(NSURL *)bundleURL;
-(NSDictionary *)options;
-(void)setOptions:(NSDictionary *)arg1 ;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setBundleURL:(NSURL *)arg1 ;
-(id)progressBlock;
-(void)setProgressBlock:(id)arg1 ;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(unsigned)operationType;
@end

