/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:44 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/DirectionsManagerObserver.h>
#import <libobjc.A.dylib/MNNavigationServiceObserver.h>
#import <Maps/SearchSessionObserver.h>

@protocol NSObject, CarDisplayDelegate;
@class NSTimer, NSOperation, NSDate, UIAlertController, SearchSession, UILongPressGestureRecognizer, CarAlertViewController, NSDictionary, NSUUID, CarChromeViewController, CarMapsSuggestionsController, UIScreen, CarDisplayWindow, GEOComposedWaypoint, UITraitCollection, NSString;

@interface CarDisplayController : NSObject <DirectionsManagerObserver, MNNavigationServiceObserver, SearchSessionObserver> {

	NSTimer* _idleTimeoutTimer;
	NSTimer* _screenOwnershipSuppressionTimer;
	NSOperation* _screenUpdateOperation;
	char _updatingScreen;
	char _willEnterForeground;
	NSDate* _dateOfLastScreenUpdate;
	char _hasRunNewScreenRefreshTasks;
	char _isPreparingNavigation;
	char _resetingNavForExternal;
	UIAlertController* _simulationAlertController;
	char _hasArrived;
	NSTimer* _arrivalResetTimer;
	/*^block*/id _navigationEndedHandler;
	id<NSObject> _externalNavigatonStateObserver;
	char _observingMapsNavigationState;
	SearchSession* _searchSession;
	UILongPressGestureRecognizer* _nightModeToggleGesture;
	CarAlertViewController* _currentAlertViewController;
	int _queuedInterruptionKind;
	NSDictionary* _queuedInterruptionUserInfo;
	/*^block*/id _queuedInterruptionHandler;
	/*^block*/id _queuedInterruptionDismissalBlock;
	NSUUID* _queuedInterruptionKey;
	CarChromeViewController* _chromeViewController;
	CarMapsSuggestionsController* _mapsSuggestionsController;
	id<CarDisplayDelegate> _delegate;
	UIScreen* _screen;
	CarDisplayWindow* _window;
	GEOComposedWaypoint* _destinationForNavigationTransportSwitch;
	NSDate* _backgroundAutoHideStateTrackingDate;
	unsigned _state;
	CarDisplayWindow* _alertWindow;

}

@property (nonatomic,retain) CarChromeViewController * chromeViewController;                             //@synthesize chromeViewController=_chromeViewController - In the implementation block
@property (nonatomic,retain) CarMapsSuggestionsController * mapsSuggestionsController;                   //@synthesize mapsSuggestionsController=_mapsSuggestionsController - In the implementation block
@property (nonatomic,retain) UIScreen * screen;                                                          //@synthesize screen=_screen - In the implementation block
@property (nonatomic,retain) NSDate * backgroundAutoHideStateTrackingDate;                               //@synthesize backgroundAutoHideStateTrackingDate=_backgroundAutoHideStateTrackingDate - In the implementation block
@property (assign,nonatomic) unsigned state;                                                             //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) CarDisplayWindow * window;                                                  //@synthesize window=_window - In the implementation block
@property (nonatomic,retain) CarDisplayWindow * alertWindow;                                             //@synthesize alertWindow=_alertWindow - In the implementation block
@property (assign,nonatomic,__weak) id<CarDisplayDelegate> delegate;                                     //@synthesize delegate=_delegate - In the implementation block
@property (getter=isCurrentlyConnected,nonatomic,readonly) char currentlyConnected; 
@property (nonatomic,readonly) UITraitCollection * screenTraitCollection; 
@property (nonatomic,readonly) int interactionModel; 
@property (nonatomic,readonly) unsigned primaryInteractionModel; 
@property (nonatomic,readonly) unsigned supportedInteractionModels; 
@property (nonatomic,readonly) char supportsFocusInteractionModel; 
@property (nonatomic,readonly) char supportsTouchInteractionModel; 
@property (nonatomic,readonly) int touchscreenFidelity; 
@property (nonatomic,readonly) int connectionType; 
@property (getter=isHostingNavigation,nonatomic,readonly) char hostingNavigation; 
@property (nonatomic,readonly) SearchSession * searchSession;                                            //@synthesize searchSession=_searchSession - In the implementation block
@property (nonatomic,retain) GEOComposedWaypoint * destinationForNavigationTransportSwitch;              //@synthesize destinationForNavigationTransportSwitch=_destinationForNavigationTransportSwitch - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)enablingState;
+(double)debugLaunchPerformanceDelay;
+(char)debugLaunchPerformance;
+(char)isCarPlayAvailable;
+(unsigned)maximumListLength;
+(void)launchPerformanceSetup;
+(id)sharedInstance;
+(void)initialize;
+(void)load;
-(/*^block*/id)presentInterruptionOfKind:(int)arg1 userInfo:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(CarChromeViewController *)chromeViewController;
-(void)setChromeViewController:(CarChromeViewController *)arg1 ;
-(void)searchSessionWillPerformSearch:(id)arg1 ;
-(void)searchSessionDidFail:(id)arg1 ;
-(void)searchSessionDidChangeSearchFieldItem:(id)arg1 ;
-(void)searchSessionDidChangeSearchResults:(id)arg1 ;
-(void)searchSessionDidInvalidate:(id)arg1 ;
-(void)directionsManagerDidStartLoad:(id)arg1 ;
-(void)directionsManager:(id)arg1 didLoadRoute:(id)arg2 ;
-(void)directionsManagerDidReset:(id)arg1 ;
-(void)directionsManagerWillClear:(id)arg1 ;
-(void)directionsManager:(id)arg1 needsPromptToSimulateForOptions:(int)arg2 ;
-(void)directionsManager:(id)arg1 willStartDirectionsToCurrentRouteWithOptions:(int)arg2 ;
-(void)directionsManager:(id)arg1 didChangeChromeTransportType:(int)arg2 ;
-(SearchSession *)searchSession;
-(void)_searchSessionWillStart:(id)arg1 ;
-(void)updateForCurrentEnablingState;
-(char)isChromeAvailable;
-(void)prepareCarPlay;
-(void)_setupCarPlayIfNeeded;
-(void)_tearDownCarPlayIfNeeded;
-(double)_activationDelay;
-(void)_prepareChromeForFirstUse;
-(void)_destroyChrome;
-(void)_setChromeSuppressed:(char)arg1 ;
-(void)_setChromeInactive:(char)arg1 afterDelay:(double)arg2 ;
-(void)_carDisplayDidFinishLaunching:(id)arg1 ;
-(void)_carDisplayDidBecomeActive:(id)arg1 ;
-(void)_externalAccessoryUpdated;
-(void)runNewScreenRefreshTasksIfNeeded;
-(void)_startScreenOwnershipSuppressionTimer;
-(void)_stopScreenOwnershipSuppressionTimer;
-(void)_startTimingIdleTimeout;
-(void)_stopTimingIdleTimout;
-(void)_idleTimeoutFired:(id)arg1 ;
-(void)_popIfTopModeIsInvalidAfterReconnection:(char)arg1 ;
-(UITraitCollection *)screenTraitCollection;
-(id)availableCarPlayScreen;
-(void)attachConnectedCarPlayScreen;
-(char)_activelyOnScreen;
-(void)setMapsSuggestionsController:(CarMapsSuggestionsController *)arg1 ;
-(void)_setNeedsScreenUpdate;
-(char)isCurrentlyConnected;
-(char)supportsInteractionModels:(unsigned)arg1 ;
-(unsigned)supportedInteractionModels;
-(char)supportsTouchInteractionModel;
-(char)supportsFocusInteractionModel;
-(int)touchscreenFidelity;
-(char)_shouldSendEvent:(id)arg1 toCarDisplayWindow:(id)arg2 ;
-(id)processSearchFieldItem:(id)arg1 searchInfo:(id)arg2 userInfo:(id)arg3 ;
-(void)_cancelPrepareNavigationHosting;
-(void)_prepareToHostNavigationIfConnected;
-(void)_startNavigatingImmediately:(char)arg1 ;
-(void)detourToMapItem:(id)arg1 ;
-(void)goToOverview;
-(void)goToDetail;
-(char)isHostingNavigation;
-(void)_updateNavigationHostingState;
-(void)promptToEndNavigation:(/*^block*/id)arg1 ;
-(void)_promptToEndNavigationAccepted;
-(void)_promptToEndNavigationDeclined;
-(void)_startObservingMapsNavigationState;
-(void)_stopObservingMapsNavigationState;
-(void)_startObservingExternalNavigationStateIfNeeded;
-(void)_stopObservingExternalNavigationState;
-(void)_startArrivalTimer;
-(void)_stopArrivalTimer;
-(void)_arrivalResetTimerFired:(id)arg1 ;
-(void)_prepareNearby;
-(void)_presentQueuedInterruptionIfNeeded;
-(void)_removeQueuedInterruptionWithKey:(id)arg1 ;
-(void)presentAlertViewController:(id)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)dismissAlertViewController:(id)arg1 animated:(char)arg2 ;
-(char)overrideShouldSuppressChrome;
-(void)setOverrideShouldSuppressChrome:(char)arg1 ;
-(void)_setOverrideShouldSuppressChrome:(char)arg1 refreshScreenConnection:(char)arg2 ;
-(void)_registerCarInfoForGEOLogging;
-(void)_presentNavigationSimulationAlertWithOptions:(int)arg1 ;
-(void)_dismissNavigationSimulationAlert;
-(void)_updateCarPlayNightModeToggle;
-(void)_toggleNightMode:(id)arg1 ;
-(CarMapsSuggestionsController *)mapsSuggestionsController;
-(GEOComposedWaypoint *)destinationForNavigationTransportSwitch;
-(void)setDestinationForNavigationTransportSwitch:(GEOComposedWaypoint *)arg1 ;
-(NSDate *)backgroundAutoHideStateTrackingDate;
-(void)setBackgroundAutoHideStateTrackingDate:(NSDate *)arg1 ;
-(id)init;
-(void)setDelegate:(id<CarDisplayDelegate>)arg1 ;
-(void)dealloc;
-(CarDisplayWindow *)window;
-(id<CarDisplayDelegate>)delegate;
-(unsigned)state;
-(void)setState:(unsigned)arg1 ;
-(UIScreen *)screen;
-(void)setWindow:(CarDisplayWindow *)arg1 ;
-(CarDisplayWindow *)alertWindow;
-(unsigned)primaryInteractionModel;
-(void)setScreen:(UIScreen *)arg1 ;
-(int)interactionModel;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_didEnterBackground:(id)arg1 ;
-(void)_willEnterForeground:(id)arg1 ;
-(void)setAlertWindow:(CarDisplayWindow *)arg1 ;
-(void)_screenDidConnect:(id)arg1 ;
-(void)_screenDidDisconnect:(id)arg1 ;
-(int)connectionType;
-(void)_updateForCurrentScreen;
-(char)_validateTransitionFromState:(unsigned)arg1 toState:(unsigned)arg2 ;
-(void)navigationServiceDidArrive:(id)arg1 ;
-(void)navigationService:(id)arg1 didChangeFromState:(unsigned)arg2 toState:(unsigned)arg3 ;
-(void)navigationService:(id)arg1 willChangeFromState:(unsigned)arg2 toState:(unsigned)arg3 ;
@end

