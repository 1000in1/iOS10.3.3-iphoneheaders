/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:27 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/FaceCore.framework/FaceCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <FaceCore/FaceCore-Structs.h>
@class NSString;

@interface FCRLandmark : NSObject {

	NSString* type;
	unsigned pointCount;
	CGPoint* points;

}

@property (readonly) NSString * type; 
@property (readonly) unsigned pointCount; 
@property (readonly) CGPoint* points; 
+(id)landmarkWithType:(id)arg1 pointCount:(unsigned)arg2 points:(CGPoint*)arg3 ;
-(id)initWithType:(id)arg1 pointCount:(unsigned)arg2 points:(CGPoint*)arg3 ;
-(void)dealloc;
-(NSString *)type;
-(unsigned)pointCount;
-(CGPoint*)points;
@end
