/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:31 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/VoiceOverTouch.app/vot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <vot/vot-Structs.h>
@class SCRCTargetSelectorTimer, NSString;

@interface VOTElementManagerBase : NSObject {

	int _elementUnitIndex;
	NSRange _elementUnitOutputRange;
	SCRCTargetSelectorTimer* _phoneticLetterTimer;
	SCRCTargetSelectorTimer* _elementUpdatesFrequentlyTimer;
	NSString* _cachedFrequentUpdateText;
	unsigned _lastSeenLineStartPositionForFontProperties;
	char _inUnitTestingMode;

}
-(void)_initElementUpdatesFrequentlyTimerWithThread:(id)arg1 ;
-(void)outputTextSegmentForRange:(NSRange)arg1 string:(id)arg2 element:(id)arg3 usePhoneticLetterTimer:(char)arg4 ;
-(void)_addDescription:(id)arg1 toRequest:(id)arg2 withOptions:(int)arg3 ;
-(void)_addDescription:(id)arg1 toRequest:(id)arg2 withOptions:(int)arg3 lastSeenContextDescriptors:(id)arg4 ;
-(NSRange)outputRangeForTextSegmentUnit:(int)arg1 direction:(int)arg2 string:(id)arg3 element:(id)arg4 ;
-(void)updateIndexesForOutputRange:(NSRange)arg1 segment:(int)arg2 direction:(int)arg3 outputStringLength:(unsigned)arg4 ;
-(void)resetFrequentUpdateTextCache;
-(id)_textAttachmentElementForString:(id)arg1 inRange:(NSRange)arg2 ;
-(id)_listItemLabelForAXAttributedString:(id)arg1 ;
-(char)stringIsTextAttachment:(id)arg1 ;
-(char)queuePhoneticTimerWithLetter:(id)arg1 request:(id)arg2 ;
-(void)refreshBraille;
-(id)getCurrentElement;
-(void)_elementUpdatesFrequently;
-(NSRange)_outputRangeForCharacterSegment:(id)arg1 direction:(int)arg2 ;
-(void)setUnitTestingMode:(char)arg1 ;
-(void)outputNextTextSegmentUnit:(int)arg1 direction:(int)arg2 string:(id)arg3 element:(id)arg4 ;
-(id)init;
-(void)dealloc;
-(void)sendRequest:(id)arg1 ;
@end

