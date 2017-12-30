/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:46 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/iBooks.app/Frameworks/BookCore.framework/BookCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, IMUbiquityStatusChangeObserving;
@class NSString, NSURL, NSObject, NSHashTable;

@interface IMUbiquityStatusMonitor : NSObject {

	char _optedIn;
	char _isUbiquityEnabled;
	char _optedInKnown;
	char _lastArchivedNonNilUbiquityIdentityTokenWasNonNilAtColdLaunch;
	id _lastArchivedUbiquityIdentityToken;
	id _lastArchivedNonNilUbiquityIdentityToken;
	id _currentUbiquityIdentityToken;
	NSString* _containerIdentifier;
	NSURL* _containerURL;
	NSURL* _documentsURL;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSObject*<OS_dispatch_queue> _containerQueue;
	NSObject*<OS_dispatch_queue> _notifyQueue;
	NSHashTable* _observers;
	id<IMUbiquityStatusChangeObserving> _coordinatingObserver;

}

@property (assign,nonatomic) char isUbiquityEnabled;                                                         //@synthesize isUbiquityEnabled=_isUbiquityEnabled - In the implementation block
@property (nonatomic,copy) id lastArchivedUbiquityIdentityToken;                                             //@synthesize lastArchivedUbiquityIdentityToken=_lastArchivedUbiquityIdentityToken - In the implementation block
@property (nonatomic,copy) id lastArchivedNonNilUbiquityIdentityToken;                                       //@synthesize lastArchivedNonNilUbiquityIdentityToken=_lastArchivedNonNilUbiquityIdentityToken - In the implementation block
@property (nonatomic,copy) id currentUbiquityIdentityToken;                                                  //@synthesize currentUbiquityIdentityToken=_currentUbiquityIdentityToken - In the implementation block
@property (nonatomic,copy) NSString * containerIdentifier;                                                   //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
@property (nonatomic,copy) NSURL * containerURL;                                                             //@synthesize containerURL=_containerURL - In the implementation block
@property (nonatomic,copy) NSURL * documentsURL;                                                             //@synthesize documentsURL=_documentsURL - In the implementation block
@property (assign,nonatomic) char optedIn;                                                                   //@synthesize optedIn=_optedIn - In the implementation block
@property (assign,nonatomic) char optedInKnown;                                                              //@synthesize optedInKnown=_optedInKnown - In the implementation block
@property (assign,nonatomic) char lastArchivedNonNilUbiquityIdentityTokenWasNonNilAtColdLaunch;              //@synthesize lastArchivedNonNilUbiquityIdentityTokenWasNonNilAtColdLaunch=_lastArchivedNonNilUbiquityIdentityTokenWasNonNilAtColdLaunch - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;                                     //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> containerQueue;                                    //@synthesize containerQueue=_containerQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> notifyQueue;                                       //@synthesize notifyQueue=_notifyQueue - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;                                                        //@synthesize observers=_observers - In the implementation block
@property (assign,nonatomic,__weak) id<IMUbiquityStatusChangeObserving> coordinatingObserver;                //@synthesize coordinatingObserver=_coordinatingObserver - In the implementation block
@property (nonatomic,copy,readonly) id ubiquityIdentityToken; 
@property (nonatomic,readonly) char userIdentityPreviouslyRecordedOnThisDevice; 
+(id)itunesuUbiquitousStatusMonitor;
-(char)isUbiquityEnabled;
-(void)dq_refreshUbiquityAvailabilityStatus;
-(void)p_ubiquityIdentityDidChange:(id)arg1 ;
-(char)optedInKnown;
-(void)refreshUbiquityTokensAndUpdateWithOptedIn:(char)arg1 ;
-(void)dq_archiveCurrentUbiquityIdentityToken;
-(char)lastArchivedNonNilUbiquityIdentityTokenWasNonNilAtColdLaunch;
-(id)lastArchivedNonNilUbiquityIdentityToken;
-(id)currentUbiquityIdentityToken;
-(id<IMUbiquityStatusChangeObserving>)coordinatingObserver;
-(void)setCoordinatingObserver:(id<IMUbiquityStatusChangeObserving>)arg1 ;
-(id)lastArchivedUbiquityIdentityToken;
-(NSObject*<OS_dispatch_queue>)containerQueue;
-(void)updateWithOptedIn:(char)arg1 ;
-(char)userIdentityPreviouslyRecordedOnThisDevice;
-(void)registerCoordinatingObserver:(id)arg1 ;
-(void)restartObserving;
-(void)setIsUbiquityEnabled:(char)arg1 ;
-(void)setLastArchivedUbiquityIdentityToken:(id)arg1 ;
-(void)setLastArchivedNonNilUbiquityIdentityToken:(id)arg1 ;
-(void)setCurrentUbiquityIdentityToken:(id)arg1 ;
-(void)setContainerURL:(NSURL *)arg1 ;
-(void)setDocumentsURL:(NSURL *)arg1 ;
-(void)setOptedInKnown:(char)arg1 ;
-(void)setLastArchivedNonNilUbiquityIdentityTokenWasNonNilAtColdLaunch:(char)arg1 ;
-(void)setContainerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSURL *)containerURL;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(NSURL *)documentsURL;
-(id)ubiquityIdentityToken;
-(char)optedIn;
-(void)setObservers:(NSHashTable *)arg1 ;
-(NSHashTable *)observers;
-(NSObject*<OS_dispatch_queue>)notifyQueue;
-(void)setNotifyQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSString *)containerIdentifier;
-(void)setContainerIdentifier:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithContainerIdentifier:(id)arg1 ;
-(void)setOptedIn:(char)arg1 ;
@end

