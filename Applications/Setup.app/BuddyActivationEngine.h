/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:31 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionDelegate.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>

@class NSURLSession, NSMutableData, NSString, NSURLSessionConfiguration, NSURL, NSDictionary, NSURLRequest;

@interface BuddyActivationEngine : NSObject <NSURLSessionDelegate, NSURLSessionDataDelegate> {

	NSURLSession* _session;
	NSMutableData* _activationData;
	NSString* _userAgent;
	char _allowAnyHTTPSCertificate;
	char _useCellular;
	NSURLSessionConfiguration* _sessionConfiguration;
	NSURL* _overrideActivationURL;
	NSURL* _overrideSessionURL;
	/*^block*/id _completion;
	NSDictionary* _responseHeaders;
	NSURLRequest* _activationRequest;

}

@property (nonatomic,readonly) NSURLSession * session; 
@property (nonatomic,copy) NSURL * overrideActivationURL;                                   //@synthesize overrideActivationURL=_overrideActivationURL - In the implementation block
@property (nonatomic,copy) NSURL * overrideSessionURL;                                      //@synthesize overrideSessionURL=_overrideSessionURL - In the implementation block
@property (assign,nonatomic) char useCellular;                                              //@synthesize useCellular=_useCellular - In the implementation block
@property (nonatomic,copy) id completion;                                                   //@synthesize completion=_completion - In the implementation block
@property (nonatomic,copy) NSDictionary * responseHeaders;                                  //@synthesize responseHeaders=_responseHeaders - In the implementation block
@property (nonatomic,retain) NSURLRequest * activationRequest;                              //@synthesize activationRequest=_activationRequest - In the implementation block
@property (assign,nonatomic) char allowAnyHTTPSCertificate;                                 //@synthesize allowAnyHTTPSCertificate=_allowAnyHTTPSCertificate - In the implementation block
@property (nonatomic,retain) NSURLSessionConfiguration * sessionConfiguration;              //@synthesize sessionConfiguration=_sessionConfiguration - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)cellularActivationEngineWithOverrideActivationURL:(id)arg1 sessionURL:(id)arg2 ;
+(id)wifiActivationEngineWithOverrideActivationURL:(id)arg1 sessionURL:(id)arg2 ;
-(void)tryActivateWithRequestMutator:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)makeRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithOverrideActivationURL:(id)arg1 sessionURL:(id)arg2 ;
-(void)setUseCellular:(char)arg1 ;
-(void)setOverrideActivationURL:(NSURL *)arg1 ;
-(void)setOverrideSessionURL:(NSURL *)arg1 ;
-(id)_newActivationRequestWithSessionData:(id)arg1 error:(id*)arg2 ;
-(NSURL *)overrideActivationURL;
-(NSURL *)overrideSessionURL;
-(void)cancel;
-(void)_cleanup;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(char)useCellular;
-(NSURLSession *)session;
-(void)setResponseHeaders:(NSDictionary *)arg1 ;
-(NSURLRequest *)activationRequest;
-(void)setActivationRequest:(NSURLRequest *)arg1 ;
-(char)allowAnyHTTPSCertificate;
-(void)setAllowAnyHTTPSCertificate:(char)arg1 ;
-(NSDictionary *)responseHeaders;
-(NSURLSessionConfiguration *)sessionConfiguration;
-(void)setSessionConfiguration:(NSURLSessionConfiguration *)arg1 ;
@end

