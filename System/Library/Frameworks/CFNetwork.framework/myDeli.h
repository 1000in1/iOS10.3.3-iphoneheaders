/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:11 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionDelegate.h>

@class NSError, NSString;

@interface myDeli : NSObject <NSURLSessionDelegate> {

	NSError* _errorResult;
	char _receivedResponse;
	char _hasCanceled;

}

@property (retain) NSError * someError;                             //@synthesize errorResult=_errorResult - In the implementation block
@property (assign) char receivedResponse;                           //@synthesize receivedResponse=_receivedResponse - In the implementation block
@property (assign) char hasCanceled;                                //@synthesize hasCanceled=_hasCanceled - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setReceivedResponse:(char)arg1 ;
-(void)setSomeError:(NSError *)arg1 ;
-(NSError *)someError;
-(char)receivedResponse;
-(id)init;
-(void)dealloc;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5 ;
-(void)setHasCanceled:(char)arg1 ;
-(char)hasCanceled;
@end
