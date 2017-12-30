/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:54 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITextViewDelegate.h>
#import <libobjc.A.dylib/NSLayoutManagerDelegate.h>

@protocol MFCollapsibleHeaderContentViewDelegate;
@class UITextView, NSLayoutConstraint, NSString;

@interface MFCollapsibleHeaderContentView : UIView <UITextViewDelegate, NSLayoutManagerDelegate> {

	CGPoint _firstCharacterPosition;
	float _fontCapHeight;
	char _wantsAutomaticTextAlignment;
	char _isPrimary;
	id<MFCollapsibleHeaderContentViewDelegate> _delegate;
	float _topToFirstBaseline;
	float _lastBaselineToBottom;
	float _contentWidth;
	unsigned _textAlignment;
	UITextView* _textView;
	NSLayoutConstraint* _topToFirstBaselineConstraint;
	NSLayoutConstraint* _lastBaselineToBottomConstraint;

}

@property (nonatomic,retain) UITextView * textView;                                                   //@synthesize textView=_textView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * topToFirstBaselineConstraint;                       //@synthesize topToFirstBaselineConstraint=_topToFirstBaselineConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * lastBaselineToBottomConstraint;                     //@synthesize lastBaselineToBottomConstraint=_lastBaselineToBottomConstraint - In the implementation block
@property (assign,nonatomic,__weak) id<MFCollapsibleHeaderContentViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) float topToFirstBaseline;                                                //@synthesize topToFirstBaseline=_topToFirstBaseline - In the implementation block
@property (assign,nonatomic) float lastBaselineToBottom;                                              //@synthesize lastBaselineToBottom=_lastBaselineToBottom - In the implementation block
@property (assign,nonatomic) float contentWidth;                                                      //@synthesize contentWidth=_contentWidth - In the implementation block
@property (assign,nonatomic) unsigned numberOfLines; 
@property (assign,nonatomic) char isPrimary;                                                          //@synthesize isPrimary=_isPrimary - In the implementation block
@property (assign,nonatomic) unsigned textAlignment;                                                  //@synthesize textAlignment=_textAlignment - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_createPrimaryViews;
-(void)_initializePrimaryConstraints;
-(void)setTopToFirstBaselineConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setLastBaselineToBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)topToFirstBaselineConstraint;
-(NSLayoutConstraint *)lastBaselineToBottomConstraint;
-(float)topToFirstBaseline;
-(float)lastBaselineToBottom;
-(char)_textViewIsNotEmpty;
-(void)_updateTextAlignmentForText:(id)arg1 ;
-(int)_automaticTextAlignmentForText:(id)arg1 ;
-(CGPoint)firstCharacterPosition;
-(unsigned)indexOfCharacterAtTruncationOrBreakPoint;
-(float)widthOfCharactersInRange:(NSRange)arg1 ;
-(float)fontCapHeight;
-(void)setTopToFirstBaseline:(float)arg1 ;
-(void)setLastBaselineToBottom:(float)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MFCollapsibleHeaderContentViewDelegate>)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(id<MFCollapsibleHeaderContentViewDelegate>)delegate;
-(void)setNumberOfLines:(unsigned)arg1 ;
-(void)setTextAlignment:(unsigned)arg1 ;
-(void)setText:(id)arg1 ;
-(void)setFont:(id)arg1 ;
-(void)layoutMarginsDidChange;
-(CGSize)intrinsicContentSize;
-(void)updateConstraints;
-(void)setTextView:(UITextView *)arg1 ;
-(unsigned)textAlignment;
-(void)layoutManager:(id)arg1 didCompleteLayoutForTextContainer:(id)arg2 atEnd:(char)arg3 ;
-(void)clearSelection;
-(float)contentWidth;
-(UITextView *)textView;
-(void)setIsPrimary:(char)arg1 ;
-(void)setContentWidth:(float)arg1 ;
-(void)_invalidateCachedMetrics;
-(char)isPrimary;
@end

