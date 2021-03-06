/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:01 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <identityservicesd/identityservicesd-Structs.h>
#import <FTServices/FTIDSMessage.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSDictionary;

@interface IDSProfileGetHandlesMessage : FTIDSMessage <NSCopying> {

	NSArray* _responseHandles;
	NSDictionary* _selfHandle;

}

@property (copy) NSArray * responseHandles;              //@synthesize responseHandles=_responseHandles - In the implementation block
@property (copy) NSDictionary * selfHandle;              //@synthesize selfHandle=_selfHandle - In the implementation block
-(NSArray *)responseHandles;
-(NSDictionary *)selfHandle;
-(void)setResponseHandles:(NSArray *)arg1 ;
-(void)setSelfHandle:(NSDictionary *)arg1 ;
-(id)messageBody;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)maxTimeoutRetries;
-(char)wantsExtraTimeoutRetry;
-(double)anisetteHeadersTimeout;
-(id)additionalMessageHeaders;
-(id)requiredKeys;
-(void)handleResponseDictionary:(id)arg1 ;
-(id)bagKey;
@end

