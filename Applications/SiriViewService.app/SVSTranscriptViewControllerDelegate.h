/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:34 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/SiriViewService.app/SiriViewService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SVSTranscriptViewControllerDelegate <NSObject>
@required
-(int)initialDisplayTypeForTranscriptViewController:(id)arg1;
-(CGRect*)statusBarFrameForTranscriptViewController:(id)arg1;
-(char)transcriptViewControllerWillShowSuggestions:(id)arg1;
-(void)transcriptViewController:(id)arg1 performAceCommand:(id)arg2 conversationItemIdentifier:(id)arg3 completion:(/*^block*/id)arg4;
-(void)transcriptViewController:(id)arg1 openURL:(id)arg2 conversationItemIdentifier:(id)arg3 completion:(/*^block*/id)arg4;
-(id)transcriptViewController:(id)arg1 additionalSpeechInterpretationsForRefId:(id)arg2;
-(id)transcriptViewController:(id)arg1 updatedUserUtteranceForRefId:(id)arg2;
-(id)effectiveCoreLocationBundleForTranscriptViewController:(id)arg1;
-(char)transcriptViewControllerShouldPreventUserInteraction:(id)arg1;
-(void)transcriptViewControllerWillBeginEditing:(id)arg1;
-(void)transcriptViewController:(id)arg1 didEditSpeechRecognized:(id)arg2 forInterval:(double)arg3;
-(void)transcriptViewControllerDidEndEditing:(id)arg1;
-(void)transcriptViewController:(id)arg1 didCorrectRecognition:(id)arg2 correctionIdentifier:(id)arg3 forItemAtIndex:(int)arg4 userSelectionResults:(id)arg5;
-(void)cancelRequestForTranscriptViewController:(id)arg1;
-(void)transcriptViewController:(id)arg1 didShowGuideStartDate:(id)arg2 endDate:(id)arg3;
-(void)transcriptViewController:(id)arg1 didHideVibrantView:(id)arg2;
-(void)transcriptViewController:(id)arg1 setStatusViewHidden:(char)arg2;
-(void)transcriptViewController:(id)arg1 willPresentViewController:(id)arg2;
-(void)transcriptViewController:(id)arg1 willDismissViewController:(id)arg2;
-(void)transcriptViewController:(id)arg1 setStatusBarHidden:(char)arg2;
-(void)transcriptViewController:(id)arg1 shouldPresentPicker:(id)arg2 completion:(/*^block*/id)arg3;
-(void)transcriptViewController:(id)arg1 requestPasscodeUnlockWithCompletion:(/*^block*/id)arg2;
-(unsigned)deviceLockStateForTranscriptViewController:(id)arg1;
-(void)transcriptViewController:(id)arg1 speakText:(id)arg2 isPhonetic:(char)arg3 completion:(/*^block*/id)arg4;
-(void)cancelSpeakingForTranscriptViewController:(id)arg1;
-(void)transcriptViewControllerDidShowSuggestions:(id)arg1;
-(void)transcriptViewController:(id)arg1 didPresentConversationItemsWithIdentifiers:(id)arg2;
-(void)transcriptViewController:(id)arg1 viewDidSetContentSize:(CGSize)arg2;
-(void)transcriptViewController:(id)arg1 didScrollForInterval:(double)arg2;
-(float)contentWidthForTranscriptViewController:(id)arg1;
-(void)transcriptViewController:(id)arg1 didFinishTest:(id)arg2;
-(void)transcriptViewController:(id)arg1 didShowAceViewWithIdentifier:(id)arg2 aceViewClass:(Class)arg3 metricsContext:(id)arg4 forInterval:(double)arg5;
-(void)transcriptViewController:(id)arg1 didShowTipWithIdentifier:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 flowID:(id)arg5;
-(void)transcriptViewController:(id)arg1 showSiriStatusWithText:(id)arg2 speakableDescription:(id)arg3;
-(void)transcriptViewController:(id)arg1 willStartTest:(id)arg2;

@end

