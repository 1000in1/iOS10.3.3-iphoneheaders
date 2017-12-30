/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:40 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MPPlaylistInternal : NSObject {

	double duration;
	double fadeInDuration;
	double fadeOutDuration;
	double duckInDuration;
	double duckOutDuration;
	float duckLevel;

}

@property (assign,nonatomic) double duration; 
@property (assign,nonatomic) double fadeInDuration; 
@property (assign,nonatomic) double fadeOutDuration; 
@property (assign,nonatomic) double duckInDuration; 
@property (assign,nonatomic) double duckOutDuration; 
@property (assign,nonatomic) float duckLevel; 
-(void)setDuckLevel:(float)arg1 ;
-(void)setDuckInDuration:(double)arg1 ;
-(void)setDuckOutDuration:(double)arg1 ;
-(double)duckInDuration;
-(double)duckOutDuration;
-(float)duckLevel;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)setFadeInDuration:(double)arg1 ;
-(void)setFadeOutDuration:(double)arg1 ;
-(double)fadeInDuration;
-(double)fadeOutDuration;
@end

