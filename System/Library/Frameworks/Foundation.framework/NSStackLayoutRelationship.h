/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:44 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSLayoutRelationship.h>

@class NSArray, NSString;

@interface NSStackLayoutRelationship : NSObject <NSLayoutRelationship> {

	NSArray* _stackedRects;
	float _spacing;
	int _orientation;

}

@property (copy,readonly) NSArray * stackedRects;                          //@synthesize stackedRects=_stackedRects - In the implementation block
@property (readonly) float spacing;                                        //@synthesize spacing=_spacing - In the implementation block
@property (readonly) int orientation;                                      //@synthesize orientation=_orientation - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSString * identifier; 
@property (copy,readonly) NSString * relationshipDescription; 
+(id)stackWithOrientation:(int)arg1 stackedRects:(id)arg2 spacing:(float)arg3 ;
+(id)horizontalStackWithRects:(id)arg1 spacing:(float)arg2 ;
+(id)verticalStackWithRects:(id)arg1 spacing:(float)arg2 ;
-(id)makeChildrenRelationships;
-(NSString *)relationshipDescription;
-(id)initWithOrientation:(int)arg1 stackedRects:(id)arg2 spacing:(float)arg3 ;
-(NSArray *)stackedRects;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)description;
-(NSString *)identifier;
-(int)orientation;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)spacing;
@end

