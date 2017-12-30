/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 1:10:35 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQDGraphic.h>
#import <iWorkImport/GQDNameMappable.h>

@class GQDFilteredImage, GQDAffineGeometry, GQDImageBinary, GQDPath, NSString;

@interface GQDMedia : GQDGraphic <GQDNameMappable> {

	GQDFilteredImage* mFilteredImage;
	GQDAffineGeometry* mCropGeometry;
	GQDImageBinary* mOriginalImageBinary;
	GQDPath* mMaskingShapePath;
	CGPathRef mAlphaMaskBezier;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(const StateSpec*)stateForReading;
-(id)imageBinary;
-(id)cropGeometry;
-(id)maskingShapePath;
-(CGPathRef)alphaMaskBezier;
-(void)dealloc;
@end

