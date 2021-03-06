/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:58 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIPaperWash : CIFilter {

	CIImage* inputImage;
	NSNumber* inputSaturation;

}

@property (nonatomic,copy) NSNumber * inputSaturation; 
+(id)customAttributes;
-(id)outputImage;
-(void)setInputSaturation:(NSNumber *)arg1 ;
-(NSNumber *)inputSaturation;
@end

