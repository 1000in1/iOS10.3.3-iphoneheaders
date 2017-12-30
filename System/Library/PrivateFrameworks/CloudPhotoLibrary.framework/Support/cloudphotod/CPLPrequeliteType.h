/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:29 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <cloudphotod/cloudphotod-Structs.h>
#import <libobjc.A.dylib/PQLInjecting.h>

@class NSData, PQLRawInjection, NSString;

@interface CPLPrequeliteType : NSObject <PQLInjecting> {

	PQLRawInjection* _injection;
	Class _objcClass;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSData * sql; 
+(id)integerType;
+(id)stringType;
+(id)dataType;
-(id)initWithTypeName:(const char*)arg1 objcClass:(Class)arg2 ;
-(NSString *)description;
-(NSData *)sql;
-(Class)objcClass;
-(int)bindWithStatement:(sqlite3_stmtRef)arg1 startingAtIndex:(int)arg2 ;
@end

