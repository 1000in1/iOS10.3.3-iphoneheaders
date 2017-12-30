/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:27 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Reminders.app/PlugIns/RemindersEditorExtension.appex/RemindersEditorExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class EKSource, NSMutableArray;

@interface RemindersCalendarSourceInfo : NSObject {

	EKSource* _source;
	NSMutableArray* _array;

}

@property (readonly) NSMutableArray * calendarArray;              //@synthesize array=_array - In the implementation block
+(id)sortedGroupsOfCalendarsInEventStore:(id)arg1 includingInvitations:(char)arg2 ;
-(id)title;
-(id)source;
-(int)sortOrder;
-(id)initWithSource:(id)arg1 ;
-(char)canAddList;
-(char)_isNonEmpty;
-(char)canDeleteList;
-(char)shouldShowWhenEditingLists;
-(char)shouldShowWhenViewingLists;
-(NSMutableArray *)calendarArray;
@end

