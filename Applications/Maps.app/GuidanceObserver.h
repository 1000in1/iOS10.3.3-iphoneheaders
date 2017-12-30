/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:42 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MNNavigationServiceObserver.h>
#import <Maps/MNETADisplayFormatterDelegate.h>

@class NSMutableDictionary, NSMapTable, MNETADisplayFormatter, NSString;

@interface GuidanceObserver : NSObject <MNNavigationServiceObserver, MNETADisplayFormatterDelegate> {

	NSMutableDictionary* _guidanceUpdates;
	NSMapTable* _outletsAndOwners;
	MNETADisplayFormatter* _etaDisplayFormatter;
	double _remainingDistance;
	NSString* _destinationDisplayName;
	char _paused;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)destinationTimeZone;
-(void)addOutlet:(id)arg1 forOwner:(id)arg2 ;
-(void)removeOutlet:(id)arg1 ;
-(void)clearAllGuidance;
-(id)_orderedUpdateKinds;
-(id)_signRepeatableUpdateKeys;
-(void)_performRepeatableUpdateForKey:(id)arg1 onEachGuidanceOutput:(/*^block*/id)arg2 ;
-(void)_eachGuidanceOutput:(/*^block*/id)arg1 ;
-(void)_eachGuidanceOutput:(/*^block*/id)arg1 ignorePaused:(char)arg2 ;
-(void)_removeRepeatableUpdateForKey:(id)arg1 ;
-(void)_removeAllRepeatableUpdatesForKeys:(id)arg1 ;
-(void)_removeAllRepeatableUpdates;
-(void)repeatAllUpdatesForOutlet:(id)arg1 ;
-(void)repeatAllUpdatesWithTarget:(id)arg1 selector:(SEL)arg2 ;
-(void)repeatAllUpdates;
-(void)repeatUpdates:(id)arg1 ;
-(void)_prepareForActiveNavigationIfNeeded;
-(void)_tearDownNavigationIfNeeded;
-(void)_updateDestinationDisplayName;
-(id)init;
-(void)dealloc;
-(void)pauseUpdates;
-(void)resumeUpdates;
-(void)navigationService:(id)arg1 failedRerouteWithErrorCode:(int)arg2 ;
-(void)navigationServiceDidCancelReroute:(id)arg1 ;
-(void)navigationService:(id)arg1 didReroute:(id)arg2 ;
-(void)navigationServiceWillReroute:(id)arg1 ;
-(void)navigationService:(id)arg1 didUpdateRemainingTime:(double)arg2 remainingDistance:(double)arg3 ;
-(void)navigationService:(id)arg1 didEnableGuidancePrompts:(char)arg2 ;
-(void)navigationServiceDidArrive:(id)arg1 ;
-(void)navigationServiceDidHideSecondaryStep:(id)arg1 ;
-(void)navigationService:(id)arg1 displaySecondaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6 ;
-(void)navigationService:(id)arg1 displayManeuverAlertForAnnouncementStage:(unsigned)arg2 ;
-(void)navigationService:(id)arg1 displayPrimaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6 maneuverStepIndex:(unsigned)arg7 isSynthetic:(char)arg8 ;
-(void)navigationService:(id)arg1 didUpdateDistanceUntilSign:(double)arg2 timeUntilSign:(double)arg3 forStepIndex:(unsigned)arg4 ;
-(void)navigationService:(id)arg1 didUpdateProceedToRouteDistance:(double)arg2 displayString:(id)arg3 closestStepIndex:(unsigned)arg4 ;
-(void)navigationService:(id)arg1 didChangeFromState:(unsigned)arg2 toState:(unsigned)arg3 ;
-(void)navigationService:(id)arg1 willChangeFromState:(unsigned)arg2 toState:(unsigned)arg3 ;
-(void)_updateDisplayETA;
-(void)etaDisplayFormatter:(id)arg1 didUpdateDisplayETA:(id)arg2 displayRemainingTime:(double)arg3 ;
@end

