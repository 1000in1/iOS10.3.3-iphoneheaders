/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:40:19 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/TextInput/TextInput_zh.bundle/TextInput_zh
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput_zh/TextInput_zh-Structs.h>
#import <libTextInputCore.dylib/TIKeyboardInputManager_zh_ja.h>

@class TIWordSearch, NSString, CIMCandidateData, NSOperationQueue;

@interface TIKeyboardInputManager_zh : TIKeyboardInputManager_zh_ja {

	TIWordSearch* _wordSearch;
	char _isInCompletionMode;
	char _showingFacemarks;
	char _shouldLearnAcceptedCandidate;
	char _isAlphabeticPlane;
	char _leftDoubleQuotationMarkInserted;
	NSString* _language;
	NSString* _modeName;
	CIMCandidateData* _candidateData;
	NSOperationQueue* _operationQueue;
	NSString* _pairedPunctuationOpenQuote;
	NSString* _pairedPunctuationSelectedText;
	NSString* _currentKeyHint;
	unsigned _decimalPointState;

}

@property (readonly) CIMCandidateData * candidateData;                            //@synthesize candidateData=_candidateData - In the implementation block
@property (readonly) NSOperationQueue * operationQueue;                           //@synthesize operationQueue=_operationQueue - In the implementation block
@property (assign,nonatomic) char leftDoubleQuotationMarkInserted;                //@synthesize leftDoubleQuotationMarkInserted=_leftDoubleQuotationMarkInserted - In the implementation block
@property (assign,nonatomic) char isAlphabeticPlane;                              //@synthesize isAlphabeticPlane=_isAlphabeticPlane - In the implementation block
@property (nonatomic,copy) NSString * pairedPunctuationOpenQuote;                 //@synthesize pairedPunctuationOpenQuote=_pairedPunctuationOpenQuote - In the implementation block
@property (nonatomic,copy) NSString * pairedPunctuationSelectedText;              //@synthesize pairedPunctuationSelectedText=_pairedPunctuationSelectedText - In the implementation block
@property (nonatomic,readonly) unsigned long predictionOptions; 
@property (nonatomic,copy) NSString * language;                                   //@synthesize language=_language - In the implementation block
@property (nonatomic,copy) NSString * modeName;                                   //@synthesize modeName=_modeName - In the implementation block
@property (assign,nonatomic) char isInCompletionMode;                             //@synthesize isInCompletionMode=_isInCompletionMode - In the implementation block
@property (assign,nonatomic) char showingFacemarks;                               //@synthesize showingFacemarks=_showingFacemarks - In the implementation block
@property (assign,nonatomic) char shouldLearnAcceptedCandidate;                   //@synthesize shouldLearnAcceptedCandidate=_shouldLearnAcceptedCandidate - In the implementation block
@property (nonatomic,copy) NSString * currentKeyHint;                             //@synthesize currentKeyHint=_currentKeyHint - In the implementation block
@property (assign,nonatomic) unsigned decimalPointState;                          //@synthesize decimalPointState=_decimalPointState - In the implementation block
+(Class)wordSearchClass;
+(char)shouldEnableHalfWidthPunctuationForDocumentContext:(id)arg1 composedText:(id)arg2 ;
+(id)punctuationPredictionsForString:(id)arg1 ;
+(id)pairedPunctuationDictionary;
+(id)GB18030CandidateFromString:(id)arg1 ;
+(id)unicodeCandidateFromString:(id)arg1 ;
-(void)dealloc;
-(unsigned)initialSelectedIndex;
-(char)isAlphabeticPlane;
-(void)setIsAlphabeticPlane:(char)arg1 ;
-(void)clearInput;
-(id)searchStringForMarkedText;
-(id)firstCandidate;
-(id)replacementForDoubleSpace;
-(unsigned)initialCandidateBatchCount;
-(NSOperationQueue *)operationQueue;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(id)initWithConfig:(id)arg1 ;
-(void)syncToKeyboardState:(id)arg1 from:(id)arg2 afterContextChange:(char)arg3 ;
-(void)deleteFromInputWithContext:(id)arg1 ;
-(id)wordSearch;
-(id)wordCharacters;
-(char)shouldLearnAcceptedCandidate;
-(void)setShouldLearnAcceptedCandidate:(char)arg1 ;
-(void)loadFavoniusLanguageModel;
-(void)setLearnsCorrection:(char)arg1 ;
-(id)deleteFromInput:(unsigned*)arg1 ;
-(void)syncToLayoutState:(id)arg1 ;
-(id)sortMethodsGroupsForCandidates:(id)arg1 ;
-(void)inputLocationChanged;
-(id)didAcceptCandidate:(id)arg1 ;
-(char)alwaysShowExtensionCandidatesForSortingMethod:(id)arg1 ;
-(id)titleForSortingMethod:(id)arg1 ;
-(id)sortingMethods;
-(id)groupedCandidatesFromCandidates:(id)arg1 usingSortingMethod:(id)arg2 ;
-(void)groupedCandidatesFromCandidates:(id)arg1 usingSortingMethod:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setInput:(id)arg1 ;
-(void)setModeName:(NSString *)arg1 ;
-(void)setIsInCompletionMode:(char)arg1 ;
-(void)resetAutoquoteState;
-(void)setCurrentKeyHint:(NSString *)arg1 ;
-(char)isInCompletionMode;
-(void)setDecimalPointState:(unsigned)arg1 ;
-(unsigned)decimalPointState;
-(char)shouldSearchCompletionForSubstrings;
-(unsigned long)predictionOptions;
-(void)wordSearchEngineDidFindPredictionCandidates:(id)arg1 ;
-(void)willExitCompletionMode;
-(NSString *)currentKeyHint;
-(id)completionCandidateResultSetForKeyHint:(id)arg1 ;
-(id)generateCompletions;
-(CIMCandidateData *)candidateData;
-(char)supportsPairedPunctutationInput;
-(NSString *)pairedPunctuationOpenQuote;
-(NSString *)pairedPunctuationSelectedText;
-(void)setPairedPunctuationOpenQuote:(NSString *)arg1 ;
-(void)setPairedPunctuationSelectedText:(NSString *)arg1 ;
-(void)acceptFirstCandidateWithContext:(id)arg1 ;
-(void)resetCommitHistory;
-(TIInputManagerZephyr*)initImplementationWithMode:(id)arg1 andLanguage:(id)arg2 ;
-(WordTrie*)loadTrie:(id)arg1 ;
-(char)shouldEnableHalfWidthPunctuationForCurrentInputContext;
-(id)candidateResultSetUsedForCompletionQuery;
-(void)updateAutoquoteInInput:(id)arg1 ;
-(char)isFacemarkInput:(id)arg1 ;
-(char)hasIdeographicCandidates;
-(void*)mecabraCandidateRefFromPointerValue:(id)arg1 ;
-(char)updateCompletionCandidatesIfAppropriate;
-(id)outputByConvertingDecimalPointForInput:(id)arg1 ;
-(char)handlePairedPunctuationInput:(id)arg1 context:(id)arg2 ;
-(NSString *)modeName;
-(char)showingFacemarks;
-(void)setShowingFacemarks:(char)arg1 ;
-(char)leftDoubleQuotationMarkInserted;
-(void)setLeftDoubleQuotationMarkInserted:(char)arg1 ;
@end

