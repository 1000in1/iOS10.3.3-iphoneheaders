/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:32 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/PPTTestCoordinatorProtocol.h>
#import <Maps/MapsActivityContainerViewControllerDelegate.h>
#import <Maps/MapsActivityViewControllerDelegate.h>
#import <Maps/ShareDelegate.h>
#import <Maps/PlaceCardActionDelegate.h>
#import <Maps/ParkedCarActionDelegate.h>

@protocol FlyoverActionCoordination;
@class UINavigationController, AnalyticsMonitor, BaseModeController, NavModeController, PedestrianNavModeController, RidesharingModeController, AppStateManager, IOSChromeViewController, StepModeController, NSString;

@interface AppCoordinator : NSObject <PPTTestCoordinatorProtocol, MapsActivityContainerViewControllerDelegate, MapsActivityViewControllerDelegate, ShareDelegate, PlaceCardActionDelegate, ParkedCarActionDelegate> {

	UINavigationController* _shareViewController;
	AnalyticsMonitor* _analyticsMonitor;
	/*^block*/id _shareCompletion;
	/*^block*/id _fixedProblemCompletion;
	BaseModeController* _baseModeController;
	NavModeController* _navModeController;
	PedestrianNavModeController* _pedestrianNavModeController;
	RidesharingModeController* _ridesharingModeController;
	AppStateManager* _appStateManager;
	IOSChromeViewController* _iosChromeViewController;
	StepModeController* _stepModeController;
	id<FlyoverActionCoordination> _flyoverActionCoordinator;

}

@property (nonatomic,readonly) id<StepActionCoordination> stepActionCoordinator; 
@property (nonatomic,readonly) id<NavActionCoordination> navActionCoordinator; 
@property (nonatomic,readonly) id<FlyoverActionCoordination> flyoverActionCoordinator;                 //@synthesize flyoverActionCoordinator=_flyoverActionCoordinator - In the implementation block
@property (nonatomic,retain) AppStateManager * appStateManager;                                        //@synthesize appStateManager=_appStateManager - In the implementation block
@property (assign,nonatomic,__weak) IOSChromeViewController * iosChromeViewController;                 //@synthesize iosChromeViewController=_iosChromeViewController - In the implementation block
@property (nonatomic,readonly) id<ActionCoordination> baseActionCoordinator; 
@property (nonatomic,readonly) BaseModeController * baseModeController;                                //@synthesize baseModeController=_baseModeController - In the implementation block
@property (nonatomic,readonly) NavModeController * navModeController;                                  //@synthesize navModeController=_navModeController - In the implementation block
@property (nonatomic,readonly) PedestrianNavModeController * pedestrianNavModeController;              //@synthesize pedestrianNavModeController=_pedestrianNavModeController - In the implementation block
@property (nonatomic,readonly) StepModeController * stepModeController;                                //@synthesize stepModeController=_stepModeController - In the implementation block
@property (nonatomic,readonly) RidesharingModeController * ridesharingModeController;                  //@synthesize ridesharingModeController=_ridesharingModeController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)editLocationForParkedCar:(id)arg1 ;
-(void)removeLocationForParkedCar:(id)arg1 sourceView:(id)arg2 sourceRect:(CGRect)arg3 completion:(/*^block*/id)arg4 ;
-(void)nameLocationFromPlaceCardItem:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)editAddressFromPlaceCardItem:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)startTableBookingFlowFromMapItem:(id)arg1 ;
-(void)shareItem:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)mapsActivityViewControllerPrint:(id)arg1 ;
-(void)mapsActivityViewControllerPresentRoutingApps:(id)arg1 ;
-(void)mapsActivityViewController:(id)arg1 activityCompleted:(char)arg2 ;
-(id)mapsActivityMapView;
-(void)mapsActivityContainerViewControllerCancel:(id)arg1 animated:(char)arg2 ;
-(char)pptTestCanUpdateTrayLayout;
-(void)pptTestUpdateTrayLayout:(unsigned)arg1 animated:(char)arg2 ;
-(char)pptTestIsTrayType:(int)arg1 ;
-(void)pptTestDismissTrayAnimated:(char)arg1 assertTrayType:(int)arg2 ;
-(id)pptTestScrollView;
-(id)pptTestScrollViewForProactive;
-(void)pptTestOpenSettings;
-(void)pptTestStartTracePlayer:(id)arg1 ;
-(char)pptTestSupportStepping;
-(int)pptTestCurrentStepIndex;
-(char)pptTestHasNextStep;
-(void)pptTestMoveToNextStep;
-(void)pptTestStartNavigation;
-(void)pptTestEndNavigation;
-(void)pptTestDoDirectionItem:(id)arg1 ;
-(void)pptTestPresentDirectionsDetails;
-(id)pptTestContaineeForDirectionsDetails;
-(id)pptTestScrollViewForDirectionsDetails;
-(void)setPPTTestDirectionsPlan:(id)arg1 ;
-(void)pptTestCreateCustomSearchResultForDroppedPinAtPoint:(CLLocationCoordinate2D)arg1 animated:(char)arg2 ;
-(void)pptTestAutocompleteSearchForFieldItem:(id)arg1 ;
-(void)pptTestSearchForFieldItem:(id)arg1 ;
-(void)pptTestSearchEndEditing;
-(void)pptTestSearchNearByCategoryWithIndex:(unsigned)arg1 ;
-(void)pptTestSearchResultContentScrollToTop;
-(void)pptTestSearchResultContentScrollToBottom;
-(void)pptTestEnterSearchMode;
-(void)pptTestRefreshSearch;
-(void)pptTestSearchCancel;
-(void)pptTestPresentPlaceCardForSearchResult:(id)arg1 animated:(char)arg2 ;
-(char)pptTestCanResizePlacecard;
-(void)pptTestMinimizePlaceCardAnimated:(char)arg1 ;
-(void)pptTestMediumizePlaceCardAnimated:(char)arg1 ;
-(void)pptTestMaxiumizePlaceCardAnimated:(char)arg1 ;
-(id)mapViewForPPTTest;
-(void)setPPTTestViewMode:(int)arg1 animated:(char)arg2 ;
-(void)pptTestResetForLaunchURL;
-(BaseModeController *)baseModeController;
-(id<ActionCoordination>)baseActionCoordinator;
-(void)startSearchMode;
-(void)openSearch:(id)arg1 andResults:(id)arg2 ;
-(void)endSteppingAndNavigation;
-(NavModeController *)navModeController;
-(PedestrianNavModeController *)pedestrianNavModeController;
-(id<NavActionCoordination>)navActionCoordinator;
-(void)startNavigationWithRoute:(id)arg1 ;
-(void)willPresentNavigationTrayWhenNavigationDidStart;
-(void)willDismissNavigationTrayWhenNavigationWillEnd;
-(void)endNavigationWithForceResetDirectionsManager:(char)arg1 ;
-(char)_carplayDestinationHandoffRequiredForRoute:(id)arg1 ;
-(void)_handoffDestinationToExternalDevice:(id)arg1 ;
-(void)_presentHandoffAlertForDestination:(id)arg1 ;
-(id<StepActionCoordination>)stepActionCoordinator;
-(void)startSteppingWithRoute:(id)arg1 userInfo:(id)arg2 directionsOptions:(int)arg3 ;
-(void)endSteppingAndReturnToRoutePlanning:(char)arg1 ;
-(void)startRidesharingSessionWithChoice:(id)arg1 dataSource:(id)arg2 ;
-(void)continueRidesharingSessionWithDataSource:(id)arg1 ;
-(void)dismissRidesharingSessionAndReturnToRoutePlanning:(char)arg1 ;
-(void)setupCurrentRidesharingSessionIfActive;
-(void)stopDisplayingRidesharingSession;
-(char)allowsRidesharingSessionForMode:(id)arg1 ;
-(void)showFullscreenDirectionsList;
-(void)hideFullscreenDirectionsList;
-(void)showFlyoverTour:(id)arg1 ;
-(void)dismissFlyoverTour;
-(void)archiveMapsActivity;
-(void)dismissShareIfNeededAnimated:(char)arg1 ;
-(void)displayOrScheduleDisplayOfEnqueuedFixedProblem:(/*^block*/id)arg1 ;
-(void)displayAnyEnqueuedFixedProblemNotification;
-(void)_displayOrScheduleDisplayOfEnqueuedFixedProblemInvokedAfterWait:(char)arg1 ;
-(id)testCoordinator;
-(RidesharingModeController *)ridesharingModeController;
-(AppStateManager *)appStateManager;
-(void)setAppStateManager:(AppStateManager *)arg1 ;
-(IOSChromeViewController *)iosChromeViewController;
-(void)setIosChromeViewController:(IOSChromeViewController *)arg1 ;
-(StepModeController *)stepModeController;
-(id<FlyoverActionCoordination>)flyoverActionCoordinator;
-(id)init;
-(void)setTransportType:(unsigned)arg1 ;
-(void)endNavigation;
@end

