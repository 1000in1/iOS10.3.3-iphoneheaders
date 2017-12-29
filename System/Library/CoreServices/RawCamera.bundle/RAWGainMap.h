/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:44 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/RawCamera.bundle/RawCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RawCamera/RAWFilter.h>

@class CIImage, NSData, CIVector, NSNumber;

@interface RAWGainMap : RAWFilter {

	CIImage* inputImage;
	NSData* inputGainMapData;
	CIVector* inputGainMapApplyRegion;
	CIVector* inputGainMapSize;
	NSNumber* inputGainMapRowPitch;
	NSNumber* inputGainMapColPitch;
	NSNumber* inputGainMapNumPlanes;
	NSNumber* inputGainMapExecute;
	id inputColorSpace;
	CIImage* _gainMapImg;

}

@property (nonatomic,copy,readonly) CIImage * makeMapSampler; 
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(void)dealloc;
-(id)outputImage;
-(void)setDefaults;
-(CIImage *)makeMapSampler;
@end
