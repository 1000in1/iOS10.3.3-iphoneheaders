/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:09 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <assistivetouchd/assistivetouchd-Structs.h>
#import <assistivetouchd/SCATElement.h>

@class NSString, NSArray, NSNumber, SCATAuxiliaryElementManager, AXElementGroup;

@interface SCATSimpleElement : NSObject <SCATElement> {

	AXElementGroup* _parentGroup;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CGRect frame; 
@property (assign,nonatomic) AXElementGroup * parentGroup;                                             //@synthesize parentGroup=_parentGroup - In the implementation block
@property (nonatomic,readonly) CGRect scatFrame; 
@property (nonatomic,readonly) CGPoint scatCenterPoint; 
@property (nonatomic,readonly) CGPathRef scatPath; 
@property (nonatomic,readonly) char scatPathIsInSceneReferenceSpace; 
@property (nonatomic,readonly) unsigned long long scatTraits; 
@property (nonatomic,readonly) int scatScanningBehaviorTraits; 
@property (nonatomic,readonly) char scatIsValid; 
@property (nonatomic,readonly) char scatIsAXElement; 
@property (nonatomic,readonly) char scatIndicatesOwnFocus; 
@property (nonatomic,readonly) char scatShouldActivateDirectly; 
@property (nonatomic,readonly) int scatActivateBehavior; 
@property (nonatomic,readonly) NSString * scatSpeakableDescription; 
@property (nonatomic,readonly) char scatIsKeyboardKey; 
@property (nonatomic,readonly) char scatCanShowAlternateKeys; 
@property (nonatomic,readonly) NSArray * scatAlternateKeys; 
@property (nonatomic,readonly) CGRect scatTextCursorFrame; 
@property (nonatomic,readonly) NSNumber * scatOverrideCursorTheme; 
@property (nonatomic,readonly) char scatHidesGroupCursorWhenFocused; 
@property (assign,nonatomic) char scatAssistiveTechFocused; 
@property (nonatomic,readonly) NSArray * scatCustomActions; 
@property (nonatomic,readonly) char scatShouldAllowDeferFocusToNativeFocusedElement; 
@property (nonatomic,readonly) char scatIsMemberOfGroup; 
@property (nonatomic,readonly) char scatIsAuxiliaryElement; 
@property (nonatomic,readonly) SCATAuxiliaryElementManager * scatAuxiliaryElementManager; 
@property (nonatomic,readonly) char scatIsOnScreen; 
@property (nonatomic,readonly) char scatBeginScanningFromSelfAfterActivation; 
-(char)scatPerformAction:(int)arg1 ;
-(SCATAuxiliaryElementManager *)scatAuxiliaryElementManager;
-(char)scatIndicatesOwnFocus;
-(char)scatShouldAllowDeferFocusToNativeFocusedElement;
-(char)scatIsAuxiliaryElement;
-(char)scatHidesGroupCursorWhenFocused;
-(char)scatBeginScanningFromSelfAfterActivation;
-(char)scatSupportsAction:(int)arg1 ;
-(char)scatIsAXElement;
-(NSString *)scatSpeakableDescription;
-(CGPathRef)scatPath;
-(NSNumber *)scatOverrideCursorTheme;
-(CGRect)scatFrame;
-(char)scatIsKeyboardKey;
-(NSArray *)scatAlternateKeys;
-(CGPoint)scatCenterPoint;
-(void)setScatAssistiveTechFocused:(char)arg1 ;
-(unsigned long long)scatTraits;
-(int)scatActivateBehavior;
-(char)scatShouldActivateDirectly;
-(id)scrollableElement;
-(NSArray *)scatCustomActions;
-(char)scatCanShowAlternateKeys;
-(id)scatSupportedGestures;
-(char)scatPerformAction:(int)arg1 withValue:(id)arg2 ;
-(char)scatCanScrollInAtLeastOneDirection;
-(char)scatIsValid;
-(char)scatPathIsInSceneReferenceSpace;
-(CGRect)scatTextCursorFrame;
-(char)scatAssistiveTechFocused;
-(void)scatScrollToVisible;
-(char)scatIsMemberOfGroup;
-(char)scatIsOnScreen;
-(CGRect)frame;
-(char)isGroup;
-(id)highestAncestorGroup;
-(id)keyboardContainer;
-(int)scatScanningBehaviorTraits;
-(void)setParentGroup:(AXElementGroup *)arg1 ;
-(AXElementGroup *)parentGroup;
@end

