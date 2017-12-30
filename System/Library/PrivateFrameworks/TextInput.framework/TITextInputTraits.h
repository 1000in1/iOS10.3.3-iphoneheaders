/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:00 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput/TextInput-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface TITextInputTraits : NSObject <NSCopying, NSSecureCoding> {

	SCD_Union_TI17 _mask;
	NSString* _textContentType;
	NSString* _recentInputIdentifier;

}

@property (assign,nonatomic) unsigned autocapitalizationType; 
@property (assign,nonatomic) unsigned autocorrectionType; 
@property (assign,nonatomic) unsigned spellCheckingType; 
@property (assign,nonatomic) unsigned keyboardType; 
@property (assign,nonatomic) unsigned keyboardAppearance; 
@property (assign,nonatomic) unsigned returnKeyType; 
@property (assign,nonatomic) char enablesReturnKeyAutomatically; 
@property (assign,nonatomic) char secureTextEntry; 
@property (nonatomic,copy) NSString * recentInputIdentifier;                  //@synthesize recentInputIdentifier=_recentInputIdentifier - In the implementation block
@property (nonatomic,copy) NSString * textContentType;                        //@synthesize textContentType=_textContentType - In the implementation block
@property (assign,nonatomic) unsigned textScriptType; 
@property (assign,nonatomic) char disablePrediction; 
+(id)traitsForUITextInputTraits:(id)arg1 ;
+(unsigned)translateToTextInputAutocapitalizationType:(int)arg1 ;
+(unsigned)translateToTextInputAutocorrectionType:(int)arg1 ;
+(unsigned)translateToTextInputSpellCheckingType:(int)arg1 ;
+(unsigned)translateToTextInputKeyboardType:(int)arg1 ;
+(unsigned)translateToTextInputKeyboardAppearance:(int)arg1 ;
+(unsigned)translateToTextInputReturnKeyType:(int)arg1 ;
+(unsigned)translateToTextScriptType:(int)arg1 ;
+(id)translateToTextInputRecentInputIdentifier:(id)arg1 ;
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)autocapitalizationType;
-(void)setAutocapitalizationType:(unsigned)arg1 ;
-(unsigned)autocorrectionType;
-(void)setAutocorrectionType:(unsigned)arg1 ;
-(unsigned)spellCheckingType;
-(void)setSpellCheckingType:(unsigned)arg1 ;
-(unsigned)keyboardType;
-(void)setKeyboardType:(unsigned)arg1 ;
-(unsigned)keyboardAppearance;
-(void)setKeyboardAppearance:(unsigned)arg1 ;
-(unsigned)returnKeyType;
-(void)setReturnKeyType:(unsigned)arg1 ;
-(char)enablesReturnKeyAutomatically;
-(void)setEnablesReturnKeyAutomatically:(char)arg1 ;
-(void)setSecureTextEntry:(char)arg1 ;
-(NSString *)textContentType;
-(void)setTextContentType:(NSString *)arg1 ;
-(char)disablePrediction;
-(NSString *)recentInputIdentifier;
-(void)setRecentInputIdentifier:(NSString *)arg1 ;
-(void)setDisablePrediction:(char)arg1 ;
-(unsigned)textScriptType;
-(void)setTextScriptType:(unsigned)arg1 ;
-(char)secureTextEntry;
@end

