/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:34 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIKBHandwritingPointFIFO.h>

@class NSMutableArray;

@interface UIKBHandwritingQuadCurvePointFIFO : UIKBHandwritingPointFIFO {

	/*^block*/id _emissionHandler;
	float _scale;
	NSMutableArray* _prevPoints;
	SCD_Struct_UI64 _lastPoint;

}

@property (assign,nonatomic) float scale;                              //@synthesize scale=_scale - In the implementation block
@property (nonatomic,retain) NSMutableArray * prevPoints;              //@synthesize prevPoints=_prevPoints - In the implementation block
@property (assign,nonatomic) SCD_Struct_UI63 lastPoint;                //@synthesize lastPoint=_lastPoint - In the implementation block
@property (copy) id emissionHandler;                                   //@synthesize emissionHandler=_emissionHandler - In the implementation block
-(void)flush;
-(void)setScale:(float)arg1 ;
-(float)scale;
-(void)addPoint:(SCD_Struct_UI63)arg1 ;
-(void)clear;
-(id)initWithFIFO:(id)arg1 scale:(float)arg2 ;
-(void)setEmissionHandler:(id)arg1 ;
-(void)setPrevPoints:(NSMutableArray *)arg1 ;
-(NSMutableArray *)prevPoints;
-(void)setLastPoint:(SCD_Struct_UI63)arg1 ;
-(SCD_Struct_UI63)lastPoint;
-(id)emissionHandler;
@end

