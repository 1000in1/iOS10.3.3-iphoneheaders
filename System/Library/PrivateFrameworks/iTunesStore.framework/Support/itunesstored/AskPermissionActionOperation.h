/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:58:04 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSData, NSString, NSURL;

@interface AskPermissionActionOperation : ISOperation {

	NSData* _clientAuditTokenData;
	NSString* _requestIdentifier;
	NSURL* _url;

}

@property (nonatomic,readonly) NSURL * URL;                          //@synthesize url=_url - In the implementation block
@property (retain) NSData * clientAuditTokenData; 
@property (copy,readonly) NSString * requestIdentifier; 
-(NSData *)clientAuditTokenData;
-(void)setClientAuditTokenData:(NSData *)arg1 ;
-(void)dealloc;
-(NSURL *)URL;
-(void)run;
-(id)initWithURL:(id)arg1 ;
-(NSString *)requestIdentifier;
@end
