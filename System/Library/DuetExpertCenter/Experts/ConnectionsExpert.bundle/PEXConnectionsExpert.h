/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:37:10 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/DuetExpertCenter/Experts/ConnectionsExpert.bundle/ConnectionsExpert
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DuetExpertCenter/_DECExpert.h>
#import <libobjc.A.dylib/_DECExpertDelegate.h>

@protocol _CDLocalContext, OS_dispatch_queue;
@class MKMapItem, _DECUserAction, NSDate, PEXConnectionsExpertServant, NSMutableSet, NSObject, NSString;

@interface PEXConnectionsExpert : _DECExpert <_DECExpertDelegate> {

	MKMapItem* _lastReceivedMapItem;
	_DECUserAction* _lastReceivedUserAction;
	NSDate* _lastUserActionReceivedTime;
	PEXConnectionsExpertServant* _expertServant;
	id<_CDLocalContext> _context;
	NSMutableSet* _registrations;
	NSObject*<OS_dispatch_queue> _registrationQueue;
	NSString* _lastLaunchedBundleIdentifier;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSpringBoardPrediction:(id)arg1 ;
-(char)mapItem:(id)arg1 isEquivalentToLocation:(id)arg2 ;
-(id)locationAppPredictionWithUserAction:(id)arg1 mapItem:(id)arg2 ;
-(id)locationAppPredictionComingFromAppWithBundleID:(id)arg1 ;
-(void)setLastLaunchedBundleIdentifier:(id)arg1 ;
-(id)locationAppPrediction;
-(id)locationAppPredictionFromPasteboardItemsAfter:(id)arg1 ;
-(char)isUserActivityEligibleWithAttributeSet:(id)arg1 bundleID:(id)arg2 ;
-(id)locationAppPredictionWithAttributeSet:(id)arg1 userInfo:(id)arg2 bundleID:(id)arg3 mapItem:(id)arg4 ;
-(id)predictionWithLocationName:(id)arg1 mapItem:(id)arg2 candidateApp:(id)arg3 originatingBundleIdentifier:(id)arg4 reason:(int)arg5 ;
-(char)isMapItemFromUserActivityEligible:(id)arg1 ;
-(char)attributeSetHasLatLon:(id)arg1 ;
-(id)mapItemFromAttributeSet:(id)arg1 ;
-(char)isEligibleActivityFromCalendarWithAttributeSet:(id)arg1 bundleID:(id)arg2 ;
-(char)isSpotlightAttributesEligibleForTextBasedPredictions:(id)arg1 ;
-(id)locationItemWithUserAction:(id)arg1 ;
-(id)locationPredictionWithUserAction:(id)arg1 ;
-(char)isAttributeSetAuthorized:(id)arg1 bundleID:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(void)expert:(id)arg1 prewarmPredictionForCategory:(unsigned)arg2 consumer:(unsigned)arg3 ;
-(id)expert:(id)arg1 predictionForCategory:(unsigned)arg2 criteria:(id)arg3 consumer:(unsigned)arg4 limit:(unsigned)arg5 ;
-(void)expert:(id)arg1 receiveFeedback:(id)arg2 category:(unsigned)arg3 consumer:(unsigned)arg4 ;
-(void)trainExpert:(id)arg1 ;
-(void)expert:(id)arg1 receiveUserAction:(id)arg2 ;
-(void)registerForAppChange;
@end
