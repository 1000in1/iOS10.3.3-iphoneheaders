/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:48 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUI/SBAlertItem.h>

@class NSString;

@interface SBPhoneAlertItem : SBAlertItem {

	NSString* _bodyText;
	NSString* _title;

}
-(id)initWithTitle:(id)arg1 bodyText:(id)arg2 ;
-(void)configure:(char)arg1 requirePasscodeForActions:(char)arg2 ;
@end
