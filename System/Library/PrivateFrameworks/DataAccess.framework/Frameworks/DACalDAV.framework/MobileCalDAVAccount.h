/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:38 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DACalDAV/DACalDAV-Structs.h>
#import <DataAccess/DAAccount.h>

@class NSMutableDictionary, NSMutableSet, CalDAVServerVersion, MobileCalDAVPrincipal, CalDAVPrincipalSearchPropertySet, CalDAVRefreshContext, CoreDAVDiscoveryTaskGroup, MobileCalDAVAccountRefreshActor, DACoreDAVLogger, NSDictionary, DACoreDAVTaskManager, NSURL, NSString, NSSet, NSTimeZone, NSDate, NSArray;

@interface MobileCalDAVAccount : DAAccount {

	int _wasMigrated;
	NSMutableDictionary* _principals;
	NSMutableDictionary* _itemIDsToMoveActions;
	NSMutableSet* _mMovedItemURLStrings;
	NSMutableSet* _calendars;
	CalDAVServerVersion* _serverVersion;
	char _needsAccountPropertyRefresh;
	char _isRefreshing;
	char _searchQueriesShouldCancel;
	char _isSpinning;
	char _subscribedCalendarsChanged;
	NSMutableSet* _movedItemURLStrings;
	int _preferredEventDaysToSync;
	int _preferredToDoDaysToSync;
	MobileCalDAVPrincipal* _mainPrincipal;
	CalDAVPrincipalSearchPropertySet* _searchPropertySet;
	CalDAVRefreshContext* _refreshContext;
	CoreDAVDiscoveryTaskGroup* _checkValidityTaskGroup;
	MobileCalDAVAccountRefreshActor* _actor;
	NSMutableSet* _searchTaskSet;
	DACoreDAVLogger* _coreDAVLogger;

}

@property (nonatomic,retain) CoreDAVDiscoveryTaskGroup * checkValidityTaskGroup;                //@synthesize checkValidityTaskGroup=_checkValidityTaskGroup - In the implementation block
@property (nonatomic,retain) MobileCalDAVAccountRefreshActor * actor;                           //@synthesize actor=_actor - In the implementation block
@property (assign,nonatomic) char isSpinning;                                                   //@synthesize isSpinning=_isSpinning - In the implementation block
@property (nonatomic,retain) NSMutableSet * searchTaskSet;                                      //@synthesize searchTaskSet=_searchTaskSet - In the implementation block
@property (nonatomic,retain) DACoreDAVLogger * coreDAVLogger;                                   //@synthesize coreDAVLogger=_coreDAVLogger - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * mPrincipals;                                 //@synthesize principals=_principals - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * mItemIDsToMoveActions;                       //@synthesize itemIDsToMoveActions=_itemIDsToMoveActions - In the implementation block
@property (nonatomic,retain) NSMutableSet * mMovedItemURLStrings;                               //@synthesize movedItemURLStrings=_movedItemURLStrings - In the implementation block
@property (nonatomic,retain) NSMutableSet * mCalendars;                                         //@synthesize calendars=_calendars - In the implementation block
@property (assign,nonatomic) char subscribedCalendarsChanged;                                   //@synthesize subscribedCalendarsChanged=_subscribedCalendarsChanged - In the implementation block
@property (nonatomic,retain) MobileCalDAVPrincipal * mainPrincipal;                             //@synthesize mainPrincipal=_mainPrincipal - In the implementation block
@property (nonatomic,readonly) NSDictionary * principals; 
@property (nonatomic,readonly) DACoreDAVTaskManager * taskManager; 
@property (nonatomic,retain) NSURL * collectionSetURL; 
@property (nonatomic,retain) CalDAVPrincipalSearchPropertySet * searchPropertySet;              //@synthesize searchPropertySet=_searchPropertySet - In the implementation block
@property (nonatomic,retain) NSString * overriddenServer; 
@property (nonatomic,retain) NSString * overriddenScheme; 
@property (assign,nonatomic) int overriddenPort; 
@property (assign,nonatomic) char isWritable; 
@property (assign,nonatomic) char wasMigrated; 
@property (assign,nonatomic) char needsAccountPropertyRefresh;                                  //@synthesize needsAccountPropertyRefresh=_needsAccountPropertyRefresh - In the implementation block
@property (assign,nonatomic) char isRefreshing;                                                 //@synthesize isRefreshing=_isRefreshing - In the implementation block
@property (nonatomic,readonly) NSDictionary * itemIDsToMoveActions; 
@property (nonatomic,readonly) NSSet * movedItemURLStrings; 
@property (nonatomic,copy) NSString * calendarHomeSyncToken; 
@property (nonatomic,retain) CalDAVServerVersion * serverVersion;                               //@synthesize serverVersion=_serverVersion - In the implementation block
@property (assign,nonatomic) int preferredEventDaysToSync;                                      //@synthesize preferredEventDaysToSync=_preferredEventDaysToSync - In the implementation block
@property (assign,nonatomic) int preferredToDoDaysToSync;                                       //@synthesize preferredToDoDaysToSync=_preferredToDoDaysToSync - In the implementation block
@property (nonatomic,readonly) NSTimeZone * viewedTimeZone; 
@property (nonatomic,readonly) NSDate * ocurrenceCacheStartDate; 
@property (nonatomic,readonly) NSDate * ocurrenceCacheEndDate; 
@property (nonatomic,readonly) char shouldFilterEventSyncTimeRange; 
@property (nonatomic,readonly) char shouldFilterTodoSyncTimeRange; 
@property (nonatomic,readonly) char shouldFilterSyncTimeRangeForInbox; 
@property (nonatomic,readonly) char shouldUseCalendarHomeSyncReport; 
@property (nonatomic,readonly) char supportsReminders; 
@property (nonatomic,readonly) char supportsEvents; 
@property (nonatomic,retain) CalDAVRefreshContext * refreshContext;                             //@synthesize refreshContext=_refreshContext - In the implementation block
@property (nonatomic,readonly) NSURL * serverBaseURL; 
@property (nonatomic,readonly) NSArray * wellKnownPaths; 
@property (nonatomic,readonly) NSSet * calendars; 
@property (nonatomic,retain) NSDictionary * subscribedCalendars; 
@property (assign,nonatomic) char searchQueriesShouldCancel;                                    //@synthesize searchQueriesShouldCancel=_searchQueriesShouldCancel - In the implementation block
-(id)init;
-(void)dealloc;
-(char)isRefreshing;
-(void)noteHomeSetOnDifferentHost:(id)arg1 ;
-(void)discoveryTask:(id)arg1 gotAccountInfo:(id)arg2 error:(id)arg3 ;
-(int)coreDAVLogLevel;
-(int)coreDAVOutputLevel;
-(void)coreDAVLogDiagnosticMessage:(id)arg1 atLevel:(int)arg2 ;
-(char)shouldLogTransmittedData;
-(void)coreDAVLogTransmittedDataPartial:(id)arg1 ;
-(void)coreDAVTransmittedDataFinished;
-(void)task:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)ingestBackingAccountInfoProperties;
-(id)principalPath;
-(void)setPrincipalPath:(id)arg1 ;
-(id)spinnerIdentifiers;
-(char)saveModifiedPropertiesOnBackingAccount;
-(char)isCalDAVAccount;
-(void)retainPowerAssertion;
-(void)releasePowerAssertion;
-(void)setAccountDescription:(id)arg1 ;
-(void)removeCalendar:(id)arg1 ;
-(DACoreDAVTaskManager *)taskManager;
-(id)initWithBackingAccountInfo:(id)arg1 ;
-(char)accountHasSignificantPropertyChangesFromOldAccountInfo:(id)arg1 ;
-(void)discoverInitialPropertiesWithConsumer:(id)arg1 ;
-(char)upgradeAccount;
-(void)_reallyCancelSearchQuery:(id)arg1 ;
-(void)_reallyCancelAllSearchQueries;
-(void)_reallyPerformSearchQuery:(id)arg1 ;
-(char)_reallySearchQueriesRunning;
-(char)isEqualToAccount:(id)arg1 ;
-(id)localizedIdenticalAccountFailureMessage;
-(id)localizedInvalidPasswordMessage;
-(id)onBehalfOfBundleIdentifier;
-(void)setIsSpinning:(char)arg1 ;
-(void)_setSpinning:(char)arg1 ;
-(void)setCollectionSetURL:(NSURL *)arg1 ;
-(void)setSearchPropertySet:(CalDAVPrincipalSearchPropertySet *)arg1 ;
-(void)setPrincipalURL:(id)arg1 ;
-(NSString *)calendarHomeSyncToken;
-(void)setCalendarHomeSyncToken:(NSString *)arg1 ;
-(void)setMPrincipals:(NSMutableDictionary *)arg1 ;
-(MobileCalDAVPrincipal *)mainPrincipal;
-(void)setMainPrincipal:(MobileCalDAVPrincipal *)arg1 ;
-(NSMutableDictionary *)mPrincipals;
-(void)addPrincipal:(id)arg1 ;
-(void)setNeedsAccountPropertyRefresh:(char)arg1 ;
-(void)setCoreDAVLogger:(DACoreDAVLogger *)arg1 ;
-(void)setSearchTaskSet:(NSMutableSet *)arg1 ;
-(void)setSubscribedCalendarsChanged:(char)arg1 ;
-(NSString *)overriddenServer;
-(int)overriddenPort;
-(NSString *)overriddenScheme;
-(void)_updateCalendarStore:(char)arg1 ;
-(CalDAVPrincipalSearchPropertySet *)searchPropertySet;
-(void*)copyCalStore;
-(NSMutableSet *)mCalendars;
-(void)setMCalendars:(NSMutableSet *)arg1 ;
-(NSTimeZone *)viewedTimeZone;
-(int)preferredToDoDaysToSync;
-(char)shouldFilterEventSyncTimeRange;
-(char)shouldFilterTodoSyncTimeRange;
-(id)_calendarConstraintsResource;
-(id)_calendarConstraintsPath;
-(char)supportsReminders;
-(char)supportsEvents;
-(char)_updateCalendarStoreProperties:(void*)arg1 ;
-(char)_updateCalendarStoreNoDBOpen:(char)arg1 ;
-(MobileCalDAVAccountRefreshActor *)actor;
-(void)_clearOrphanedCalendarItemChangesOfType:(int)arg1 withContext:(id)arg2 goodCalendarIds:(id)arg3 ;
-(void)_clearOrphanedChangesWithChangesCall:(/*function pointer*/void*)arg1 entityType:(int)arg2 withContext:(id)arg3 ;
-(NSDictionary *)subscribedCalendars;
-(NSDictionary *)principals;
-(char)_saveModifiedPrincipalsOnBackingAccount;
-(char)subscribedCalendarsChanged;
-(char)_saveModifiedSubscribedCalendarsOnBackingAccount;
-(CalDAVRefreshContext *)refreshContext;
-(char)wasMigrated;
-(void)setWasMigrated:(char)arg1 ;
-(void)_clearOrphanedChangesWithContext:(id)arg1 ;
-(NSMutableDictionary *)mItemIDsToMoveActions;
-(NSMutableSet *)mMovedItemURLStrings;
-(void)setRefreshContext:(CalDAVRefreshContext *)arg1 ;
-(void)setIsRefreshing:(char)arg1 ;
-(void)setActor:(MobileCalDAVAccountRefreshActor *)arg1 ;
-(void)setMItemIDsToMoveActions:(NSMutableDictionary *)arg1 ;
-(void)setMMovedItemURLStrings:(NSMutableSet *)arg1 ;
-(id)_collectActionsFromMoveDictionary:(CFDictionaryRef)arg1 forDataclass:(id)arg2 outShouldSave:(char*)arg3 ;
-(void)_collectMoveActions;
-(NSMutableSet *)searchTaskSet;
-(NSURL *)collectionSetURL;
-(CoreDAVDiscoveryTaskGroup *)checkValidityTaskGroup;
-(void)setCheckValidityTaskGroup:(CoreDAVDiscoveryTaskGroup *)arg1 ;
-(NSArray *)wellKnownPaths;
-(id)_powerAssertionContext;
-(id)_powerAssertionGroupIdentifier;
-(DACoreDAVLogger *)coreDAVLogger;
-(void)setSubscribedCalendars:(NSDictionary *)arg1 ;
-(NSSet *)movedItemURLStrings;
-(NSDictionary *)itemIDsToMoveActions;
-(void)setOverriddenServer:(NSString *)arg1 ;
-(void)setOverriddenPort:(int)arg1 ;
-(void)setOverriddenScheme:(NSString *)arg1 ;
-(NSURL *)serverBaseURL;
-(void)addCalendar:(id)arg1 ;
-(void)removeCalendarWithURL:(id)arg1 ;
-(void)reloadCalendars;
-(void)removePrincipal:(id)arg1 ;
-(NSDate *)ocurrenceCacheStartDate;
-(NSDate *)ocurrenceCacheEndDate;
-(char)shouldFilterSyncTimeRangeForInbox;
-(char)shouldUseCalendarHomeSyncReport;
-(void)cancelRefreshWithCompletion:(/*^block*/id)arg1 ;
-(void)refreshActor:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)refreshWithContext:(id)arg1 ;
-(void)dropPowerAssertions;
-(void)reattainPowerAssertions;
-(void)setPreferredEventDaysToSync:(int)arg1 ;
-(void)setPreferredToDoDaysToSync:(int)arg1 ;
-(char)needsAccountPropertyRefresh;
-(char)searchQueriesShouldCancel;
-(void)setSearchQueriesShouldCancel:(char)arg1 ;
-(char)isSpinning;
-(char)isWritable;
-(void)setIsWritable:(char)arg1 ;
-(CalDAVServerVersion *)serverVersion;
-(void)setServerVersion:(CalDAVServerVersion *)arg1 ;
-(int)preferredEventDaysToSync;
-(id)emailAddresses;
-(NSSet *)calendars;
@end

