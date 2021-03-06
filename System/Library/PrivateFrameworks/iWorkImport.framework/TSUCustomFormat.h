/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 1:10:36 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSString, TSUCustomFormatData, NSMutableArray;

@interface TSUCustomFormat : NSObject <NSCopying, NSMutableCopying> {

	NSString* mFormatName;
	NSString* mFormatNameStem;
	NSString* mFormatNameTag;
	int mFormatType;
	TSUCustomFormatData* mDefaultFormatData;
	NSMutableArray* mConditionList;

}

@property (nonatomic,readonly) NSMutableArray * conditionList; 
@property (nonatomic,readonly) int formatType; 
@property (nonatomic,readonly) TSUCustomFormatData * defaultFormatData; 
@property (nonatomic,readonly) unsigned conditionCount; 
@property (nonatomic,readonly) NSString * formatName; 
@property (nonatomic,readonly) NSString * formatNameStem; 
@property (nonatomic,readonly) NSString * formatNameTag; 
-(id)initWithName:(id)arg1 formatType:(int)arg2 data:(id)arg3 conditionList:(id)arg4 ;
-(void)p_makeFormatNameStemAndTag;
-(NSString *)formatNameStem;
-(NSString *)formatNameTag;
-(id)formattedBodyStringForDoubleValue:(double)arg1 customFormatListKey:(id)arg2 formatType:(int)arg3 locale:(id)arg4 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(int)formatType;
-(NSString *)formatName;
-(id)initWithName:(id)arg1 formatType:(int)arg2 data:(id)arg3 ;
-(void)p_addConditionOfType:(int)arg1 value:(double)arg2 data:(id)arg3 ;
-(char)p_isEqual:(id)arg1 matchingFullName:(char)arg2 ;
-(id)conditionalFormatDataForValue:(double)arg1 outKey:(unsigned*)arg2 ;
-(unsigned)conditionCount;
-(TSUCustomFormatData *)defaultFormatData;
-(id)customFormatWithNewName:(id)arg1 ;
-(char)isEqualWithStemNameMatching:(id)arg1 ;
-(id)conditionalFormatDataForValue:(double)arg1 ;
-(id)conditionalFormatAtIndex:(unsigned)arg1 ;
-(id)conditionalFormatDataForKey:(unsigned)arg1 ;
-(NSMutableArray *)conditionList;
@end

