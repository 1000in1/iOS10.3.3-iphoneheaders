/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:54 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVHapticPlayer;

@interface AVHapticSequence : NSObject {

	AVHapticPlayer* _player;
	unsigned _seqID;
	double _lastStartTime;
	char _loopIsEnabled;

}

@property (__weak) AVHapticPlayer * player;              //@synthesize player=_player - In the implementation block
@property (assign) unsigned seqID;                       //@synthesize seqID=_seqID - In the implementation block
@property (assign) double lastStartTime;                 //@synthesize lastStartTime=_lastStartTime - In the implementation block
@property (assign) char loopingEnabled; 
-(void)setSeqID:(unsigned)arg1 ;
-(void)setLastStartTime:(double)arg1 ;
-(double)lastStartTime;
-(char)setLoopingEnabled:(char)arg1 error:(id*)arg2 ;
-(id)initWithData:(id)arg1 player:(id)arg2 error:(id*)arg3 ;
-(id)initWithDictionary:(id)arg1 player:(id)arg2 error:(id*)arg3 ;
-(char)prepareToPlayAndReturnError:(id*)arg1 ;
-(char)playAtTime:(double)arg1 offset:(double)arg2 error:(id*)arg3 ;
-(char)stopAtTime:(double)arg1 error:(id*)arg2 ;
-(unsigned)seqID;
-(id)init;
-(void)dealloc;
-(AVHapticPlayer *)player;
-(void)setPlayer:(AVHapticPlayer *)arg1 ;
-(void)setLoopingEnabled:(char)arg1 ;
-(char)loopingEnabled;
@end

