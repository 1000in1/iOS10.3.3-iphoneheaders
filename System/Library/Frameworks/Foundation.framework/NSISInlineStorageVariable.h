/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:15 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSISVariable.h>
#import <libobjc.A.dylib/NSISVariableDelegate.h>

@class NSString;

@interface NSISInlineStorageVariable : NSISVariable <NSISVariableDelegate> {

	NSString* _name;
	int _valueRestriction;
	char _shouldBeMinimized;
	char _valueIsUserObservable;

}

@property (copy) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (assign) int valueRestriction;                            //@synthesize valueRestriction=_valueRestriction - In the implementation block
@property (assign) char shouldBeMinimized;                          //@synthesize shouldBeMinimized=_shouldBeMinimized - In the implementation block
@property (assign) char valueIsUserObservable;                      //@synthesize valueIsUserObservable=_valueIsUserObservable - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)valueRestriction;
-(id)markedConstraint;
-(char)shouldBeMinimized;
-(void)setValueRestriction:(int)arg1 ;
-(void)setShouldBeMinimized:(char)arg1 ;
-(char)valueIsUserObservable;
-(void)setValueIsUserObservable:(char)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(oneway void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2 ;
-(id)nsis_descriptionOfVariable:(id)arg1 ;
-(char)nsis_shouldIntegralizeVariable:(id)arg1 ;
-(char)nsis_valueOfVariableIsUserObservable:(id)arg1 ;
@end
