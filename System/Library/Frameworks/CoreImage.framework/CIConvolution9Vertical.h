/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:59 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

@interface CIConvolution9Vertical : CIFilter {

	CIImage* inputImage;
	CIVector* inputWeights;
	NSNumber* inputBias;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIVector * inputWeights; 
@property (nonatomic,retain) NSNumber * inputBias; 
+(id)customAttributes;
-(char)_isIdentity;
-(CIVector *)inputWeights;
-(void)setInputWeights:(CIVector *)arg1 ;
-(id)outputImage;
-(CIImage *)inputImage;
-(NSNumber *)inputBias;
-(void)setInputBias:(NSNumber *)arg1 ;
-(void)setInputImage:(CIImage *)arg1 ;
@end

