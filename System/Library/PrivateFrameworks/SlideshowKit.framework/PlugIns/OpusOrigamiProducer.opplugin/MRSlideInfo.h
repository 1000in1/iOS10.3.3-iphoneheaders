/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:40 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
@class NSString;

@interface MRSlideInfo : NSObject {

	char _isMain;
	NSString* _assetPath;
	unsigned _index;
	float _aspectRatio;
	float _scale;
	float _rotation;
	id _player;
	double _time;
	CGPoint _center;

}

@property (nonatomic,copy) NSString * assetPath;              //@synthesize assetPath=_assetPath - In the implementation block
@property (assign,nonatomic) unsigned index;                  //@synthesize index=_index - In the implementation block
@property (assign,nonatomic) float aspectRatio;               //@synthesize aspectRatio=_aspectRatio - In the implementation block
@property (assign,nonatomic) double time;                     //@synthesize time=_time - In the implementation block
@property (assign,nonatomic) CGPoint center;                  //@synthesize center=_center - In the implementation block
@property (assign,nonatomic) float scale;                     //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) float rotation;                  //@synthesize rotation=_rotation - In the implementation block
@property (assign,nonatomic) id player;                       //@synthesize player=_player - In the implementation block
@property (assign,nonatomic) char isMain;                     //@synthesize isMain=_isMain - In the implementation block
-(void)setIsMain:(char)arg1 ;
-(CGPoint)center;
-(void)dealloc;
-(id)description;
-(void)setScale:(float)arg1 ;
-(float)scale;
-(void)setCenter:(CGPoint)arg1 ;
-(unsigned)index;
-(void)setRotation:(float)arg1 ;
-(float)rotation;
-(void)setIndex:(unsigned)arg1 ;
-(double)time;
-(void)setTime:(double)arg1 ;
-(char)isMain;
-(id)player;
-(void)setPlayer:(id)arg1 ;
-(float)aspectRatio;
-(NSString *)assetPath;
-(void)setAssetPath:(NSString *)arg1 ;
-(void)setAspectRatio:(float)arg1 ;
@end
