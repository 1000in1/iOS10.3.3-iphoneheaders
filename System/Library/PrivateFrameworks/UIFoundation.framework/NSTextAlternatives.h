/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:05 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIFoundation/UIFoundation-Structs.h>
@class NSString, NSArray;

@interface NSTextAlternatives : NSObject {

	NSString* _primaryString;
	NSArray* _alternativeStrings;
	id _internal;

}

@property (readonly) NSString * primaryString; 
@property (readonly) NSArray * alternativeStrings; 
-(id)initWithPrimaryString:(id)arg1 alternativeStrings:(id)arg2 identifier:(id)arg3 ;
-(id)initWithOriginalText:(id)arg1 alternatives:(id)arg2 ;
-(id)initWithOriginalText:(id)arg1 alternatives:(id)arg2 identifier:(id)arg3 ;
-(void)noteSelectedAlternativeString:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)originalText;
-(NSArray *)alternativeStrings;
-(id)alternatives;
-(id)initWithPrimaryString:(id)arg1 alternativeStrings:(id)arg2 ;
-(unsigned)numberOfAlternatives;
-(id)alternativeAtIndex:(unsigned)arg1 ;
-(NSString *)primaryString;
@end

