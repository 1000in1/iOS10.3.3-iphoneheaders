/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:30 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/VoiceOverTouch.app/vot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <vot/vot-Structs.h>
@class UITextChecker, NSArray;

@interface VOTBrailleGestureSpellingSuggestionHandler : NSObject {

	UITextChecker* _textChecker;
	NSArray* _spellingSuggestions;
	NSRange _rangeToReplace;
	int _spellingSuggestionIndex;

}
-(id)_updateRangeToReplaceInContext:(id)arg1 selectedRange:(NSRange)arg2 ;
-(id)_spellingSuggestionsForWord:(id)arg1 languageCode:(id)arg2 ;
-(id)_generateSpellingSuggestionsForResponder:(id)arg1 languageCode:(id)arg2 ;
-(id)_handleSpellingSuggestionWithIncrement:(int)arg1 responder:(id)arg2 languageCode:(id)arg3 ;
-(id)handleNextSpellingSuggestionForResponder:(id)arg1 languageCode:(id)arg2 ;
-(id)handlePreviousSpellingSuggestionForResponder:(id)arg1 languageCode:(id)arg2 ;
-(void)clearSpellingSuggestions;
-(void)dealloc;
@end

