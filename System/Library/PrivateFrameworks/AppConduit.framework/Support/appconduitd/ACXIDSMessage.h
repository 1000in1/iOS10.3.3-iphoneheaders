/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:14 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/AppConduit.framework/Support/appconduitd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, IDSMessageContext, NSString;

@interface ACXIDSMessage : NSObject {

	NSDictionary* _message;
	IDSMessageContext* _idsContext;
	NSString* _fromID;

}

@property (readonly) NSDictionary * message;                      //@synthesize message=_message - In the implementation block
@property (readonly) IDSMessageContext * idsContext;              //@synthesize idsContext=_idsContext - In the implementation block
@property (readonly) NSString * fromID;                           //@synthesize fromID=_fromID - In the implementation block
-(id)initWithMessage:(id)arg1 idsContext:(id)arg2 fromID:(id)arg3 ;
-(IDSMessageContext *)idsContext;
-(NSDictionary *)message;
-(NSString *)fromID;
@end

