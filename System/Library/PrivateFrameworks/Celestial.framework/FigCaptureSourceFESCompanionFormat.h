/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:41 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@interface FigCaptureSourceFESCompanionFormat : NSObject {

	int _videoFormatIndex;
	SCD_Struct_BW12 _fesDimensions;

}

@property (readonly) int videoFormatIndex; 
@property (readonly) SCD_Struct_BW12 fesDimensions; 
-(void)dealloc;
-(id)description;
-(id)initWithFESCompanionFormatDictionary:(id)arg1 ;
-(SCD_Struct_BW12)fesDimensions;
-(int)videoFormatIndex;
@end

