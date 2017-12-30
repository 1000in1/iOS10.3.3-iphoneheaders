/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:11 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <MobileSafari/SharedLinksSubscriptionsTableViewCellDelegate.h>
#import <MobileSafari/BookmarksToolbarItemProvider.h>

@protocol SharedLinksSubscriptionsViewControllerDelegate;
@class NSArray, NSMutableArray, UIBarButtonItem, NSString;

@interface SharedLinksSubscriptionsViewController : UITableViewController <UITableViewDelegate, UITableViewDataSource, SharedLinksSubscriptionsTableViewCellDelegate, BookmarksToolbarItemProvider> {

	NSArray* _headerTitles;
	NSArray* _socialAccounts;
	NSArray* _appExtensions;
	NSMutableArray* _subscribedFeeds;
	UIBarButtonItem* _addCurrentFeedButton;
	id<SharedLinksSubscriptionsViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SharedLinksSubscriptionsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)bookmarksRightBarButtonItem;
-(void)_feedSubscriptionsChangedNotification:(id)arg1 ;
-(void)_webFeedURLDidChangeForActiveTabNotification:(id)arg1 ;
-(void)_appExtensionsChangedNotification:(id)arg1 ;
-(void)_updateAccountsData;
-(void)_updateFeedsData;
-(void)_updateAppExtensions;
-(void)_updateAddCurrentFeedButton;
-(char)_canAddFeedFromCurrentSite;
-(void)_addFeedFromCurrentSite;
-(id)_socialAccountAtIndexPath:(id)arg1 ;
-(id)_socialSourceForSocialAccount:(id)arg1 ;
-(void)_didPressAddCurrentFeedButton;
-(void)sharedLinksSubscriptionsTableViewCell:(id)arg1 toggledSwitchControl:(id)arg2 ;
-(void)setDelegate:(id<SharedLinksSubscriptionsViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id<SharedLinksSubscriptionsViewControllerDelegate>)delegate;
-(void)viewDidAppear:(char)arg1 ;
-(id)initWithStyle:(int)arg1 ;
-(void)_accountsChangedNotification:(id)arg1 ;
-(id)_displayNameForAccount:(id)arg1 ;
@end

