/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:12 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/RawCamera.bundle/RawCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RawCamera/RAWFilter.h>

@class CIImage, NSNumber;

@interface RAWHueMagnet : RAWFilter {

	CIImage* inputImage;
	id inputColorSpace;
	NSNumber* inputHueMagMR;
	NSNumber* inputHueMagRY;
	NSNumber* inputHueMagYG;
	NSNumber* inputHueMagGC;
	NSNumber* inputHueMagCB;
	NSNumber* inputHueMagBM;
	NSNumber* inputVersion;

}
+(id)customAttributes;
-(id)customAttributes;
-(id)outputImage;
@end

