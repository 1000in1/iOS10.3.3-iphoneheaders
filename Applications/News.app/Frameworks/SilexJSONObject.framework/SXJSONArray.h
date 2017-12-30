/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:18 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/News.app/Frameworks/SilexJSONObject.framework/SilexJSONObject
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SilexJSONObject/SilexJSONObject-Structs.h>
#import <SilexJSONObject/SXJSONObject.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@protocol OS_dispatch_semaphore;
@class NSArray, NSString, NSMutableArray, NSObject;

@interface SXJSONArray : SXJSONObject <NSFastEnumeration> {

	/*^block*/id _objectValueClassBlock;
	/*^block*/id _valueClassBlock;
	NSArray* _json;
	NSString* _specificationVersion;
	NSMutableArray* _objects;
	NSObject*<OS_dispatch_semaphore> _semaphore;
	unsigned _count;

}

@property (nonatomic,readonly) id objectValueClassBlock;                                //@synthesize objectValueClassBlock=_objectValueClassBlock - In the implementation block
@property (nonatomic,readonly) id valueClassBlock;                                      //@synthesize valueClassBlock=_valueClassBlock - In the implementation block
@property (nonatomic,readonly) NSArray * json;                                          //@synthesize json=_json - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_semaphore> semaphore;              //@synthesize semaphore=_semaphore - In the implementation block
@property (nonatomic,readonly) NSMutableArray * objects;                                //@synthesize objects=_objects - In the implementation block
@property (nonatomic,readonly) unsigned count;                                          //@synthesize count=_count - In the implementation block
-(id)specificationVersion;
-(NSArray *)json;
-(id)objectValueClassBlock;
-(id)valueClassBlock;
-(id)initWithValueClassBlock:(/*^block*/id)arg1 objectValueClassBlock:(/*^block*/id)arg2 purgeBlock:(/*^block*/id)arg3 andJSONObject:(id)arg4 andVersion:(id)arg5 ;
-(id)NSArray;
-(id)firstObject;
-(unsigned)countByEnumeratingWithState:(SCD_Struct_SX0*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(unsigned)count;
-(id)objectAtIndex:(unsigned)arg1 ;
-(id)lastObject;
-(id)description;
-(NSMutableArray *)objects;
-(NSObject*<OS_dispatch_semaphore>)semaphore;
@end

