/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:47 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/AccessibilityBundles/AccessibilitySettingsLoader.bundle/AccessibilitySettingsLoader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilitySettingsLoader/AccessibilitySettingsLoader-Structs.h>
#import <libobjc.A.dylib/AVSpeechSynthesizerDelegate.h>

@protocol OS_dispatch_queue;
@class AVSpeechSynthesizer, NSDictionary, NSArray, NSObject, NSString;

@interface SpeakCorrections : NSObject <AVSpeechSynthesizerDelegate> {

	AVSpeechSynthesizer* _synthesizer;
	char _correctionCanceled;
	NSDictionary* _keyboardToLanguage;
	NSArray* _availableLanguageCodes;
	NSObject*<OS_dispatch_queue> _speakingQueue;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(void)enable;
+(void)disable;
+(void)_updateRingerState;
+(void)_safeUpdateRingerState;
+(void)updateStatus;
-(id)init;
-(void)dealloc;
-(void)_correctionDisplayed:(id)arg1 ;
-(void)_ringerChanged:(id)arg1 ;
-(void)_speakCorrection:(id)arg1 ;
-(void)loadUIAccessibilityIfNecessary;
@end

