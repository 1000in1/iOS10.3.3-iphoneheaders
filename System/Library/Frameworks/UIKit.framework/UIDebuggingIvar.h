/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:28 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class NSString, NSObject;

@interface UIDebuggingIvar : NSObject {

	NSString* _name;
	NSString* _typeDescription;
	id _value;
	NSObject* _object;
	objc_ivarRef _objcIvar;
	const char* _typeEncoding;

}

@property (assign,nonatomic) NSObject * object;                          //@synthesize object=_object - In the implementation block
@property (assign,nonatomic) objc_ivarRef objcIvar;                      //@synthesize objcIvar=_objcIvar - In the implementation block
@property (nonatomic,copy) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * typeDescription;                   //@synthesize typeDescription=_typeDescription - In the implementation block
@property (assign,nonatomic) const char* typeEncoding;                   //@synthesize typeEncoding=_typeEncoding - In the implementation block
@property (assign,nonatomic) id value;                                   //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) NSString * valueDescription; 
@property (nonatomic,readonly) char isObject; 
+(id)ivarWithObjcIvar:(objc_ivarRef)arg1 forObject:(id)arg2 ;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSObject *)object;
-(id)value;
-(void)setValue:(id)arg1 ;
-(void)setObject:(NSObject *)arg1 ;
-(void)setObjcIvar:(objc_ivarRef)arg1 ;
-(void)setTypeEncoding:(const char*)arg1 ;
-(void)setTypeDescription:(NSString *)arg1 ;
-(objc_ivarRef)objcIvar;
-(const char*)typeEncoding;
-(NSString *)valueDescription;
-(char)isObject;
-(NSString *)typeDescription;
@end

