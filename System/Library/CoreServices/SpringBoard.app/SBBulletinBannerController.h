/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:23 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BBObserverDelegate.h>
#import <SpringBoard/SBUIBannerSource.h>
#import <SpringBoard/SBUIBannerTargetManagerObserver.h>
#import <SpringBoard/SBVolumePressBandit.h>

@protocol SBUIBannerTarget;
@class NSMutableArray, BBObserver, NSMutableSet, NSMutableDictionary, NSString;

@interface SBBulletinBannerController : NSObject <BBObserverDelegate, SBUIBannerSource, SBUIBannerTargetManagerObserver, SBVolumePressBandit> {

	NSMutableArray* _bulletinQueue;
	BBObserver* _observer;
	NSMutableSet* _sectionIDsToPend;
	char _quietModeEnabled;
	id<SBUIBannerTarget> _bannerTarget;
	NSMutableDictionary* _bulletinIdentifierToBannerContextCache;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_sharedInstanceCreateIfNecessary:(char)arg1 ;
+(id)sharedInstance;
+(id)sharedInstanceIfExists;
-(void)handleVolumeIncrease;
-(void)handleVolumeDecrease;
-(void)modallyPresentBannerForBulletin:(id)arg1 action:(id)arg2 ;
-(void)removeAllCachedBanners;
-(void)cacheBannerForBulletin:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeCachedBannerForBulletinID:(id)arg1 ;
-(id)newBannerViewForContext:(id)arg1 ;
-(id)_bannerContextForBulletin:(id)arg1 ;
-(void)_showTestBanner:(char)arg1 ;
-(unsigned)_indexOfQueuedBulletinID:(id)arg1 ;
-(void)_removeNextBulletinIfNecessary;
-(void)_syncLockScreenDismissalsForSeedBulletin:(id)arg1 additionalBulletins:(id)arg2 ;
-(char)_replaceBulletin:(id)arg1 ;
-(void)_queueBulletin:(id)arg1 ;
-(void)_dismissWithdrawnBannerIfNecessaryFromBulletinIDs:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)bannerTargetManager:(id)arg1 didAddTarget:(id)arg2 ;
-(void)bannerTargetManager:(id)arg1 didRemoveTarget:(id)arg2 ;
-(id)peekNextBannerItemForTarget:(id)arg1 ;
-(id)dequeueNextBannerItemForTarget:(id)arg1 ;
-(void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned)arg3 playLightsAndSirens:(char)arg4 withReply:(/*^block*/id)arg5 ;
-(void)observer:(id)arg1 updateSectionInfo:(id)arg2 ;
-(void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned)arg3 ;
-(void)observer:(id)arg1 modifyBulletin:(id)arg2 ;
-(void)observer:(id)arg1 removeBulletin:(id)arg2 ;
-(void)observer:(id)arg1 noteAlertBehaviorOverridesChanged:(unsigned)arg2 ;
-(void)observer:(id)arg1 noteInvalidatedBulletinIDs:(id)arg2 ;
-(void)observer:(id)arg1 noteServerConnectionStateChanged:(char)arg2 ;
-(void)observer:(id)arg1 noteServerReceivedResponseForBulletin:(id)arg2 ;
-(char)observerShouldFetchAttachmentImageBeforeBulletinDelivery:(id)arg1 ;
-(id)observer:(id)arg1 thumbnailSizeConstraintsForAttachmentType:(int)arg2 ;
-(id)observer:(id)arg1 composedAttachmentImageForType:(int)arg2 thumbnailData:(id)arg3 key:(id)arg4 ;
-(void)_removeBulletin:(id)arg1 ;
@end

