/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:29 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/VoiceOverTouch.app/vot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <vot/vot-Structs.h>
@interface VOTOutputComponent : NSObject {

	unsigned long long _currentOutputActionID;

}
-(void)preprocessAction:(id)arg1 ;
-(void)setCurrentOutputActionID:(unsigned long long)arg1 ;
-(id)determineLanguageForAction:(id)arg1 overrideLanguage:(id)arg2 targetLanguage:(id)arg3 ;
-(void)performAction:(id)arg1 owner:(id)arg2 ;
-(void)notifyRangeWillOutput:(NSRange)arg1 container:(id)arg2 ;
-(void)notifyActionComplete:(id)arg1 ;
-(id)determineLanguageForEvent:(id)arg1 ;
-(char)stringIsInSupportedCharacters:(id)arg1 ;
-(void)handleEvent:(id)arg1 ;
@end

