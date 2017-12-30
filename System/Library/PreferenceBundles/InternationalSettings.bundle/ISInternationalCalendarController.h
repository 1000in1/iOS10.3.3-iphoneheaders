/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:29:10 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/InternationalSettings.bundle/InternationalSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class ISInternationalLocaleRepresentation;

@interface ISInternationalCalendarController : PSListController {

	ISInternationalLocaleRepresentation* _localeRepresentation;

}

@property (retain) ISInternationalLocaleRepresentation * localeRepresentation;              //@synthesize localeRepresentation=_localeRepresentation - In the implementation block
-(void)setLocaleRepresentation:(ISInternationalLocaleRepresentation *)arg1 ;
-(ISInternationalLocaleRepresentation *)localeRepresentation;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)specifiers;
@end

