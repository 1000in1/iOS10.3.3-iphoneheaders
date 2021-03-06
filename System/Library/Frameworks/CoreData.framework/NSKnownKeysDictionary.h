/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:50 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreFoundation/NSMutableDictionary.h>

@class NSKnownKeysMappingStrategy;

@interface NSKnownKeysDictionary : NSMutableDictionary

@property (nonatomic,readonly) NSKnownKeysMappingStrategy * mapping; 
+(id)newInstanceWithSearchStrategy:(id)arg1 inData:(id)arg2 ;
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)_setValues:(id*)arg1 retain:(char)arg2 ;
-(void)getKeys:(id*)arg1 ;
-(const id*)values;
-(void)setValues:(id*)arg1 ;
-(void)getObjects:(id*)arg1 andKeys:(id*)arg2 ;
-(id)initWithSearchStrategy:(id)arg1 ;
-(id)initForKeys:(id)arg1 ;
-(void)setValue:(id)arg1 atIndex:(unsigned)arg2 ;
-(NSKnownKeysMappingStrategy *)mapping;
-(id)valueAtIndex:(unsigned)arg1 ;
-(void)getObjects:(id*)arg1 ;
@end

