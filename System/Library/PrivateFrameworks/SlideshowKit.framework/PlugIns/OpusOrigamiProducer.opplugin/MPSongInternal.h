/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:41 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MPSongInternal : NSObject {

	double duration;
	double startTime;
	float audioVolume;
	double fadeInDuration;
	double fadeOutDuration;
	char assetLogging;

}

@property (assign,nonatomic) double duration; 
@property (assign,nonatomic) double startTime; 
@property (assign,nonatomic) float audioVolume; 
@property (assign,nonatomic) double fadeInDuration; 
@property (assign,nonatomic) double fadeOutDuration; 
@property (assign,nonatomic) char assetLogging; 
-(void)setAssetLogging:(char)arg1 ;
-(char)assetLogging;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)setStartTime:(double)arg1 ;
-(double)startTime;
-(float)audioVolume;
-(void)setAudioVolume:(float)arg1 ;
-(void)setFadeInDuration:(double)arg1 ;
-(void)setFadeOutDuration:(double)arg1 ;
-(double)fadeInDuration;
-(double)fadeOutDuration;
@end

