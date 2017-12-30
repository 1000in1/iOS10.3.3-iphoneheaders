/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:58:03 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSString, SSAuthenticationContext;

@interface CloudServiceAPITokenOperation : ISOperation {

	NSString* _clientToken;
	NSString* _requestingBundleID;
	NSString* _requestingBundleVersion;
	SSAuthenticationContext* _authenticationContext;
	/*^block*/id _responseBlock;

}

@property (copy) NSString * clientToken; 
@property (copy) NSString * requestingBundleID; 
@property (copy) NSString * requestingBundleVersion; 
@property (copy) SSAuthenticationContext * authenticationContext; 
@property (copy) id responseBlock; 
-(void)setClientToken:(NSString *)arg1 ;
-(void)setRequestingBundleID:(NSString *)arg1 ;
-(NSString *)requestingBundleID;
-(NSString *)clientToken;
-(void)run;
-(NSString *)requestingBundleVersion;
-(void)setRequestingBundleVersion:(NSString *)arg1 ;
-(id)responseBlock;
-(SSAuthenticationContext *)authenticationContext;
-(void)setResponseBlock:(id)arg1 ;
-(void)setAuthenticationContext:(SSAuthenticationContext *)arg1 ;
@end

