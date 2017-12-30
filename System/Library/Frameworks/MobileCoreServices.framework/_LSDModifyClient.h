/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:46 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileCoreServices/_LSDClient.h>
#import <libobjc.A.dylib/_LSDModifyProtocol.h>

@interface _LSDModifyClient : _LSDClient <_LSDModifyProtocol>
-(void)setDatabaseIsSeeded:(char)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)registerItemInfo:(id)arg1 alias:(id)arg2 diskImageAlias:(id)arg3 bundleURL:(id)arg4 installationPlist:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)registerExtensionPoint:(id)arg1 withInfo:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setHandler:(id)arg1 version:(unsigned long long)arg2 roles:(unsigned long)arg3 forContentType:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)setHandler:(id)arg1 version:(unsigned long long)arg2 forURLScheme:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)removeHandlerForURLScheme:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)synchronizeWithMobileInstallation;
-(void)updateRecordForApp:(id)arg1 withSINF:(id)arg2 iTunesMetadata:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)rebuildApplicationDatabasesForSystem:(char)arg1 internal:(char)arg2 user:(char)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setHandlerOptions:(unsigned long)arg1 forContentType:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)removeHandlerForContentType:(id)arg1 roles:(unsigned long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)updateContainerUnit:(unsigned)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)resetServerStoreWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)installApplication:(id)arg1 atURL:(id)arg2 withOptions:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)uninstallApplication:(id)arg1 withOptions:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)willHandleInvocation:(id)arg1 isReply:(char)arg2 ;
-(char)clientHasMIEntitlement:(id)arg1 ;
@end

