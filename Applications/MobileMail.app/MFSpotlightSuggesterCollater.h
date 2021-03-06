/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:53 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSProgressReporting.h>

@class NSProgress, MFSpotlightContactsHelper, NSArray, MFLazyCache, NSMutableArray, NSMutableSet, NSMutableDictionary, MFSearchSuggestionPhraseManager, NSString;

@interface MFSpotlightSuggesterCollater : NSObject <NSProgressReporting> {

	NSProgress* _progress;
	MFSpotlightContactsHelper* _contactsHelper;
	NSArray* _personAttributes;
	MFLazyCache* _matchedFieldsForRelevanceCache;
	NSMutableArray* _orderedDisplayNames;
	NSMutableSet* _displayNameWithExactMatch;
	NSMutableDictionary* _displayNameToAttributes;
	NSMutableDictionary* _displayNameToAlignmentScore;
	NSMutableDictionary* _displayNameToPerfectAlignmentScore;
	NSMutableDictionary* _displayNameToRealDisplayName;
	NSMutableDictionary* _displayNameToAttributeValues;
	NSMutableDictionary* _displayNameToContact;
	MFSearchSuggestionPhraseManager* _phraseManager;
	NSArray* _attributes;

}

@property (nonatomic,retain,readonly) MFSearchSuggestionPhraseManager * phraseManager;              //@synthesize phraseManager=_phraseManager - In the implementation block
@property (nonatomic,copy,readonly) NSArray * attributes;                                           //@synthesize attributes=_attributes - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSProgress * progress; 
+(id)categoryForAttributes:(id)arg1 ;
+(id)collaterWithPhraseManager:(id)arg1 attributes:(id)arg2 ;
-(id)initWithWithPhraseManager:(id)arg1 attributes:(id)arg2 ;
-(void)_addSuggestionWithEmailAddress:(id)arg1 displayName:(id)arg2 ;
-(void)_performInterruptibleWork:(/*^block*/id)arg1 ;
-(void)_addSuggestionWithEmailAddress:(id)arg1 displayName:(id)arg2 alignmentScore:(id)arg3 ;
-(void)addSuggestionWithDisplayName:(id)arg1 attributeName:(id)arg2 attributeValues:(id)arg3 contact:(id)arg4 comparisonResult:(id)arg5 alignmentScore:(id)arg6 ;
-(MFSearchSuggestionPhraseManager *)phraseManager;
-(id)_matchedAttributesForResultRelevance:(id)arg1 ;
-(void)addEmailAddresses:(id)arg1 ;
-(void)addRecentContacts:(id)arg1 ;
-(void)addSearchableItems:(id)arg1 ;
-(id)sortedSuggestions;
-(id)init;
-(void)dealloc;
-(unsigned)count;
-(NSArray *)attributes;
-(NSProgress *)progress;
@end

