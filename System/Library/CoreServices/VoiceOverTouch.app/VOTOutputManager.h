/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:37:02 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/VoiceOverTouch.app/vot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <vot/vot-Structs.h>
@class NSMutableArray, AXIndexMap, VOTOutputRequest, NSLock, VOTOutputRequestRunner, AXDialectMap, AXAccessQueueTimer, AXAccessQueue, NSMutableSet, NSDate, NSString;

@interface VOTOutputManager : NSObject {

	CFArrayRef _queuedOutputRequests;
	NSMutableArray* _requestRunners;
	AXIndexMap* _components;
	VOTOutputRequest* _currentlyRunningUninterruptableRequest;
	NSLock* _queueLock;
	char _requestIsRunning;
	unsigned long _numberOfRequestSinceLastUninterruptable;
	float _cachedRate;
	char _shutdown;
	VOTOutputRequestRunner* _onHoldRunner;
	AXDialectMap* _supportedLanguageMap;
	unsigned _currentExternalRoutingState;
	char _externalRoutesAvailable;
	AXAccessQueueTimer* _inactivateAudioTimer;
	AXAccessQueue* _audioSessionQueue;
	char _audioSessionActive;
	NSMutableSet* _audioSessionUsers;
	NSDate* _dateToResumeRequests;
	NSDate* _dateToResumeSounds;
	NSString* _currentRouteName;

}

@property (nonatomic,retain) NSDate * dateToResumeRequests;                    //@synthesize dateToResumeRequests=_dateToResumeRequests - In the implementation block
@property (nonatomic,retain) NSDate * dateToResumeSounds;                      //@synthesize dateToResumeSounds=_dateToResumeSounds - In the implementation block
@property (nonatomic,retain) NSString * currentRouteName;                      //@synthesize currentRouteName=_currentRouteName - In the implementation block
@property (nonatomic,readonly) AXAccessQueue * audioSessionQueue;              //@synthesize audioSessionQueue=_audioSessionQueue - In the implementation block
+(id)outputManager;
+(id)outputManagerIfExists;
+(id)previousSoundsPlayed;
+(void)clearPreviousSoundsPlayed;
+(void)initialize;
-(id)currentLanguageMap;
-(char)externalAudioRouteSelected;
-(void)_updateSupportedLanguageMap;
-(void)resetSpeechRate;
-(void)_setVolume:(float)arg1 ;
-(void)_voiceOverVolumeChanged:(id)arg1 ;
-(void)_activeRouteChanged:(id)arg1 ;
-(void)setCurrentRouteName:(NSString *)arg1 ;
-(NSDate *)dateToResumeRequests;
-(void)setDateToResumeRequests:(NSDate *)arg1 ;
-(void)_handleProcessRequest:(id)arg1 ;
-(void)_handleRequestFinished:(id)arg1 ;
-(void)_dispatchNextQueuedRequest;
-(id)componentForType:(int)arg1 ;
-(char)isRouteWireless:(id)arg1 ;
-(char)isCurrentRouteConsideredExternal:(id)arg1 ;
-(NSString *)currentRouteName;
-(void)updateAudioSessionProperties;
-(void)_updateExternalRoutesAvailable;
-(void)selectAudioRoute:(char)arg1 ;
-(char)isWirelessRoutePicked:(id)arg1 ;
-(float)speechRateForLanguage:(id)arg1 ;
-(float)defaultSpeechRate;
-(void)stopSpeakingAtBoundary:(int)arg1 allRequests:(char)arg2 ;
-(void)_holdCurrentRequest;
-(char)isOnCorrectThread;
-(void)_resumeCurrentRequest;
-(void)setDateToResumeSounds:(NSDate *)arg1 ;
-(void)_silenceRequestsForTimeInterval:(id)arg1 ;
-(void)toggleAudioSessionActive:(char)arg1 ;
-(void)speakSimpleString:(id)arg1 braille:(char)arg2 language:(id)arg3 ;
-(NSDate *)dateToResumeSounds;
-(void)playSoundFast:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)finishedOutputRequest:(id)arg1 ;
-(void)setSystemVolume:(float)arg1 ;
-(float)systemVolume;
-(void)synchVolumeWithSystem;
-(void)toggleSystemMute;
-(char)externalAudioRoutesAvailable;
-(void)selectExternalAudioRoute;
-(void)selectLocalAudioRoute;
-(void)updateWithCurrentRoute;
-(void)alterVoiceOverVolume:(char)arg1 ;
-(void)setSpeechRate:(float)arg1 forLanguage:(id)arg2 ;
-(id)pauseStringForType:(int)arg1 ;
-(void)holdCurrentRequest;
-(void)resumeCurrentRequest;
-(void)silenceOutputForTimeInterval:(double)arg1 ;
-(char)audioSessionActive;
-(void)enableAudioSession:(id)arg1 ;
-(void)disableAudioSession:(id)arg1 ;
-(void)speakSimpleString:(id)arg1 ;
-(void)playSoundFast:(id)arg1 ;
-(AXAccessQueue *)audioSessionQueue;
-(float)speechRate;
-(id)init;
-(void)dealloc;
-(void)handleEvent:(id)arg1 ;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(void)setRate:(float)arg1 ;
-(char)isPaused;
-(void)_systemVolumeDidChange:(id)arg1 ;
-(char)isSpeaking;
-(void)pauseSpeakingAtBoundary:(int)arg1 ;
-(void)stopSpeakingAtBoundary:(int)arg1 ;
-(void)continueSpeaking;
-(void)clearQueue;
-(void)updateVolume;
-(void)shutdown;
-(char)isSystemMuted;
@end
