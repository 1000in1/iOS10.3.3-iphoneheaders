/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 1:10:35 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class GQDColor;

@interface GQDRGradientStop : NSObject {

	float mFraction;
	GQDColor* mColor;

}
+(const StateSpec*)stateForReading;
-(int)readAttributesFromReader:(xmlTextReaderRef)arg1 ;
-(void)dealloc;
-(id)color;
-(float)fraction;
@end
