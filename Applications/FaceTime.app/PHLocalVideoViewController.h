/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:58 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/FaceTime.app/FaceTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FaceTime/FaceTime-Structs.h>
#import <UIKit/UIViewController.h>

@class UIControl, UIView, PHLocalVideoDisabledOverlayView;

@interface PHLocalVideoViewController : UIViewController {

	char _localVideoAlwaysMatchesScreen;
	char _supportsAutoRotation;
	char _showsLocalPreviewStatusBarGradient;
	char _waitingForLocalVideoFirstFrame;
	UIControl* _videoGroupView;
	UIView* _localVideoView;
	UIView* _localVideoStatusBarGradientView;
	PHLocalVideoDisabledOverlayView* _disabledOverlayView;
	int _lastKnownOrientation;

}

@property (nonatomic,retain) UIControl * videoGroupView;                                         //@synthesize videoGroupView=_videoGroupView - In the implementation block
@property (nonatomic,retain) UIView * localVideoView;                                            //@synthesize localVideoView=_localVideoView - In the implementation block
@property (nonatomic,retain) UIView * localVideoStatusBarGradientView;                           //@synthesize localVideoStatusBarGradientView=_localVideoStatusBarGradientView - In the implementation block
@property (nonatomic,retain) PHLocalVideoDisabledOverlayView * disabledOverlayView;              //@synthesize disabledOverlayView=_disabledOverlayView - In the implementation block
@property (assign,nonatomic) char localVideoAlwaysMatchesScreen;                                 //@synthesize localVideoAlwaysMatchesScreen=_localVideoAlwaysMatchesScreen - In the implementation block
@property (assign,nonatomic) char supportsAutoRotation;                                          //@synthesize supportsAutoRotation=_supportsAutoRotation - In the implementation block
@property (assign,nonatomic) char showsLocalPreviewStatusBarGradient;                            //@synthesize showsLocalPreviewStatusBarGradient=_showsLocalPreviewStatusBarGradient - In the implementation block
@property (assign,nonatomic) char waitingForLocalVideoFirstFrame;                                //@synthesize waitingForLocalVideoFirstFrame=_waitingForLocalVideoFirstFrame - In the implementation block
@property (assign,nonatomic) int lastKnownOrientation;                                           //@synthesize lastKnownOrientation=_lastKnownOrientation - In the implementation block
+(char)_shouldForwardViewWillTransitionToSize;
-(void)fadeOutAnimated:(char)arg1 ;
-(void)_avFirstPreviewFrameArrived:(id)arg1 ;
-(void)_handleLocalCameraErrorNotification:(id)arg1 ;
-(void)_handleLocalCameraAvailableNotification:(id)arg1 ;
-(void)_handleOrientationDidChangeNotification:(id)arg1 ;
-(void)_handleVideoPreviewDidStartNotification:(id)arg1 ;
-(char)_isValidFaceTimeOrientation:(int)arg1 ;
-(char)supportsAutoRotation;
-(void)_dissociateVideoLayers;
-(void)_ensureVideoLayersExist;
-(void)setWaitingForLocalVideoFirstFrame:(char)arg1 ;
-(char)localVideoAlwaysMatchesScreen;
-(void)updateLocalVideoToMatchScreen;
-(UIControl *)videoGroupView;
-(void)associateLocalVideoLayers;
-(void)_updateLocalVideoOrientationAnimated:(char)arg1 ;
-(void)_setupVideoLayers;
-(void)_updateLocalPreviewStatusBarGradient;
-(void)_ensureLocalVideoWillBecomeVisible;
-(UIView *)localVideoView;
-(unsigned)_imAVCameraOrientationForDeviceOrientation:(int)arg1 ;
-(void)_adjustForOrientationAnimated:(char)arg1 ;
-(void)_applyAutoRotationCorrectionForOrientation:(int)arg1 withTransitionCoordinator:(id)arg2 ;
-(PHLocalVideoDisabledOverlayView *)disabledOverlayView;
-(void)setDisabledOverlayView:(PHLocalVideoDisabledOverlayView *)arg1 ;
-(void)_fadeInLocalVideo;
-(void)_autoFadeInLocalVideo;
-(char)waitingForLocalVideoFirstFrame;
-(char)showsLocalPreviewStatusBarGradient;
-(char)shouldDisableEdgeClip;
-(void)fadeInAnimated:(char)arg1 ;
-(void)updateViewControllerForOrientation:(int)arg1 ;
-(void)setVideoGroupView:(UIControl *)arg1 ;
-(void)setLocalVideoView:(UIView *)arg1 ;
-(UIView *)localVideoStatusBarGradientView;
-(void)setLocalVideoStatusBarGradientView:(UIView *)arg1 ;
-(void)setLocalVideoAlwaysMatchesScreen:(char)arg1 ;
-(void)setShowsLocalPreviewStatusBarGradient:(char)arg1 ;
-(int)lastKnownOrientation;
-(void)setLastKnownOrientation:(int)arg1 ;
-(void)_applicationResumed:(id)arg1 ;
-(void)dealloc;
-(int)preferredWhitePointAdaptivityStyle;
-(unsigned)supportedInterfaceOrientations;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)_applicationSuspended:(id)arg1 ;
-(void)startPreview;
-(void)stopPreview;
-(void)setSupportsAutoRotation:(char)arg1 ;
@end

