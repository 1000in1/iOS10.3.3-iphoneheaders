/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:32 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class asn1Token, NSString;

@interface asn1ReceiptToken : NSObject {

	unsigned mType;
	unsigned mTypeVersion;
	asn1Token* mContentToken;

}

@property (readonly) unsigned type; 
@property (readonly) unsigned typeVersion; 
@property (readonly) asn1Token * contentToken; 
@property (readonly) NSString * stringValue; 
@property (readonly) unsigned long long integerValue; 
+(id)readFromBuffer:(const char*)arg1 ;
-(asn1Token *)contentToken;
-(id)_initWithType:(unsigned)arg1 typeVersion:(unsigned)arg2 contentToken:(id)arg3 ;
-(unsigned)typeVersion;
-(void)dealloc;
-(id)description;
-(unsigned long long)integerValue;
-(unsigned)type;
-(NSString *)stringValue;
@end
