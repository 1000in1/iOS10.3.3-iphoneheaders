/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:40 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <OpusOrigamiProducer/MCPlug.h>

@class NSString, MCContainerParallelizer;

@interface MCPlugParallel : MCPlug {

	void* mGeometry;
	short mZIndex;
	short mAudioPriority;
	NSString* mIDInSupercontainer;
	MCContainerParallelizer* mSupercontainer;
	float mOpacity;
	double mTimeIn;

}

@property (setter=setIDInSupercontainer:,getter=idInSupercontainer,copy) NSString * idInSupercontainer; 
@property (assign) MCContainerParallelizer * supercontainer; 
@property (assign,nonatomic) char isTriggered; 
@property (assign,nonatomic) char resetsTimeOnTrigger; 
@property (readonly) char hasAbsoluteAspectRatio; 
@property (readonly) char hasValidWidth; 
@property (assign,nonatomic) char clipsContainer; 
@property (assign,nonatomic) double timeIn; 
@property (assign,nonatomic) short zIndex; 
@property (assign,nonatomic) short audioPriority; 
@property (assign,nonatomic) float opacity; 
@property (assign,nonatomic) CGPoint position; 
@property (assign,nonatomic) CGSize size; 
@property (readonly) float width; 
@property (readonly) float height; 
@property (readonly) float aspectRatio; 
@property (assign,nonatomic) float scale; 
@property (assign,nonatomic) float rotation; 
@property (assign,nonatomic) float rotationAngle; 
@property (assign,nonatomic) float positionZ; 
@property (assign,nonatomic) float zPosition; 
@property (assign,nonatomic) float rotationX; 
@property (assign,nonatomic) float xRotationAngle; 
@property (assign,nonatomic) float rotationY; 
@property (assign,nonatomic) float yRotationAngle; 
@property (assign,nonatomic) unsigned char currentLayoutIndex; 
@property (readonly) unsigned char countOfLayouts; 
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
-(void)demolish;
-(char)clipsContainer;
-(void)setIsTriggered:(char)arg1 ;
-(short)audioPriority;
-(NSString *)idInSupercontainer;
-(id)initWithImprint:(id)arg1 andMontage:(id)arg2 ;
-(void)setSupercontainer:(MCContainerParallelizer *)arg1 ;
-(void)setIDInSupercontainer:(id)arg1 ;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(void)setCurrentLayoutIndex:(unsigned char)arg1 ;
-(unsigned char)currentLayoutIndex;
-(float)aspectRatioForParentAspectRatio:(float)arg1 ;
-(char)resetsTimeOnTrigger;
-(MCContainerParallelizer *)supercontainer;
-(float)positionZ;
-(void)setPositionZ:(float)arg1 ;
-(void)setClipsContainer:(char)arg1 ;
-(char)hasValidWidth;
-(char)hasAbsoluteAspectRatio;
-(float)yRotationAngle;
-(char)isTriggered;
-(float)xRotationAngle;
-(void)setXRotationAngle:(float)arg1 ;
-(void)setYRotationAngle:(float)arg1 ;
-(CGSize)sizeForParentAspectRatio:(float)arg1 ;
-(double)timeIn;
-(void)setTimeIn:(double)arg1 ;
-(void)setAudioPriority:(short)arg1 ;
-(unsigned char)countOfLayouts;
-(void)setWidth:(float)arg1 andAbsoluteAspectRatio:(float)arg2 ;
-(void)setResetsTimeOnTrigger:(char)arg1 ;
-(void)setHeight:(float)arg1 andAbsoluteAspectRatio:(float)arg2 ;
-(id)init;
-(CGSize)size;
-(id)description;
-(void)setScale:(float)arg1 ;
-(float)scale;
-(void)setSize:(CGSize)arg1 ;
-(void)setPosition:(CGPoint)arg1 ;
-(CGPoint)position;
-(float)opacity;
-(void)setOpacity:(float)arg1 ;
-(float)width;
-(void)setZPosition:(float)arg1 ;
-(float)height;
-(void)setRotation:(float)arg1 ;
-(float)rotation;
-(void)setZIndex:(short)arg1 ;
-(short)zIndex;
-(float)zPosition;
-(float)aspectRatio;
-(void)setRotationX:(float)arg1 ;
-(void)setRotationY:(float)arg1 ;
-(float)rotationX;
-(float)rotationY;
-(float)rotationAngle;
-(void)setRotationAngle:(float)arg1 ;
-(id)imprint;
@end

