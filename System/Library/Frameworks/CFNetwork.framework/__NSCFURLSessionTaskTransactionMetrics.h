/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:12 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <CFNetwork/NSURLSessionTaskTransactionMetrics.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURLRequest, NSURLResponse, NSDate, NSString;

@interface __NSCFURLSessionTaskTransactionMetrics : NSURLSessionTaskTransactionMetrics <NSSecureCoding> {

	NSURLRequest* _request;
	NSURLResponse* _response;
	NSDate* _fetchStartDate;
	NSDate* _domainLookupStartDate;
	NSDate* _domainLookupEndDate;
	NSDate* _connectStartDate;
	NSDate* _connectEndDate;
	NSDate* _secureConnectionStartDate;
	NSDate* _secureConnectionEndDate;
	NSDate* _requestStartDate;
	NSDate* _requestEndDate;
	NSDate* _responseStartDate;
	NSDate* _responseEndDate;
	NSString* _networkProtocolName;
	char _proxyConnection;
	char _reusedConnection;
	int _resourceFetchType;
	char __secureConnection;
	char __localCache;
	char __serverPush;
	char __cellular;
	unsigned __redirected;
	NSString* __localAddressAndPort;
	NSString* __remoteAddressAndPort;

}
+(char)supportsSecureCoding;
-(id)_initWithPerformanceTiming:(PerformanceTimingRef)arg1 ;
-(void)setFetchStartDate:(id)arg1 ;
-(void)setDomainLookupStartDate:(id)arg1 ;
-(void)setDomainLookupEndDate:(id)arg1 ;
-(void)setConnectStartDate:(id)arg1 ;
-(void)setConnectEndDate:(id)arg1 ;
-(void)setSecureConnectionStartDate:(id)arg1 ;
-(void)setSecureConnectionEndDate:(id)arg1 ;
-(void)setRequestStartDate:(id)arg1 ;
-(void)setRequestEndDate:(id)arg1 ;
-(void)setResponseStartDate:(id)arg1 ;
-(void)setResponseEndDate:(id)arg1 ;
-(void)setNetworkProtocolName:(id)arg1 ;
-(void)set_localAddressAndPort:(id)arg1 ;
-(void)set_remoteAddressAndPort:(id)arg1 ;
-(void)set_secureConnection:(char)arg1 ;
-(void)set_localCache:(char)arg1 ;
-(void)set_serverPush:(char)arg1 ;
-(void)set_cellular:(char)arg1 ;
-(void)set_redirected:(unsigned)arg1 ;
-(char)_serverPush;
-(char)_localCache;
-(id)responseStartDate;
-(id)_localAddressAndPort;
-(char)_secureConnection;
-(char)_cellular;
-(unsigned)_redirected;
-(id)responseEndDate;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)response;
-(id)request;
-(char)isReusedConnection;
-(char)isProxyConnection;
-(id)requestEndDate;
-(id)requestStartDate;
-(id)secureConnectionEndDate;
-(id)secureConnectionStartDate;
-(id)connectEndDate;
-(id)connectStartDate;
-(id)domainLookupEndDate;
-(id)domainLookupStartDate;
-(id)fetchStartDate;
-(void)setProxyConnection:(char)arg1 ;
-(void)setReusedConnection:(char)arg1 ;
-(int)resourceFetchType;
-(void)setResourceFetchType:(int)arg1 ;
-(void)setRequest:(id)arg1 ;
-(void)setResponse:(id)arg1 ;
-(id)_remoteAddressAndPort;
-(id)networkProtocolName;
@end
