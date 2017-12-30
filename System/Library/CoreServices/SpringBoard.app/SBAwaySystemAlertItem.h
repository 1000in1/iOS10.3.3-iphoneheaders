/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:22 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBAwayListItem.h>

@class SBAlertItem, NSString, UIImage;

@interface SBAwaySystemAlertItem : SBAwayListItem {

	SBAlertItem* _currentAlert;
	NSString* _title;
	UIImage* _appImage;
	NSString* _message;
	char _showingButton;
	char _isAlarm;

}
-(void)_setCurrentAlert:(id)arg1 ;
-(id)initWithSystemAlert:(id)arg1 ;
-(char)isAlarm;
-(id)title;
-(id)message;
-(id)iconImage;
-(id)currentAlert;
-(void)buttonPressed;
-(id)sortDate;
@end

