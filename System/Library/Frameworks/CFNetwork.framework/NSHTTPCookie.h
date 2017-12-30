/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:40 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CFNetwork/CFNetwork-Structs.h>
@class NSHTTPCookieInternal, NSDictionary, NSString, NSDate, NSURL, NSArray;

@interface NSHTTPCookie : NSObject {

	NSHTTPCookieInternal* _cookiePrivate;

}

@property (copy,readonly) NSDictionary * properties; 
@property (readonly) unsigned version; 
@property (copy,readonly) NSString * name; 
@property (copy,readonly) NSString * value; 
@property (copy,readonly) NSDate * expiresDate; 
@property (getter=isSessionOnly,readonly) char sessionOnly; 
@property (copy,readonly) NSString * domain; 
@property (copy,readonly) NSString * path; 
@property (getter=isSecure,readonly) char secure; 
@property (getter=isHTTPOnly,readonly) char HTTPOnly; 
@property (copy,readonly) NSString * comment; 
@property (copy,readonly) NSURL * commentURL; 
@property (copy,readonly) NSArray * portList; 
+(id)requestHeaderFieldsWithCookies:(id)arg1 ;
+(id)cookieWithCFHTTPCookie:(OpaqueCFHTTPCookieRef)arg1 ;
+(id)_cookiesWithResponseHeaderFields:(id)arg1 forURL:(id)arg2 singleCookie:(char)arg3 ;
+(id)_parsedCookiesWithResponseHeaderFields:(id)arg1 forURL:(id)arg2 ;
+(id)_cookieForSetCookieString:(id)arg1 forURL:(id)arg2 partition:(id)arg3 ;
+(id)_cf2nsCookies:(CFArrayRef)arg1 ;
+(const CFArrayRef)_ns2cfCookies:(id)arg1 ;
+(id)cookieWithProperties:(id)arg1 ;
+(id)cookiesWithResponseHeaderFields:(id)arg1 forURL:(id)arg2 ;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(id)initWithCFHTTPCookie:(OpaqueCFHTTPCookieRef)arg1 ;
-(NSURL *)commentURL;
-(id)_storagePartition;
-(NSArray *)portList;
-(const OpaqueCFHTTPCookieRef)_CFHTTPCookie;
-(char)isHTTPOnly;
-(id)Name;
-(id)Value;
-(id)Domain;
-(id)Path;
-(id)Expires;
-(id)Comment;
-(id)CommentURL;
-(id)StoragePartition;
-(id)OriginURL;
-(id)Version;
-(id)Secure;
-(id)Discard;
-(id)Port;
-(id)MaxAge;
-(int)_compareForHeaderOrder:(id)arg1 ;
-(char)_isExpired;
-(char)isSessionOnly;
-(NSDate *)expiresDate;
-(const OpaqueCFHTTPCookieRef)_GetInternalCFHTTPCookie;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(NSString *)name;
-(NSString *)domain;
-(NSString *)path;
-(NSString *)value;
-(char)isSecure;
-(id)_key;
-(unsigned)version;
-(id)initWithProperties:(id)arg1 ;
-(NSDictionary *)properties;
-(NSString *)comment;
@end

