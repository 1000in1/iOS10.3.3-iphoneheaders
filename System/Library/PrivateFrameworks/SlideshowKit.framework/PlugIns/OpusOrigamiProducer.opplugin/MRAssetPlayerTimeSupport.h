/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:40 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MRAssetPlayerTimeSupport
@property (assign,nonatomic) double startTime; 
@property (assign,nonatomic) double duration; 
@property (assign,nonatomic) double time; 
@property (assign,nonatomic) char isPlaying; 
@required
-(double)duration;
-(void)setDuration:(double)arg1;
-(void)setStartTime:(double)arg1;
-(double)startTime;
-(char)isPlaying;
-(double)time;
-(void)setTime:(double)arg1;
-(void)setIsPlaying:(char)arg1;

@end

