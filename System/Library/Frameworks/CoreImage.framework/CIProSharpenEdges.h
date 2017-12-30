/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:58 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIProSharpenEdges : CIFilter {

	CIImage* inputImage;
	NSNumber* inputFalloff;
	NSNumber* inputSharpness;
	NSNumber* inputEdgeScale;

}
+(id)customAttributes;
-(id)_CIEdgesPrep;
-(id)_CIFindEdges;
-(id)_CIConvertRGBtoY;
-(id)_CIBlur1;
-(id)_CIBlur2;
-(id)_CIBlur4;
-(id)_CISharpenCombineEdges;
-(id)outputImage;
@end

