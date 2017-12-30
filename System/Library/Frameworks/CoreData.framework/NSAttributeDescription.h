/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:50 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSPropertyDescription.h>

@class NSString, NSData;

@interface NSAttributeDescription : NSPropertyDescription {

	unsigned short _type;
	Class _attributeValueClass;
	NSString* _valueTransformerName;
	NSString* _attributeValueClassName;
	id _defaultValue;

}

@property (assign) unsigned attributeType; 
@property (copy) NSString * attributeValueClassName; 
@property (retain) id defaultValue; 
@property (copy,readonly) NSData * versionHash; 
@property (copy) NSString * valueTransformerName; 
@property (assign) char allowsExternalBinaryDataStorage; 
+(id)_classNameForType:(unsigned)arg1 ;
+(void)initialize;
-(unsigned)_propertyType;
-(NSString *)valueTransformerName;
-(char)allowsExternalBinaryDataStorage;
-(char)storesBinaryDataExternally;
-(NSString *)attributeValueClassName;
-(char)isIndexed;
-(void)_sortOutDefaultNumericValuesBecauseDoublesAndFloatsDontCompareEqualAndThatBreaksTests;
-(void)setAttributeValueClassName:(NSString *)arg1 ;
-(id)validationPredicates;
-(id)validationWarnings;
-(void)setAttributeType:(unsigned)arg1 ;
-(void)setValueTransformerName:(NSString *)arg1 ;
-(void)setAllowsExternalBinaryDataStorage:(char)arg1 ;
-(Class)_attributeValueClass;
-(id)_initWithName:(id)arg1 type:(unsigned)arg2 withClassName:(id)arg3 ;
-(id)_rawValidationPredicates;
-(id)_rawValidationWarnings;
-(int)_canConvertPredicate:(id)arg1 andWarning:(id)arg2 ;
-(char)_comparePredicatesAndWarnings:(id)arg1 ;
-(char)_comparePredicatesAndWarningsWithUnoptimizedAttributeDescription:(id)arg1 ;
-(void)_createCachesAndOptimizeState;
-(char)_nonPredicateValidateValue:(id*)arg1 forKey:(id)arg2 inObject:(id)arg3 error:(id*)arg4 ;
-(void)_versionHash:(char*)arg1 inStyle:(unsigned)arg2 ;
-(id)_initWithName:(id)arg1 type:(unsigned)arg2 ;
-(char)_epsilonEquals:(id)arg1 rhs:(id)arg2 withFlags:(int)arg3 ;
-(void)setStoresBinaryDataExternally:(char)arg1 ;
-(void)_writeIntoData:(id)arg1 propertiesDict:(id)arg2 uniquedPropertyNames:(id)arg3 uniquedStrings:(id)arg4 uniquedData:(id)arg5 entitiesSlots:(id)arg6 fetchRequests:(id)arg7 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)defaultValue;
-(void)setDefaultValue:(id)arg1 ;
-(unsigned)attributeType;
-(NSData *)versionHash;
-(id)_initWithType:(unsigned)arg1 ;
@end

