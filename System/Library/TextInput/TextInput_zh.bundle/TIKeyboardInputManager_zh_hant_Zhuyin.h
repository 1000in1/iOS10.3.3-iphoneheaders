/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:40:19 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/TextInput/TextInput_zh.bundle/TextInput_zh
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput_zh/TextInput_zh-Structs.h>
#import <TextInput_zh/TIKeyboardInputManager_zh_Phonetic.h>

@interface TIKeyboardInputManager_zh_hant_Zhuyin : TIKeyboardInputManager_zh_Phonetic {

	char _dynamic;
	char _assertDefaultKeyPlane;

}

@property (assign,getter=isDynamic,nonatomic) char dynamic;                                          //@synthesize dynamic=_dynamic - In the implementation block
@property (assign,getter=isAssertDefaultKeyPlane,nonatomic) char assertDefaultKeyPlane;              //@synthesize assertDefaultKeyPlane=_assertDefaultKeyPlane - In the implementation block
+(void)removeDynamicDictionaryForInputMode:(id)arg1 ;
-(id)keyboardBehaviors;
-(void)setDynamic:(char)arg1 ;
-(unsigned)initialSelectedIndex;
-(char)supportsNumberKeySelection;
-(char)acceptInputString:(id)arg1 ;
-(id)keyEventMap;
-(char)isDynamic;
-(id)validCharacterSetForAutocorrection;
-(void)syncToKeyboardState:(id)arg1 from:(id)arg2 afterContextChange:(char)arg3 ;
-(TIInputManagerZephyr*)initImplementation;
-(id)deleteFromInput:(unsigned*)arg1 ;
-(void)syncToLayoutState:(id)arg1 ;
-(id)keyboardConfigurationLayoutTag;
-(char)keyboardConfigurationAssertDefaultKeyPlane;
-(id)inputsToReject;
-(id)didAcceptCandidate:(id)arg1 ;
-(void)setAssertDefaultKeyPlane:(char)arg1 ;
-(char)shouldSearchCompletionForSubstrings;
-(char)isAssertDefaultKeyPlane;
-(char)_shouldCommitInputDirectly:(id)arg1 ;
-(int)inputMethodType;
-(id)phoneticSortingMethod;
-(char)shouldInsertFirstToneMark;
-(id)composedTextForSelectedCandidate:(id)arg1 remainingInput:(id)arg2 ;
-(char)shouldReplaceCharacterOfInputStringBeforeCursorForInput:(id)arg1 ;
@end
