/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:28:55 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class NSArray;

@interface SpeechController : PSListController {

	char _speechSettingsItemsHidden;
	NSArray* _speechSettingsItems;

}

@property (nonatomic,retain) NSArray * speechSettingsItems;                                                   //@synthesize speechSettingsItems=_speechSettingsItems - In the implementation block
@property (assign,getter=areSpeechSettingsItemsHidden,nonatomic) char speechSettingsItemsHidden;              //@synthesize speechSettingsItemsHidden=_speechSettingsItemsHidden - In the implementation block
-(id)quickSpeakEnabled:(id)arg1 ;
-(void)setSpeakThisEnabled:(id)arg1 specifier:(id)arg2 ;
-(char)areSpeechSettingsItemsHidden;
-(id)quickSpeakSpeakingRate:(id)arg1 ;
-(id)highlightWord:(id)arg1 ;
-(void)setQuickSpeakSpeakingRate:(id)arg1 specifier:(id)arg2 ;
-(id)speakThisEnabled:(id)arg1 ;
-(void)setQuickSpeakEnabled:(id)arg1 specifier:(id)arg2 ;
-(NSArray *)speechSettingsItems;
-(void)setSpeechSettingsItems:(NSArray *)arg1 ;
-(void)setSpeechSettingsItemsHidden:(char)arg1 ;
-(void)dealloc;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)updateLayout;
-(void)willBecomeActive;
-(id)specifiers;
@end
