/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:40 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/PersonalizedItemSource.h>
#import <Maps/PersonalizedItemSourceObserver.h>

@protocol OS_dispatch_queue;
@class EKEventStore, NSArray, NSObject, NSTimer, PersonalizedItemSource;

@interface CalendarItemSource : PersonalizedItemSource <PersonalizedItemSourceObserver> {

	EKEventStore* _eventStore;
	NSArray* _allItems;
	NSObject*<OS_dispatch_queue> _updateQueue;
	NSTimer* _updateTimer;
	PersonalizedItemSource* _exclusionSource;
	int _autocompleteOrder;

}

@property (assign,nonatomic) int autocompleteOrder;              //@synthesize autocompleteOrder=_autocompleteOrder - In the implementation block
+(id)subtitleFromEventName:(id)arg1 eventDate:(id)arg2 ;
+(void)initialize;
+(id)sharedDateFormatter;
-(int)autocompleteOrder;
-(void)personalizedItemSourceDidChangeItems:(id)arg1 ;
-(void)eventStoreDidChange:(id)arg1 ;
-(void)excludeItemsFromSource:(id)arg1 ;
-(void)dateHasChanged:(id)arg1 ;
-(void)_clearUpdateTimer;
-(id)_nextUpdateDate;
-(id)predicateForDateRangeSince:(id)arg1 ;
-(id)predicateForRemindersDueAfter:(id)arg1 ;
-(id)predicateForIncompleteReminders;
-(void)loadCalendarItems;
-(void)_updateCalendarItems;
-(char)shouldIncludeEvent:(id)arg1 ;
-(void)setAutocompleteOrder:(int)arg1 ;
-(id)init;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(void)userDefaultsDidChange:(id)arg1 ;
-(id)allItems;
-(void)_scheduleUpdateTimer;
@end

