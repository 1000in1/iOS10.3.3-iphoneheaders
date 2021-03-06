/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:31 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Setup/Setup-Structs.h>
#import <Setup/BuddyTableViewController.h>
#import <UIKit/UITextFieldDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class UITableViewCell, BFFLinkLabelFooterView, BuddyAppleIDInfoIconView, NSNotification, NSString;

@interface BuddyAppleIDSignInController : BuddyTableViewController <UITextFieldDelegate, UITableViewDelegate, UITableViewDataSource> {

	UITableViewCell* _usernameCell;
	UITableViewCell* _passwordCell;
	BFFLinkLabelFooterView* _topSectionFooterView;
	BFFLinkLabelFooterView* _infoFooterView;
	BFFLinkLabelFooterView* _twoAccountsView;
	BuddyAppleIDInfoIconView* _infoIconView;
	CGRect _lastKeyboardFrame;
	float _availableHeaderFooterHeight;
	NSNotification* _keyboardNotification;
	int _mode;
	char _wasHidingBackButton;
	char _showsUsernameAsField;
	char _showsInfoSection;
	char _enabled;
	/*^block*/id _handler;
	/*^block*/id _appearanceHandler;
	/*^block*/id _twoAccountsHandler;

}

@property (nonatomic,copy) id handler;                               //@synthesize handler=_handler - In the implementation block
@property (nonatomic,copy) id appearanceHandler;                     //@synthesize appearanceHandler=_appearanceHandler - In the implementation block
@property (assign,nonatomic) char showsUsernameAsField;              //@synthesize showsUsernameAsField=_showsUsernameAsField - In the implementation block
@property (nonatomic,copy) NSString * username; 
@property (nonatomic,copy) NSString * footerText; 
@property (assign,nonatomic) char showsInfoSection;                  //@synthesize showsInfoSection=_showsInfoSection - In the implementation block
@property (nonatomic,copy) id twoAccountsHandler;                    //@synthesize twoAccountsHandler=_twoAccountsHandler - In the implementation block
@property (assign,nonatomic) char enabled;                           //@synthesize enabled=_enabled - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_signInToAccount;
-(id)passwordCell;
-(id)_titleText;
-(void)setiForgotText:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)setAppearanceHandler:(id)arg1 ;
-(char)useScreenFooter;
-(id)_subTitleText;
-(void)setTwoAccountsHandler:(id)arg1 ;
-(void)coalescingKeyboardWillShow:(id)arg1 ;
-(void)addFooterLinkWithTitle:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)topSectionFooterView;
-(void)keyboardWillShow;
-(void)setShowsUsernameAsField:(char)arg1 ;
-(id)_footerText;
-(void)setShowsInfoSection:(char)arg1 ;
-(id)twoAccountsView;
-(char)showsInfoSection;
-(id)twoAccountsHandler;
-(char)showsUsernameAsField;
-(id)infoIconView;
-(id)infoFooterView;
-(id)usernameCell;
-(void)removeFooterLinkAtIndex:(unsigned)arg1 ;
-(id)appearanceHandler;
-(char)enabled;
-(void)dealloc;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(int)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)loadView;
-(void)setEnabled:(char)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)viewDidLayoutSubviews;
-(char)textFieldShouldReturn:(id)arg1 ;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(id)initWithMode:(int)arg1 ;
-(void)_textChanged:(id)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)username;
-(void)keyboardWillHide:(id)arg1 ;
-(NSString *)footerText;
-(void)setFooterText:(NSString *)arg1 ;
@end

