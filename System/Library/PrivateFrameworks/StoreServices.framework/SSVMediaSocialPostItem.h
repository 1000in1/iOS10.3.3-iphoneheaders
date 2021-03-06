/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:01 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSString;

@interface SSVMediaSocialPostItem : NSObject <NSCopying, SSXPCCoding> {

	NSString* _identifier;
	NSString* _type;

}

@property (nonatomic,copy) NSString * identifier;                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * type;                         //@synthesize type=_type - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)description;
-(NSString *)identifier;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
@end

