/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:44 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/FMF.framework/XPCServices/FMFMapXPCService.xpc/FMFMapXPCService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FMFMapXPCInterface <NSObject>
@required
-(oneway void)gridImageForWidth:(double)arg1 height:(double)arg2 andCompletion:(/*^block*/id)arg3;
-(oneway void)noLocationImageForWidth:(double)arg1 height:(double)arg2 andCompletion:(/*^block*/id)arg3;
-(oneway void)mapImageForRequest:(id)arg1 andCompletion:(/*^block*/id)arg2;
-(oneway void)mapImageForLocation:(id)arg1 altitude:(double)arg2 pitch:(double)arg3 width:(double)arg4 height:(double)arg5 andCompletion:(/*^block*/id)arg6;
-(oneway void)gridImageForScreenRatio:(double)arg1 andCompletion:(/*^block*/id)arg2;
-(oneway void)noLocationImageForScreenRatio:(double)arg1 andCompletion:(/*^block*/id)arg2;
-(oneway void)mapImageForLocation:(id)arg1 altitude:(double)arg2 pitch:(double)arg3 screenRatio:(double)arg4 andCompletion:(/*^block*/id)arg5;

@end

