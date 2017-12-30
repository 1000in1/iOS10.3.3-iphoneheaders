/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:39 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Tips.app/Tips
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSURLSession, NSURLSessionTask;

@interface TPSURLSessionRequest : NSObject {

	NSMutableArray* _completionHandlers;
	NSURLSession* _session;
	NSURLSessionTask* _sessionTask;

}

@property (nonatomic,retain) NSMutableArray * completionHandlers;              //@synthesize completionHandlers=_completionHandlers - In the implementation block
@property (nonatomic,retain) NSURLSession * session;                           //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) NSURLSessionTask * sessionTask;                   //@synthesize sessionTask=_sessionTask - In the implementation block
+(id)urlSessionRequestWithSession:(id)arg1 sessionTask:(id)arg2 completionHandler:(id)arg3 ;
-(void)dealloc;
-(void)setSession:(NSURLSession *)arg1 ;
-(NSURLSession *)session;
-(NSMutableArray *)completionHandlers;
-(void)setCompletionHandlers:(NSMutableArray *)arg1 ;
-(NSURLSessionTask *)sessionTask;
-(id)initWithSession:(id)arg1 sessionTask:(id)arg2 completionHandler:(id)arg3 ;
-(void)setSessionTask:(NSURLSessionTask *)arg1 ;
@end

