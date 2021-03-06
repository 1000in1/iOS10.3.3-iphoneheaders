/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:01 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <StoreServices/SSURLRequestProperties.h>

@class NSString, NSData, NSInputStream, NSArray, NSURL, NSDictionary;

@interface SSMutableURLRequestProperties : SSURLRequestProperties

@property (assign) char allowsBootstrapCellularData; 
@property (copy) NSString * clientAuditBundleIdentifier; 
@property (copy) NSData * clientAuditTokenData; 
@property (retain) NSInputStream * HTTPBodyStream; 
@property (assign) int KBSyncType; 
@property (getter=isLargeDownload) char largeDownload; 
@property (assign) char requiresCellularDataNetwork; 
@property (assign) char requiresExtendedValidationCertificates; 
@property (assign) char requiresExternal; 
@property (assign) char requiresHTTPS; 
@property (assign) char shouldAddKBSyncData; 
@property (assign) char shouldDecodeResponse; 
@property (assign) char shouldDisableCellular; 
@property (assign) char shouldDisableCellularFallback; 
@property (assign) char shouldProcessProtocol; 
@property (assign) char shouldSendSecureToken; 
@property (assign) char shouldSetCookies; 
@property (assign) int URLBagType; 
@property (copy) id URLBagURLBlock; 
@property (copy) NSArray * URLs; 
@property (assign) int allowedRetryCount; 
@property (assign) unsigned cachePolicy; 
@property (copy) NSString * clientIdentifier; 
@property (assign) long long expectedContentLength; 
@property (copy) NSData * HTTPBody; 
@property (copy) NSString * HTTPMethod; 
@property (getter=isITunesStoreRequest) char ITunesStoreRequest; 
@property (assign) int machineDataStyle; 
@property (assign) unsigned networkServiceType; 
@property (assign) double timeoutInterval; 
@property (copy) NSString * URLBagKey; 
@property (retain) NSURL * URL; 
@property (copy) NSArray * userAgentComponents; 
@property (copy) NSDictionary * HTTPHeaders; 
@property (copy) NSDictionary * requestParameters; 
-(void)setHTTPHeaders:(NSDictionary *)arg1 ;
-(void)setExpectedContentLength:(long long)arg1 ;
-(void)setAllowsBootstrapCellularData:(char)arg1 ;
-(void)setUserAgentComponents:(NSArray *)arg1 ;
-(void)setShouldDisableCellular:(char)arg1 ;
-(void)setShouldDisableCellularFallback:(char)arg1 ;
-(void)setLargeDownload:(char)arg1 ;
-(void)setMultiPartFormDataWithDictionary:(id)arg1 ;
-(void)setRequiresExtendedValidationCertificates:(char)arg1 ;
-(void)setRequiresExternal:(char)arg1 ;
-(void)setRequiresHTTPS:(char)arg1 ;
-(void)setShouldAddKBSyncData:(char)arg1 ;
-(void)setShouldDecodeResponse:(char)arg1 ;
-(void)setShouldSetCookies:(char)arg1 ;
-(void)setClientAuditBundleIdentifier:(NSString *)arg1 ;
-(void)setClientAuditTokenData:(NSData *)arg1 ;
-(void)setURLBagURLBlock:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(void)setURLs:(NSArray *)arg1 ;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2 ;
-(void)setHTTPBody:(NSData *)arg1 ;
-(void)setHTTPMethod:(NSString *)arg1 ;
-(void)setTimeoutInterval:(double)arg1 ;
-(void)setRequiresCellularDataNetwork:(char)arg1 ;
-(void)setURLBagType:(int)arg1 ;
-(void)setITunesStoreRequest:(char)arg1 ;
-(void)setRequestParameters:(NSDictionary *)arg1 ;
-(void)setValue:(id)arg1 forRequestParameter:(id)arg2 ;
-(void)setAllowedRetryCount:(int)arg1 ;
-(void)setCachePolicy:(unsigned)arg1 ;
-(void)setURLBagKey:(NSString *)arg1 ;
-(void)setShouldProcessProtocol:(char)arg1 ;
-(void)setKBSyncType:(int)arg1 ;
-(void)setShouldSendSecureToken:(char)arg1 ;
-(void)setMachineDataStyle:(int)arg1 ;
-(void)setHTTPBodyStream:(NSInputStream *)arg1 ;
-(void)setNetworkServiceType:(unsigned)arg1 ;
@end

