/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 1:10:35 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class GQDDrawable;

@interface GQDWrapPoint : NSObject {

	CGPoint mPoint;
	float mDistance;
	GQDDrawable* mDrawable;
	int mFlowType;
	int mZIndex;

}
-(int)comparePoint:(id)arg1 ;
-(id)initWithX:(float)arg1 y:(float)arg2 flowType:(int)arg3 drawable:(id)arg4 ;
-(int)zIndex;
@end

