/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:00 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <identityservicesd/identityservicesd-Structs.h>
@class NSData;

@interface IDSGlobalLinkMessage : NSObject {

	int _command;
	NSData* _hmacKeyData;
	IDSGlobalLinkAttribute _attributes[20];
	int _numAttribute;

}

@property (nonatomic,readonly) int command;              //@synthesize command=_command - In the implementation block
@property (readonly) NSData * hmacKeyData;               //@synthesize hmacKeyData=_hmacKeyData - In the implementation block
+(id)messageWithCommand:(int)arg1 attributes:(id)arg2 ;
+(id)messageWithBuffer:(char*)arg1 length:(int)arg2 ;
-(char)getAttribute:(int)arg1 attribute:(IDSGlobalLinkAttribute*)arg2 ;
-(char)read:(char*)arg1 inputLength:(int)arg2 ;
-(char)write:(char*)arg1 outputLength:(int*)arg2 ;
-(char)_addAttribute:(IDSGlobalLinkAttribute*)arg1 ;
-(void)_addUInt16Attribute:(int)arg1 value:(unsigned short)arg2 ;
-(void)_addBinaryDataAttribute:(int)arg1 value:(id)arg2 ;
-(void)_addUInt32Attribute:(int)arg1 value:(unsigned)arg2 ;
-(void)_addAddressAttribute:(int)arg1 value:(sockaddr*)arg2 ;
-(void)_addUInt64Attribute:(int)arg1 value:(unsigned long long)arg2 ;
-(char)verifyHMacDigestWithKey:(id)arg1 inputBuffer:(char*)arg2 inputLength:(int)arg3 ;
-(NSData *)hmacKeyData;
-(void)dealloc;
-(void)setAttributes:(id)arg1 ;
-(int)command;
-(id)initWithCommand:(int)arg1 ;
@end

