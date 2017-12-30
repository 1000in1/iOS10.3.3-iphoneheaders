/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:59 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput/TextInput-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface TIHandwritingStrokes : NSObject <NSCopying, NSSecureCoding> {

	vector<std::__1::vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint> >, std::__1::allocator<std::__1::vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint> > > >* _strokes;
	char _continuePreviousStroke;

}
+(char)supportsSecureCoding;
-(unsigned)totalNumberOfPoints;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)numberOfStrokes;
-(void)addPoint:(CGPoint)arg1 ;
-(unsigned)numberOfPointsInStrokeAtIndex:(unsigned)arg1 ;
-(CGPoint)pointAtIndex:(unsigned)arg1 inStrokeAtIndex:(unsigned)arg2 ;
-(void)removeStrokeAtIndex:(unsigned)arg1 ;
-(void)endStroke;
-(void)removeAllStrokes;
@end

