/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:58 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector;

@interface CIColorMatrix : CIFilter {

	CIImage* inputImage;
	CIVector* inputRVector;
	CIVector* inputGVector;
	CIVector* inputBVector;
	CIVector* inputAVector;
	CIVector* inputBiasVector;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIVector * inputRVector; 
@property (nonatomic,retain) CIVector * inputGVector; 
@property (nonatomic,retain) CIVector * inputBVector; 
@property (nonatomic,retain) CIVector * inputAVector; 
@property (nonatomic,retain) CIVector * inputBiasVector; 
+(id)customAttributes;
-(CIVector *)inputRVector;
-(void)setInputRVector:(CIVector *)arg1 ;
-(CIVector *)inputGVector;
-(void)setInputGVector:(CIVector *)arg1 ;
-(CIVector *)inputBVector;
-(void)setInputBVector:(CIVector *)arg1 ;
-(CIVector *)inputAVector;
-(void)setInputAVector:(CIVector *)arg1 ;
-(CIVector *)inputBiasVector;
-(void)setInputBiasVector:(CIVector *)arg1 ;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
@end

