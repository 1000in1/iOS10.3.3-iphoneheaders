/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:40:19 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/TextInput/TextInput_zh.bundle/TextInput_zh
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput_zh/TextInput_zh-Structs.h>
#import <TextInput_zh/TIKeyboardInputManager_zh.h>
#import <libobjc.A.dylib/TIKeyboardInputManagerChineseCompletion.h>

@class CIMCandidateData, NSOperationQueue, TIConversionHistory, NSString, NSArray, TIMecabraIMLogger, TIKeyboardCandidate;

@interface TIKeyboardInputManager_zh_Phonetic : TIKeyboardInputManager_zh <TIKeyboardInputManagerChineseCompletion> {

	char _usesCandidateSelection;
	CIMCandidateData* _candidateData;
	NSOperationQueue* _operationQueue;
	char _isCandidateSelected;
	char _acceptingCandidate;
	char _isInAmbiguousMode;
	char _lockingFirstPinyinSyllable;
	char _filterCandidatesUsingInputIndex;
	char _updateInlineContextWhenAddingCandidate;
	TIConversionHistory* _conversionHistory;
	NSString* _remainingInput;
	NSString* _replacedAmbiguousPinyinSyllable;
	NSString* _replacementUnambiguousPinyinSyllable;
	NSString* _composedTextBeforeFirstSyllableLocked;
	NSArray* _pinyinSyllableCandidates;
	unsigned _selectedPinyinSyllableCandidateIndex;
	TIMecabraIMLogger* _logger;
	NSString* _cachedConvertedInput;
	NSString* _currentClientIdentifier;
	NSString* _currentRecipientIdentifier;
	NSArray* _recentlyCommittedCandidatesForReanalysis;

}

@property (getter=isPhraseBoundarySet,nonatomic,readonly) char phraseBoundarySet; 
@property (nonatomic,readonly) TIKeyboardCandidate * candidateForInlineTextSegmentation; 
@property (nonatomic,copy) NSString * remainingInput;                                                 //@synthesize remainingInput=_remainingInput - In the implementation block
@property (nonatomic,readonly) NSString * unconvertedInput; 
@property (assign,nonatomic) char filterCandidatesUsingInputIndex;                                    //@synthesize filterCandidatesUsingInputIndex=_filterCandidatesUsingInputIndex - In the implementation block
@property (assign,nonatomic) char updateInlineContextWhenAddingCandidate;                             //@synthesize updateInlineContextWhenAddingCandidate=_updateInlineContextWhenAddingCandidate - In the implementation block
@property (nonatomic,copy) NSString * cachedConvertedInput;                                           //@synthesize cachedConvertedInput=_cachedConvertedInput - In the implementation block
@property (nonatomic,copy) NSString * replacedAmbiguousPinyinSyllable;                                //@synthesize replacedAmbiguousPinyinSyllable=_replacedAmbiguousPinyinSyllable - In the implementation block
@property (nonatomic,copy) NSString * replacementUnambiguousPinyinSyllable;                           //@synthesize replacementUnambiguousPinyinSyllable=_replacementUnambiguousPinyinSyllable - In the implementation block
@property (nonatomic,copy) NSString * composedTextBeforeFirstSyllableLocked;                          //@synthesize composedTextBeforeFirstSyllableLocked=_composedTextBeforeFirstSyllableLocked - In the implementation block
@property (nonatomic,retain) NSArray * pinyinSyllableCandidates;                                      //@synthesize pinyinSyllableCandidates=_pinyinSyllableCandidates - In the implementation block
@property (assign,nonatomic) unsigned selectedPinyinSyllableCandidateIndex;                           //@synthesize selectedPinyinSyllableCandidateIndex=_selectedPinyinSyllableCandidateIndex - In the implementation block
@property (nonatomic,copy) NSString * currentClientIdentifier;                                        //@synthesize currentClientIdentifier=_currentClientIdentifier - In the implementation block
@property (nonatomic,copy) NSString * currentRecipientIdentifier;                                     //@synthesize currentRecipientIdentifier=_currentRecipientIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * recentlyCommittedCandidatesForReanalysis;                        //@synthesize recentlyCommittedCandidatesForReanalysis=_recentlyCommittedCandidatesForReanalysis - In the implementation block
@property (nonatomic,copy,readonly) NSString * internalInputString; 
@property (nonatomic,readonly) NSString * convertedInput; 
@property (nonatomic,readonly) char usesGeometryModelData; 
@property (nonatomic,retain) TIConversionHistory * conversionHistory;                                 //@synthesize conversionHistory=_conversionHistory - In the implementation block
@property (nonatomic,retain) TIMecabraIMLogger * logger;                                              //@synthesize logger=_logger - In the implementation block
+(Class)wordSearchClass;
+(id)stringFallBackForTenKeyInput:(id)arg1 range:(NSRange)arg2 ;
+(id)ambiguousPinyinSet;
+(id)directlyCommittedCharacterSetForEmptyInline;
+(id)ambiguousDefaults;
-(void)dealloc;
-(void)suspend;
-(id)keyboardBehaviors;
-(void)resume;
-(id)candidateResultSet;
-(char)supportsNumberKeySelection;
-(char)usesCandidateSelection;
-(void)clearInput;
-(char)usesAutoDeleteWord;
-(char)supportsSetPhraseBoundary;
-(id)inputString;
-(char)shouldExtendPriorWord;
-(char)suppressCompletionsForFieldEditor;
-(char)suppliesCompletions;
-(unsigned)phraseBoundary;
-(unsigned)inputIndex;
-(unsigned)inputCount;
-(void)lastAcceptedCandidateCorrected;
-(char)commitsAcceptedCandidate;
-(id)defaultCandidate;
-(void)_nop;
-(void)setInHardwareKeyboardMode:(char)arg1 ;
-(char)ignoresDeadKeys;
-(id)locale;
-(id)initWithConfig:(id)arg1 ;
-(TIMecabraIMLogger *)logger;
-(NSRange)analysisStringRange;
-(id)handleAcceptedCandidate:(id)arg1 keyboardState:(id)arg2 ;
-(void)syncToKeyboardState:(id)arg1 from:(id)arg2 afterContextChange:(char)arg3 ;
-(id)handleKeyboardInput:(id)arg1 ;
-(char)supportsLearning;
-(char)shouldAddModifierSymbolsToWordCharacters;
-(char)doesComposeText;
-(id)externalStringToInternal:(id)arg1 ;
-(id)internalStringToExternal:(id)arg1 ;
-(void)setAutoCorrects:(char)arg1 ;
-(void)updateComposedText;
-(unsigned)internalIndexToExternal:(unsigned)arg1 ;
-(unsigned)externalIndexToInternal:(unsigned)arg1 ;
-(void)setCollatorLocale;
-(void)clearDynamicDictionary;
-(id)addInput:(id)arg1 flags:(unsigned)arg2 point:(CGPoint)arg3 firstDelete:(unsigned*)arg4 fromVariantKey:(char)arg5 ;
-(id)deleteFromInput:(unsigned*)arg1 ;
-(void)syncToLayoutState:(id)arg1 ;
-(id)sentenceDelimitingCharacters;
-(char)canStartSentenceAfterString:(id)arg1 ;
-(void)checkAutocorrectionDictionaries;
-(void)storeLanguageModelDynamicDataIncludingCache;
-(id)newInputManagerState;
-(id)keyboardConfigurationLayoutTag;
-(id)rawInputString;
-(void)addInput:(id)arg1 withContext:(id)arg2 ;
-(void)inputLocationChanged;
-(id)didAcceptCandidate:(id)arg1 ;
-(NSString *)remainingInput;
-(void)setPhraseBoundary:(unsigned)arg1 ;
-(id)sortingMethods;
-(void)setInput:(id)arg1 ;
-(void)setLogger:(TIMecabraIMLogger *)arg1 ;
-(NSString *)replacementUnambiguousPinyinSyllable;
-(NSString *)replacedAmbiguousPinyinSyllable;
-(NSString *)convertedInput;
-(void)setReplacedAmbiguousPinyinSyllable:(NSString *)arg1 ;
-(void)setReplacementUnambiguousPinyinSyllable:(NSString *)arg1 ;
-(char)shouldLookForCompletionCandidates;
-(TIConversionHistory *)conversionHistory;
-(char)_shouldCommitInputDirectly:(id)arg1 ;
-(char)isSpecialInput:(id)arg1 ;
-(NSString *)internalInputString;
-(int)inputMethodType;
-(id)phoneticSortingMethod;
-(id)composedTextForSelectedCandidate:(id)arg1 remainingInput:(id)arg2 ;
-(char)shouldReplaceCharacterOfInputStringBeforeCursorForInput:(id)arg1 ;
-(void)setRemainingInput:(NSString *)arg1 ;
-(char)usesGeometryModelData;
-(void)didDeleteCandidates:(id)arg1 ;
-(NSString *)currentClientIdentifier;
-(NSString *)currentRecipientIdentifier;
-(void)setCurrentRecipientIdentifier:(NSString *)arg1 ;
-(void)setCurrentClientIdentifier:(NSString *)arg1 ;
-(void)setLanguageModelAdaptationContext;
-(void)setPinyinSyllableCandidates:(NSArray *)arg1 ;
-(void)setSelectedPinyinSyllableCandidateIndex:(unsigned)arg1 ;
-(char)firstSyllableLocked;
-(char)isPhraseBoundarySet;
-(NSString *)unconvertedInput;
-(id)stringByPrependingConvertedCandidateTextToString:(id)arg1 ;
-(void)clearPinyinSyllableSelection;
-(TIKeyboardCandidate *)candidateForInlineTextSegmentation;
-(void)setUpdateInlineContextWhenAddingCandidate:(char)arg1 ;
-(char)inputContinuesGB18030OrUnicodeLookupKey:(id)arg1 ;
-(void)revertToAmbiguousPinyinSyllable;
-(void)setFilterCandidatesUsingInputIndex:(char)arg1 ;
-(id)remapInput:(id)arg1 ;
-(BOOL)handleDirectlyCommitForInput:(id)arg1 withContext:(id)arg2 ;
-(void)addInputToInternal:(id)arg1 ;
-(unsigned)internalInputIndex;
-(void)setCachedConvertedInput:(NSString *)arg1 ;
-(NSArray *)pinyinSyllableCandidates;
-(unsigned)selectedPinyinSyllableCandidateIndex;
-(id)inputStringForSearch;
-(unsigned)internalInputCount;
-(NSString *)composedTextBeforeFirstSyllableLocked;
-(char)generateReanalysisCandidatesIfAppropriate;
-(char)updateCandidates;
-(char)hasExtensionEmojiCandidates;
-(id)stringByStrippingConvertedCandidateTextFromString:(id)arg1 ;
-(void)handleAcceptedPinyinDisambiguationCandidate:(id)arg1 keyboardState:(id)arg2 ;
-(void)setComposedTextBeforeFirstSyllableLocked:(NSString *)arg1 ;
-(void)wordSearchEngineDidFindCandidates:(id)arg1 forOperation:(id)arg2 ;
-(char)filterCandidatesUsingInputIndex;
-(id)segmentedPinyinStringFromString:(id)arg1 ;
-(NSArray *)recentlyCommittedCandidatesForReanalysis;
-(void)loadAddressBook;
-(void)setConversionHistory:(TIConversionHistory *)arg1 ;
-(char)updateInlineContextWhenAddingCandidate;
-(NSString *)cachedConvertedInput;
-(void)setRecentlyCommittedCandidatesForReanalysis:(NSArray *)arg1 ;
@end

