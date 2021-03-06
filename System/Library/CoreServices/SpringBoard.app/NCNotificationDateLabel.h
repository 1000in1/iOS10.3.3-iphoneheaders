/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:22 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NCNotificationDateLabel <NSObject>
@property (assign,getter=isAllDay,nonatomic) char allDay; 
@property (assign,nonatomic) id<SBDateLabelDelegate> delegate; 
@property (assign,nonatomic) int labelType; 
@property (assign,nonatomic) char isTimestamp; 
@required
-(void)setDelegate:(id)arg1;
-(id<SBDateLabelDelegate>)delegate;
-(void)prepareForReuse;
-(int)labelType;
-(void)setAllDay:(char)arg1;
-(void)setLabelType:(int)arg1;
-(char)isAllDay;
-(void)setStartDate:(id)arg1 withTimeZone:(id)arg2;
-(void)setEndDate:(id)arg1 withTimeZone:(id)arg2;
-(void)startCoalescingUpdates;
-(void)stopCoalescingUpdates;
-(char)isTimestamp;
-(void)setIsTimestamp:(char)arg1;

@end

