/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:38 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/TV.app/TV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MPStoreDownloadManagerObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, NSOperationQueue, NSMutableDictionary, ML3QueryResultSet, MPMediaItem, VideosRentalExpirationEvent, NSTimer, NSMutableSet, VideosRentalsImageImporter, VideosBagManager, NSString;

@interface VideosRentalDataStore : NSObject <MPStoreDownloadManagerObserver> {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSOperationQueue* _operationQueue;
	NSMutableDictionary* _rentalDataByPID;
	ML3QueryResultSet* _resultSet;
	char _shouldReloadRentalData;
	MPMediaItem* _currentlyPlayingRental;
	VideosRentalExpirationEvent* _rentalExpirationEvent;
	NSTimer* _rentalExpirationTimer;
	NSMutableSet* _mutableNotificationsProcessed;
	VideosRentalsImageImporter* _imageImporter;
	VideosBagManager* _bagManager;
	char _needsToFinishLoad;
	char _loggedIn;
	char _networkConnection;

}

@property (getter=isLoggedIn) char loggedIn;                                 //@synthesize loggedIn=_loggedIn - In the implementation block
@property (getter=hasNetworkConnection) char networkConnection;              //@synthesize networkConnection=_networkConnection - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)existingInstance;
+(id)sharedInstance;
-(char)isLoggedIn;
-(id)rentalDataForMediaItem:(id)arg1 ;
-(void)checkinRentalData:(id)arg1 ;
-(void)deferredCheckinRentalData:(id)arg1 ;
-(void)loadRentalData:(id)arg1 withReason:(int)arg2 ;
-(void)deferredSyncRentalData:(id)arg1 ;
-(void)checkinRentalData:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)loadRentalData:(id)arg1 withReason:(int)arg2 andCompletionHandler:(/*^block*/id)arg3 ;
-(void)resetRentalDataForMediaItem:(id)arg1 reason:(unsigned)arg2 ;
-(void)loadRentalDataFromLibrary;
-(void)showExpiredAlerts;
-(void)loadAndSyncRentalInformation;
-(void)resetAllDataForReason:(unsigned)arg1 ;
-(void)importRentalInformation;
-(void)_libraryDisplayValuesDidChange:(id)arg1 ;
-(void)_fetchedInitialDownloads:(id)arg1 ;
-(void)_playbackItemReadyToPlay:(id)arg1 ;
-(void)_playbackItemDidEnd:(id)arg1 ;
-(void)setLoggedIn:(char)arg1 ;
-(void)_accountChanged:(id)arg1 ;
-(char)_hasNetworkConnectionForNetworkType:(int)arg1 ;
-(void)setNetworkConnection:(char)arg1 ;
-(void)_loadAndSyncRentalInformation;
-(char)_isLoadingRentalData:(id)arg1 ;
-(void)_reloadRentalData;
-(id)_rentalDataForMediaItem:(id)arg1 ;
-(void)_scheduleRentalEvents;
-(void)syncRentalData:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_handleFinishedOperation:(id)arg1 ;
-(id)_rentalItems;
-(void)_setCurrentlyPlayingRental:(id)arg1 ;
-(char)hasNetworkConnection;
-(void)_checkInBags;
-(void)_syncBags;
-(void)_rentalTimerFired:(id)arg1 ;
-(void)_rebuildResultSet;
-(void)syncRentalData:(id)arg1 ;
-(void)_rescueOrphanedRentals:(id)arg1 ;
-(id)_rentalDataForStoreIdentifier:(unsigned long long)arg1 ;
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)downloadManager:(id)arg1 didAddDownloads:(id)arg2 removeDownloads:(id)arg3 ;
-(void)downloadManager:(id)arg1 downloadDidFinish:(id)arg2 ;
-(void)_syncGenerationDidChange:(id)arg1 ;
-(void)_libraryDidChangeNotification:(id)arg1 ;
-(void)_networkReachabilityChanged:(id)arg1 ;
-(void)_enqueueOperation:(id)arg1 ;
@end

