/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:22:54 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Assistant/UIPlugins/System.siriUIBundle/System
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <System/System-Structs.h>
#import <UIKit/UIView.h>
#import <System/AFUIUtteranceCorrectionTextViewDelegate.h>

@protocol SiriUserUtteranceViewDelegate;
@class SiriSpeechRecognizedCorrectionTextView, UILabel, UIView, NSArray, UIVisualEffectView, NSString;

@interface SiriUserUtteranceView : UIView <AFUIUtteranceCorrectionTextViewDelegate> {

	SiriSpeechRecognizedCorrectionTextView* _editableText;
	UILabel* _tapToEditLabel;
	UILabel* _leadingQuoteLabel;
	UILabel* _trailingQuoteLabel;
	UIView* _backgroundHighlightView;
	NSArray* _streamingResultsToSetDuringLayout;
	UIVisualEffectView* _vibrancyView;
	char _hasDictationResult;
	char _editable;
	char _didCorrect;
	id<SiriUserUtteranceViewDelegate> _delegate;
	int _textAlignment;

}

@property (assign,nonatomic,__weak) id<SiriUserUtteranceViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * text; 
@property (assign,nonatomic) int textAlignment;                                              //@synthesize textAlignment=_textAlignment - In the implementation block
@property (assign,nonatomic) char editable;                                                  //@synthesize editable=_editable - In the implementation block
@property (assign,nonatomic) char didCorrect;                                                //@synthesize didCorrect=_didCorrect - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(float)insertionAnimatedZPosition;
-(id)utteranceTextView;
-(void)setDidCorrect:(char)arg1 ;
-(id)utteranceTextFont;
-(char)didCorrect;
-(void)utteranceTextDidReceiveReturnKey:(id)arg1 ;
-(void)clearDictationResults;
-(float)_snippetExtraHeight;
-(void)setStreamingText:(id)arg1 ;
-(void)didFinishRecognition;
-(void)setDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2 ;
-(void)replaceDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2 ;
-(void)setUtteranceTextFromAlternative:(id)arg1 ;
-(void)utteranceTextDidBecomeFirstResponder:(id)arg1 ;
-(void)utteranceTextDidResignFirstResponder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<SiriUserUtteranceViewDelegate>)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<SiriUserUtteranceViewDelegate>)delegate;
-(void)setTextAlignment:(int)arg1 ;
-(char)resignFirstResponder;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(char)isFirstResponder;
-(int)textAlignment;
-(void)beginEditing;
-(char)canResignFirstResponder;
-(void)setEditable:(char)arg1 ;
-(void)textViewDidEndEditing:(id)arg1 ;
-(char)textViewShouldBeginEditing:(id)arg1 ;
-(char)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)textViewDidChange:(id)arg1 ;
-(void)_handleTap:(id)arg1 ;
-(char)editable;
-(void)endEditingAndCorrect:(char)arg1 ;
@end

