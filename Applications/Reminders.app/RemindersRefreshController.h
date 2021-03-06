/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:26 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Reminders.app/Reminders
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSMutableDictionary, NSDate, ACAccountStore, NSMutableSet;

@interface RemindersRefreshController : NSObject {

	NSMutableArray* _calendarsPendingRefresh;
	char _isPendingRefreshForCalendarList;
	NSMutableDictionary* _lastCalendarRefreshDates;
	NSDate* _lastCalendarListRefreshDate;
	ACAccountStore* _accountStore;
	NSMutableSet* _allRemindersSyncingAccountIDs;
	char _paused;

}

@property (nonatomic,retain) NSDate * lastCalendarListRefreshDate;              //@synthesize lastCalendarListRefreshDate=_lastCalendarListRefreshDate - In the implementation block
+(id)sharedRefreshController;
-(void)scheduleRefreshForCalendarList;
-(void)pauseScheduledRefreshes;
-(void)resumeScheduledRefreshes;
-(void)scheduleRefreshForAllCalendars;
-(void)scheduleRefreshForCalendarWithIdentifier:(id)arg1 ;
-(id)_allRemindersSyncingAccountIDs;
-(void)setLastCalendarListRefreshDate:(NSDate *)arg1 ;
-(char)_needsRefreshForCalendarWithIdentifier:(id)arg1 ;
-(void)_refreshCalendarWithIdentifier:(id)arg1 ;
-(char)_needsRefreshForCalendarList;
-(void)_refreshCalendarList;
-(NSDate *)lastCalendarListRefreshDate;
-(void)dealloc;
-(void)_accountStoreDidChange:(id)arg1 ;
-(id)_accountStore;
@end

