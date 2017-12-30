/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:38 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/TV.app/TV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <TV/VideosTraitsOverridingEnvironment.h>
#import <libobjc.A.dylib/MPVolumeControllerDelegate.h>
#import <libobjc.A.dylib/MPVideoOverlayDelegate.h>

@protocol MPVideoOverlayDelegate;
@class UITraitCollection, MPVideoPlaybackOverlayView, UIWindow, MPVideoPlaybackBackgroundView, MPWeakTimer, UIAlertController, MPNowPlayingObserver, MPVolumeController, VideosSceneInfoView, NSLayoutConstraint, VideosFeatureLoadingView, VideosPlayerReporter, NSString;

@interface VideosPlaybackViewController : UIViewController <VideosTraitsOverridingEnvironment, MPVolumeControllerDelegate, MPVideoOverlayDelegate> {

	MPVideoPlaybackOverlayView* _overlayView;
	char _overlayViewVisible;
	char _shouldResumePlayback;
	char _exiting;
	char _batteryMonitoringWasEnabled;
	double _startingTime;
	UIWindow* _externalWindow;
	MPVideoPlaybackBackgroundView* _backgroundView;
	MPWeakTimer* _idleTimer;
	char _isPausingDownloadSessionForCurrentItem;
	char _isVisible;
	MPWeakTimer* _sceneInfoTimer;
	UIAlertController* _playbackErrorAlertController;
	unsigned _activeOverlayUserEvents;
	MPNowPlayingObserver* _nowPlayingObserver;
	MPVolumeController* _volumeController;
	VideosSceneInfoView* _sceneInfoView;
	NSLayoutConstraint* _bottomSceneOverlayConstraint;
	char _registeredRemoteCommands;
	VideosFeatureLoadingView* _loadingView;
	VideosPlayerReporter* _playerReporter;
	char _shouldHideOverlayWhenPlaying;
	char _firstFrameDisplayed;
	char _delayDismissal;
	char _suppressOverlayDuringLaunch;
	id<MPVideoOverlayDelegate> _overlayDismissDelegate;
	/*^block*/id _overlayVisibilityChangeAnimationBlock;
	/*^block*/id _overlayVisibilityChangeAnimationCompletionBlock;
	UITraitCollection* _overrideTraitCollection;
	unsigned _overrideOrientationMask;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) UITraitCollection * overrideTraitCollection; 
@property (nonatomic,copy) UITraitCollection * overrideTraitCollection;                             //@synthesize overrideTraitCollection=_overrideTraitCollection - In the implementation block
@property (assign,nonatomic) unsigned overrideOrientationMask;                                      //@synthesize overrideOrientationMask=_overrideOrientationMask - In the implementation block
@property (assign,nonatomic) char suppressOverlayDuringLaunch;                                      //@synthesize suppressOverlayDuringLaunch=_suppressOverlayDuringLaunch - In the implementation block
@property (nonatomic,readonly) UIView*<MPVideoOverlay> overlayView; 
@property (assign,nonatomic,__weak) id<MPVideoOverlayDelegate> overlayDismissDelegate;              //@synthesize overlayDismissDelegate=_overlayDismissDelegate - In the implementation block
@property (nonatomic,copy) id overlayVisibilityChangeAnimationBlock;                                //@synthesize overlayVisibilityChangeAnimationBlock=_overlayVisibilityChangeAnimationBlock - In the implementation block
@property (nonatomic,copy) id overlayVisibilityChangeAnimationCompletionBlock;                      //@synthesize overlayVisibilityChangeAnimationCompletionBlock=_overlayVisibilityChangeAnimationCompletionBlock - In the implementation block
@property (assign,nonatomic) char delayDismissal;                                                   //@synthesize delayDismissal=_delayDismissal - In the implementation block
+(char)presentPlaybackViewController:(id)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
+(void)_presentSafely:(id)arg1 fromViewController:(id)arg2 animated:(char)arg3 completion:(/*^block*/id)arg4 ;
+(id)presentAnimated:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)setOverlayDismissDelegate:(id<MPVideoOverlayDelegate>)arg1 ;
-(void)setSuppressOverlayDuringLaunch:(char)arg1 ;
-(void)setOverrideOrientationMask:(unsigned)arg1 ;
-(void)setDelayDismissal:(char)arg1 ;
-(void)_screenDidConnectOrDisconnect:(id)arg1 ;
-(void)_playbackFailedForAirplayRental:(id)arg1 ;
-(void)_playbackFailedOutOfDiskSpace:(id)arg1 ;
-(void)_playbackFailedTooManyStreams:(id)arg1 ;
-(void)_playlistManagerNetworkFailure:(id)arg1 ;
-(void)_videoPlayerDidChangeTimelineEvent:(id)arg1 ;
-(void)_videoBufferingStateDidChange:(id)arg1 ;
-(void)_removeExternalWindow;
-(void)_handleDoubleFingerDoubleTap:(id)arg1 ;
-(void)_configureVideoView;
-(void)_configureAudio;
-(void)_updateOverlayView;
-(void)_updateAirPlayVideoStatus;
-(void)_timeoutShroud;
-(void)_registerCommandCenterCommands;
-(void)_exitPlayerAnimated:(char)arg1 ;
-(void)_handleNextTrackCommand:(id)arg1 ;
-(void)_handlePreviousTrackCommand:(id)arg1 ;
-(void)_cancelOverlayIdleTimer:(SEL)arg1 ;
-(char)suppressOverlayDuringLaunch;
-(void)_showOverlayViewQuickHide:(char)arg1 ;
-(void)_updateIdleTimerDisabled;
-(void)_updatePausingDownloadSessionForCurrentItem;
-(void)_insertLoadingViewForItem:(id)arg1 animated:(char)arg2 ;
-(void)_presentAirplayError;
-(void)_updateSceneInfoView;
-(void)_removeLoadingView:(char)arg1 ;
-(void)_hideOverlayView;
-(char)_isPlayingToExternalScreen;
-(void)_arrangeSubviews;
-(void)_unregisterCommandCenterCommands;
-(void)_showOverlayView;
-(void)_hideOverlayViewWithCompletionBlock:(/*^block*/id)arg1 ;
-(char)_canHideOverlayView;
-(void)_resetOverlayIdleTimer:(SEL)arg1 quickHide:(char)arg2 ;
-(void)_handlePlayCommand:(id)arg1 ;
-(void)_handlePauseCommand:(id)arg1 ;
-(void)_handleStopCommand:(id)arg1 ;
-(void)_handleTogglePlayPauseCommand:(id)arg1 ;
-(void)_handleSeekForwardCommand:(id)arg1 ;
-(void)_handleSeekBackwardCommand:(id)arg1 ;
-(void)_handleSpecialSeekForwardCommand:(id)arg1 ;
-(void)_handleSpecialSeekBackwardCommand:(id)arg1 ;
-(void)_handleChangePlaybackPositionCommand:(id)arg1 ;
-(int)_handleSkipAheadCommand:(id)arg1 ;
-(int)_handleSkipBackwardCommand:(id)arg1 ;
-(id<MPVideoOverlayDelegate>)overlayDismissDelegate;
-(id)overlayVisibilityChangeAnimationBlock;
-(id)overlayVisibilityChangeAnimationCompletionBlock;
-(char)delayDismissal;
-(unsigned)overrideOrientationMask;
-(id)init;
-(id)traitCollection;
-(void)dealloc;
-(char)prefersStatusBarHidden;
-(unsigned)supportedInterfaceOrientations;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)viewDidLayoutSubviews;
-(UITraitCollection *)overrideTraitCollection;
-(void)setOverrideTraitCollection:(UITraitCollection *)arg1 ;
-(void)_applicationWillResignActive:(id)arg1 ;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(void)_firstVideoFrameDisplayedNotification:(id)arg1 ;
-(void)_isExternalPlaybackActiveDidChange:(id)arg1 ;
-(void)_activeAudioRouteDidChange:(id)arg1 ;
-(void)_itemChanged:(id)arg1 ;
-(double)overlay:(id)arg1 interpretCurrentTime:(double)arg2 ;
-(void)overlayTappedBackButton:(id)arg1 ;
-(void)overlayTappedFullscreenButton:(id)arg1 ;
-(void)overlayTappedPictureInPictureButton:(id)arg1 ;
-(char)overlayShouldAcceptSkipBackwardEvent:(id)arg1 ;
-(char)overlayShouldAcceptSkipForwardEvent:(id)arg1 ;
-(void)overlay:(id)arg1 didBeginUserEvent:(unsigned)arg2 ;
-(void)overlay:(id)arg1 didEndUserEvent:(unsigned)arg2 ;
-(double)overlay:(id)arg1 interpretDuration:(double)arg2 ;
-(void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2 ;
-(void)_serverDied:(id)arg1 ;
-(void)_batteryStateDidChange:(id)arg1 ;
-(void)_playbackError:(id)arg1 ;
-(void)_resetOverlayIdleTimer:(SEL)arg1 ;
-(void)_overlayIdleTimerFired:(id)arg1 ;
-(void)_handleDoubleTap:(id)arg1 ;
-(UIView*<MPVideoOverlay>)overlayView;
-(void)_playbackStateChanged:(id)arg1 ;
-(void)_mediaServicesWereReset:(id)arg1 ;
-(void)_handleSingleTap:(id)arg1 ;
-(void)setOverlayVisibilityChangeAnimationBlock:(id)arg1 ;
-(void)setOverlayVisibilityChangeAnimationCompletionBlock:(id)arg1 ;
@end

