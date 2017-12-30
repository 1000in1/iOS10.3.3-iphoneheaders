/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:22:44 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Assistant/Plugins/Calendar.assistantBundle/Calendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SACalendarEventSearch.h>
#import <Calendar/CalAssistantCommand.h>

@class EKEventStore, NSString;

@interface CalAssistantEventSearch : SACalendarEventSearch <CalAssistantCommand> {

	EKEventStore* _eventStore;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) EKEventStore * eventStore; 
-(id)_validate;
-(EKEventStore *)eventStore;
-(void)setEventStore:(EKEventStore *)arg1 ;
-(void)performWithCompletion:(/*^block*/id)arg1 ;
@end

