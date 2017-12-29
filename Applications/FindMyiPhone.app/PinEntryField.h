/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:22 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/FindMyiPhone.app/FindMyiPhone
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FindMyiPhone/FindMyiPhone-Structs.h>
#import <UIKit/UIControl.h>
#import <UIKit/UIKeyInput.h>

@protocol PinEntryFieldDelegate;
@class NSMutableString, UILabel, NSString;

@interface PinEntryField : UIControl <UIKeyInput> {

	int _numberOfDigits;
	id<PinEntryFieldDelegate> _delegate;
	NSMutableString* _buffer;
	UILabel* _internalLabel;

}

@property (nonatomic,retain) NSMutableString * buffer;                                   //@synthesize buffer=_buffer - In the implementation block
@property (nonatomic,retain) UILabel * internalLabel;                                    //@synthesize internalLabel=_internalLabel - In the implementation block
@property (assign,nonatomic) int numberOfDigits;                                         //@synthesize numberOfDigits=_numberOfDigits - In the implementation block
@property (assign,nonatomic,__weak) id<PinEntryFieldDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) int autocapitalizationType; 
@property (assign,nonatomic) int autocorrectionType; 
@property (assign,nonatomic) int spellCheckingType; 
@property (assign,nonatomic) int keyboardType; 
@property (assign,nonatomic) int keyboardAppearance; 
@property (assign,nonatomic) int returnKeyType; 
@property (assign,nonatomic) char enablesReturnKeyAutomatically; 
@property (assign,getter=isSecureTextEntry,nonatomic) char secureTextEntry; 
@property (nonatomic,copy) NSString * textContentType; 
@property (nonatomic,readonly) char hasText; 
-(void)setNumberOfDigits:(int)arg1 ;
-(void)updateInternalLabelForText:(id)arg1 ;
-(UILabel *)internalLabel;
-(void)setInternalLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<PinEntryFieldDelegate>)arg1 ;
-(id<PinEntryFieldDelegate>)delegate;
-(void)reset;
-(char)becomeFirstResponder;
-(void)awakeFromNib;
-(char)canBecomeFirstResponder;
-(CGSize)intrinsicContentSize;
-(void)insertText:(id)arg1 ;
-(void)deleteBackward;
-(char)hasText;
-(int)keyboardType;
-(void)prepareForInterfaceBuilder;
-(void)setBuffer:(NSMutableString *)arg1 ;
-(NSMutableString *)buffer;
-(int)numberOfDigits;
-(void)commonSetup;
@end
