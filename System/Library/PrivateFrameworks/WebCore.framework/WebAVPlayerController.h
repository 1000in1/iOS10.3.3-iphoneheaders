/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:03 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebCore/WebCore-Structs.h>
@class WebAVMediaSelectionOption, AVPlayerController, NSArray, AVValueTiming, NSString;

@interface WebAVPlayerController : NSObject {

	WebAVMediaSelectionOption* _currentAudioMediaSelectionOption;
	WebAVMediaSelectionOption* _currentLegibleMediaSelectionOption;
	char _pictureInPictureInterrupted;
	char _canScanBackward;
	char _canPlay;
	char _canPause;
	char _canTogglePlayback;
	char _canSeek;
	char _hasEnabledAudio;
	char _hasEnabledVideo;
	char _playingOnSecondScreen;
	char _externalPlaybackActive;
	char _allowsExternalPlayback;
	char _pictureInPicturePossible;
	AVPlayerController* _playerControllerProxy;
	WebPlaybackSessionModel* _delegate;
	WebPlaybackSessionInterfaceAVKit* _playbackSessionInterface;
	NSArray* _loadedTimeRanges;
	int _status;
	AVValueTiming* _timing;
	NSArray* _seekableTimeRanges;
	NSArray* _audioMediaSelectionOptions;
	NSArray* _legibleMediaSelectionOptions;
	int _externalPlaybackType;
	NSString* _externalPlaybackAirPlayDeviceLocalizedName;
	double _rate;
	double _contentDuration;
	CGSize _contentDimensions;
	double _minTime;
	double _maxTime;
	double _contentDurationWithinEndTimes;

}

@property (retain) AVPlayerController * playerControllerProxy;                                   //@synthesize playerControllerProxy=_playerControllerProxy - In the implementation block
@property (assign) WebPlaybackSessionModel* delegate;                                            //@synthesize delegate=_delegate - In the implementation block
@property (assign) WebPlaybackSessionInterfaceAVKit* playbackSessionInterface;                   //@synthesize playbackSessionInterface=_playbackSessionInterface - In the implementation block
@property (readonly) char canScanForward; 
@property (assign) char canScanBackward;                                                         //@synthesize canScanBackward=_canScanBackward - In the implementation block
@property (readonly) char canSeekToBeginning; 
@property (readonly) char canSeekToEnd; 
@property (assign) char canPlay;                                                                 //@synthesize canPlay=_canPlay - In the implementation block
@property (getter=isPlaying) char playing; 
@property (assign) char canPause;                                                                //@synthesize canPause=_canPause - In the implementation block
@property (assign) char canTogglePlayback;                                                       //@synthesize canTogglePlayback=_canTogglePlayback - In the implementation block
@property (assign) double rate;                                                                  //@synthesize rate=_rate - In the implementation block
@property (assign) char canSeek;                                                                 //@synthesize canSeek=_canSeek - In the implementation block
@property (assign) double contentDuration;                                                       //@synthesize contentDuration=_contentDuration - In the implementation block
@property (assign) CGSize contentDimensions;                                                     //@synthesize contentDimensions=_contentDimensions - In the implementation block
@property (assign) char hasEnabledAudio;                                                         //@synthesize hasEnabledAudio=_hasEnabledAudio - In the implementation block
@property (assign) char hasEnabledVideo;                                                         //@synthesize hasEnabledVideo=_hasEnabledVideo - In the implementation block
@property (assign) double minTime;                                                               //@synthesize minTime=_minTime - In the implementation block
@property (assign) double maxTime;                                                               //@synthesize maxTime=_maxTime - In the implementation block
@property (assign) double contentDurationWithinEndTimes;                                         //@synthesize contentDurationWithinEndTimes=_contentDurationWithinEndTimes - In the implementation block
@property (retain) NSArray * loadedTimeRanges;                                                   //@synthesize loadedTimeRanges=_loadedTimeRanges - In the implementation block
@property (assign) int status;                                                                   //@synthesize status=_status - In the implementation block
@property (retain) AVValueTiming * timing;                                                       //@synthesize timing=_timing - In the implementation block
@property (retain) NSArray * seekableTimeRanges;                                                 //@synthesize seekableTimeRanges=_seekableTimeRanges - In the implementation block
@property (readonly) char hasMediaSelectionOptions; 
@property (readonly) char hasAudioMediaSelectionOptions; 
@property (retain) NSArray * audioMediaSelectionOptions;                                         //@synthesize audioMediaSelectionOptions=_audioMediaSelectionOptions - In the implementation block
@property (retain) WebAVMediaSelectionOption * currentAudioMediaSelectionOption; 
@property (readonly) char hasLegibleMediaSelectionOptions; 
@property (retain) NSArray * legibleMediaSelectionOptions;                                       //@synthesize legibleMediaSelectionOptions=_legibleMediaSelectionOptions - In the implementation block
@property (retain) WebAVMediaSelectionOption * currentLegibleMediaSelectionOption; 
@property (getter=isPlayingOnExternalScreen,readonly) char playingOnExternalScreen; 
@property (getter=isPlayingOnSecondScreen,readonly) char playingOnSecondScreen;                  //@synthesize playingOnSecondScreen=_playingOnSecondScreen - In the implementation block
@property (getter=isExternalPlaybackActive) char externalPlaybackActive;                         //@synthesize externalPlaybackActive=_externalPlaybackActive - In the implementation block
@property (assign) int externalPlaybackType;                                                     //@synthesize externalPlaybackType=_externalPlaybackType - In the implementation block
@property (retain) NSString * externalPlaybackAirPlayDeviceLocalizedName;                        //@synthesize externalPlaybackAirPlayDeviceLocalizedName=_externalPlaybackAirPlayDeviceLocalizedName - In the implementation block
@property (assign) char allowsExternalPlayback;                                                  //@synthesize allowsExternalPlayback=_allowsExternalPlayback - In the implementation block
@property (getter=isPictureInPicturePossible) char pictureInPicturePossible;                     //@synthesize pictureInPicturePossible=_pictureInPicturePossible - In the implementation block
@property (getter=isPictureInPictureInterrupted) char pictureInPictureInterrupted; 
+(id)keyPathsForValuesAffectingPlaying;
+(id)keyPathsForValuesAffectingCurrentTimeWithinEndTimes;
+(id)keyPathsForValuesAffectingHasLiveStreamingContent;
+(id)keyPathsForValuesAffectingCanScanForward;
+(id)keyPathsForValuesAffectingCanSeekToBeginning;
+(id)keyPathsForValuesAffectingCanSeekToEnd;
+(id)keyPathsForValuesAffectingHasMediaSelectionOptions;
+(id)keyPathsForValuesAffectingHasAudioMediaSelectionOptions;
+(id)keyPathsForValuesAffectingHasLegibleMediaSelectionOptions;
+(id)keyPathsForValuesAffectingPlayingOnExternalScreen;
-(void)setLoadedTimeRanges:(NSArray *)arg1 ;
-(void)setCanPause:(char)arg1 ;
-(char)canPause;
-(void)setPlayerControllerProxy:(AVPlayerController *)arg1 ;
-(AVPlayerController *)playerControllerProxy;
-(void)togglePlayback:(id)arg1 ;
-(char)canPlay;
-(void)seekToBeginning:(id)arg1 ;
-(void)seekToEnd:(id)arg1 ;
-(char)hasAudioMediaSelectionOptions;
-(char)hasLegibleMediaSelectionOptions;
-(NSArray *)audioMediaSelectionOptions;
-(NSArray *)legibleMediaSelectionOptions;
-(char)isPlayingOnSecondScreen;
-(void)togglePlaybackEvenWhenInBackground:(id)arg1 ;
-(void)beginScrubbing:(id)arg1 ;
-(void)endScrubbing:(id)arg1 ;
-(double)currentTimeWithinEndTimes;
-(void)setCurrentTimeWithinEndTimes:(double)arg1 ;
-(char)hasLiveStreamingContent;
-(void)skipBackwardThirtySeconds:(id)arg1 ;
-(void)gotoEndOfSeekableRanges:(id)arg1 ;
-(char)canScanForward;
-(void)beginScanningForward:(id)arg1 ;
-(void)endScanningForward:(id)arg1 ;
-(void)beginScanningBackward:(id)arg1 ;
-(void)endScanningBackward:(id)arg1 ;
-(char)canSeekToBeginning;
-(void)seekChapterBackward:(id)arg1 ;
-(char)canSeekToEnd;
-(void)seekChapterForward:(id)arg1 ;
-(char)hasMediaSelectionOptions;
-(WebAVMediaSelectionOption *)currentAudioMediaSelectionOption;
-(void)setCurrentAudioMediaSelectionOption:(WebAVMediaSelectionOption *)arg1 ;
-(WebAVMediaSelectionOption *)currentLegibleMediaSelectionOption;
-(void)setCurrentLegibleMediaSelectionOption:(WebAVMediaSelectionOption *)arg1 ;
-(char)isPlayingOnExternalScreen;
-(char)isPictureInPictureInterrupted;
-(void)setPictureInPictureInterrupted:(char)arg1 ;
-(WebPlaybackSessionInterfaceAVKit*)playbackSessionInterface;
-(void)setPlaybackSessionInterface:(WebPlaybackSessionInterfaceAVKit*)arg1 ;
-(char)canScanBackward;
-(void)setCanScanBackward:(char)arg1 ;
-(void)setCanPlay:(char)arg1 ;
-(char)canTogglePlayback;
-(void)setCanTogglePlayback:(char)arg1 ;
-(void)setCanSeek:(char)arg1 ;
-(CGSize)contentDimensions;
-(void)setContentDimensions:(CGSize)arg1 ;
-(void)setHasEnabledAudio:(char)arg1 ;
-(void)setHasEnabledVideo:(char)arg1 ;
-(double)minTime;
-(void)setMinTime:(double)arg1 ;
-(void)setMaxTime:(double)arg1 ;
-(double)contentDurationWithinEndTimes;
-(void)setContentDurationWithinEndTimes:(double)arg1 ;
-(void)setSeekableTimeRanges:(NSArray *)arg1 ;
-(void)setAudioMediaSelectionOptions:(NSArray *)arg1 ;
-(void)setLegibleMediaSelectionOptions:(NSArray *)arg1 ;
-(void)setExternalPlaybackActive:(char)arg1 ;
-(void)setExternalPlaybackType:(int)arg1 ;
-(NSString *)externalPlaybackAirPlayDeviceLocalizedName;
-(void)setExternalPlaybackAirPlayDeviceLocalizedName:(NSString *)arg1 ;
-(void)setPictureInPicturePossible:(char)arg1 ;
-(id)init;
-(void)setDelegate:(WebPlaybackSessionModel*)arg1 ;
-(void)dealloc;
-(WebPlaybackSessionModel*)delegate;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(char)isPlaying;
-(void)setRate:(double)arg1 ;
-(double)rate;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(char)hasEnabledVideo;
-(char)hasEnabledAudio;
-(char)isExternalPlaybackActive;
-(NSArray *)loadedTimeRanges;
-(NSArray *)seekableTimeRanges;
-(char)allowsExternalPlayback;
-(double)maxTime;
-(int)externalPlaybackType;
-(char)isPictureInPicturePossible;
-(void)setPlaying:(char)arg1 ;
-(id)player;
-(void)setAllowsExternalPlayback:(char)arg1 ;
-(void)pause:(id)arg1 ;
-(void)seekToTime:(double)arg1 ;
-(double)contentDuration;
-(void)setContentDuration:(double)arg1 ;
-(AVValueTiming *)timing;
-(void)setTiming:(AVValueTiming *)arg1 ;
-(char)canSeek;
-(void)play:(id)arg1 ;
@end

