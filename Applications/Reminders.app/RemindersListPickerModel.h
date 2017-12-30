/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:26 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Reminders.app/Reminders
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RemindersListPickerModelDelegate;
#import <Reminders/Reminders-Structs.h>
@class EKCalendar, EKEventStore, NSArray;

@interface RemindersListPickerModel : NSObject {

	unsigned _isOverridingSourceInfos : 1;
	unsigned _scheduledSelected : 1;
	unsigned _showsSynthesizedCards : 1;
	EKCalendar* _selectedCalendar;
	EKEventStore* _eventStore;
	NSArray* _calendarSourceInfos;
	CFArrayRef _sourceIndicesForViewing;
	CFArrayRef _sourceIndicesForEditing;
	id<RemindersListPickerModelDelegate> _delegate;

}

@property (assign,nonatomic) id<RemindersListPickerModelDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)selectCalendar:(id)arg1 ;
-(void)selectScheduled;
-(char)scheduledSelected;
-(void)selectFirstAvailableCalendar;
-(id)indexPathForCalendar:(id)arg1 whenEditing:(char)arg2 ;
-(char)hasSpecialCardSection;
-(int)sectionForVisibleIndex:(int)arg1 whenEditing:(char)arg2 ;
-(int)visibleIndexForSection:(int)arg1 whenEditing:(char)arg2 ;
-(int)sourceInfoIndexForSection:(int)arg1 whenEditing:(char)arg2 ;
-(int)specialCardsSection:(char)arg1 ;
-(id)sourceInfoForSection:(int)arg1 whenEditing:(char)arg2 ;
-(char)isEllipsisRowAtIndexPath:(id)arg1 whenEditing:(char)arg2 ;
-(char)isScheduledRowAtIndexPath:(id)arg1 whenEditing:(char)arg2 ;
-(char)isCalendarRowAtIndexPath:(id)arg1 whenEditing:(char)arg2 ;
-(int)indexInSourceInfoForCalendarAtIndexPath:(id)arg1 whenEditing:(char)arg2 ;
-(id)calendarForIndexPath:(id)arg1 whenEditing:(char)arg2 ;
-(char)_canDeleteCalendar:(id)arg1 inSourceInfo:(id)arg2 ;
-(id)initWithEventStore:(id)arg1 orCalendarSourceInfos:(id)arg2 showingSynthesizedCards:(char)arg3 ;
-(int)sectionForSourceInfo:(id)arg1 whenEditing:(char)arg2 ;
-(id)selectedIndexPathWhenEditing:(char)arg1 ;
-(char)canDeleteRowAtIndexPath:(id)arg1 whenEditing:(char)arg2 ;
-(void)didAddCalendarToSection:(int)arg1 whenEditing:(char)arg2 ;
-(id)deleteCalendarAtIndexPath:(id)arg1 whenEditing:(char)arg2 ;
-(id)dictionaryForAnimationToEditing:(char)arg1 ;
-(void)setDelegate:(id<RemindersListPickerModelDelegate>)arg1 ;
-(void)dealloc;
-(id<RemindersListPickerModelDelegate>)delegate;
-(char)isEmpty;
-(int)numberOfSectionsWhenEditing:(char)arg1 ;
-(int)numberOfRowsInSection:(int)arg1 whenEditing:(char)arg2 ;
-(id)eventStore;
-(id)selectedCalendar;
-(void)reloadCalendars;
@end

