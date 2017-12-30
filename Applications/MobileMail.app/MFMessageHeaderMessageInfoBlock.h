/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:54 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <MobileMail/MFMessageHeaderViewBlock.h>

@class UIStackView, UITextView, UILabel, MessageViewStatusIndicatorManager, UILayoutGuide, NSLayoutConstraint;

@interface MFMessageHeaderMessageInfoBlock : MFMessageHeaderViewBlock {

	char _isDisplayingStatusIndicators;
	char _markedAsUnread;
	char _markedAsFlagged;
	char _senderIsVIP;
	char _isNotifyThread;
	char _isMuteThread;
	char _showsSourceMailbox;
	UIStackView* _labelStackView;
	UITextView* _subjectTextView;
	UILabel* _timestampLabel;
	UILabel* _mailboxLabel;
	MessageViewStatusIndicatorManager* _statusIndicatorManager;
	UILayoutGuide* _statusIndicatorLayoutGuide;
	NSLayoutConstraint* _subjectTextViewFirstBaseline;
	NSLayoutConstraint* _bottomConstraint;
	NSLayoutConstraint* _statusIndicatorGuideMidX;
	NSLayoutConstraint* _statusIndicatorGuideWidth;

}

@property (nonatomic,retain) UIStackView * labelStackView;                                            //@synthesize labelStackView=_labelStackView - In the implementation block
@property (nonatomic,retain) UITextView * subjectTextView;                                            //@synthesize subjectTextView=_subjectTextView - In the implementation block
@property (nonatomic,retain) UILabel * timestampLabel;                                                //@synthesize timestampLabel=_timestampLabel - In the implementation block
@property (nonatomic,retain) UILabel * mailboxLabel;                                                  //@synthesize mailboxLabel=_mailboxLabel - In the implementation block
@property (nonatomic,retain) MessageViewStatusIndicatorManager * statusIndicatorManager;              //@synthesize statusIndicatorManager=_statusIndicatorManager - In the implementation block
@property (nonatomic,retain) UILayoutGuide * statusIndicatorLayoutGuide;                              //@synthesize statusIndicatorLayoutGuide=_statusIndicatorLayoutGuide - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * subjectTextViewFirstBaseline;                       //@synthesize subjectTextViewFirstBaseline=_subjectTextViewFirstBaseline - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * bottomConstraint;                                   //@synthesize bottomConstraint=_bottomConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * statusIndicatorGuideMidX;                           //@synthesize statusIndicatorGuideMidX=_statusIndicatorGuideMidX - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * statusIndicatorGuideWidth;                          //@synthesize statusIndicatorGuideWidth=_statusIndicatorGuideWidth - In the implementation block
@property (assign,nonatomic) char showsSourceMailbox;                                                 //@synthesize showsSourceMailbox=_showsSourceMailbox - In the implementation block
-(id)_subjectFont;
-(void)_flagStyleDidChange:(id)arg1 ;
-(void)setLabelStackView:(UIStackView *)arg1 ;
-(void)setSubjectTextView:(UITextView *)arg1 ;
-(void)setMailboxLabel:(UILabel *)arg1 ;
-(void)setStatusIndicatorManager:(MessageViewStatusIndicatorManager *)arg1 ;
-(void)setStatusIndicatorGuideMidX:(NSLayoutConstraint *)arg1 ;
-(void)setStatusIndicatorGuideWidth:(NSLayoutConstraint *)arg1 ;
-(void)setStatusIndicatorLayoutGuide:(UILayoutGuide *)arg1 ;
-(void)setSubjectTextViewFirstBaseline:(NSLayoutConstraint *)arg1 ;
-(void)createPrimaryViews;
-(UITextView *)subjectTextView;
-(MessageViewStatusIndicatorManager *)statusIndicatorManager;
-(UILayoutGuide *)statusIndicatorLayoutGuide;
-(void)initializePrimaryLayoutConstraints;
-(NSLayoutConstraint *)subjectTextViewFirstBaseline;
-(NSLayoutConstraint *)statusIndicatorGuideMidX;
-(NSLayoutConstraint *)statusIndicatorGuideWidth;
-(void)setDisplayMetrics:(id)arg1 ;
-(void)_layoutStatusIndicatorsInRect:(CGRect)arg1 ;
-(void)displayMessage:(id)arg1 ;
-(void)_updateSubjectText;
-(void)_updateMailboxLabel;
-(void)updateTimestampLabel;
-(void)setMessageFlags:(unsigned long long)arg1 conversationFlags:(unsigned long long)arg2 ;
-(id)_contextForDDDetectionController;
-(char)showsSourceMailbox;
-(UILabel *)mailboxLabel;
-(id)_mailboxLabelAttributedText;
-(void)_updateStatusIndicators;
-(id)_subheadFont;
-(id)_whitespaceStringWithWidth:(float)arg1 ;
-(void)setShowsSourceMailbox:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(void)updateConstraints;
-(NSLayoutConstraint *)bottomConstraint;
-(void)setBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(void)_updateFonts;
-(void)setTimestampLabel:(UILabel *)arg1 ;
-(UILabel *)timestampLabel;
-(UIStackView *)labelStackView;
@end

