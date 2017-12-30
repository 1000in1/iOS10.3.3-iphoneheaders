/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 7:16:46 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/Support/CommCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CommCenter/CommCenter-Structs.h>
@class NSDictionary, CTCellularPlanSubCache, CTCellularPlanPrimarySimCache, NSString;

@interface CTCellularPlanCache : NSObject {

	queue* fQueue;
	shared_ptr<ctu::Logger>* fLogger;
	NSDictionary* fPurchaseIccidCsnPair;
	CTCellularPlanSubCache* fCacheOne;
	CTCellularPlanSubCache* fCacheTwo;
	CTCellularPlanPrimarySimCache* fCachePrimarySim;
	NSString* fLastSelectedIccid;

}
+(void)initializeWithQueue:(queue*)arg1 ;
+(id)sharedCache;
-(id)planWithProfileId_sync:(id)arg1 ;
-(id)planWithIccid_sync:(id)arg1 ;
-(void)loadFromCache_sync;
-(void)loadFromData_sync:(id)arg1 ;
-(void)_loadFromData_sync:(id)arg1 selectedIccid:(id*)arg2 purchasedIccidCsnPair:(id*)arg3 intoCacheOne:(id*)arg4 intoCacheTwo:(id*)arg5 intoCachePrimarySim:(id*)arg6 ;
-(void)setSelectedUserIccid_sync:(id)arg1 persistToCache:(BOOL)arg2 ;
-(void)setPurchasedIccid_sync:(id)arg1 onCsn:(id)arg2 persistToCache:(char)arg3 ;
-(id)getPlansOnSlotId:(int)arg1 ;
-(void)persistToCache_sync;
-(id)subCacheForSlotId:(int)arg1 ;
-(id)subCacheForSlotId:(int)arg1 createIfAbsent:(char)arg2 ;
-(void)resetPurchasedIccid_sync;
-(id)slotOneCache;
-(id)slotTwoCache;
-(id)phoneNumberInPlansWithIccid:(id)arg1 cellularPlans:(id)arg2 ;
-(id)slotOneCsn;
-(id)slotTwoCsn;
-(id)primarySimCache;
-(id)getPlanDetails_sync:(int)arg1 ;
-(void)updatePrimarySimIccid_sync:(id)arg1 carrierName:(id)arg2 iso:(id)arg3 mcc:(id)arg4 mnc:(id)arg5 ;
-(id)purchasedIccidCsnPair;
-(char)hasFetchedSubscriptionOnce:(int)arg1 ;
-(void)updateCsn_sync:(id)arg1 forSlot:(int)arg2 ;
-(id)updateProfiles_sync:(id)arg1 forSlot:(int)arg2 ;
-(void)updateSubscriptions_sync:(id)arg1 forSlot:(int)arg2 ;
-(id)selectedUserIccid_sync;
-(void)setSelectedUserIccid_sync:(id)arg1 ;
-(void)updatePhoneNumber_sync:(id)arg1 forPlanWithIccid:(id)arg2 ;
-(id)phoneNumberForPlanWithIccid_sync:(id)arg1 ;
-(void)setPurchasedIccid_sync:(id)arg1 onCsn:(id)arg2 ;
-(id)getIccidOfInterruptedPurchaseForCsn_sync:(id)arg1 ;
-(void)markSuccessfulSubscriptionTime_sync:(int)arg1 ;
-(void)markHasFetchedSubscriptionOnceDone_sync:(int)arg1 ;
-(void)setPlanExpiredForIccid_sync:(id)arg1 ;
-(void)setPlanSubscribedIfExpiredForIccid_sync:(id)arg1 ;
-(id)planWithProfileId_sync:(id)arg1 forSlot:(int)arg2 ;
-(void)dealloc;
-(id)initWithQueue:(queue*)arg1 ;
@end

