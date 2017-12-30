/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:22 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBAwayListItem.h>

@class NSMutableArray, NSString, BBObserver, NSDate, UIImage, BBBulletin, UIViewController;

@interface SBAwayBulletinListItem : SBAwayListItem {

	NSMutableArray* _bulletins;
	int _personID;
	NSString* _contactInfo;
	BBObserver* _observer;
	NSDate* _sortDate;
	NSDate* _displayDate;
	NSString* _message;
	UIImage* _listItemImage;
	char _shouldPlayLightsAndSirens;
	BBBulletin* _activeBulletin;
	UIViewController* _secondaryContentViewController;

}

@property (retain) BBBulletin * activeBulletin;                                    //@synthesize activeBulletin=_activeBulletin - In the implementation block
@property (retain) UIViewController * secondaryContentViewController;              //@synthesize secondaryContentViewController=_secondaryContentViewController - In the implementation block
@property (assign,nonatomic) char shouldPlayLightsAndSirens;                       //@synthesize shouldPlayLightsAndSirens=_shouldPlayLightsAndSirens - In the implementation block
-(void)prepareWithCompletion:(/*^block*/id)arg1 ;
-(void)setSecondaryContentViewController:(UIViewController *)arg1 ;
-(UIViewController *)secondaryContentViewController;
-(BBBulletin *)activeBulletin;
-(char)wantsHighlightOnInsert;
-(char)canBeRemovedByNotificationCenterPresentation;
-(char)canBeRemovedByUnlock;
-(void)_updateActiveBulletin;
-(void)_updateSortDate;
-(void)_updateDisplayDate;
-(id)sortedBulletins;
-(void)setActiveBulletin:(BBBulletin *)arg1 ;
-(char)_suppressesMessageForPrivacy;
-(unsigned)maxMessageLines;
-(id)bulletinWithID:(id)arg1 ;
-(char)hasSamePersonAsBulletin:(id)arg1 ;
-(char)_hasCustomSecondaryContent;
-(char)canSnooze;
-(id)initWithBulletin:(id)arg1 andObserver:(id)arg2 ;
-(char)containsBulletinWithID:(id)arg1 ;
-(char)canCoalesceWithBulletin:(id)arg1 ;
-(int)snoozeButtonindex;
-(id)description;
-(id)title;
-(id)date;
-(void)_update;
-(id)subtitle;
-(id)message;
-(id)iconImage;
-(id)observer;
-(char)hasEventDate;
-(char)shouldPlayLightsAndSirens;
-(char)overridesQuietMode;
-(char)overridesPocketMode;
-(void)_updateImage;
-(id)attachmentText;
-(void)_updateMessage;
-(void)setShouldPlayLightsAndSirens:(char)arg1 ;
-(void)buttonPressed;
-(id)sortDate;
-(id)bulletins;
-(void)modifyBulletin:(id)arg1 ;
-(void)removeBulletin:(id)arg1 ;
-(void)removeAllBulletins;
-(void)addBulletin:(id)arg1 ;
-(char)inertWhenLocked;
-(char)allowsAutomaticRemovalFromLockScreen;
-(char)wantsFullscreenPresentation;
-(id)attachmentImage;
-(id)publishDate;
-(char)isCritical;
@end

