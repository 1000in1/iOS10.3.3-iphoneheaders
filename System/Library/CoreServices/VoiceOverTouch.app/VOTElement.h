/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:37:02 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/VoiceOverTouch.app/vot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <vot/vot-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <vot/VOTElementAspect.h>

@protocol UIElementProtocol;
@class NSString, VOTElementUniqueIdentification, AXUIElement, VOTElementSnapshot;

@interface VOTElement : NSObject <NSCopying, VOTElementAspect> {

	id<UIElementProtocol> _uiElement;
	VOTElement* _elementForGesturedTextInput;
	int _lastOrbSoundLevel;
	char shouldSkipValidateElement;
	VOTElementUniqueIdentification* _uniqueIdentification;
	int _aspectMask;
	unsigned _cachedDisplayId;
	VOTElement* _cachedRemoteParent;
	VOTElement* _cachedRemoteApplication;

}

@property (assign,nonatomic) unsigned cachedDisplayId;                                             //@synthesize cachedDisplayId=_cachedDisplayId - In the implementation block
@property (nonatomic,retain) VOTElement * cachedRemoteParent;                                      //@synthesize cachedRemoteParent=_cachedRemoteParent - In the implementation block
@property (nonatomic,retain) VOTElement * cachedRemoteApplication;                                 //@synthesize cachedRemoteApplication=_cachedRemoteApplication - In the implementation block
@property (assign,nonatomic) char shouldSkipValidateElement; 
@property (nonatomic,readonly) AXUIElement * uiElement; 
@property (nonatomic,copy) NSString * userDefinedLabel; 
@property (nonatomic,copy) NSString * definedLabel; 
@property (assign,nonatomic) char isFirstItemInList; 
@property (assign,nonatomic) char isFirstItemInTable; 
@property (assign,nonatomic) char isFirstItemInLandmark; 
@property (assign,nonatomic) char isFirstItemInFieldset; 
@property (nonatomic,readonly) NSString * toggleStatusLabel; 
@property (nonatomic,readonly) VOTElementUniqueIdentification * uniqueIdentification;              //@synthesize uniqueIdentification=_uniqueIdentification - In the implementation block
@property (assign,nonatomic) int aspectMask;                                                       //@synthesize aspectMask=_aspectMask - In the implementation block
@property (nonatomic,readonly) VOTElementSnapshot * snapshot; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * label; 
@property (nonatomic,readonly) NSString * value; 
@property (nonatomic,readonly) unsigned long long traits; 
@property (nonatomic,readonly) NSRange rowRange; 
@property (nonatomic,readonly) CGRect frame; 
+(void)resetSystemAppElement;
+(id)systemAppApplication;
+(/*^block*/id)elementAtPointIntercept;
+(id)_elementWithAXUIElementRef:(AXUIElementRef)arg1 cache:(CFDictionaryRef)arg2 identification:(id)arg3 ;
+(id)_elementWithAXUIElementRef:(AXUIElementRef)arg1 ;
+(void)setSystemAppApplication:(id)arg1 ;
+(void)setElementAtPointIntercept:(/*^block*/id)arg1 ;
+(void)initialize;
+(id)elementWithUIElement:(id)arg1 ;
+(id)systemWideElement;
+(id)springBoardApplication;
-(void)setFirstResponder:(id)arg1 ;
-(char)isMobilePhone;
-(char)isQuietModeEnabled;
-(void)addTextualInformationToRequest:(id)arg1 options:(int)arg2 ;
-(id)_initWithUIElement:(id)arg1 identification:(id)arg2 ;
-(VOTElementUniqueIdentification *)uniqueIdentification;
-(unsigned)cachedDisplayId;
-(void)setCachedDisplayId:(unsigned)arg1 ;
-(char)doesHaveTraits:(unsigned long long)arg1 ;
-(id)_elementForAttribute:(int)arg1 shouldUpdateCache:(char)arg2 ;
-(id)localOpaqueParent;
-(id)opaqueParent;
-(id)elementForParameterizedAttribute:(int)arg1 parameter:(id)arg2 ;
-(void)setVoiceOverFocused:(char)arg1 ;
-(char)isMail;
-(id)attachmentFilenameForCID:(id)arg1 ;
-(void)setUserDefinedLabel:(NSString *)arg1 ;
-(NSString *)userDefinedLabel;
-(NSString *)definedLabel;
-(id)originalLabel;
-(id)urlLabel;
-(char)isRemoteElement;
-(id)opaqueElementInDirection:(int)arg1 searchTraits:(unsigned long long)arg2 ;
-(id)elementsForAttribute:(int)arg1 withParameter:(id)arg2 ;
-(const AXUIElementRef)touchContainerAXElement;
-(char)overridesVoiceOverInstructions;
-(char)canExpandMathEquation;
-(char)isKeyboardActiveOrAttached;
-(VOTElement *)cachedRemoteApplication;
-(void)setCachedRemoteApplication:(VOTElement *)arg1 ;
-(id)elementsInDirection:(int)arg1 withCount:(unsigned)arg2 ;
-(char)containedIn:(int)arg1 ;
-(id)elementForGesturedTextInput;
-(id)copyWithCache;
-(char)performEscape;
-(char)supportsActivate;
-(id)initWithPosition:(CGPoint)arg1 ;
-(char)isAccessibilitySystemUIServer;
-(id)initWithPosition:(CGPoint)arg1 application:(id)arg2 contextId:(unsigned)arg3 ;
-(char)isAssistiveTouch;
-(CGPoint)elementFrameLocation:(int)arg1 ;
-(void)performSimpleTapAtPoint:(CGPoint)arg1 withForce:(float)arg2 withContextId:(unsigned)arg3 withDelay:(float)arg4 ;
-(char)supportsSecondaryActivate;
-(void)performSimpleTap:(char)arg1 ;
-(void)expandMathEquation;
-(char)_attemptPerformActivateActionWithElement:(id)arg1 ;
-(void)updateCenterPoint;
-(char)verifyElementExists:(CGPoint*)arg1 ;
-(char)doesHaveAllTraits:(unsigned long long)arg1 ;
-(float)activationDelay;
-(void)updateTraits;
-(id)cachedCustomRotorActions;
-(char)performCustomActionWithIdentifier:(id)arg1 ;
-(id)customPublicRotors;
-(id)customPublicRotorName:(id)arg1 ;
-(void)updateContainingRemoteElementFocus:(char)arg1 ;
-(id)objectForRange:(NSRange)arg1 withParameterizedAttribute:(int)arg2 ;
-(id)_selectionStringForSegment:(int)arg1 ;
-(char)textOperationsAvailable;
-(char)isSoftwareKeyboardActive;
-(NSString *)toggleStatusLabel;
-(void)updateTouchForceSounds:(float)arg1 ;
-(void)setAspectMask:(int)arg1 ;
-(id)initApplicationWithPosition:(CGPoint)arg1 ;
-(id)initWithPosition:(CGPoint)arg1 startWithElement:(id)arg2 ;
-(void)updateRTL;
-(id)supportedLanguageIfNecessary;
-(void)updateWindowContextId;
-(int)expandedStatus;
-(id)contextDescriptors;
-(id)invalidStatus;
-(unsigned)ariaRowCount;
-(unsigned)ariaColumnCount;
-(unsigned)ariaRowIndex;
-(unsigned)ariaColumnIndex;
-(char)isComboBox;
-(char)isInTableCell;
-(char)dismissAlternativeKeyboardPicker;
-(char)keyboardKeyAllowsTouchTyping;
-(char)elementVisibilityAffectsLayout;
-(CGRect)frameForDirectInteraction;
-(double)delayBeforeUpdatingOnActivation;
-(id)directParent;
-(id)visibleOpaqueElements;
-(id)currentOpaqueElement;
-(char)isAwayAlertItem;
-(char)isAwayAlertItemNew;
-(id)awayAlertItems;
-(CGRect)gesturePracticeRegion;
-(id)equivalenceTag;
-(void)setDefinedLabel:(NSString *)arg1 ;
-(char)savePhotoLabeliCloud:(id)arg1 ;
-(id)elementStoredUserLabel;
-(char)isFirstItemInList;
-(void)setIsFirstItemInList:(char)arg1 ;
-(char)isFirstItemInTable;
-(void)setIsFirstItemInTable:(char)arg1 ;
-(char)isFirstItemInLandmark;
-(void)setIsFirstItemInLandmark:(char)arg1 ;
-(char)isFirstItemInFieldset;
-(void)setIsFirstItemInFieldset:(char)arg1 ;
-(id)focusedApplications;
-(char)touchContainerShouldOutputBraille;
-(id)linkedElement;
-(void)updateFlowToElements;
-(id)flowToElements;
-(id)nextContainer;
-(id)previousContainer;
-(id)ancestryForTraits:(int)arg1 ;
-(char)supportsPressedState;
-(id)dataDetectorURL:(CGPoint)arg1 ;
-(void)updatePaths;
-(void)updateVisiblePoint;
-(void)updateExpandedStatus;
-(void)updateRoleDescription;
-(void)updateLanguage;
-(void)updateEquivalenceTag;
-(id)nextElement;
-(id)previousElement;
-(id)autoSpeakWatchElements;
-(char)supportsHeaderElementOutput;
-(id)firstContainedElement;
-(id)lastContainedElement;
-(int)blockquoteLevel;
-(id)roleDescription;
-(char)suppressCustomActionHint;
-(id)textInputElement;
-(NSRange)textInputElementRange;
-(char)isEditableTextArea;
-(char)onlyHasTraits:(unsigned long long)arg1 ;
-(char)doesHaveTraitsForGesturedTextInput;
-(void)scrollToElementWithCompletion:(/*^block*/id)arg1 ;
-(void)incrementAction;
-(void)setGesturePracticeInfo:(id)arg1 ;
-(void)decrementAction;
-(void)zoomInAtLocation:(CGPoint)arg1 ;
-(id)photoDescription;
-(char)isMapItem;
-(id)mapDetailedInformationAtPoint:(CGPoint)arg1 ;
-(char)lastHitTestNearBorder;
-(float)distanceToOtherRoad:(CGPoint)arg1 withDirection:(float)arg2 otherRoad:(id)arg3 ;
-(float)distanceToEndOfRoad:(CGPoint)arg1 withDirection:(float)arg2 ;
-(id)upcomingRoadsAtPoint:(CGPoint)arg1 withDirection:(float)arg2 ;
-(char)roadContainsTrackingPoint:(CGPoint)arg1 ;
-(void)zoomOutAtLocation:(CGPoint)arg1 ;
-(void)decreaseTrackingDetail;
-(void)increaseTrackingDetail;
-(id)textOperationsOperator;
-(void)performTextOperation:(id)arg1 ;
-(void)findSearchResult:(char)arg1 withSearchText:(id)arg2 ;
-(void)performTapAtPoint:(CGPoint)arg1 withForce:(float)arg2 ;
-(char)allowsAutoAlternativeCharacterActivation;
-(void)performDoubleTap;
-(void)performSimpleTap;
-(float)absoluteValue;
-(void)scrollUpPage;
-(void)scrollDownPage;
-(void)scrollRightPage;
-(void)scrollLeftPage;
-(char)scrollNextPage;
-(char)scrollPreviousPage;
-(void)scrollRectToVisible:(CGRect)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)scrollStatus;
-(char)showsDualPages;
-(char)readingContentCausesPageTurn;
-(id)firstVisibleElementInList;
-(id)firstResponderElement;
-(id)firstResponderElementForFocus;
-(char)elementOnSameLine:(id)arg1 ;
-(id)tableViewCellWithRowIndexPath:(NSRange)arg1 tableView:(id)arg2 ;
-(id)customRotorTitles;
-(char)allowCustomActionHintSpeakOverride;
-(char)retainsCustomRotorActionSetting;
-(id)customRotorActions;
-(char)shouldSpeakExplorerElementsAfterFocus;
-(char)fullscreenVideoViewIsVisible;
-(id)customPublicRotorNames;
-(id)customPublicRotorResultWithItem:(id)arg1 startElement:(id)arg2 ;
-(id)customRotorItemsForIndex:(int)arg1 ;
-(void)setSelectedTextRange:(NSRange)arg1 refreshBraille:(char)arg2 ;
-(void)clearElementForGesturedTextInput;
-(id)gesturedTextInputAttributes;
-(void)updateGesturedTextInputAttributes;
-(void)handwritingActivateKeyboardReturnKey;
-(int)lineStartPosition;
-(int)lineEndPosition;
-(NSRange)lineRangeForPosition:(unsigned)arg1 ;
-(char)shouldSpeakScrollStatusOnEntry;
-(char)includeDuringContentReading;
-(char)isReadingContent;
-(void)updatePageContent;
-(char)supportsRangeForLineNumber;
-(NSRange)rangeForLineNumber:(int)arg1 ;
-(id)stringForLineNumber:(int)arg1 ;
-(CGRect)frameForLineNumber:(int)arg1 ;
-(char)supportsFrameForRange;
-(CGRect)frameForRange:(NSRange)arg1 ;
-(int)lineNumberForPoint:(CGPoint)arg1 ;
-(void)setCurrentWordContextForBook:(id)arg1 ;
-(id)lineNumberAndColumnForPoint:(CGPoint)arg1 ;
-(NSRange)rangeForLineNumberAndColumn:(id)arg1 ;
-(id)previousTextNavigationElement;
-(id)nextTextNavigationElement;
-(id)valueForRange:(NSRange)arg1 ;
-(id)attributedValueForRange:(NSRange)arg1 ;
-(void)increaseWebSelection:(int)arg1 ;
-(void)decreaseWebSelection:(int)arg1 ;
-(void)deleteCharacterAtCursor;
-(void)replaceCharactersAtCursor:(unsigned)arg1 withString:(id)arg2 ;
-(CGRect)boundsForRange:(NSRange)arg1 ;
-(NSRange)textMarkerSelectionRange;
-(id)webAreaURL;
-(id)textMarkersForPoints:(id)arg1 ;
-(id)textNextMarker:(id)arg1 ;
-(id)textPreviousMarker:(id)arg1 ;
-(id)pageTextMarkerRange;
-(id)textLineEndMarker:(id)arg1 ;
-(NSRange)rangeForTextMarker:(id)arg1 ;
-(char)shouldAnnounceFontInfo;
-(char)isCameraIrisOpen;
-(char)isTourGuideRunning;
-(void)setSelectionToTextMarker:(id)arg1 ;
-(id)textLineStartMarker:(id)arg1 ;
-(CGRect)textMarkerFrame:(id)arg1 ;
-(id)elementForTextMarker:(id)arg1 ;
-(id)textMarkerArrayOfText:(id)arg1 ;
-(id)summaryElement;
-(id)headerElements;
-(void)addTitleElementToCache:(id)arg1 ;
-(char)elementActsAsTitleElement:(id)arg1 ;
-(void)updateTitleElements;
-(id)titleElements;
-(id)accessibleDescendants;
-(id)accessibleAncestor;
-(char)isInAppSwitcher;
-(char)isInAlert;
-(char)isInFolder;
-(char)isPineBoard;
-(char)isSystemWideApp;
-(char)isSetupBuddy;
-(char)isSafari;
-(char)isGoogleChrome;
-(char)isMaps;
-(char)isIBooks;
-(id)typingCandidateElements;
-(id)elementAtRow:(int)arg1 andColumn:(int)arg2 ;
-(void)jumpToTableIndex:(id)arg1 ;
-(NSRange)columnRange;
-(NSRange)indexPathAsRange;
-(char)startStopToggle;
-(char)softwareKeyboardSupportsGestureKeyboard;
-(char)isSoftwareKeyboardMimic;
-(char)usingHardwareKeyboard;
-(char)isSystemBatteryLow;
-(id)launchableApps;
-(id)appSwitcherApps;
-(void)launchAppWithDisplayID:(id)arg1 ;
-(CGPoint)centerPointOfScreen;
-(char)isDictationListening;
-(id)currentHardwareKeyboardLayout;
-(id)currentSoftwareKeyboardLanguage;
-(id)currentSoftwareKeyboardLayout;
-(char)isSystemWideGestureInProgress;
-(void)showBulletinBoard:(char)arg1 ;
-(void)restoreUserPreferencesChangedByHandwriting;
-(id)firstElementInStatusBar;
-(char)avoidAnnouncingDirectTouchArea;
-(id)lastElementInStatusBar;
-(char)isElementFirstElement:(char)arg1 orLastElement:(char)arg2 withType:(int)arg3 ;
-(char)shouldStartReadAllOnFocus;
-(char)webSearchResultsActive;
-(SCD_Struct_VO8)nonPersistentUniqueId;
-(char)pressTVRemoteUpButton;
-(char)pressTVRemoteDownButton;
-(char)pressTVRemoteLeftButton;
-(char)pressTVRemoteRightButton;
-(char)pressTVRemoteSelectButton;
-(char)pressTVRemoteMenuButton;
-(id)staticTextString;
-(char)shouldSpeakMathEquationTrait;
-(id)elementCommunityIdentifier;
-(id)isolatedWindow;
-(void)setAccelemoterDisabled:(char)arg1 ;
-(void)setRotationCapabilityEnabled:(char)arg1 ;
-(void)setEventCaptureMode:(int)arg1 ;
-(char)dispatchKeyboardEvent:(id)arg1 ;
-(void)repostEvent:(id)arg1 ;
-(void)sendBrightnessEvent:(id)arg1 ;
-(void)sendTouchCancelledEvent;
-(void)notifyAnnouncementFinished:(id)arg1 ;
-(char)supportsDirectionOrbManipulation;
-(void)performSimpleTapAtPoint:(CGPoint)arg1 ;
-(void)postStylusTouchAtPoint:(CGPoint)arg1 withForce:(float)arg2 altitude:(float)arg3 azimuth:(float)arg4 withContextId:(unsigned)arg5 ;
-(void)postStylusDragAtPoint:(CGPoint)arg1 withForce:(float)arg2 altitude:(float)arg3 azimuth:(float)arg4 withContextId:(unsigned)arg5 ;
-(void)postStylusLiftAtPoint:(CGPoint)arg1 withContextId:(unsigned)arg2 ;
-(void)postFingerTouchAtPoint:(CGPoint)arg1 withForce:(float)arg2 withContextId:(unsigned)arg3 ;
-(void)postFingerDragAtPoint:(CGPoint)arg1 withForce:(float)arg2 withContextId:(unsigned)arg3 ;
-(void)postFingerLiftAtPoint:(CGPoint)arg1 withContextId:(unsigned)arg2 ;
-(char)isInternationalKeyboardKey;
-(void)resetAspectMask;
-(int)differenceAspectMask:(id)arg1 ;
-(char)shouldSkipValidateElement;
-(void)setShouldSkipValidateElement:(char)arg1 ;
-(int)aspectMask;
-(id)arrayOfTraitsAsStrings;
-(id)regionDescription;
-(void)applyHeaderElementsToRequest:(id)arg1 ;
-(id)mathSegmentsWithGranularityLevel:(unsigned)arg1 ;
-(void)applyTextEditingInformation:(id)arg1 request:(id)arg2 ;
-(id)mathSummary;
-(void)announceTableInfo:(id)arg1 options:(int)arg2 ;
-(void)addTextualInformationToRequest:(id)arg1 options:(int)arg2 lastSeenLineAndColumn:(id)arg3 lastSeenContextDescriptors:(id)arg4 ;
-(void)addTextualInformationToRequest:(id)arg1 options:(int)arg2 lastSeenContextDescriptors:(id)arg3 ;
-(char)canNavigateMathSegments;
-(id)arrayOfTraitsAsStringsWithTraitOrder:(id)arg1 ;
-(id)arrayOfTraitsAsStringsWithTraitOrder:(id)arg1 language:(id)arg2 ;
-(void)_applyAttributesFromText:(id)arg1 toRequest:(id)arg2 withLanguage:(id)arg3 ;
-(id)_removeBadDeveloperDecisions:(id)arg1 ;
-(id)mathBrailleDescription;
-(NSRange)_brailleLineRangeForDescription:(id)arg1 position:(unsigned)arg2 ;
-(id)_copyMathTextualInformationWithBrailleLineRange:(NSRange*)arg1 brailleDescriptionRange:(NSRange*)arg2 position:(unsigned)arg3 rotorSelection:(id)arg4 shouldPreferRotorSelection:(char)arg5 ;
-(id)_languageRangesForText:(id)arg1 ;
-(void)_applyLanguageTokens:(id)arg1 attributedString:(id)arg2 ;
-(void)_applySelectedTrait:(id)arg1 ;
-(void)_applyLabelToRequest:(id)arg1 includeBlockQuote:(char)arg2 language:(id)arg3 ;
-(id)mathEquationDescription;
-(void)_applyCurrentStatus:(id)arg1 ;
-(void)_applyValueToRequest:(id)arg1 options:(int)arg2 lastSeenLineAndColumn:(id)arg3 language:(id)arg4 ;
-(void)_applyTraitsToRequest:(id)arg1 options:(int)arg2 ;
-(char)shouldAnnounceTableInfo;
-(void)_applyTableDimension:(id)arg1 ;
-(void)_applyExpandedStatus:(id)arg1 ;
-(void)_applyInvalidStatus:(id)arg1 ;
-(void)_applyRoleDescription:(id)arg1 ;
-(void)_configureAsSingleLinkElementWithRequest:(id)arg1 linkTraitTitle:(id)arg2 hint:(id)arg3 ;
-(void)_applyTableRowColumnSpan:(id)arg1 ;
-(void)_applyTableRowIndex:(id)arg1 options:(int)arg2 ;
-(void)_applyTableColumnIndex:(id)arg1 options:(int)arg2 ;
-(id)tableDimensionStringWithRow:(unsigned)arg1 andColumn:(unsigned)arg2 ;
-(char)hasExplicitRowInfo;
-(char)hasExplicitColumnInfo;
-(void)addTextualInformationToBrailleLine:(id)arg1 forPosition:(unsigned)arg2 rotorSelection:(id)arg3 shouldPreferRotorSelection:(char)arg4 lineRange:(NSRange*)arg5 descriptionRange:(NSRange*)arg6 lineRangeKnown:(char)arg7 isNewTouchContainer:(char)arg8 ;
-(id)_mathExpression;
-(id)_mathAXStringFromAttributedString:(id)arg1 ;
-(unsigned)_minimumSegmentDepthForExpression:(id)arg1 withMaximumDepth:(unsigned)arg2 ;
-(unsigned)_minimumSegmentDepth;
-(id)_rawMathEquation;
-(NSRange)rowRange;
-(int)mapFeatureType;
-(CGPoint)centerPoint;
-(void)scrollToPoint:(CGPoint)arg1 ;
-(CGPoint)convertPoint:(CGPoint)arg1 toContextId:(unsigned)arg2 ;
-(CGPoint)convertPoint:(CGPoint)arg1 fromContextId:(unsigned)arg2 ;
-(id)textMarkersForRange:(NSRange)arg1 ;
-(id)textMarkerRange;
-(id)textMarkerRangeForSelection;
-(id)stringForTextMarkers:(id)arg1 ;
-(id)textMarkerForPoint:(CGPoint)arg1 ;
-(void)dealloc;
-(CGRect)frame;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)description;
-(id)activeKeyboard;
-(char)isValid;
-(id)identifier;
-(id)bundleIdentifier;
-(id)url;
-(unsigned)displayId;
-(const CGPathRef)path;
-(NSString *)value;
-(id)copyWithZone:(NSZone*)arg1 ;
-(VOTElementSnapshot *)snapshot;
-(NSRange)selectedTextRange;
-(float)minValue;
-(NSString *)label;
-(unsigned long long)traits;
-(id)application;
-(void)updateFrame;
-(char)isHeader;
-(char)isPressed;
-(id)language;
-(char)isSystemLocked;
-(char)hasBadge;
-(id)instructions;
-(char)isApplication;
-(id)currentStatus;
-(char)isSiriTalkingOrListening;
-(char)isSystemSleeping;
-(void)showControlCenter:(char)arg1 ;
-(char)isVoiceControlRunning;
-(char)isValidForApplication:(id)arg1 ;
-(id)initWithAXElement:(AXUIElementRef)arg1 ;
-(id)initWithUIElement:(id)arg1 ;
-(AXUIElement *)uiElement;
-(id)_elementForAttribute:(int)arg1 shouldUpdateCache:(char)arg2 shouldFetchAttributes:(char)arg3 ;
-(id)elementForAttribute:(int)arg1 ;
-(unsigned)windowContextId;
-(const CGPathRef)convertPath:(CGPathRef)arg1 fromContextId:(unsigned)arg2 ;
-(CGRect)convertRect:(CGRect)arg1 fromContextId:(unsigned)arg2 ;
-(id)containerTypes;
-(id)touchContainer;
-(id)remoteParent;
-(VOTElement *)cachedRemoteParent;
-(void)setCachedRemoteParent:(VOTElement *)arg1 ;
-(CGPoint)visiblePoint;
-(void)insertText:(id)arg1 atPosition:(int)arg2 ;
-(id)elementsForAttribute:(int)arg1 ;
-(void)sendUserEventOccurred;
-(int)applicationOrientation;
-(id)nativeFocusElement;
-(id)nativeFocusPreferredElement;
-(id)firstElementInApplication;
-(id)firstElementInApplicationForFocus;
-(char)isSpringBoard;
-(id)explorerElements;
-(id)remoteApplication;
-(char)isAccessibleElement;
-(CGRect)textCursorFrame;
-(char)isTouchContainer;
-(id)textOperations;
-(char)setNativeFocus;
-(void)insertTextAtCurrentPosition:(id)arg1 ;
-(void)updateLabel;
-(char)isRequired;
-(unsigned)columnCount;
-(float)maxValue;
-(char)isRTL;
-(id)hint;
-(id)parentTableView;
-(void)updateCache;
-(id)pageContent;
-(char)isAccessibilityOpaqueElementProvider;
-(int)pid;
-(unsigned)rowCount;
-(void)updateValue;
-(void)setDeviceOrientation:(int)arg1 ;
-(char)isAlive;
@end
