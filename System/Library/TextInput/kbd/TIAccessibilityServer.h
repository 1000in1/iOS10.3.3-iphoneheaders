/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:40:19 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/TextInput/kbd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue;
@class NSXPCListener, NSObject, NSString;

@interface TIAccessibilityServer : NSObject <NSXPCListenerDelegate> {

	NSXPCListener* _listener;
	NSObject*<OS_dispatch_queue> _dispatchQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedAccessibilityServer;
-(id)init;
-(void)dealloc;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
@end

