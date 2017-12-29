/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:20 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSManagedObjectID, NSMutableDictionary;

@interface NSAtomicStoreCacheNode : NSObject {

	NSManagedObjectID* _objectID;
	unsigned long __versionNumber;
	NSMutableDictionary* _propertyCache;
	void* _reserved1;

}

@property (nonatomic,readonly) NSManagedObjectID * objectID; 
@property (nonatomic,retain) NSMutableDictionary * propertyCache; 
+(char)accessInstanceVariablesDirectly;
+(void)initialize;
-(const id*)knownKeyValuesPointer;
-(id)_snapshot_;
-(unsigned)_versionNumber;
-(void)_setVersionNumber:(unsigned)arg1 ;
-(NSMutableDictionary *)propertyCache;
-(void)setPropertyCache:(NSMutableDictionary *)arg1 ;
-(id)init;
-(id)valueForKey:(id)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(id)initWithObjectID:(id)arg1 ;
-(NSManagedObjectID *)objectID;
@end
