/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:39 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <OpusOrigamiProducer/MPFilterSupport.h>
#import <OpusOrigamiProducer/MPAnimationSupport.h>

@protocol MPEffectSupport;
@class MPFrame, NSMutableDictionary, NSString, MPLayerGroup, NSMutableArray, MCSlide, NSObject;

@interface MPSlide : NSObject <NSCoding, NSCopying, MPFilterSupport, MPAnimationSupport> {

	MPFrame* _frame;
	NSMutableDictionary* _attributes;
	NSString* _path;
	MPLayerGroup* _layerGroup;
	NSMutableArray* _filters;
	NSMutableDictionary* _animationPaths;
	MCSlide* _slide;
	NSObject*<MPEffectSupport> _parent;
	double _startTime;
	double _duration;
	double _audioFadeInDuration;
	double _audioFadeOutDuration;
	double _audioDuckInDuration;
	double _audioDuckOutDuration;
	double _audioDuckLevel;
	float _scale;
	float _rotation;
	CGPoint _center;
	float _audioVolume;
	NSString* _sizingMode;
	unsigned _mediaType;
	char _isSecondary;
	char _mirrorToDuplicatePaths;
	double _cachedShowTime;
	double _cachedShowDuration;
	CGSize _cachedSize;

}

@property (nonatomic,retain) MPFrame * frame; 
@property (nonatomic,copy) NSString * path; 
@property (nonatomic,copy) NSString * absolutePath; 
@property (nonatomic,retain) MPLayerGroup * layerGroup; 
@property (assign,nonatomic) double duration; 
@property (assign,nonatomic) double startTime; 
@property (assign,nonatomic) float audioVolume; 
@property (assign,nonatomic) double audioFadeInDuration; 
@property (assign,nonatomic) double audioFadeOutDuration; 
@property (assign,nonatomic) double audioDuckInDuration; 
@property (assign,nonatomic) double audioDuckOutDuration; 
@property (assign,nonatomic) float audioDuckLevel; 
@property (nonatomic,copy) NSString * sizingMode; 
@property (assign,nonatomic) CGPoint center; 
@property (assign,nonatomic) float scale; 
@property (assign,nonatomic) float rotation; 
+(id)slideWithPath:(id)arg1 ;
+(id)slide;
-(id)animationPaths;
-(id)animationPathForKey:(id)arg1 ;
-(id)parentEffect;
-(NSString *)sizingMode;
-(void)setLayerGroup:(MPLayerGroup *)arg1 ;
-(void)copyVars:(id)arg1 ;
-(void)copyLayerGroup:(id)arg1 ;
-(void)copyFilters:(id)arg1 ;
-(void)copyFrame:(id)arg1 ;
-(void)setAbsolutePath:(NSString *)arg1 ;
-(void)insertFilters:(id)arg1 atIndex:(int)arg2 ;
-(void)removeAllFilters;
-(void)removeFiltersAtIndices:(id)arg1 ;
-(void)moveFiltersFromIndices:(id)arg1 toIndex:(int)arg2 ;
-(int)liveIndex;
-(char)determineShowTime:(double*)arg1 showDuration:(double*)arg2 ;
-(double)showTime;
-(double)showDuration;
-(double)showDisplayTime;
-(void)setAudioFadeInDuration:(double)arg1 ;
-(void)setAudioDuckInDuration:(double)arg1 ;
-(void)setAudioDuckOutDuration:(double)arg1 ;
-(void)setAudioDuckLevel:(float)arg1 ;
-(id)fullDebugLog;
-(char)isPanoramaInDocument:(id)arg1 ;
-(double)audioFadeInDuration;
-(double)audioDuckInDuration;
-(double)audioDuckOutDuration;
-(float)audioDuckLevel;
-(void)resetCachedTimes;
-(void)setIsSecondary:(char)arg1 ;
-(void)setSlide:(id)arg1 ;
-(id)userInfoAttributeForKey:(id)arg1 ;
-(id)nearestLayer;
-(void)setSizingMode:(NSString *)arg1 ;
-(id)parentSubtitleEffect;
-(double)showDisplayStartTime;
-(id)scriptingAnimations;
-(void)removeObjectFromFilterAtIndex:(int)arg1 ;
-(void)insertObject:(id)arg1 inFilterAtIndex:(int)arg2 ;
-(id)objectInFilterAtIndex:(int)arg1 ;
-(char)hasAnimationPathForKey:(id)arg1 ;
-(id)keyframedAnimationPathForKey:(id)arg1 ;
-(void)setScriptingAnimations:(id)arg1 ;
-(void)setMirrorToDuplicatePaths:(char)arg1 ;
-(char)needsStyleUpdateOnSlideChange;
-(MPLayerGroup *)layerGroup;
-(void)copyAnimationPaths:(id)arg1 ;
-(void)removeAnimationPathForKey:(id)arg1 ;
-(void)setAnimationPath:(id)arg1 forKey:(id)arg2 ;
-(void)setUserInfoAttribute:(id)arg1 forKey:(id)arg2 ;
-(void)duplicateAnimationPaths;
-(id)scriptingFrame;
-(void)setScriptingFrame:(id)arg1 ;
-(void)setKeyframedAnimationPath:(id)arg1 forKey:(id)arg2 ;
-(char)canZoom;
-(int)countOfFilter;
-(id)initWithLayerGroup:(id)arg1 ;
-(char)needsTimingUpdateOnSlideChange;
-(float)originalAspectRatio;
-(void)replaceObjectInFilterAtIndex:(int)arg1 withObject:(id)arg2 ;
-(id)init;
-(CGPoint)center;
-(void)setFrame:(MPFrame *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(MPFrame *)frame;
-(id)description;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)setStartTime:(double)arg1 ;
-(void)setScale:(float)arg1 ;
-(id)action;
-(float)scale;
-(NSString *)path;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCenter:(CGPoint)arg1 ;
-(id)filters;
-(void)setPath:(NSString *)arg1 ;
-(double)startTime;
-(int)index;
-(void)setRotation:(float)arg1 ;
-(float)rotation;
-(id)initWithPath:(id)arg1 ;
-(float)audioVolume;
-(void)setAudioVolume:(float)arg1 ;
-(void)cleanup;
-(double)maxDuration;
-(void)addFilter:(id)arg1 ;
-(char)hasMovie;
-(id)parent;
-(void)setParent:(id)arg1 ;
-(float)aspectRatio;
-(void)setMediaType:(unsigned)arg1 ;
-(double)audioFadeOutDuration;
-(void)setAudioFadeOutDuration:(double)arg1 ;
-(NSString *)absolutePath;
-(void)dump;
-(char)isSecondary;
-(id)slide;
-(void)addFilters:(id)arg1 ;
-(id)parentDocument;
@end

