/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:08 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobilePhone.app/MobilePhone
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VMPlayerControllerDelegate;
@class AVPlayer;

@interface VMPlayerController : NSObject {

	char _audioSessionActive;
	id<VMPlayerControllerDelegate> _delegate;
	AVPlayer* _player;
	int _timeControlStatus;
	float _rate;
	int _status;
	double _duration;

}

@property (assign,getter=isAudioSessionActive,nonatomic) char audioSessionActive;              //@synthesize audioSessionActive=_audioSessionActive - In the implementation block
@property (assign,nonatomic) double duration;                                                  //@synthesize duration=_duration - In the implementation block
@property (nonatomic,retain) AVPlayer * player;                                                //@synthesize player=_player - In the implementation block
@property (assign,nonatomic) float rate;                                                       //@synthesize rate=_rate - In the implementation block
@property (assign,nonatomic) int status;                                                       //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) int timeControlStatus;                                            //@synthesize timeControlStatus=_timeControlStatus - In the implementation block
@property (assign,nonatomic,__weak) id<VMPlayerControllerDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) float currentTime; 
-(void)setDelegate:(id<VMPlayerControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<VMPlayerControllerDelegate>)delegate;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)stop;
-(float)currentTime;
-(id)initWithURL:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setRate:(float)arg1 ;
-(float)rate;
-(void)play;
-(void)pause;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(int)timeControlStatus;
-(id)initWithPlayer:(id)arg1 ;
-(char)isAudioSessionActive;
-(AVPlayer *)player;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(void)seekToTime:(float)arg1 ;
-(void)handlePlayerItemDidPlayToEndTimeNotification:(id)arg1 ;
-(void)handlePlayerItemFailedToPlayToEndTimeNotification:(id)arg1 ;
-(void)deactivateAudioSession;
-(void)activateAudioSession;
-(void)setTimeControlStatus:(int)arg1 ;
-(void)handleAudioSessionInterruptionNotification:(id)arg1 ;
-(void)handleAudioSessionRouteChangeNotification:(id)arg1 ;
-(void)handleAudioSessionMediaServicesWereLostNotification:(id)arg1 ;
-(void)handleAudioSessionMediaServicesWereResetNotification:(id)arg1 ;
-(void)setAudioSessionActive:(char)arg1 ;
-(char)shouldEnableProximityMonitoring;
-(char)updateProximityMonitoring;
@end

