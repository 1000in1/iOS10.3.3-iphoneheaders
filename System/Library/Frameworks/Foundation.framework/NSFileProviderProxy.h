/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:45 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSFileReactorProxy.h>

@protocol NSFileProviderXPCInterfaceNSXPCProxyCreating;
@class NSString, NSUUID, NSFileProviderXPCMessenger;

@interface NSFileProviderProxy : NSFileReactorProxy {

	NSString* _secureID;
	NSUUID* _uniqueID;
	id<NSFileProviderXPCInterface><NSXPCProxyCreating> _remoteProvider;
	NSFileProviderXPCMessenger* _forwardedMessenger;
	char _wantsWriteNotifications;

}

@property (readonly) NSString * secureID;                                                            //@synthesize secureID=_secureID - In the implementation block
@property (readonly) NSUUID * uniqueID;                                                              //@synthesize uniqueID=_uniqueID - In the implementation block
@property (readonly) id<NSFileProviderXPCInterface><NSXPCProxyCreating> remoteProvider;              //@synthesize remoteProvider=_remoteProvider - In the implementation block
@property (assign) char wantsWriteNotifications;                                                     //@synthesize wantsWriteNotifications=_wantsWriteNotifications - In the implementation block
-(void)setItemLocation:(id)arg1 ;
-(void)providePhysicalURLForURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)provideLogicalURLForURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)observePresentationChangeOfKind:(id)arg1 withPresenter:(id)arg2 url:(id)arg3 newURL:(id)arg4 ;
-(char)allowedForURL:(id)arg1 ;
-(void)forwardUsingProxy:(id)arg1 ;
-(id)initWithClient:(id)arg1 remoteProvider:(id)arg2 reactorID:(id)arg3 secureID:(id)arg4 uniqueID:(id)arg5 ;
-(void)setWantsWriteNotifications:(char)arg1 ;
-(id<NSFileProviderXPCInterface><NSXPCProxyCreating>)remoteProvider;
-(/*^block*/id)provideItemAtURL:(id)arg1 withOptions:(unsigned)arg2 forAccessClaim:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)observeEndOfWriteAtLocation:(id)arg1 forAccessClaim:(id)arg2 ;
-(NSString *)secureID;
-(id)_clientProxy;
-(char)wantsWriteNotifications;
-(void)invalidate;
-(void)dealloc;
-(NSUUID *)uniqueID;
@end

