/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:38:15 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Messages/iMessageBalloons/DigitalTouchBalloonProvider.bundle/DigitalTouchBalloonProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DigitalTouchBalloonProvider/DigitalTouchBalloonProvider-Structs.h>
#import <DigitalTouchShared/DTSCanvasViewController.h>
#import <DigitalTouchBalloonProvider/ETHorizontalColorPickerDelegate.h>
#import <DigitalTouchBalloonProvider/ETVideoControllerDelegate.h>
#import <DigitalTouchBalloonProvider/ETMessageTimeSource.h>

@protocol ETTranscriptDetailCanvasViewControllerPresentationDelegate;
@class ETHorizontalColorPicker, NSTimer, UIButton, GestureInstructionButton, ETVideoController, ETVideoMessage, ETVideoRecordButton, UIView, UILabel, NSDateComponentsFormatter, UIPinchGestureRecognizer, ETLandscapeTrapView, MediaInstructionView, GestureInstructionView, NSString;

@interface ETTranscriptDetailCanvasViewController : DTSCanvasViewController <ETHorizontalColorPickerDelegate, ETVideoControllerDelegate, ETMessageTimeSource> {

	ETHorizontalColorPicker* _expandedColorPicker;
	char _animatingCompositionControls;
	char _showingCompositionControls;
	NSTimer* _showCompositionControlsTimer;
	UIButton* _expandButton;
	UIButton* _expandToCameraButton;
	UIButton* _expandColorPickerButton;
	CGPoint _expandedColorPickerCenter;
	GestureInstructionButton* _gestureInstructionButton;
	char _expandToCameraPreview;
	ETVideoController* _videoController;
	ETVideoMessage* _mediaMessage;
	UIButton* _smallVideoOnButton;
	UIButton* _largeVideoOnButton;
	UIButton* _videoOnButton;
	UIButton* _sendButton;
	UIButton* _backToPreviewButton;
	ETVideoRecordButton* _videoRecordButton;
	ETVideoRecordButton* _photoCaptureButton;
	NSTimer* _photoSendMessageTimer;
	UIView* _videoProgressBar;
	UIView* _videoProgressDot;
	UILabel* _videoProgressTimeLabel;
	NSDateComponentsFormatter* _videoProgressTimeFormatter;
	char _showingVideoProgress;
	UIButton* _cameraFlipButton;
	UIPinchGestureRecognizer* _videoZoomGestureRecognizer;
	float _videoZoomScale;
	float _lastVideoZoomGestureScale;
	ETLandscapeTrapView* _landscapeTrapView;
	char _showingLandscapeTrap;
	MediaInstructionView* _mediaInstructionView;
	char _expandToGestureInstructionView;
	GestureInstructionView* _gestureInstructionView;
	id<ETTranscriptDetailCanvasViewControllerPresentationDelegate> _presentationDelegate;

}

@property (assign,nonatomic,__weak) id<ETTranscriptDetailCanvasViewControllerPresentationDelegate> presentationDelegate;              //@synthesize presentationDelegate=_presentationDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)expandUI;
-(void)_updateCompositionControls;
-(char)_shouldUseWideLayout;
-(float)_availableWidthForLegend;
-(void)_setShowingVideoProgress:(char)arg1 ;
-(void)_updateMediaInstructionView;
-(void)_videoZoomGestureRecognized:(id)arg1 ;
-(void)_setShowingGestureInstructionView:(char)arg1 ;
-(void)_showCompositionControlsTimerFired;
-(void)colorPicker:(id)arg1 requestsDismissColorWheel:(id)arg2 ;
-(void)colorPicker:(id)arg1 requestsPresentColorWheel:(id)arg2 ;
-(void)_photoSendMessageTimerFired;
-(void)videoControllerDidInterruptPreview:(id)arg1 withInterruptionReason:(int)arg2 ;
-(void)_setShowingInstructionButton:(char)arg1 animated:(char)arg2 ;
-(void)videoControllerDidStartPreview:(id)arg1 ;
-(char)_shouldShowSendButton;
-(void)_updateExpandButton;
-(void)_updateVideoPreviewFrame;
-(void)_updateBackToPreviewButton;
-(void)_updateVideoOnButtonForHorizontalSizeClass:(int)arg1 ;
-(char)_shouldRestrictOrientation;
-(void)_videoOnButtonTapped;
-(void)_sendButtonTapped;
-(void)_endPhotoMessageComposition;
-(float)_gestureInstructionButtonOriginX;
-(id)_videoProgressTimeString:(unsigned)arg1 ;
-(void)_updateGestureInstructionViewFrame;
-(char)_shouldShowInstructionButton;
-(void)_startShowCompositionControlsTimer;
-(void)_endIntroMessage;
-(void)videoControllerWillCancelRecording:(id)arg1 ;
-(id)_smallVideoOnButton;
-(void)_moveComposedMessagesIntoMediaMessage;
-(void)_cameraFlipButtonTapped;
-(void)_dismissColorWheel;
-(void)_backToPreviewButtonTapped;
-(void)_showWriteErrorAlertForMediaType:(unsigned)arg1 outOfSpaceError:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)_expandToCameraButtonTapped;
-(char)_showingSendInProgress;
-(void)_updateCompositionControlsCenter;
-(void)_setVideoZoomEnabled:(char)arg1 ;
-(void)_updateLandscapeTrap;
-(void)_videoRecordButtonTapped;
-(void)videoControllerDidStartRecording:(id)arg1 ;
-(void)_expandColorPickerButtonTapped;
-(void)_gestureInstructionButtonTapped;
-(void)_startCameraPreview;
-(void)_updateVideoProgressFrame;
-(void)_composingOnlyIntroMessageType:(char)arg1 ;
-(void)_photoCaptureButtonTapped;
-(void)_updateVideoOnButtonOpacity;
-(char)_shouldShowOnButton;
-(id)_largeVideoOnButton;
-(void)_setEntryViewHidden:(char)arg1 ;
-(void)_updateVideoRecorderTime:(unsigned)arg1 ;
-(char)_isRecognizer:(id)arg1 closeToButton:(id)arg2 ;
-(void)_updateLegendFrame;
-(char)_canShowCompositionControls;
-(void)_endMediaMessageComposition;
-(void)_hideVideoController;
-(void)_startPhotoSendMessageTimer;
-(void)videoControllerDidEndRecording:(id)arg1 mediaURL:(id)arg2 withError:(id)arg3 ;
-(void)videoControllerDidStopPreview:(id)arg1 ;
-(void)_clearPhotoSendMessageTimer;
-(void)videoControllerWillBeginPhotoCapture:(id)arg1 ;
-(void)videoControllerDidEndPhotoCapture:(id)arg1 photoImage:(id)arg2 ;
-(void)_setShowingCompositionControls:(char)arg1 animated:(char)arg2 ;
-(float)_topMarginForColorPicker;
-(void)videoControllerDidEndPreview:(id)arg1 ;
-(id)init;
-(void)traitCollectionDidChange:(id)arg1 ;
-(unsigned)supportedInterfaceOrientations;
-(char)shouldAutorotate;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(void)_setCameraEnabled:(char)arg1 ;
-(void)_cancelButtonTapped;
-(id<ETTranscriptDetailCanvasViewControllerPresentationDelegate>)presentationDelegate;
-(void)setPresentationDelegate:(id<ETTranscriptDetailCanvasViewControllerPresentationDelegate>)arg1 ;
-(void)viewWillTransitionToExpandedPresentation;
-(void)viewDidTransitionToExpandedPresentation;
-(void)viewWillTransitionToCompactPresentation;
-(void)viewDidTransitionToCompactPresentation;
-(double)elapsedTimeSinceStartOfMessage:(id)arg1 ;
-(void)setPlayingMessages:(char)arg1 ;
-(void)canvasView:(id)arg1 didUpdateComposingMessageType:(unsigned short)arg2 ;
-(id)colorPicker;
-(char)usesCompactKeyboardLayout;
-(char)_shouldShowCancelButton;
-(void)_updateSkipButtonFrame;
-(char)canShowReplayButton;
-(char)_shouldAutoSend;
-(void)updateVideoUI;
-(char)_shouldDimColorPicker;
-(void)didChangeColorPickerColor;
-(char)_canLoopMessageDuringPlayback:(id)arg1 ;
-(char)canExpireMessages;
-(void)didBeginComposingMessage;
-(void)didEndComposingMessage;
-(void)_updateSendButton;
-(char)_tapRecognizerShouldBegin:(id)arg1 ;
-(void)dataSource:(id)arg1 startPlaybackWithCompletion:(/*^block*/id)arg2 ;
-(void)dataSourceStopPlayback:(id)arg1 ;
-(float)minimumBottomMargin;
@end

