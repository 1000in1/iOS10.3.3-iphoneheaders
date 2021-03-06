/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:59 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIDetector.h>

@class CIContext, NSMutableDictionary;

@interface CIBarcodeDetector : CIDetector {

	CIContext* context;
	float _width;
	float _height;
	NSMutableDictionary* featureOptions;

}

@property (nonatomic,retain) CIContext * context; 
-(id)featuresInImage:(id)arg1 options:(id)arg2 ;
-(void)dealloc;
-(CIContext *)context;
-(void)setContext:(CIContext *)arg1 ;
-(id)initWithContext:(id)arg1 options:(id)arg2 ;
-(id)featuresInImage:(id)arg1 ;
-(void)finalize;
@end

