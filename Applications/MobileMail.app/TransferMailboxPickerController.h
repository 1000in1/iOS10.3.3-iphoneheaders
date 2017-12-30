/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:54 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>
#import <MobileMail/AccountListControllerDelegate.h>

@protocol MFMailboxPrediction, TransferMailboxPickerAnimationDelegate;
@class NSArray, NSMutableArray, NSString, MailAccount, NSSet, MFMailboxUid, MailboxListViewControllerMail, MFMessageScreenshotGenerator, MailboxTableCell, TransferMailboxPickerPalette, UIView, UIImageView;

@interface TransferMailboxPickerController : UIViewController <CAAnimationDelegate, AccountListControllerDelegate> {

	NSArray* _sortedMessages;
	NSMutableArray* _senders;
	NSString* _subject;
	MailAccount* _account;
	NSSet* _sourceAccounts;
	NSSet* _sourceMailboxes;
	MFMailboxUid* _selectedMailbox;
	MailboxListViewControllerMail* _mailboxListController;
	MFMessageScreenshotGenerator* _screenshotGenerator;
	unsigned _multipleSourceAccounts : 1;
	MailboxTableCell* _tableCell;
	TransferMailboxPickerPalette* _pickerPalette;
	UIView* _animatedView;
	UIView* _lastSuperview;
	UIImageView* _backstop;
	char _hasReceivedViewWillAppear;
	char _didSelectMailbox;
	id<MFMailboxPrediction> _mailboxPrediction;
	/*^block*/id _onSelectMailbox;
	/*^block*/id _onFinish;
	id<TransferMailboxPickerAnimationDelegate> _animationDelegate;

}

@property (nonatomic,retain) MailAccount * account;                                                     //@synthesize account=_account - In the implementation block
@property (nonatomic,copy) id onSelectMailbox;                                                          //@synthesize onSelectMailbox=_onSelectMailbox - In the implementation block
@property (nonatomic,copy) id onFinish;                                                                 //@synthesize onFinish=_onFinish - In the implementation block
@property (assign,nonatomic) id<TransferMailboxPickerAnimationDelegate> animationDelegate;              //@synthesize animationDelegate=_animationDelegate - In the implementation block
@property (nonatomic,retain) id<MFMailboxPrediction> mailboxPrediction;                                 //@synthesize mailboxPrediction=_mailboxPrediction - In the implementation block
@property (nonatomic,readonly) NSSet * sourceAccounts;                                                  //@synthesize sourceAccounts=_sourceAccounts - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setOnSelectMailbox:(id)arg1 ;
-(void)setOnFinish:(id)arg1 ;
-(void)setMailboxPrediction:(id<MFMailboxPrediction>)arg1 ;
-(id)initWithMessages:(id)arg1 ;
-(void)accountList:(id)arg1 didSelectAccount:(id)arg2 ;
-(void)accountList:(id)arg1 didCancel:(char)arg2 ;
-(void)mailboxList:(id)arg1 didSelectMailbox:(id)arg2 ;
-(void)updateSenderFromMessages:(id)arg1 ;
-(void)updateSubjectFromMessages:(id)arg1 ;
-(void)updateSourceMailboxesFromMessages:(id)arg1 ;
-(void)mailAccountsDidChange:(id)arg1 ;
-(void)_didReceiveTargetDetailChangedNotification:(id)arg1 ;
-(float)_yOffsetMaximum;
-(float)_navigationBarAndPaletteMaxY;
-(float)_navigationBarMaxY;
-(void)_setPaletteVisible:(char)arg1 ;
-(void)restoreScrollOffset;
-(void)saveScrollOffset;
-(void)finishAnimated:(char)arg1 ;
-(id)onFinish;
-(void)_countMailboxPredictionDidCancel;
-(id)onSelectMailbox;
-(void)messageAnimationDidStop;
-(void)animateMessageToPoint:(CGPoint)arg1 inView:(id)arg2 didFinishDelegate:(id)arg3 selector:(SEL)arg4 context:(id)arg5 ;
-(void)allMessageAnimationsDidStop;
-(void)initiateTransfer;
-(void)animateMessageToCell:(id)arg1 ;
-(id<MFMailboxPrediction>)mailboxPrediction;
-(NSSet *)sourceAccounts;
-(void)dealloc;
-(char)shouldAutorotate;
-(void)loadView;
-(void)setAnimationDelegate:(id<TransferMailboxPickerAnimationDelegate>)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(char)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(id)contentScrollView;
-(char)canDismiss;
-(void)finish;
-(MailAccount *)account;
-(void)setAccount:(MailAccount *)arg1 ;
-(void)updateTitle;
-(id<TransferMailboxPickerAnimationDelegate>)animationDelegate;
-(char)shouldSnapshot;
@end

