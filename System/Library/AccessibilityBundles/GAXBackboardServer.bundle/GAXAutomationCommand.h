/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:22:00 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/AccessibilityBundles/GAXBackboardServer.bundle/GAXBackboardServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol NSSecureCoding;
@class NSString, NSDictionary;

@interface GAXAutomationCommand : NSObject <NSSecureCoding> {

	NSString* _command;
	id<NSSecureCoding> _result;
	NSDictionary* _parameters;
	NSString* _errorMessage;

}

@property (nonatomic,copy) NSString * command;                       //@synthesize command=_command - In the implementation block
@property (nonatomic,retain) NSDictionary * parameters;              //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,retain) id<NSSecureCoding> result;              //@synthesize result=_result - In the implementation block
@property (nonatomic,copy) NSString * errorMessage;                  //@synthesize errorMessage=_errorMessage - In the implementation block
+(id)commandWithData:(id)arg1 ;
+(id)command:(id)arg1 ;
+(id)command:(id)arg1 parameters:(id)arg2 ;
+(char)supportsSecureCoding;
-(void)addParameter:(id)arg1 forKey:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)data;
-(NSDictionary *)parameters;
-(void)setParameters:(NSDictionary *)arg1 ;
-(id<NSSecureCoding>)result;
-(void)setCommand:(NSString *)arg1 ;
-(NSString *)command;
-(void)setResult:(id<NSSecureCoding>)arg1 ;
-(void)setErrorMessage:(NSString *)arg1 ;
-(NSString *)errorMessage;
@end

