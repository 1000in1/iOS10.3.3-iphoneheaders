/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:03 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileNotes.app/PlugIns/com.apple.mobilenotes.SharingExtension.appex/com.apple.mobilenotes.SharingExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVPlayer, ICAttachment, NSObject;

@interface ICAudioController : NSObject {

	AVPlayer* _currentPlayer;
	ICAttachment* _currentAttachment;
	NSObject* _playbackTimeObserver;

}

@property (nonatomic,retain) AVPlayer * currentPlayer;                      //@synthesize currentPlayer=_currentPlayer - In the implementation block
@property (nonatomic,retain) ICAttachment * currentAttachment;              //@synthesize currentAttachment=_currentAttachment - In the implementation block
@property (nonatomic,retain) NSObject * playbackTimeObserver;               //@synthesize playbackTimeObserver=_playbackTimeObserver - In the implementation block
@property (nonatomic,readonly) char isPlaying; 
+(id)sharedAudioController;
+(void)pauseIfPlaying;
-(ICAttachment *)currentAttachment;
-(void)updateTime:(double)arg1 duration:(double)arg2 ;
-(void)attachmentWillBeDeletedNotification:(id)arg1 ;
-(void)skipBackByInterval:(double)arg1 ;
-(void)skipAheadByInterval:(double)arg1 ;
-(int)remotePause:(id)arg1 ;
-(int)remotePlay:(id)arg1 ;
-(int)remoteStop:(id)arg1 ;
-(int)remoteTogglePlayPause:(id)arg1 ;
-(int)remoteSkipBackward:(id)arg1 ;
-(int)remoteSkipForward:(id)arg1 ;
-(void)notifyPlaying;
-(void)updateNowPlayingInfo;
-(void)notifyPaused;
-(void)notifyStopped;
-(NSObject *)playbackTimeObserver;
-(void)setPlaybackTimeObserver:(NSObject *)arg1 ;
-(void)setCurrentAttachment:(ICAttachment *)arg1 ;
-(id)init;
-(void)dealloc;
-(void)stop;
-(char)isPlaying;
-(void)play;
-(void)pause;
-(AVPlayer *)currentPlayer;
-(void)setCurrentPlayer:(AVPlayer *)arg1 ;
-(void)seekToTime:(double)arg1 ;
-(void)togglePlayPause;
-(void)play:(id)arg1 ;
@end

