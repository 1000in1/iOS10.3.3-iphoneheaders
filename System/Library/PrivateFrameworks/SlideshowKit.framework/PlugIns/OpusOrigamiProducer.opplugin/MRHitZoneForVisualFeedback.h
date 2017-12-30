/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:39 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MRHitZoneForVisualFeedback : NSObject {

	char _hasEnded;
	float* _vertices;
	unsigned _countOfVertices;
	double _timestamp;

}

@property (assign,nonatomic) double timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) char hasEnded;                 //@synthesize hasEnded=_hasEnded - In the implementation block
@property (readonly) float* vertices;                       //@synthesize vertices=_vertices - In the implementation block
@property (readonly) unsigned countOfVertices;              //@synthesize countOfVertices=_countOfVertices - In the implementation block
-(void)set2DVertices:(const float*)arg1 countOfVertices:(unsigned)arg2 ;
-(unsigned)countOfVertices;
-(void)dealloc;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(float*)vertices;
-(char)hasEnded;
-(void)setHasEnded:(char)arg1 ;
@end

