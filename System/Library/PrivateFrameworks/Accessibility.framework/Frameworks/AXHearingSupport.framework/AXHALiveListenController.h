/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:06 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXHearingSupport.framework/AXHearingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AXHearingSupport/AXHearingSupport-Structs.h>
@class SBSStatusBarStyleOverridesAssertion;

@interface AXHALiveListenController : NSObject {

	SBSStatusBarStyleOverridesAssertion* _llStatusBarAssertion;
	OpaqueExtAudioFileRef _debugAudioFile;
	float _noise;
	float _signal;
	char isListening;
	char _didInitializeAudioUnit;
	OpaqueAudioComponentInstanceRef rioUnit;
	OpaqueAudioComponentInstanceRef mixerUnit;

}

@property (assign,nonatomic) char didInitializeAudioUnit;                              //@synthesize didInitializeAudioUnit=_didInitializeAudioUnit - In the implementation block
@property (nonatomic,readonly) OpaqueAudioComponentInstanceRef rioUnit; 
@property (nonatomic,readonly) OpaqueAudioComponentInstanceRef mixerUnit; 
@property (assign,nonatomic) char isListening; 
-(id)init;
-(void)dealloc;
-(float)audioLevel;
-(void)audioSessionWasInterrupted:(id)arg1 ;
-(void)mediaServicesWereReset:(id)arg1 ;
-(void)audioRouteDidChange:(id)arg1 ;
-(char)stopListeningWithError:(id*)arg1 ;
-(char)isListening;
-(char)startListeningWithError:(id*)arg1 ;
-(char)didInitializeAudioUnit;
-(void)setDidInitializeAudioUnit:(char)arg1 ;
-(void)setIsListening:(char)arg1 ;
-(OpaqueExtAudioFileRef)debugAudioFile;
-(OpaqueAudioComponentInstanceRef)rioUnit;
-(OpaqueAudioComponentInstanceRef)mixerUnit;
@end

