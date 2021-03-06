/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:46 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURLComponents, NSXPCConnection, NSError;

@interface _LSAppLinkPlugIn : NSObject {

	NSURLComponents* _URLComponents;
	NSXPCConnection* _XPCConnection;
	NSError* _previousPlugInError;

}

@property (retain) NSURLComponents * URLComponents;              //@synthesize URLComponents=_URLComponents - In the implementation block
@property (retain) NSXPCConnection * XPCConnection;              //@synthesize XPCConnection=_XPCConnection - In the implementation block
@property (retain) NSError * previousPlugInError;                //@synthesize previousPlugInError=_previousPlugInError - In the implementation block
+(Class)plugInClasses;
+(char)canHandleURLComponents:(id)arg1 ;
-(NSURLComponents *)URLComponents;
-(NSXPCConnection *)XPCConnection;
-(NSError *)previousPlugInError;
-(void)setURLComponents:(NSURLComponents *)arg1 ;
-(void)setXPCConnection:(NSXPCConnection *)arg1 ;
-(void)setPreviousPlugInError:(NSError *)arg1 ;
-(void)getAppLinkWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)dealloc;
@end

