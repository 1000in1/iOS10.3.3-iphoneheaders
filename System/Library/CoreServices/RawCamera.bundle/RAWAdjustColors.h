/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:12 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/RawCamera.bundle/RawCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RawCamera/RAWFilter.h>

@class CIImage, NSNumber;

@interface RAWAdjustColors : RAWFilter {

	CIImage* inputImage;
	NSNumber* inputVersion;
	NSNumber* inputM00;
	NSNumber* inputM01;
	NSNumber* inputM02;
	NSNumber* inputM10;
	NSNumber* inputM11;
	NSNumber* inputM12;
	NSNumber* inputM20;
	NSNumber* inputM21;
	NSNumber* inputM22;
	NSNumber* inputTRCs0;
	NSNumber* inputTRCy1;
	NSNumber* inputTRCs1;
	NSNumber* inputTRCy2;
	NSNumber* inputTRCs2;
	NSNumber* inputTRCy3;
	NSNumber* inputTRCs3;
	NSNumber* inputTRCs4;
	NSNumber* inputBoostKind;
	NSNumber* inputBoostAmount;
	NSNumber* inputBoostLuminanceAmount;
	NSNumber* inputBoostTransitionPoint;
	NSNumber* inputBoostTransitionWidth;

}
+(id)customAttributes;
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(id)customAttributes;
-(id)outputImage;
-(void)setInputBoostAmount:(id)arg1 ;
@end

