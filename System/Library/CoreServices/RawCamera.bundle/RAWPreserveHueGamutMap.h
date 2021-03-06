/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:12 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/RawCamera.bundle/RawCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RawCamera/RAWFilter.h>

@class CIImage, NSNumber;

@interface RAWPreserveHueGamutMap : RAWFilter {

	CIImage* inputImage;
	id inputColorSpace;
	BOOL inputEnabled;
	BOOL inputShouldWarn;
	NSNumber* inputVersion;

}
+(id)customAttributes;
-(void)setInputEnabled:(id)arg1 ;
-(id)customAttributes;
-(id)outputImage;
-(id)inputShouldWarn;
-(id)inputEnabled;
-(void)setInputShouldWarn:(id)arg1 ;
@end

