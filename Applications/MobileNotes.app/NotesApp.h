/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:02 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileNotes/NotesDisplayControllerDelegate.h>
#import <MobileNotes/ICLegacyNotesListViewControllerDelegate.h>
#import <UIKit/UIApplicationDelegate.h>

@class NSMutableSet, NotesDisplayController, ICHTMLNotesListViewController, NoteContext, NSManagedObjectID, NSTimer, NSUserActivity, ICSplitViewController, UINavigationController, NoteObject, NoteCollectionObject, NSString, UIWindow;

@interface NotesApp : NSObject <NotesDisplayControllerDelegate, ICLegacyNotesListViewControllerDelegate, UIApplicationDelegate> {

	unsigned _isBackgrounding : 1;
	unsigned _shouldHandleExternalChangeOnResume : 1;
	unsigned _refreshIsPendingForStoresList : 1;
	unsigned _refreshIsPendingForAllNotes : 1;
	NSMutableSet* _collectionIDsPendingRefresh;
	char _didSetupApplication;
	char _pendingUserActivityContinuation;
	char _shouldSetupApplicationWhenEnteringForeground;
	NotesDisplayController* _displayController;
	ICHTMLNotesListViewController* _listController;
	NoteContext* _noteContext;
	NSManagedObjectID* _displayedNoteID;
	NSManagedObjectID* _displayedCollectionID;
	NSTimer* _pendingUserActivityContinuationTimer;
	NSUserActivity* _userActivityPendingContinuation;

}

@property (nonatomic,retain) NoteContext * noteContext;                                                                  //@synthesize noteContext=_noteContext - In the implementation block
@property (nonatomic,readonly) ICSplitViewController * splitViewController; 
@property (nonatomic,readonly) UINavigationController * masterNavigationController; 
@property (nonatomic,retain) NSManagedObjectID * displayedNoteID;                                                        //@synthesize displayedNoteID=_displayedNoteID - In the implementation block
@property (nonatomic,retain) NSManagedObjectID * displayedCollectionID;                                                  //@synthesize displayedCollectionID=_displayedCollectionID - In the implementation block
@property (assign,getter=isPendingUserActivityContinuation,nonatomic) char pendingUserActivityContinuation;              //@synthesize pendingUserActivityContinuation=_pendingUserActivityContinuation - In the implementation block
@property (nonatomic,retain) NSTimer * pendingUserActivityContinuationTimer;                                             //@synthesize pendingUserActivityContinuationTimer=_pendingUserActivityContinuationTimer - In the implementation block
@property (nonatomic,retain) NSUserActivity * userActivityPendingContinuation;                                           //@synthesize userActivityPendingContinuation=_userActivityPendingContinuation - In the implementation block
@property (nonatomic,retain) ICHTMLNotesListViewController * listController;                                             //@synthesize listController=_listController - In the implementation block
@property (nonatomic,retain) NotesDisplayController * displayController;                                                 //@synthesize displayController=_displayController - In the implementation block
@property (assign,nonatomic) char shouldSetupApplicationWhenEnteringForeground;                                          //@synthesize shouldSetupApplicationWhenEnteringForeground=_shouldSetupApplicationWhenEnteringForeground - In the implementation block
@property (nonatomic,readonly) UINavigationController * detailNavigationController; 
@property (nonatomic,readonly) NoteObject * displayedNote; 
@property (nonatomic,readonly) NoteCollectionObject * displayedCollection; 
@property (nonatomic,readonly) char didSetupApplication; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIWindow * window; 
+(id)sharedNotesApp;
-(UINavigationController *)detailNavigationController;
-(void)_saveState;
-(void)displayNote:(id)arg1 animated:(char)arg2 showListControllerIfNecessary:(char)arg3 ;
-(void)showCurrentNoteAfterLaunching;
-(char)isPendingUserActivityContinuation;
-(void)attemptToContinuePendingUserActivity;
-(void)didShowDisplayController;
-(void)createAndDisplayNewNoteAnimated:(char)arg1 ;
-(void)displayNoNoteAnimated:(char)arg1 ;
-(void)launchSearchIndexableObjectFromCoreSpotlight:(id)arg1 ;
-(void)displayCollection:(id)arg1 animated:(char)arg2 ;
-(NSTimer *)pendingUserActivityContinuationTimer;
-(void)setPendingUserActivityContinuationTimer:(NSTimer *)arg1 ;
-(void)setUserActivityPendingContinuation:(NSUserActivity *)arg1 ;
-(void)setPendingUserActivityContinuation:(char)arg1 ;
-(void)abortUserActivityContinuation;
-(void)finishActivityContinuation;
-(NSUserActivity *)userActivityPendingContinuation;
-(void)userActivityContinuationTimedOut:(id)arg1 ;
-(void)setupApplication;
-(void)didReceiveTouchAffectingPendingActivityContinuation:(id)arg1 ;
-(id)newlyCreatedNoteReadyForDisplay;
-(void)setupApplicationIfNecessary;
-(void)notesListViewController:(id)arg1 didSelectNote:(id)arg2 ;
-(void)notesListViewController:(id)arg1 deleteNote:(id)arg2 ;
-(NoteObject *)displayedNote;
-(void)notesListViewController:(id)arg1 willMoveNotes:(id)arg2 ;
-(void)didShowList;
-(void)didShowNote;
-(void)didChangeOrientation:(id)arg1 ;
-(char)isDisplayControllerVisible;
-(void)noteDisplayController:(id)arg1 deleteNote:(id)arg2 actionOrigin:(int)arg3 ;
-(char)canBeginEditingForNoteDisplayController:(id)arg1 ;
-(void)notesChangedExternally:(id)arg1 ;
-(void)noteDisplayController:(id)arg1 beginDisplayingNote:(id)arg2 animated:(char)arg3 ;
-(void)noteDisplayController:(id)arg1 endDisplayingNote:(id)arg2 animated:(char)arg3 ;
-(void)noteDisplayController:(id)arg1 noteWasDeletedFromSearchResult:(id)arg2 ;
-(void)noteDisplayController:(id)arg1 beginEditingNote:(id)arg2 animated:(char)arg3 ;
-(id)archivedConfiguration;
-(char)didSetupApplication;
-(void)_cancelAllPendingRefreshes;
-(char)shouldSetupApplicationWhenEnteringForeground;
-(void)setShouldSetupApplicationWhenEnteringForeground:(char)arg1 ;
-(void)refreshOrphanedAccountsIfNeeded;
-(void)refreshNotesIfNeededForCollection:(id)arg1 ;
-(void)refreshStoresListIfNeeded;
-(void)updateAccountMigrationStates;
-(void)setDisplayedNoteID:(NSManagedObjectID *)arg1 ;
-(void)setDisplayedCollectionIDFromRestoredID:(id)arg1 ;
-(void)importWillDeleteNote:(id)arg1 ;
-(NoteCollectionObject *)displayedCollection;
-(void)displayNote:(id)arg1 animated:(char)arg2 ;
-(NSManagedObjectID *)displayedCollectionID;
-(NSManagedObjectID *)displayedNoteID;
-(void)updateListControllerForContentAnimated:(char)arg1 ;
-(id)newlyCreatedNote;
-(void)setDisplayedNoteIDForNote:(id)arg1 ;
-(void)setDisplayedCollectionID:(NSManagedObjectID *)arg1 ;
-(id)defaultNoteToDisplay;
-(void)updateStateToDisplayNote:(id)arg1 animated:(char)arg2 ;
-(void)updateControllersForDisplayedContentAnimated:(char)arg1 ;
-(void)didDeleteNote:(id)arg1 consequentAction:(int)arg2 ;
-(void)refreshDatesAndTimes;
-(char)interfaceRequiresDetailController;
-(void)updateStateToDisplayCollection:(id)arg1 animated:(char)arg2 ;
-(void)showListControllerAnimated:(char)arg1 ;
-(void)showDisplayControllerAnimated:(char)arg1 showListControllerIfNecessary:(char)arg2 ;
-(int)deleteNoteConsequentActionForActionOrigin:(int)arg1 ;
-(void)deleteNote:(id)arg1 consequentAction:(int)arg2 ;
-(void)_unmarkRefreshAsPendingForCollectionWithId:(id)arg1 ;
-(char)_refreshIsPendingForCollectionWithId:(id)arg1 ;
-(void)_markRefreshAsPendingForCollectionWithId:(id)arg1 ;
-(void)_performRefreshIfNeededForCollectionWithId:(id)arg1 ;
-(void)_unmarkRefreshAsPendingForStoresList;
-(char)_refreshIsPendingForStoresList;
-(void)_markRefreshAsPendingForStoresList;
-(void)_performRefreshIfNeededForStoresList;
-(void)_performRefreshIfNeededForOrphanedAccounts;
-(void)timeZoneChanged:(id)arg1 ;
-(void)dealloc;
-(char)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4 ;
-(void)applicationWillTerminate:(id)arg1 ;
-(void)applicationSignificantTimeChange:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(char)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
-(void)application:(id)arg1 didFailToContinueUserActivityWithType:(id)arg2 error:(id)arg3 ;
-(char)application:(id)arg1 willContinueUserActivityWithType:(id)arg2 ;
-(char)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(/*^block*/id)arg3 ;
-(void)applicationWillSuspendForEventsOnly;
-(id)nameOfDefaultImageToUpdateAtSuspension;
-(void)prepareForDefaultImageSnapshotForScreen:(id)arg1 ;
-(void)sendEvent:(id)arg1 ;
-(ICSplitViewController *)splitViewController;
-(ICHTMLNotesListViewController *)listController;
-(void)localeChanged:(id)arg1 ;
-(void)setListController:(ICHTMLNotesListViewController *)arg1 ;
-(void)setDisplayController:(NotesDisplayController *)arg1 ;
-(NotesDisplayController *)displayController;
-(NoteContext *)noteContext;
-(void)setNoteContext:(NoteContext *)arg1 ;
-(UINavigationController *)masterNavigationController;
@end

