/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:11 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <MobileSafari/BookmarksToolbarItemProvider.h>
#import <MobileSafari/PreviewTableViewControllerDelegate.h>
#import <UIKit/UISearchBarDelegate.h>
#import <MobileSafari/WebBookmarksClientDelegateProtocol.h>
#import <MobileSafari/BookmarksPanelStateRestoring.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@protocol ReadingListViewControllerDelegate, LinkPreviewProvider;
@class UIBarButtonItem, WebBookmarkCollection, WebBookmarkList, SafariFetcherServerProxy, NSString, _UIContentUnavailableView, NSTimer, PreviewTableViewController, UITableView;

@interface ReadingListViewController : UIViewController <BookmarksToolbarItemProvider, PreviewTableViewControllerDelegate, UISearchBarDelegate, WebBookmarksClientDelegateProtocol, BookmarksPanelStateRestoring, UITableViewDelegate, UITableViewDataSource> {

	UIBarButtonItem* _unreadFilterButton;
	WebBookmarkCollection* _collection;
	char _networkIsReachable;
	WebBookmarkList* _readingList;
	SafariFetcherServerProxy* _safariFetcherServerProxy;
	NSString* _archivingBookmarkUUID;
	_UIContentUnavailableView* _explanationView;
	NSTimer* _deletionNotificationTimer;
	PreviewTableViewController* _tableViewController;
	char _loadIconsSynchronously;
	NSString* _userTypedFilter;
	char _showingAllBookmarks;
	id<ReadingListViewControllerDelegate> _delegate;
	id<LinkPreviewProvider> _linkPreviewProvider;
	UITableView* _tableView;

}

@property (nonatomic,readonly) char showingAllBookmarks;                                         //@synthesize showingAllBookmarks=_showingAllBookmarks - In the implementation block
@property (assign,nonatomic,__weak) id<ReadingListViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<LinkPreviewProvider> linkPreviewProvider;                 //@synthesize linkPreviewProvider=_linkPreviewProvider - In the implementation block
@property (nonatomic,readonly) UITableView * tableView;                                          //@synthesize tableView=_tableView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * collectionType; 
-(id)bookmarksNavigationController;
-(id<LinkPreviewProvider>)linkPreviewProvider;
-(void)setLinkPreviewProvider:(id<LinkPreviewProvider>)arg1 ;
-(id)currentStateDictionary;
-(char)restoreStateWithDictionary:(id)arg1 ;
-(float)currentScrollPosition;
-(void)restoreScrollPosition:(float)arg1 ;
-(id)bookmarksRightBarButtonItem;
-(id)_bookmarkAtIndexPath:(id)arg1 ;
-(void)updateCurrentSelectedItemIfNeeded;
-(id)safari_tableViewScrollPositionSaveIdentifier;
-(id)previewTableViewController:(id)arg1 URLForRowAtIndexPath:(id)arg2 ;
-(void)_readingListBookmarkDidUpdate:(id)arg1 ;
-(void)_didAddNewReadingListBookmark;
-(void)_connectSafariFetcherServerProxy;
-(void)_disconnectSafariFetcherServerProxy;
-(void)_clearExplanationView;
-(void)_reloadReadingList;
-(id)_unreadFilterButtonTitle;
-(void)_didChangeUnreadFilter;
-(void)_showExplanationView;
-(void)_reloadReadingListAndTable;
-(id)_currentReadingListBookmark;
-(void)_readingListItemAtIndexPathDelete:(id)arg1 ;
-(void)_readingListItemAtIndexPath:(id)arg1 setUnread:(char)arg2 ;
-(void)_updateTableViewByRemovingReadingListItemAtIndexPath:(id)arg1 ;
-(void)_scheduleDelayedChangeNotification;
-(void)_readingListItemAtIndexPath:(id)arg1 lockAndPerformUpdates:(/*^block*/id)arg2 performBlockIfLockFailed:(/*^block*/id)arg3 ;
-(void)didMarkBookmarkUnreadAtIndex:(unsigned)arg1 ;
-(void)bookmarksServerProxyConnectionInvalidated:(id)arg1 ;
-(id)safari_tableViewForScrollPositionSaving;
-(char)showingAllBookmarks;
-(id)init;
-(void)setDelegate:(id<ReadingListViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id<ReadingListViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewWillLayoutSubviews;
-(UITableView *)tableView;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(void)bookmarksServerProxy:(id)arg1 didStartFetchingReadingListItem:(id)arg2 ;
-(void)bookmarksServerProxy:(id)arg1 didStopFetchingReadingListItem:(id)arg2 ;
-(void)bookmarksServerProxyDidFinishFetching:(id)arg1 ;
-(void)_postChangeNotification;
-(void)_networkReachabilityChanged:(id)arg1 ;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(void)_webBookmarksDidReload:(id)arg1 ;
-(NSString *)collectionType;
@end

