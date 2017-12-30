/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:34 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIKBHandwritingPointFIFO.h>

@class TIHandwritingStrokes;

@interface UIKBHandwritingStrokePointFIFO : UIKBHandwritingPointFIFO {

	TIHandwritingStrokes* _strokes;

}

@property (nonatomic,retain) TIHandwritingStrokes * strokes;              //@synthesize strokes=_strokes - In the implementation block
-(void)flush;
-(void)addPoint:(SCD_Struct_UI63)arg1 ;
-(void)clear;
-(id)initWithFIFO:(id)arg1 ;
-(TIHandwritingStrokes *)strokes;
-(void)setStrokes:(TIHandwritingStrokes *)arg1 ;
@end

