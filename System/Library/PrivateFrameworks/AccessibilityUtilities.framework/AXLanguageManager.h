/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:51:57 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AXDialectMap, NSArray, NSCharacterSet, NSLocale, NSString;

@interface AXLanguageManager : NSObject {

	AXDialectMap* _dialectForSystemLanguage;
	AXDialectMap* _dialectForCurrentLocale;
	NSArray* _langMaps;
	NSCharacterSet* _commonCharacters;
	NSLocale* _userLocale;

}

@property (nonatomic,retain) NSArray * langMaps;                                   //@synthesize langMaps=_langMaps - In the implementation block
@property (nonatomic,copy) NSLocale * userLocale;                                  //@synthesize userLocale=_userLocale - In the implementation block
@property (nonatomic,retain) NSCharacterSet * commonCharacters;                    //@synthesize commonCharacters=_commonCharacters - In the implementation block
@property (assign,nonatomic) AXDialectMap * dialectForSystemLanguage; 
@property (assign,nonatomic) AXDialectMap * dialectForCurrentLocale; 
@property (nonatomic,readonly) NSString * systemLanguageID; 
@property (nonatomic,readonly) AXDialectMap * dialectForUserLocale; 
+(id)sharedInstance;
+(id)stringByReplacingFatWidthCharactersWithBasicCharacters:(id)arg1 ;
+(id)nonlocalizedNameForLanguage:(id)arg1 ;
+(id)commonPunctuationCharacters;
+(id)doNotTranslateWords;
+(id)stringByReplacingEmojiCharactersWithEmojiDescriptions:(id)arg1 ;
+(id)nameForAlternativeVoiceIdentifier:(id)arg1 ;
+(id)dialectForAlternativeVoiceIdentifier:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(id)dialectForLanguageID:(id)arg1 ;
-(AXDialectMap *)dialectForSystemLanguage;
-(NSString *)systemLanguageID;
-(id)basicDescription;
-(NSLocale *)userLocale;
-(char)isCharacterCommon:(unsigned short)arg1 ;
-(void)setUserLocale:(NSLocale *)arg1 ;
-(void)_handleUserLocaleDidChange:(id)arg1 ;
-(void)setCommonCharacters:(NSCharacterSet *)arg1 ;
-(id)_loadLangMaps;
-(void)setLangMaps:(NSArray *)arg1 ;
-(void)setDialectForSystemLanguage:(AXDialectMap *)arg1 ;
-(void)setDialectForCurrentLocale:(AXDialectMap *)arg1 ;
-(NSArray *)langMaps;
-(AXDialectMap *)dialectForCurrentLocale;
-(void)updateCachedDialects;
-(id)dialectsThatCanSpeakCharacter:(unsigned short)arg1 ;
-(id)_preferredLanguageIDsFromUserSelectedKeyboards;
-(NSCharacterSet *)commonCharacters;
-(id)characterSetForRanges:(id)arg1 ;
-(AXDialectMap *)dialectForUserLocale;
-(id)dialectThatCanSpeakCharacter:(unsigned short)arg1 ;
-(id)ambiguousDialectsFromUserKeyboardPreferences;
-(char)isStringComposedByCommonCharacters:(id)arg1 ;
-(id)descriptionOfWord:(id)arg1 forLanguage:(id)arg2 ;
@end

