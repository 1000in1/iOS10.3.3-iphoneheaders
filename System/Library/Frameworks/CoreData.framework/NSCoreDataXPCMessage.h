/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:49 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString;

@interface NSCoreDataXPCMessage : NSObject <NSSecureCoding> {

	unsigned _messageCode;
	NSData* _messageBody;
	NSString* _token;

}

@property (assign) unsigned messageCode;              //@synthesize messageCode=_messageCode - In the implementation block
@property (retain) NSData * messageBody;              //@synthesize messageBody=_messageBody - In the implementation block
@property (retain) NSString * token;                  //@synthesize token=_token - In the implementation block
+(char)supportsSecureCoding;
-(unsigned)messageCode;
-(NSData *)messageBody;
-(void)setMessageCode:(unsigned)arg1 ;
-(void)setMessageBody:(NSData *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(NSString *)token;
-(void)setToken:(NSString *)arg1 ;
@end

