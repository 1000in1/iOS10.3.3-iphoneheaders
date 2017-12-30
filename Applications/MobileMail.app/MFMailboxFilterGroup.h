/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:56 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface MFMailboxFilterGroup : NSObject <NSCopying> {

	NSString* _name;
	NSArray* _filters;
	int _combinator;
	int _selectionCardinality;

}

@property (nonatomic,copy,readonly) NSString * name;                  //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSArray * filters;                //@synthesize filters=_filters - In the implementation block
@property (nonatomic,readonly) int combinator;                        //@synthesize combinator=_combinator - In the implementation block
@property (nonatomic,readonly) int selectionCardinality;              //@synthesize selectionCardinality=_selectionCardinality - In the implementation block
+(id)groupWithName:(id)arg1 combinator:(int)arg2 selectionCardinality:(int)arg3 filters:(id)arg4 ;
-(int)selectionCardinality;
-(int)combinator;
-(id)initWithName:(id)arg1 combinator:(int)arg2 selectionCardinality:(int)arg3 filters:(id)arg4 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)filters;
@end

