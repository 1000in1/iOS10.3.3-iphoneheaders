/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:27 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Reminders.app/Reminders
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UISegmentedControl;

@interface _RemindersPriorityPickerCell : UITableViewCell {

	UISegmentedControl* _priorityPicker;

}

@property (nonatomic,readonly) UISegmentedControl * priorityPicker;              //@synthesize priorityPicker=_priorityPicker - In the implementation block
@property (assign,nonatomic) int priority; 
-(UISegmentedControl *)priorityPicker;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)setColor:(id)arg1 ;
-(int)priority;
-(void)setPriority:(int)arg1 ;
@end

