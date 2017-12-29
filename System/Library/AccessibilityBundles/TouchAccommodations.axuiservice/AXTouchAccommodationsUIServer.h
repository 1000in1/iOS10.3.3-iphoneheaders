/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:05 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/AccessibilityBundles/TouchAccommodations.axuiservice/TouchAccommodations
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TouchAccommodations/TouchAccommodations-Structs.h>
#import <TouchAccommodations/AXTouchAccommodationsEventProcessorDelegate.h>
#import <libobjc.A.dylib/AXUIContentViewControllerDelegate.h>
#import <libobjc.A.dylib/AXUIService.h>

@class NSString, AXTouchAccommodationsEventProcessor, AXDispatchTimer, AXTouchAccommodationsViewController;

@interface AXTouchAccommodationsUIServer : NSObject <AXTouchAccommodationsEventProcessorDelegate, AXUIContentViewControllerDelegate, AXUIService> {

	char showZoomControllerEnabled;
	char _startingTimers;
	char _stoppingTimers;
	NSString* _holdDurationTripleClickHelpAlertIdentifier;
	NSString* _touchAccommodationsAlertIdentifier;
	AXTouchAccommodationsEventProcessor* _eventProcessor;
	AXDispatchTimer* _usageConfirmationTimeoutTimer;
	AXTouchAccommodationsViewController* _viewController;

}

@property (nonatomic,copy) NSString * holdDurationTripleClickHelpAlertIdentifier;               //@synthesize holdDurationTripleClickHelpAlertIdentifier=_holdDurationTripleClickHelpAlertIdentifier - In the implementation block
@property (nonatomic,copy) NSString * touchAccommodationsAlertIdentifier;                       //@synthesize touchAccommodationsAlertIdentifier=_touchAccommodationsAlertIdentifier - In the implementation block
@property (nonatomic,retain) AXTouchAccommodationsEventProcessor * eventProcessor;              //@synthesize eventProcessor=_eventProcessor - In the implementation block
@property (nonatomic,retain) AXDispatchTimer * usageConfirmationTimeoutTimer;                   //@synthesize usageConfirmationTimeoutTimer=_usageConfirmationTimeoutTimer - In the implementation block
@property (nonatomic,retain) AXTouchAccommodationsViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(AXTouchAccommodationsEventProcessor *)eventProcessor;
-(void)setEventProcessor:(AXTouchAccommodationsEventProcessor *)arg1 ;
-(void)_suspendOrResumeTouchAccommodationsAsNeeded;
-(void)_zoomToggledShowController;
-(void)_showBannerWithText:(id)arg1 andSubtitleText:(id)arg2 ;
-(void)setTouchAccommodationsAlertIdentifier:(NSString *)arg1 ;
-(void)_enableTouchAccommodations;
-(void)_disableTouchAccommodations;
-(NSString *)holdDurationTripleClickHelpAlertIdentifier;
-(void)setHoldDurationTripleClickHelpAlertIdentifier:(NSString *)arg1 ;
-(void)_handleUsageConfirmation;
-(AXDispatchTimer *)usageConfirmationTimeoutTimer;
-(void)setUsageConfirmationTimeoutTimer:(AXDispatchTimer *)arg1 ;
-(CGPoint)pointWithRespectToSceneReferenceSpace:(CGPoint)arg1 ;
-(id)_getPointsArrayFromPathInfoArray:(id)arg1 ;
-(void)eventProcessor:(id)arg1 didUpdateTouchAccommodationsAtPathInfos:(id)arg2 ;
-(void)didStopTimersInEventProcessor:(id)arg1 ;
-(void)eventProcessor:(id)arg1 didResetTouchAccommodationsProgressAtPathInfos:(id)arg2 ;
-(void)panickedHoldDurationInEventProcessor:(id)arg1 ;
-(void)willStartTimersInEventProcessor:(id)arg1 ;
-(NSString *)touchAccommodationsAlertIdentifier;
-(id)init;
-(void)dealloc;
-(void)setViewController:(AXTouchAccommodationsViewController *)arg1 ;
-(AXTouchAccommodationsViewController *)viewController;
-(float)desiredWindowLevelForContentViewController:(id)arg1 userInteractionEnabled:(char)arg2 ;
-(id)processMessage:(id)arg1 withIdentifier:(unsigned)arg2 fromClientWithIdentifier:(id)arg3 error:(id*)arg4 ;
@end
