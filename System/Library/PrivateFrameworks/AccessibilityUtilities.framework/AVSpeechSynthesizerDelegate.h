/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:51:56 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVSpeechSynthesizerDelegate <NSObject>
@optional
-(void)speechSynthesizer:(id)arg1 didStartSpeechUtterance:(id)arg2;
-(void)speechSynthesizer:(id)arg1 didFinishSpeechUtterance:(id)arg2;
-(void)speechSynthesizer:(id)arg1 didPauseSpeechUtterance:(id)arg2;
-(void)speechSynthesizer:(id)arg1 didContinueSpeechUtterance:(id)arg2;
-(void)speechSynthesizer:(id)arg1 didCancelSpeechUtterance:(id)arg2;
-(void)speechSynthesizer:(id)arg1 willSpeakRangeOfSpeechString:(NSRange)arg2 utterance:(id)arg3;

@end
