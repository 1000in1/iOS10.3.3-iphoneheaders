/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:07 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/AppleIDAuthAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionDelegate.h>
#import <libobjc.A.dylib/NSURLSessionTaskDelegate.h>

@protocol XMLRPCConnectionDelegate;
@class XMLRPCConnectionManager, XMLRPCRequest, NSString, NSMutableData, NSURLSession;

@interface XMLRPCConnection : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate> {

	XMLRPCConnectionManager* myManager;
	XMLRPCRequest* myRequest;
	NSString* myIdentifier;
	NSMutableData* myData;
	NSURLSession* mySession;
	id<XMLRPCConnectionDelegate> myDelegate;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sendSynchronousXMLRPCRequest:(id)arg1 error:(id*)arg2 ;
-(id)initWithXMLRPCRequest:(id)arg1 delegate:(id)arg2 manager:(id)arg3 ;
-(void)cancel;
-(void)dealloc;
-(id)delegate;
-(id)identifier;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

