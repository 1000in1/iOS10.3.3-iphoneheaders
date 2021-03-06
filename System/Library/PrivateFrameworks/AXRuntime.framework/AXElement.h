/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:51:53 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXRuntime/AXRuntime-Structs.h>
#import <AXRuntime/AXGroupable.h>

@class AXElementGroup, AXUIElement, NSArray, NSString, NSURL, NSDictionary;

@interface AXElement : NSObject <AXGroupable> {

	char _representsScannerGroup;
	AXUIElement* _uiElement;
	AXElementGroup* _parentGroup;
	AXElement* _cachedRemoteParent;
	AXElement* _cachedRemoteParentForContextID;
	CGPathRef _cachedPath;
	CGRect _cachedFrame;
	CGRect _cachedVisibleFrame;

}

@property (nonatomic,retain) AXUIElement * uiElement;                                                            //@synthesize uiElement=_uiElement - In the implementation block
@property (nonatomic,retain) AXElement * cachedRemoteParent;                                                     //@synthesize cachedRemoteParent=_cachedRemoteParent - In the implementation block
@property (nonatomic,retain) AXElement * cachedRemoteParentForContextID;                                         //@synthesize cachedRemoteParentForContextID=_cachedRemoteParentForContextID - In the implementation block
@property (nonatomic,retain) CGPathRef cachedPath;                                                               //@synthesize cachedPath=_cachedPath - In the implementation block
@property (assign,nonatomic) CGRect cachedFrame;                                                                 //@synthesize cachedFrame=_cachedFrame - In the implementation block
@property (assign,nonatomic) CGRect cachedVisibleFrame;                                                          //@synthesize cachedVisibleFrame=_cachedVisibleFrame - In the implementation block
@property (nonatomic,readonly) AXUIElementRef elementRef; 
@property (nonatomic,readonly) char isSystemWideElement; 
@property (assign,getter=isPassivelyListeningForEvents,nonatomic) char passivelyListeningForEvents; 
@property (nonatomic,readonly) AXElement * currentApplication; 
@property (nonatomic,readonly) NSArray * currentApplications; 
@property (nonatomic,readonly) NSArray * currentApplicationsIgnoringSiri; 
@property (nonatomic,readonly) AXElement * springBoardApplication; 
@property (nonatomic,readonly) AXElement * systemApplication; 
@property (nonatomic,readonly) AXElement * accessibilityUIServerApplication; 
@property (nonatomic,readonly) char isScreenLocked; 
@property (nonatomic,readonly) int applicationOrientation; 
@property (nonatomic,readonly) NSArray * visibleElements; 
@property (nonatomic,readonly) AXElement * firstResponder; 
@property (nonatomic,readonly) AXElement * nativeFocusElement; 
@property (nonatomic,readonly) AXElement * nativeFocusPreferredElement; 
@property (nonatomic,readonly) AXElement * firstElementInApplication; 
@property (nonatomic,readonly) AXElement * firstElementInApplicationForFocus; 
@property (nonatomic,readonly) NSString * bundleId; 
@property (nonatomic,readonly) char isSpringBoard; 
@property (nonatomic,readonly) char isSystemApplication; 
@property (nonatomic,readonly) char isAXUIServer; 
@property (nonatomic,readonly) NSArray * explorerElements; 
@property (nonatomic,readonly) NSArray * nativeFocusableElements; 
@property (nonatomic,readonly) NSArray * elementsWithSemanticContext; 
@property (nonatomic,readonly) NSArray * siriContentNativeFocusableElements; 
@property (nonatomic,readonly) NSArray * siriContentElementsWithSemanticContext; 
@property (nonatomic,readonly) AXElement * application; 
@property (nonatomic,readonly) char isAccessibleElement; 
@property (nonatomic,readonly) char isVisible; 
@property (nonatomic,readonly) NSString * label; 
@property (nonatomic,readonly) NSString * hint; 
@property (assign,nonatomic) NSString * value; 
@property (nonatomic,readonly) CGPathRef path; 
@property (nonatomic,readonly) NSURL * url; 
@property (nonatomic,readonly) NSString * language; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) unsigned long long traits; 
@property (nonatomic,readonly) CGRect visibleFrame; 
@property (nonatomic,readonly) CGRect textCursorFrame; 
@property (nonatomic,readonly) CGPoint centerPoint; 
@property (nonatomic,readonly) CGPoint visiblePoint; 
@property (nonatomic,readonly) CGRect focusableFrameForZoom; 
@property (nonatomic,readonly) char isValid; 
@property (nonatomic,readonly) AXElement * touchContainer; 
@property (nonatomic,readonly) char isKeyboardKey; 
@property (nonatomic,readonly) char isTouchContainer; 
@property (nonatomic,readonly) char hasWebContent; 
@property (nonatomic,readonly) char hasTextEntry; 
@property (nonatomic,readonly) char isMathEquation; 
@property (nonatomic,readonly) unsigned windowContextId; 
@property (nonatomic,readonly) NSArray * variantKeys; 
@property (nonatomic,readonly) char hasVariantKeys; 
@property (nonatomic,readonly) NSArray * textOperations; 
@property (nonatomic,readonly) NSArray * typingCandidates; 
@property (assign,nonatomic) char assistiveTechFocused; 
@property (nonatomic,readonly) NSArray * customActions; 
@property (nonatomic,readonly) char isAccessibilityOpaqueElementProvider; 
@property (nonatomic,readonly) NSDictionary * semanticContext; 
@property (nonatomic,readonly) AXElement * remoteParent; 
@property (nonatomic,readonly) int scanningBehaviorTraits; 
@property (assign,nonatomic) NSRange selectedTextRange; 
@property (getter=isNativeFocused,nonatomic,readonly) char nativeFocus; 
@property (nonatomic,readonly) char canPerformEscape; 
@property (nonatomic,readonly) char canPerformZoom; 
@property (nonatomic,readonly) NSArray * supportedGestures; 
@property (nonatomic,readonly) char isScannerElement; 
@property (nonatomic,readonly) char representsScannerGroup;                                                      //@synthesize representsScannerGroup=_representsScannerGroup - In the implementation block
@property (nonatomic,readonly) int scannerActivateBehavior; 
@property (nonatomic,retain) AXElement * autoscrollTarget; 
@property (nonatomic,readonly) char isAutoscrolling; 
@property (nonatomic,readonly) NSArray * children; 
@property (nonatomic,readonly) NSArray * parent; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CGRect frame; 
@property (assign,nonatomic) AXElementGroup * parentGroup;                                                       //@synthesize parentGroup=_parentGroup - In the implementation block
+(id)elementWithUIElement:(id)arg1 ;
+(id)systemWideElement;
+(id)elementWithAXUIElement:(AXUIElementRef)arg1 ;
+(id)elementsWithUIElements:(id)arg1 ;
+(id)primaryApp;
+(void)unregisterNotifications:(id)arg1 ;
+(void)registerNotifications:(id)arg1 withIdentifier:(id)arg2 withHandler:(/*^block*/id)arg3 ;
+(id)elementAtCoordinate:(CGPoint)arg1 withVisualPadding:(char)arg2 ;
-(CGPoint)centerPoint;
-(CGPoint)convertPoint:(CGPoint)arg1 toContextId:(unsigned)arg2 ;
-(CGPoint)convertPoint:(CGPoint)arg1 fromContextId:(unsigned)arg2 ;
-(void)dealloc;
-(CGRect)frame;
-(char)isEqual:(id)arg1 ;
-(NSString *)description;
-(char)isValid;
-(NSString *)identifier;
-(NSURL *)url;
-(AXElement *)firstResponder;
-(CGPathRef)path;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(NSRange)selectedTextRange;
-(void)setSelectedTextRange:(NSRange)arg1 ;
-(void)_updateLabel;
-(NSString *)label;
-(char)isVisible;
-(unsigned long long)traits;
-(CGRect)visibleFrame;
-(AXElement *)application;
-(char)isGroup;
-(char)press;
-(NSString *)bundleId;
-(NSString *)language;
-(char)longPress;
-(char)performAction:(int)arg1 ;
-(NSArray *)visibleElements;
-(id)previousElementsWithCount:(unsigned)arg1 ;
-(id)nextElementsWithCount:(unsigned)arg1 ;
-(void)updateCache:(int)arg1 ;
-(id)initWithAXUIElement:(AXUIElementRef)arg1 ;
-(id)initWithUIElement:(id)arg1 ;
-(AXElement *)systemApplication;
-(NSArray *)currentApplications;
-(AXUIElement *)uiElement;
-(void)setCachedVisibleFrame:(CGRect)arg1 ;
-(void)setCachedFrame:(CGRect)arg1 ;
-(id)_elementForAttribute:(int)arg1 shouldUpdateCache:(char)arg2 shouldFetchAttributes:(char)arg3 ;
-(char)isSystemWideElement;
-(id)_axElementsForAXUIElements:(id)arg1 ;
-(id)elementForAttribute:(int)arg1 ;
-(unsigned)windowContextId;
-(CGPathRef)convertPath:(CGPathRef)arg1 fromContextId:(unsigned)arg2 ;
-(CGRect)cachedFrame;
-(CGRect)convertRect:(CGRect)arg1 fromContextId:(unsigned)arg2 ;
-(CGRect)cachedVisibleFrame;
-(id)containerTypes;
-(char)hasAllTraits:(unsigned long long)arg1 ;
-(char)hasAnyTraits:(unsigned long long)arg1 ;
-(AXElement *)touchContainer;
-(AXElement *)remoteParent;
-(NSArray *)customActions;
-(AXElement *)cachedRemoteParent;
-(void)setCachedRemoteParent:(AXElement *)arg1 ;
-(AXElement *)cachedRemoteParentForContextID;
-(void)setCachedRemoteParentForContextID:(AXElement *)arg1 ;
-(char)hasWebContent;
-(char)hasTextEntry;
-(char)isKeyboardKey;
-(char)isMathEquation;
-(char)canPerformActivate;
-(char)canPerformSecondaryActivate;
-(char)canPerformEscape;
-(char)canPerformZoom;
-(char)canPerformTrackingDetail;
-(id)_remoteParentForContextID;
-(char)_performActivate;
-(CGPoint)visiblePoint;
-(char)performAction:(int)arg1 withValue:(id)arg2 ;
-(char)_zoomInOrOut:(char)arg1 ;
-(void)insertText:(id)arg1 atPosition:(int)arg2 ;
-(id)highestAncestorGroup;
-(id)keyboardContainer;
-(id)elementForAttribute:(int)arg1 parameter:(id)arg2 ;
-(id)elementsForAttribute:(int)arg1 ;
-(AXUIElementRef)elementRef;
-(char)isPassivelyListeningForEvents;
-(void)setPassivelyListeningForEvents:(char)arg1 ;
-(AXElement *)currentApplication;
-(NSArray *)currentApplicationsIgnoringSiri;
-(AXElement *)springBoardApplication;
-(AXElement *)accessibilityUIServerApplication;
-(void)sendUserEventOccurred;
-(char)systemPressTVSelectButton;
-(char)systemPressTVPlayPauseButton;
-(char)systemPressTVUpButton;
-(char)systemPressTVDownButton;
-(char)systemPressTVLeftButton;
-(char)systemPressTVRightButton;
-(char)systemPressTVMenuButton;
-(char)systemPressTVHomeButton;
-(char)systemPressTVSiriButton;
-(void)clearCachedFrame:(char)arg1 cachedVisibleFrame:(char)arg2 ;
-(int)applicationOrientation;
-(id)firstResponderForFocus;
-(AXElement *)nativeFocusElement;
-(AXElement *)nativeFocusPreferredElement;
-(AXElement *)firstElementInApplication;
-(AXElement *)firstElementInApplicationForFocus;
-(char)isSpringBoard;
-(char)isAXUIServer;
-(NSArray *)explorerElements;
-(NSArray *)nativeFocusableElements;
-(NSArray *)elementsWithSemanticContext;
-(NSArray *)siriContentNativeFocusableElements;
-(NSArray *)siriContentElementsWithSemanticContext;
-(id)elementsMatchingText:(id)arg1 ;
-(id)remoteApplication;
-(char)isAccessibleElement;
-(id)auditIssuesForOptions:(id)arg1 ;
-(CGRect)textCursorFrame;
-(CGRect)focusableFrameForZoom;
-(char)isTouchContainer;
-(NSArray *)variantKeys;
-(char)hasVariantKeys;
-(NSArray *)textOperations;
-(NSArray *)typingCandidates;
-(void)setAssistiveTechFocused:(char)arg1 ;
-(char)assistiveTechFocused;
-(char)hasOnlyTraits:(unsigned long long)arg1 ;
-(float)distanceToElement:(id)arg1 ;
-(char)isNativeFocused;
-(char)viewHierarchyHasNativeFocus;
-(char)setNativeFocus;
-(NSDictionary *)semanticContext;
-(int)scanningBehaviorTraits;
-(void)scrollToVisible;
-(char)canScrollInAtLeastOneDirection;
-(char)supportsAction:(int)arg1 ;
-(AXUIElementRef)scrollAncestorForScrollAction:(int)arg1 ;
-(NSArray *)supportedGestures;
-(char)zoomIn;
-(char)zoomOut;
-(void)insertTextAtCurrentPosition:(id)arg1 ;
-(char)isScannerElement;
-(int)scannerActivateBehavior;
-(AXElement *)autoscrollTarget;
-(void)setAutoscrollTarget:(AXElement *)arg1 ;
-(void)increaseAutoscrollSpeed;
-(void)decreaseAutoscrollSpeed;
-(char)pressTVSelectButton;
-(char)pressTVBackButton;
-(char)pressTVMenuButton;
-(char)pressTVPlayPauseButton;
-(char)pressTVUpButton;
-(char)pressTVDownButton;
-(char)pressTVLeftButton;
-(char)pressTVRightButton;
-(char)pressTVPlayButton;
-(char)pressTVPauseButton;
-(char)pressTVStopButton;
-(char)pressTVRewindButton;
-(char)pressTVFastForwardButton;
-(char)pressTVNextTrackButton;
-(char)pressTVPreviousTrackButton;
-(char)pressTVSkipForwardsButton;
-(char)pressTVSkipBackwardsButton;
-(char)pressTVDataOnScreenButton;
-(char)pressTVMicButton;
-(void)setUiElement:(AXUIElement *)arg1 ;
-(char)representsScannerGroup;
-(char)isScreenLocked;
-(void)autoscrollInDirection:(int)arg1 ;
-(void)scrollToBottom;
-(NSArray *)children;
-(NSArray *)parent;
-(void)setCachedPath:(CGPathRef)arg1 ;
-(CGPathRef)cachedPath;
-(void)scrollToTop;
-(NSString *)hint;
-(void)setParentGroup:(AXElementGroup *)arg1 ;
-(AXElementGroup *)parentGroup;
-(char)isMap;
-(char)isAutoscrolling;
-(void)pauseAutoscrolling;
-(char)isAccessibilityOpaqueElementProvider;
-(char)isSystemApplication;
-(float)distanceToPoint:(CGPoint)arg1 ;
@end

