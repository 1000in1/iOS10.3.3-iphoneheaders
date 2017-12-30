/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:47 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface BSPropertyMetadata : NSObject {

	char _type;
	NSString* _typeString;
	Class _classType;
	NSString* _getterName;
	NSString* _setterName;
	NSString* _name;
	NSString* _defaultKey;
	id _defaultValue;
	unsigned _options;

}

@property (assign,nonatomic) char type;                                       //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * typeString;                             //@synthesize typeString=_typeString - In the implementation block
@property (getter=isNumber,nonatomic,readonly) char number; 
@property (nonatomic,retain) Class classType;                                 //@synthesize classType=_classType - In the implementation block
@property (nonatomic,copy) NSString * getterName;                             //@synthesize getterName=_getterName - In the implementation block
@property (nonatomic,copy) NSString * setterName;                             //@synthesize setterName=_setterName - In the implementation block
@property (nonatomic,copy) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * defaultKey;                             //@synthesize defaultKey=_defaultKey - In the implementation block
@property (nonatomic,retain) id defaultValue;                                 //@synthesize defaultValue=_defaultValue - In the implementation block
@property (assign,nonatomic) unsigned options;                                //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) char synchronizeOnSet; 
@property (nonatomic,readonly) char removeIfSettingDefaultValue; 
@property (nonatomic,readonly) char removeIfCollectionSetEmpty; 
-(NSString *)defaultKey;
-(void)setDefaultKey:(NSString *)arg1 ;
-(NSString *)getterName;
-(NSString *)setterName;
-(void)setGetterName:(NSString *)arg1 ;
-(void)setSetterName:(NSString *)arg1 ;
-(void)setTypeString:(NSString *)arg1 ;
-(void)setClassType:(Class)arg1 ;
-(Class)classType;
-(char)removeIfSettingDefaultValue;
-(char)synchronizeOnSet;
-(char)removeIfCollectionSetEmpty;
-(void)dealloc;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setType:(char)arg1 ;
-(char)type;
-(unsigned)options;
-(void)setOptions:(unsigned)arg1 ;
-(id)defaultValue;
-(void)setDefaultValue:(id)arg1 ;
-(char)isNumber;
-(NSString *)typeString;
@end

