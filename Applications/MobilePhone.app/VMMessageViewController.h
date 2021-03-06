/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:07 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobilePhone.app/MobilePhone
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class VMVoicemail, VMVoicemailManager, CNContact, CNContactFormatter, CNContactStore, NSDateFormatter, VMPlayerControlsViewController, VMMessageHeaderView, VMMessageView;

@interface VMMessageViewController : UIViewController {

	VMVoicemail* _voicemailMessage;
	VMVoicemailManager* _voicemailManager;
	CNContact* _contact;
	CNContactFormatter* _contactFormatter;
	CNContactStore* _contactStore;
	NSDateFormatter* _dateFormatter;
	VMPlayerControlsViewController* _playerControlsViewController;
	VMMessageHeaderView* _headerView;
	VMMessageView* _messageView;

}

@property (nonatomic,retain) CNContact * contact;                                                        //@synthesize contact=_contact - In the implementation block
@property (nonatomic,retain) CNContactFormatter * contactFormatter;                                      //@synthesize contactFormatter=_contactFormatter - In the implementation block
@property (nonatomic,retain) CNContactStore * contactStore;                                              //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) NSDateFormatter * dateFormatter;                                            //@synthesize dateFormatter=_dateFormatter - In the implementation block
@property (nonatomic,retain) VMPlayerControlsViewController * playerControlsViewController;              //@synthesize playerControlsViewController=_playerControlsViewController - In the implementation block
@property (nonatomic,retain) VMMessageHeaderView * headerView;                                           //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) VMMessageView * messageView;                                                //@synthesize messageView=_messageView - In the implementation block
@property (nonatomic,retain) VMVoicemail * voicemailMessage;                                             //@synthesize voicemailMessage=_voicemailMessage - In the implementation block
@property (nonatomic,retain) VMVoicemailManager * voicemailManager;                                      //@synthesize voicemailManager=_voicemailManager - In the implementation block
-(void)handleSystemTimeZoneDidChangeNotification:(id)arg1 ;
-(VMPlayerControlsViewController *)playerControlsViewController;
-(VMVoicemail *)voicemailMessage;
-(void)handleVoicemailManagerVoicemailsDidChangeNotification:(id)arg1 ;
-(void)setVoicemailMessage:(VMVoicemail *)arg1 ;
-(void)setPlayerControlsViewController:(VMPlayerControlsViewController *)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(VMMessageHeaderView *)headerView;
-(void)setHeaderView:(VMMessageHeaderView *)arg1 ;
-(CNContactFormatter *)contactFormatter;
-(void)setContactFormatter:(CNContactFormatter *)arg1 ;
-(CNContactStore *)contactStore;
-(id)initWithContactStore:(id)arg1 ;
-(void)handleContactStoreDidChangeNotification:(id)arg1 ;
-(void)handleContentSizeCategoryDidChangeNotification:(id)arg1 ;
-(void)handleCurrentLocaleDidChangeNotification:(id)arg1 ;
-(CNContact *)contact;
-(VMMessageView *)messageView;
-(void)setMessageView:(VMMessageView *)arg1 ;
-(NSDateFormatter *)dateFormatter;
-(VMVoicemailManager *)voicemailManager;
-(void)setVoicemailManager:(VMVoicemailManager *)arg1 ;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(id)labeledValueForPhoneNumber:(id)arg1 ;
-(void)setContact:(CNContact *)arg1 ;
-(void)setDateFormatter:(NSDateFormatter *)arg1 ;
@end

