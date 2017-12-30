/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:01 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSData, SSMetricsPageEvent, NSHTTPURLResponse, NSString, NSURL;

@interface SSURLConnectionResponse : NSObject <SSXPCCoding> {

	NSData* _bodyData;
	SSMetricsPageEvent* _metricsPageEvent;
	NSHTTPURLResponse* _urlResponse;

}

@property (nonatomic,readonly) char ssv_isExpiredResponse; 
@property (nonatomic,readonly) NSData * databaseEncoding; 
@property (nonatomic,retain) SSMetricsPageEvent * metricsPageEvent;              //@synthesize metricsPageEvent=_metricsPageEvent - In the implementation block
@property (nonatomic,readonly) NSString * storeCorrelationID; 
@property (nonatomic,readonly) NSHTTPURLResponse * URLResponse;                  //@synthesize urlResponse=_urlResponse - In the implementation block
@property (nonatomic,readonly) NSData * bodyData;                                //@synthesize bodyData=_bodyData - In the implementation block
@property (nonatomic,readonly) long long expectedContentLength; 
@property (nonatomic,readonly) NSString * MIMEType; 
@property (nonatomic,readonly) NSString * suggestedFilename; 
@property (nonatomic,readonly) NSString * textEncodingName; 
@property (nonatomic,readonly) NSURL * URL; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithURLResponse:(id)arg1 bodyData:(id)arg2 ;
-(void)setMetricsPageEvent:(SSMetricsPageEvent *)arg1 ;
-(char)ssv_isExpiredResponse;
-(id)initWithDatabaseEncoding:(id)arg1 ;
-(NSData *)databaseEncoding;
-(NSString *)suggestedFilename;
-(NSString *)storeCorrelationID;
-(void)dealloc;
-(NSURL *)URL;
-(NSString *)MIMEType;
-(int)statusCode;
-(id)allHeaderFields;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(NSString *)textEncodingName;
-(NSData *)bodyData;
-(SSMetricsPageEvent *)metricsPageEvent;
-(NSHTTPURLResponse *)URLResponse;
-(long long)expectedContentLength;
@end

