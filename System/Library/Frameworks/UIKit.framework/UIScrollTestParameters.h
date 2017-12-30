/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:24 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, CADisplayLink;

@interface UIScrollTestParameters : NSObject {

	int _iterations;
	int _delta;
	int _scrollLength;
	float _startOffset;
	NSString* _currentTest;
	int _axis;
	CADisplayLink* _displayLink;
	/*^block*/id _extraResultsBlock;

}

@property (assign,nonatomic) int iterations;                           //@synthesize iterations=_iterations - In the implementation block
@property (assign,nonatomic) int delta;                                //@synthesize delta=_delta - In the implementation block
@property (assign,nonatomic) int scrollLength;                         //@synthesize scrollLength=_scrollLength - In the implementation block
@property (assign,nonatomic) float startOffset;                        //@synthesize startOffset=_startOffset - In the implementation block
@property (nonatomic,readonly) float endOffset; 
@property (assign,nonatomic) int axis;                                 //@synthesize axis=_axis - In the implementation block
@property (nonatomic,retain) NSString * currentTest;                   //@synthesize currentTest=_currentTest - In the implementation block
@property (nonatomic,retain) CADisplayLink * displayLink;              //@synthesize displayLink=_displayLink - In the implementation block
@property (nonatomic,copy) id extraResultsBlock;                       //@synthesize extraResultsBlock=_extraResultsBlock - In the implementation block
-(void)dealloc;
-(void)setAxis:(int)arg1 ;
-(float)startOffset;
-(int)axis;
-(void)setIterations:(int)arg1 ;
-(void)setDisplayLink:(CADisplayLink *)arg1 ;
-(CADisplayLink *)displayLink;
-(float)endOffset;
-(int)scrollLength;
-(id)initWithName:(id)arg1 iterations:(int)arg2 delta:(int)arg3 length:(int)arg4 startOffset:(float)arg5 scrollAxis:(int)arg6 ;
-(int)iterations;
-(int)delta;
-(void)setDelta:(int)arg1 ;
-(void)setScrollLength:(int)arg1 ;
-(void)setStartOffset:(float)arg1 ;
-(NSString *)currentTest;
-(void)setCurrentTest:(NSString *)arg1 ;
-(id)extraResultsBlock;
-(void)setExtraResultsBlock:(id)arg1 ;
@end

