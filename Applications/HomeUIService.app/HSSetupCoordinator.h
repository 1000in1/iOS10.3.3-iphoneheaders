/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:27 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/HomeUIService.app/HomeUIService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HFHomeManagerObserver.h>
#import <HomeUIService/HFSetupPairingObserver.h>
#import <HomeUIService/HSSetupStepDelegate.h>

@protocol HSSetupCoordinatorDelegate, HFSetupPairingController, HSSetupStep;
@class HMHome, HMAccessory, NSArray, NSUUID, HFDiscoveredAccessory, HMSetupAccessoryDescription, HMHomeManager, NSIndexSet, NSString;

@interface HSSetupCoordinator : NSObject <HFHomeManagerObserver, HFSetupPairingObserver, HSSetupStepDelegate> {

	char _configured;
	char _disconnected;
	char _cancelled;
	id<HSSetupCoordinatorDelegate> _delegate;
	int _state;
	HMHome* _currentHome;
	HMAccessory* _bridgeToSetup;
	HMAccessory* _cameraToSetup;
	int _currentServiceLikeItemIndex;
	NSArray* _serviceLikeItemsToSetup;
	id<HFSetupPairingController> _pairingController;
	NSUUID* _homeUUID;
	HFDiscoveredAccessory* _discoveredAccessoryToPair;
	HMSetupAccessoryDescription* _setupAccessoryDescription;
	id<HSSetupStep> _currentStep;

}

@property (nonatomic,readonly) HMHomeManager * homeManager; 
@property (nonatomic,retain) HMHome * currentHome;                                                     //@synthesize currentHome=_currentHome - In the implementation block
@property (nonatomic,copy) NSUUID * homeUUID;                                                          //@synthesize homeUUID=_homeUUID - In the implementation block
@property (nonatomic,retain) HFDiscoveredAccessory * discoveredAccessoryToPair;                        //@synthesize discoveredAccessoryToPair=_discoveredAccessoryToPair - In the implementation block
@property (nonatomic,retain) HMAccessory * bridgeToSetup;                                              //@synthesize bridgeToSetup=_bridgeToSetup - In the implementation block
@property (nonatomic,retain) HMAccessory * cameraToSetup;                                              //@synthesize cameraToSetup=_cameraToSetup - In the implementation block
@property (assign,nonatomic) int currentServiceLikeItemIndex;                                          //@synthesize currentServiceLikeItemIndex=_currentServiceLikeItemIndex - In the implementation block
@property (nonatomic,copy) NSArray * serviceLikeItemsToSetup;                                          //@synthesize serviceLikeItemsToSetup=_serviceLikeItemsToSetup - In the implementation block
@property (nonatomic,readonly) char skipServiceSetup; 
@property (nonatomic,readonly) HMSetupAccessoryDescription * setupAccessoryDescription;                //@synthesize setupAccessoryDescription=_setupAccessoryDescription - In the implementation block
@property (assign,nonatomic,__weak) id<HSSetupStep> currentStep;                                       //@synthesize currentStep=_currentStep - In the implementation block
@property (nonatomic,retain) id<HFSetupPairingController> pairingController;                           //@synthesize pairingController=_pairingController - In the implementation block
@property (assign,getter=isConfigured,nonatomic) char configured;                                      //@synthesize configured=_configured - In the implementation block
@property (assign,getter=isDisconnected,nonatomic) char disconnected;                                  //@synthesize disconnected=_disconnected - In the implementation block
@property (assign,getter=isCancelled,nonatomic) char cancelled;                                        //@synthesize cancelled=_cancelled - In the implementation block
@property (assign,nonatomic,__weak) id<HSSetupCoordinatorDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) int state;                                                              //@synthesize state=_state - In the implementation block
@property (nonatomic,copy,readonly) NSIndexSet * requiredPostPairingSetupStates; 
@property (nonatomic,copy,readonly) NSIndexSet * remainingPostPairingSetupStates; 
@property (nonatomic,readonly) HFDiscoveredAccessory * discoveredAccessoryForAppPunchOut; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<HFSetupPairingController>)pairingController;
-(void)setPairingController:(id<HFSetupPairingController>)arg1 ;
-(void)setCurrentStep:(id<HSSetupStep>)arg1 ;
-(void)setupStepDidChange:(id)arg1 ;
-(void)setupStepDidCancel:(id)arg1 ;
-(void)setupStep:(id)arg1 didSelectDiscoveredAccessory:(id)arg2 ;
-(void)setupStepDidFinish:(id)arg1 ;
-(void)setupStep:(id)arg1 didPairWithDiscoveredAccessory:(id)arg2 ;
-(void)_setupPairingControllerForDiscoveredAccessory:(id)arg1 ;
-(void)_updateHomeFromUUID;
-(char)skipServiceSetup;
-(HMAccessory *)bridgeToSetup;
-(HMAccessory *)cameraToSetup;
-(NSArray *)serviceLikeItemsToSetup;
-(HFDiscoveredAccessory *)discoveredAccessoryForAppPunchOut;
-(NSIndexSet *)requiredPostPairingSetupStates;
-(void)setDiscoveredAccessoryToPair:(HFDiscoveredAccessory *)arg1 ;
-(void)setCurrentServiceLikeItemIndex:(int)arg1 ;
-(void)setupStep:(id)arg1 didFailWithError:(id)arg2 ;
-(int)currentServiceLikeItemIndex;
-(void)_updateStateAndNotifyDelegate:(int)arg1 ;
-(char)_validateSetupStateForStep:(id)arg1 ;
-(id)bridgeToSetupForDiscoveredAccessory:(id)arg1 ;
-(void)setBridgeToSetup:(HMAccessory *)arg1 ;
-(id)cameraToSetupForDiscoveredAccessory:(id)arg1 ;
-(void)setCameraToSetup:(HMAccessory *)arg1 ;
-(id)servicesToSetupForDiscoveredAccessory:(id)arg1 ;
-(id)accessoriesToSetupForDiscoveredAccessory:(id)arg1 ;
-(void)setServiceLikeItemsToSetup:(NSArray *)arg1 ;
-(void)configureForInitialState:(int)arg1 homeUUID:(id)arg2 setupAccessoryDescription:(id)arg3 ;
-(NSIndexSet *)remainingPostPairingSetupStates;
-(id)roomSelectionRooms;
-(char)roomIsRoomForHome:(id)arg1 ;
-(id)init;
-(void)setDelegate:(id<HSSetupCoordinatorDelegate>)arg1 ;
-(id<HSSetupCoordinatorDelegate>)delegate;
-(int)state;
-(char)isCancelled;
-(void)setCancelled:(char)arg1 ;
-(id<HSSetupStep>)currentStep;
-(void)setupFailedWithError:(id)arg1 ;
-(void)setupInterruptedWithError:(id)arg1 ;
-(void)setDisconnected:(char)arg1 ;
-(char)isDisconnected;
-(void)setCurrentHome:(HMHome *)arg1 ;
-(HMHomeManager *)homeManager;
-(NSUUID *)homeUUID;
-(void)setHomeUUID:(NSUUID *)arg1 ;
-(char)isConfigured;
-(void)setConfigured:(char)arg1 ;
-(HFDiscoveredAccessory *)discoveredAccessoryToPair;
-(HMSetupAccessoryDescription *)setupAccessoryDescription;
-(HMHome *)currentHome;
-(void)homeManagerDidFinishInitialDatabaseLoad:(id)arg1 ;
-(void)homeManager:(id)arg1 didAddHome:(id)arg2 ;
@end

