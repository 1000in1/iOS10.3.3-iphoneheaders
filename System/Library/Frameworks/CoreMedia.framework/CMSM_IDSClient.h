/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:53 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreMedia.framework/CoreMedia
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IDSServiceDelegate.h>

@protocol OS_dispatch_queue;
@class IDSService, NSObject, NSString;

@interface CMSM_IDSClient : NSObject <IDSServiceDelegate> {

	IDSService* pIdsService;
	NSObject*<OS_dispatch_queue> idsDispatchQueue;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(char)arg4 error:(id)arg5 ;
-(char)sendMessage:(id)arg1 toDestinations:(id)arg2 priority:(int)arg3 options:(id)arg4 identifier:(id*)arg5 error:(id*)arg6 ;
@end

