/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:05 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/IntentsUI.framework/XPCServices/intents_image_service.xpc/intents_image_service
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSString;

@interface ServiceDelegate : NSObject <NSXPCListenerDelegate>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
@end

