/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:04 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/XPCServices/IMRemoteURLConnectionAgent.xpc/IMRemoteURLConnectionAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMRemoteURLConnectionAgent/NSURLConnectionDelegate.h>

@class NSMutableURLRequest, NSURLConnection, NSURLResponse, NSMutableData, NSString;

@interface IMRemoteAgentURLLoader : NSObject <NSURLConnectionDelegate> {

	/*^block*/id _block;
	NSMutableURLRequest* _request;
	NSURLConnection* _currentURLConnection;
	NSURLResponse* _currentURLResponse;
	NSMutableData* _currentResponseData;
	NSString* _bundleIdentifierForDataUsage;
	int _currentStatusCode;
	char _forceCellularIfPossible;
	char _alwaysForceCellular;
	char _requireIDSHost;
	char _shouldUsePipelining;
	int _concurrentConnections;
	char _disableKeepAlive;
	int _keepAliveWifi;
	int _keepAliveCell;

}

@property (assign) char requireIDSHost;                                  //@synthesize requireIDSHost=_requireIDSHost - In the implementation block
@property (assign) char forceCellularIfPossible;                         //@synthesize forceCellularIfPossible=_forceCellularIfPossible - In the implementation block
@property (assign) char alwaysForceCellular;                             //@synthesize alwaysForceCellular=_alwaysForceCellular - In the implementation block
@property (retain) NSString * bundleIdentifierForDataUsage;              //@synthesize bundleIdentifierForDataUsage=_bundleIdentifierForDataUsage - In the implementation block
@property (assign) char shouldUsePipelining;                             //@synthesize shouldUsePipelining=_shouldUsePipelining - In the implementation block
@property (assign) int concurrentConnections;                            //@synthesize concurrentConnections=_concurrentConnections - In the implementation block
@property (assign) char disableKeepAlive;                                //@synthesize disableKeepAlive=_disableKeepAlive - In the implementation block
@property (assign) int keepAliveWifi;                                    //@synthesize keepAliveWifi=_keepAliveWifi - In the implementation block
@property (assign) int keepAliveCell;                                    //@synthesize keepAliveCell=_keepAliveCell - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_celluarInterface;
-(void)_callBackWithError:(id)arg1 resultData:(id)arg2 statusCode:(int)arg3 response:(id)arg4 ;
-(void)cancel;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)load;
-(NSString *)bundleIdentifierForDataUsage;
-(char)requireIDSHost;
-(char)forceCellularIfPossible;
-(char)alwaysForceCellular;
-(char)shouldUsePipelining;
-(int)concurrentConnections;
-(char)disableKeepAlive;
-(int)keepAliveWifi;
-(int)keepAliveCell;
-(id)initWithURLRequest:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)setForceCellularIfPossible:(char)arg1 ;
-(void)setBundleIdentifierForDataUsage:(NSString *)arg1 ;
-(void)setRequireIDSHost:(char)arg1 ;
-(void)setShouldUsePipelining:(char)arg1 ;
-(void)setConcurrentConnections:(int)arg1 ;
-(void)setDisableKeepAlive:(char)arg1 ;
-(void)setKeepAliveWifi:(int)arg1 ;
-(void)setKeepAliveCell:(int)arg1 ;
-(void)setAlwaysForceCellular:(char)arg1 ;
-(void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2 ;
@end

