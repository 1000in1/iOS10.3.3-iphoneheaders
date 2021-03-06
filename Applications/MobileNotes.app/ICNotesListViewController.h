/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:59 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileNotes/MobileNotes-Structs.h>
#import <MobileNotes/ICScrollViewDelegateViewController.h>
#import <UIKit/UISearchControllerDelegate.h>
#import <MobileNotes/ICSearchViewControllerDelegate.h>
#import <libobjc.A.dylib/ICProgressIndicatorTrackerDelegate.h>
#import <UIKit/UIViewControllerPreviewingDelegate_Private.h>
#import <UIKit/UITableViewDataSourcePrefetching.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/NSFetchedResultsControllerDelegate.h>

@protocol ICNotesListViewControllerDelegate, UIViewControllerPreviewing;
@class ICSearchViewController, NSFetchedResultsController, ICListTableView, NSArray, NSDate, UIBarButtonItem, NSIndexPath, UIView, UIActivityIndicatorView, UILabel, ICNotesListCellHandler, NSMutableSet, ICSelectorDelayer, ICProgressIndicatorTracker, ICNotesListSummaryView, ICNote, NSString;

@interface ICNotesListViewController : ICScrollViewDelegateViewController <UISearchControllerDelegate, ICSearchViewControllerDelegate, ICProgressIndicatorTrackerDelegate, UIViewControllerPreviewingDelegate_Private, UITableViewDataSourcePrefetching, UITableViewDataSource, UITableViewDelegate, NSFetchedResultsControllerDelegate> {

	char _updateSelectionOnInsert;
	char _isMovingOrDeletingNotes;
	char _autoScrollToSelectionOnNoteModification;
	char _needsHidingSearchBar;
	char _didReceiveContextRefreshNotification;
	char _showLoadingOverlay;
	char _didBeginUpdatingFromFetchedResultsController;
	char _reloadDataAfterEndUpdates;
	char _refetchAfterAttachmentBrowserDismiss;
	char _setupUIComplete;
	char _noteSelectedManuallyWhileDownloadingSharedNote;
	char _showDownloadSpinnerWhenViewAppears;
	char _wasDisplayed;
	char _needsTableViewUpdates;
	char _tableViewBeginUpdatesWasCalled;
	char _reloadTableWhenVisible;
	char _startSearchWhenViewAppears;
	ICSearchViewController* _searchViewController;
	NSFetchedResultsController* _fetchedResultsController;
	ICListTableView* _tableView;
	id<ICNotesListViewControllerDelegate> _delegate;
	int _generalEditModeInTransition;
	NSArray* _notesToMoveToFolder;
	int _currentSortType;
	NSDate* _lastAccessibilityAnnouncementDate;
	NSArray* _contentsCache;
	UIBarButtonItem* _attachmentButton;
	UIBarButtonItem* _summaryButton;
	UIBarButtonItem* _addNoteButton;
	UIBarButtonItem* _editButton;
	UIBarButtonItem* _doneButton;
	UIBarButtonItem* _moveButton;
	UIBarButtonItem* _trashButton;
	UIBarButtonItem* _deleteAllButton;
	UIBarButtonItem* _moveAllButton;
	UIBarButtonItem* _cancelButton;
	UIBarButtonItem* _debugButton;
	NSIndexPath* _selectionPathOfDeletedNote;
	UIView* _loadingOverlay;
	UIActivityIndicatorView* _summarySpinnerView;
	UILabel* _headerViewLabel;
	NSIndexPath* _tableViewEditingRowIndexPath;
	float _imageHeight;
	ICNotesListCellHandler* _cellHandler;
	NSMutableSet* _dirtyNotes;
	ICSelectorDelayer* _selectorDelayerForReloadData;
	ICProgressIndicatorTracker* _progressIndicatorTracker;
	unsigned _previousSummaryViewNumNotes;
	/*^block*/id _closeFolderSelectorBlock;
	ICNotesListSummaryView* _summaryView;
	UIView* _dimmingView;
	ICNote* _noteToShowWhenViewAppears;
	id<UIViewControllerPreviewing> _previewer;
	CGRect _lastToolbarLayoutBounds;

}

@property (nonatomic,copy) NSArray * contentsCache;                                              //@synthesize contentsCache=_contentsCache - In the implementation block
@property (nonatomic,retain) ICSearchViewController * searchViewController;                      //@synthesize searchViewController=_searchViewController - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * attachmentButton;                                 //@synthesize attachmentButton=_attachmentButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * summaryButton;                                    //@synthesize summaryButton=_summaryButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * addNoteButton;                                    //@synthesize addNoteButton=_addNoteButton - In the implementation block
@property (nonatomic,retain) ICListTableView * tableView;                                        //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * editButton;                                       //@synthesize editButton=_editButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * doneButton;                                       //@synthesize doneButton=_doneButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * moveButton;                                       //@synthesize moveButton=_moveButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * trashButton;                                      //@synthesize trashButton=_trashButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * deleteAllButton;                                  //@synthesize deleteAllButton=_deleteAllButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * moveAllButton;                                    //@synthesize moveAllButton=_moveAllButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * cancelButton;                                     //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * debugButton;                                      //@synthesize debugButton=_debugButton - In the implementation block
@property (nonatomic,retain) NSIndexPath * selectionPathOfDeletedNote;                           //@synthesize selectionPathOfDeletedNote=_selectionPathOfDeletedNote - In the implementation block
@property (nonatomic,retain) UIView * loadingOverlay;                                            //@synthesize loadingOverlay=_loadingOverlay - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * summarySpinnerView;                       //@synthesize summarySpinnerView=_summarySpinnerView - In the implementation block
@property (nonatomic,retain) UILabel * headerViewLabel;                                          //@synthesize headerViewLabel=_headerViewLabel - In the implementation block
@property (nonatomic,copy) NSIndexPath * tableViewEditingRowIndexPath;                           //@synthesize tableViewEditingRowIndexPath=_tableViewEditingRowIndexPath - In the implementation block
@property (assign,nonatomic) float imageHeight;                                                  //@synthesize imageHeight=_imageHeight - In the implementation block
@property (nonatomic,retain) ICNotesListCellHandler * cellHandler;                               //@synthesize cellHandler=_cellHandler - In the implementation block
@property (nonatomic,retain) NSMutableSet * dirtyNotes;                                          //@synthesize dirtyNotes=_dirtyNotes - In the implementation block
@property (assign,nonatomic) char autoScrollToSelectionOnNoteModification;                       //@synthesize autoScrollToSelectionOnNoteModification=_autoScrollToSelectionOnNoteModification - In the implementation block
@property (assign,nonatomic) char needsHidingSearchBar;                                          //@synthesize needsHidingSearchBar=_needsHidingSearchBar - In the implementation block
@property (assign,nonatomic) char didReceiveContextRefreshNotification;                          //@synthesize didReceiveContextRefreshNotification=_didReceiveContextRefreshNotification - In the implementation block
@property (nonatomic,retain) ICSelectorDelayer * selectorDelayerForReloadData;                   //@synthesize selectorDelayerForReloadData=_selectorDelayerForReloadData - In the implementation block
@property (nonatomic,retain) ICProgressIndicatorTracker * progressIndicatorTracker;              //@synthesize progressIndicatorTracker=_progressIndicatorTracker - In the implementation block
@property (assign,nonatomic) char showLoadingOverlay;                                            //@synthesize showLoadingOverlay=_showLoadingOverlay - In the implementation block
@property (assign,nonatomic) unsigned previousSummaryViewNumNotes;                               //@synthesize previousSummaryViewNumNotes=_previousSummaryViewNumNotes - In the implementation block
@property (assign,nonatomic) char didBeginUpdatingFromFetchedResultsController;                  //@synthesize didBeginUpdatingFromFetchedResultsController=_didBeginUpdatingFromFetchedResultsController - In the implementation block
@property (assign,nonatomic) char reloadDataAfterEndUpdates;                                     //@synthesize reloadDataAfterEndUpdates=_reloadDataAfterEndUpdates - In the implementation block
@property (nonatomic,copy) id closeFolderSelectorBlock;                                          //@synthesize closeFolderSelectorBlock=_closeFolderSelectorBlock - In the implementation block
@property (nonatomic,retain) ICNotesListSummaryView * summaryView;                               //@synthesize summaryView=_summaryView - In the implementation block
@property (nonatomic,readonly) char shouldAlwaysHaveSelectedNoteWhenNotInEditMode; 
@property (assign,nonatomic) char refetchAfterAttachmentBrowserDismiss;                          //@synthesize refetchAfterAttachmentBrowserDismiss=_refetchAfterAttachmentBrowserDismiss - In the implementation block
@property (assign,nonatomic) char setupUIComplete;                                               //@synthesize setupUIComplete=_setupUIComplete - In the implementation block
@property (nonatomic,retain) UIView * dimmingView;                                               //@synthesize dimmingView=_dimmingView - In the implementation block
@property (assign,nonatomic) char noteSelectedManuallyWhileDownloadingSharedNote;                //@synthesize noteSelectedManuallyWhileDownloadingSharedNote=_noteSelectedManuallyWhileDownloadingSharedNote - In the implementation block
@property (nonatomic,retain) ICNote * noteToShowWhenViewAppears;                                 //@synthesize noteToShowWhenViewAppears=_noteToShowWhenViewAppears - In the implementation block
@property (assign,nonatomic) char showDownloadSpinnerWhenViewAppears;                            //@synthesize showDownloadSpinnerWhenViewAppears=_showDownloadSpinnerWhenViewAppears - In the implementation block
@property (assign,nonatomic) CGRect lastToolbarLayoutBounds;                                     //@synthesize lastToolbarLayoutBounds=_lastToolbarLayoutBounds - In the implementation block
@property (assign,nonatomic) char wasDisplayed;                                                  //@synthesize wasDisplayed=_wasDisplayed - In the implementation block
@property (assign,nonatomic) char needsTableViewUpdates;                                         //@synthesize needsTableViewUpdates=_needsTableViewUpdates - In the implementation block
@property (assign,nonatomic) char tableViewBeginUpdatesWasCalled;                                //@synthesize tableViewBeginUpdatesWasCalled=_tableViewBeginUpdatesWasCalled - In the implementation block
@property (assign,nonatomic) char reloadTableWhenVisible;                                        //@synthesize reloadTableWhenVisible=_reloadTableWhenVisible - In the implementation block
@property (nonatomic,retain) id<UIViewControllerPreviewing> previewer;                           //@synthesize previewer=_previewer - In the implementation block
@property (assign,nonatomic) char startSearchWhenViewAppears;                                    //@synthesize startSearchWhenViewAppears=_startSearchWhenViewAppears - In the implementation block
@property (nonatomic,readonly) NSArray * notes; 
@property (nonatomic,retain) NSFetchedResultsController * fetchedResultsController;              //@synthesize fetchedResultsController=_fetchedResultsController - In the implementation block
@property (assign,nonatomic,__weak) id<ICNotesListViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int generalEditModeInTransition;                                    //@synthesize generalEditModeInTransition=_generalEditModeInTransition - In the implementation block
@property (assign,nonatomic) char updateSelectionOnInsert;                                       //@synthesize updateSelectionOnInsert=_updateSelectionOnInsert - In the implementation block
@property (nonatomic,copy) NSArray * notesToMoveToFolder;                                        //@synthesize notesToMoveToFolder=_notesToMoveToFolder - In the implementation block
@property (assign,nonatomic) int currentSortType;                                                //@synthesize currentSortType=_currentSortType - In the implementation block
@property (assign,nonatomic) char isMovingOrDeletingNotes;                                       //@synthesize isMovingOrDeletingNotes=_isMovingOrDeletingNotes - In the implementation block
@property (nonatomic,retain) NSDate * lastAccessibilityAnnouncementDate;                         //@synthesize lastAccessibilityAnnouncementDate=_lastAccessibilityAnnouncementDate - In the implementation block
@property (nonatomic,readonly) char isFolderSet; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIBarButtonItem *)moveButton;
-(void)setMoveButton:(UIBarButtonItem *)arg1 ;
-(void)updateNavigationItemAccessibilityLabels;
-(char)isFolderSet;
-(id<UIViewControllerPreviewing>)previewer;
-(void)setPreviewer:(id<UIViewControllerPreviewing>)arg1 ;
-(void)searchViewController:(id)arg1 didDeleteSearchResult:(id)arg2 ;
-(void)willPresentSearchViewController:(id)arg1 ;
-(void)updateNavigationTitle;
-(void)didPresentSearchViewController:(id)arg1 ;
-(void)willDismissSearchViewController:(id)arg1 ;
-(void)didDismissSearchViewController:(id)arg1 ;
-(void)resumeAfterSuspend;
-(void)startSearch;
-(void)showAttachmentBrowserAnimated:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)showSharedNote:(id)arg1 isDownloading:(char)arg2 ;
-(char)ic_isViewVisible;
-(void)addNote:(id)arg1 ;
-(void)startSearchWithSearchQuery:(id)arg1 searchScope:(int)arg2 ;
-(char)isInAttachmentBrowser;
-(void)currentNoteDidChange;
-(void)timeFormatChanged:(id)arg1 ;
-(void)updateSortTypeIfNecessary;
-(void)handleAccessibilitySwitchControlStatusChanged:(id)arg1 ;
-(void)delayedReloadData;
-(void)setSelectorDelayerForReloadData:(ICSelectorDelayer *)arg1 ;
-(ICProgressIndicatorTracker *)progressIndicatorTracker;
-(void)tearDownFetchedResultsController;
-(void)setRefetchAfterAttachmentBrowserDismiss:(char)arg1 ;
-(void)prepForAppear:(char)arg1 ;
-(char)needsHidingSearchBar;
-(char)setupUIComplete;
-(char)reloadTableWhenVisible;
-(char)didReceiveContextRefreshNotification;
-(void)setReloadTableWhenVisible:(char)arg1 ;
-(NSFetchedResultsController *)fetchedResultsController;
-(void)recreateFetchedResultsController;
-(void)fetchAndReloadData;
-(void)updateSelectionInTableViewAnimated:(char)arg1 ;
-(void)updateDimmingAnimated:(char)arg1 ;
-(void)updateNavAndBarButtonsAnimated:(char)arg1 ;
-(void)setPreviousSummaryViewNumNotes:(unsigned)arg1 ;
-(void)updateViewsAfterNoteContainerChange;
-(void)splitViewControllerDidChangeHorizontalSizeClass:(id)arg1 ;
-(void)splitViewControllerWillDimDetailView:(id)arg1 ;
-(void)splitViewControllerWillUndimDetailView:(id)arg1 ;
-(void)viewControllerWillStartEditModeNotification:(id)arg1 ;
-(NSMutableSet *)dirtyNotes;
-(void)updateAttachmentsForNotes:(id)arg1 ;
-(void)setDirtyNotes:(NSMutableSet *)arg1 ;
-(void)updateSummaryViewLockItem;
-(void)setSetupUIComplete:(char)arg1 ;
-(void)setNeedsHidingSearchBar:(char)arg1 ;
-(void)setCurrentSortType:(int)arg1 ;
-(void)summaryBarButtonPressed:(id)arg1 ;
-(void)setSummarySpinnerView:(UIActivityIndicatorView *)arg1 ;
-(UIActivityIndicatorView *)summarySpinnerView;
-(void)setSummaryButton:(UIBarButtonItem *)arg1 ;
-(void)showAttachmentBrowser:(id)arg1 ;
-(void)setAttachmentButton:(UIBarButtonItem *)arg1 ;
-(void)setCellHandler:(ICNotesListCellHandler *)arg1 ;
-(void)setProgressIndicatorTracker:(ICProgressIndicatorTracker *)arg1 ;
-(void)notesContextRefreshNotification:(id)arg1 ;
-(void)applyAccessibilityLabels;
-(ICNotesListCellHandler *)cellHandler;
-(int)currentSortType;
-(void)setAutoScrollToSelectionOnNoteModification:(char)arg1 ;
-(char)shouldAlwaysHaveSelectedNote;
-(void)hideSearchBarIfNeededAnimated:(char)arg1 ;
-(CGRect)lastToolbarLayoutBounds;
-(void)setLastToolbarLayoutBounds:(CGRect)arg1 ;
-(id)tableViewIndexPathsForSelectedEditableRows;
-(void)updateSelectionForCurrentNoteContainerAnimated:(char)arg1 ;
-(char)startSearchWhenViewAppears;
-(void)showSearchBarForAccessibilityIfNecessary;
-(ICNote *)noteToShowWhenViewAppears;
-(char)showDownloadSpinnerWhenViewAppears;
-(void)setNoteToShowWhenViewAppears:(ICNote *)arg1 ;
-(void)setShowDownloadSpinnerWhenViewAppears:(char)arg1 ;
-(UILabel *)headerViewLabel;
-(void)setupHeaderViewLabel:(id)arg1 ;
-(void)setNotesToMoveToFolder:(NSArray *)arg1 ;
-(void)showFolderSelectorToMoveNotes;
-(void)deleteNoteFromTableView:(id)arg1 atIndexPath:(id)arg2 ;
-(void)selectTableViewRowNearIndexPath:(id)arg1 ;
-(ICSelectorDelayer *)selectorDelayerForReloadData;
-(void)updateBarButtonsAnimated:(char)arg1 ;
-(void)endEditMode:(id)arg1 ;
-(id)noteAtIndexPath:(id)arg1 ;
-(void)endEditMode:(id)arg1 animated:(char)arg2 ;
-(void)dismissSearch;
-(char)hasNoteAtIndexPath:(id)arg1 ;
-(char)didBeginUpdatingFromFetchedResultsController;
-(NSArray *)contentsCache;
-(void)setReloadDataAfterEndUpdates:(char)arg1 ;
-(void)reloadTableViewData;
-(void)closeFolderSelector:(id)arg1 ;
-(void)setNoteSelectedManuallyWhileDownloadingSharedNote:(char)arg1 ;
-(void)hideProgressIndicatorForSharedNote:(id)arg1 ;
-(char)noteSelectedManuallyWhileDownloadingSharedNote;
-(float)heightOfHeaderView;
-(void)updateCurrentNoteEditorNote:(id)arg1 ;
-(void)userDidSelectNewNote;
-(void)deleteNote:(id)arg1 atIndexPath:(id)arg2 ;
-(void)setTableViewEditingRowIndexPath:(NSIndexPath *)arg1 ;
-(NSIndexPath *)tableViewEditingRowIndexPath;
-(void)showUIToMoveNotes:(id)arg1 ;
-(void)showAttachmentBrowserAnimated:(char)arg1 ;
-(char)refetchAfterAttachmentBrowserDismiss;
-(void)setStartSearchWhenViewAppears:(char)arg1 ;
-(int)generalEditModeInTransition;
-(void)setGeneralEditModeInTransition:(int)arg1 ;
-(void)closeFolderSelectorIfNeededAnimated:(char)arg1 ;
-(void)deleteNotesFromTableView:(id)arg1 atIndexPaths:(id)arg2 ;
-(UIBarButtonItem *)deleteAllButton;
-(void)setContentsCache:(NSArray *)arg1 ;
-(void)setDidBeginUpdatingFromFetchedResultsController:(char)arg1 ;
-(void)setWasDisplayed:(char)arg1 ;
-(char)wasDisplayed;
-(char)tableViewBeginUpdatesWasCalled;
-(void)setNeedsTableViewUpdates:(char)arg1 ;
-(void)setTableViewBeginUpdatesWasCalled:(char)arg1 ;
-(void)setSelectionPathOfDeletedNote:(NSIndexPath *)arg1 ;
-(char)autoScrollToSelectionOnNoteModification;
-(char)isNoteEditorChangingPasswordProtectedState;
-(char)needsTableViewUpdates;
-(char)reloadDataAfterEndUpdates;
-(char)isMovingOrDeletingNotes;
-(NSIndexPath *)selectionPathOfDeletedNote;
-(char)updateSelectionOnInsert;
-(void)setUpdateSelectionOnInsert:(char)arg1 ;
-(void)updateSelectionInTableViewAnimated:(char)arg1 scrollToSelection:(char)arg2 ;
-(char)showLoadingOverlay;
-(char)shouldShowLoadingOverlay;
-(void)setShowLoadingOverlay:(char)arg1 ;
-(void)setDidReceiveContextRefreshNotification:(char)arg1 ;
-(id)closeFolderSelectorBlock;
-(void)setCloseFolderSelectorBlock:(id)arg1 ;
-(NSArray *)notesToMoveToFolder;
-(void)updateAccessibilityForShowingFolderSelector:(char)arg1 ;
-(void)presentFolderSelector:(id)arg1 ;
-(void)speakAccessibilityNowShowingNoteAnnouncementAfterDeletingNotes:(id)arg1 ;
-(void)updateTableViewAndDeleteNotes:(id)arg1 ;
-(void)updateSortDescriptorsInFetchedResultsController;
-(unsigned)previousSummaryViewNumNotes;
-(UIBarButtonItem *)summaryButton;
-(UIBarButtonItem *)moveAllButton;
-(UIBarButtonItem *)trashButton;
-(char)shouldDimView;
-(void)setFetchedResultsController:(NSFetchedResultsController *)arg1 ;
-(char)shouldAlwaysHaveSelectedNoteWhenNotInEditMode;
-(UIView *)loadingOverlay;
-(void)keyCommandFindNote:(id)arg1 ;
-(void)cleanupAfterMoveNotesDidCancel:(char)arg1 indexPathToSelect:(id)arg2 ;
-(void)attachmentUpdatedForNote:(id)arg1 ;
-(void)startEditMode:(id)arg1 ;
-(void)moveSelectedNotes:(id)arg1 ;
-(void)deleteSelectedNotes:(id)arg1 ;
-(void)deleteAllNotes:(id)arg1 ;
-(void)moveAllNotes:(id)arg1 ;
-(void)showDebugMenu:(id)arg1 ;
-(void)setNewCurrentNoteNotInNotes:(id)arg1 ;
-(void)notesListContainerDidChange;
-(void)reloadRowForNote:(id)arg1 ;
-(void)icaxCancelFolderSelectionForMovingNotes;
-(void)setIsMovingOrDeletingNotes:(char)arg1 ;
-(void)setTrashButton:(UIBarButtonItem *)arg1 ;
-(void)setDeleteAllButton:(UIBarButtonItem *)arg1 ;
-(void)setMoveAllButton:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)debugButton;
-(void)setDebugButton:(UIBarButtonItem *)arg1 ;
-(void)setLoadingOverlay:(UIView *)arg1 ;
-(void)setHeaderViewLabel:(UILabel *)arg1 ;
-(id)_icaxDeletedNotesAnnouncementForNotes:(id)arg1 ;
-(char)_icaxShouldAnnounceNowShowing;
-(void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned)arg4 newIndexPath:(id)arg5 ;
-(void)controllerDidChangeContent:(id)arg1 ;
-(void)controllerWillChangeContent:(id)arg1 ;
-(void)setDelegate:(id<ICNotesListViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(char)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(char)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id<ICNotesListViewControllerDelegate>)delegate;
-(id)undoManager;
-(void)didReceiveMemoryWarning;
-(char)shouldAutorotate;
-(id)keyCommands;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(char)canBecomeFirstResponder;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)viewDidLayoutSubviews;
-(id)tableView:(id)arg1 titleForSwipeAccessoryButtonForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 swipeAccessoryButtonPushedForRowAtIndexPath:(id)arg2 ;
-(void)setTableView:(ICListTableView *)arg1 ;
-(void)tableView:(id)arg1 prefetchRowsAtIndexPaths:(id)arg2 ;
-(void)tableView:(id)arg1 cancelPrefetchingForRowsAtIndexPaths:(id)arg2 ;
-(ICListTableView *)tableView;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)contentScrollView;
-(void)viewDidLoad;
-(UIView *)dimmingView;
-(id)previewViewControllerForLocation:(CGPoint)arg1 inSourceView:(id)arg2 ;
-(void)willPresentPreviewViewController:(id)arg1 forLocation:(CGPoint)arg2 inSourceView:(id)arg3 ;
-(void)setCancelButton:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)cancelButton;
-(char)accessibilityPerformEscape;
-(void)setDoneButton:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)doneButton;
-(void)setDimmingView:(UIView *)arg1 ;
-(void)willEnterForeground:(id)arg1 ;
-(void)cancel:(id)arg1 ;
-(void)setImageHeight:(float)arg1 ;
-(float)imageHeight;
-(void)setupUI;
-(NSArray *)notes;
-(ICSearchViewController *)searchViewController;
-(void)setSearchViewController:(ICSearchViewController *)arg1 ;
-(void)prepareForSuspend;
-(UIBarButtonItem *)attachmentButton;
-(UIBarButtonItem *)editButton;
-(UIBarButtonItem *)addNoteButton;
-(void)setAddNoteButton:(UIBarButtonItem *)arg1 ;
-(void)accountsDidChange:(id)arg1 ;
-(void)deleteNote:(id)arg1 ;
-(void)contentSizeCategoryDidChange;
-(void)progressIndicatorTrackerStartAnimation;
-(void)progressIndicatorTrackerStopAnimation;
-(NSDate *)lastAccessibilityAnnouncementDate;
-(void)setLastAccessibilityAnnouncementDate:(NSDate *)arg1 ;
-(void)setSummaryView:(ICNotesListSummaryView *)arg1 ;
-(ICNotesListSummaryView *)summaryView;
-(void)setEditButton:(UIBarButtonItem *)arg1 ;
@end

