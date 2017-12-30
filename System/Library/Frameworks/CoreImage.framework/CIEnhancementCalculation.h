/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:58 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreImage/CoreImage-Structs.h>
@class CIEnhancementHistogram;

@interface CIEnhancementCalculation : NSObject {

	CGPoint originalFaceColor;
	CIEnhancementHistogram* lumHist;
	CIEnhancementHistogram* rgbSumHist;
	CIEnhancementHistogram* satHist;
	CIEnhancementHistogram* borderHist;
	float exposureValue;
	float maxShadow;
	float minShadow;
	float exposureValueAtZeroShadow;
	float curvePercent;
	char faceInputSet;
	float percentFaceChange;

}

@property (readonly) CGPoint originalFaceColor; 
@property (readonly) CIEnhancementHistogram * lumHist; 
@property (readonly) CIEnhancementHistogram * rgbSumHist; 
@property (readonly) CIEnhancementHistogram * satHist; 
@property (readonly) CIEnhancementHistogram * borderHist; 
+(float)bestWarmthForI:(float)arg1 q:(float)arg2 percentChange:(float*)arg3 ;
-(id)faceBalanceWarmth;
-(id)faceBalanceStrength;
-(CGPoint)originalFaceColor;
-(id)vibrance;
-(unsigned long)curveCount;
-(CGPoint)curvePointAtIndex:(unsigned long)arg1 ;
-(void)setRGBSumHistogram:(id)arg1 ;
-(void)setLuminanceHistogram:(id)arg1 ;
-(void)setBorderHistogram:(id)arg1 ;
-(void)setSaturationHistogram:(id)arg1 ;
-(void)setFaceColorFromChromaI:(float)arg1 andChromaQ:(float)arg2 ;
-(id)rawShadow;
-(int)putShadowsAnalysisInto:(float*)arg1 ;
-(void)downSampleHistogram:(id)arg1 to:(unsigned)arg2 storeIn:(float*)arg3 ;
-(void)printAnalysis;
-(void)setCurvePercent:(float)arg1 ;
-(void)setupFaceColor:(id)arg1 redIndex:(int)arg2 greenIndex:(int)arg3 blueIndex:(int)arg4 ;
-(void)setExposureValue:(float)arg1 ;
-(void)setShadowsMin:(float)arg1 max:(float)arg2 zeroExposure:(float)arg3 ;
-(void)printHistogram:(id)arg1 downsampledTo:(unsigned)arg2 ;
-(void)printHistogramsDownsampledTo:(unsigned)arg1 ;
-(CIEnhancementHistogram *)lumHist;
-(CIEnhancementHistogram *)rgbSumHist;
-(CIEnhancementHistogram *)satHist;
-(CIEnhancementHistogram *)borderHist;
-(id)init;
-(void)dealloc;
-(id)shadow;
@end

