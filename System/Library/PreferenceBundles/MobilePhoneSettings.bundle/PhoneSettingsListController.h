/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:29:13 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/MobilePhoneSettings.bundle/MobilePhoneSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@interface PhoneSettingsListController : PSListController
-(id)init;
-(void)dealloc;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(id)bundle;
-(void)simRemoved:(id)arg1 ;
-(void)updateCellStates;
-(void)pushController:(Class)arg1 specifier:(id)arg2 ;
-(id)sheetSpecifierWithTitle:(id)arg1 controller:(Class)arg2 detail:(Class)arg3 ;
-(id)setControlEnabled:(char)arg1 atIndex:(int)arg2 ;
-(id)setCellEnabled:(char)arg1 atIndex:(unsigned)arg2 ;
-(id)setCellLoading:(char)arg1 atIndex:(unsigned)arg2 ;
-(id)specifiers;
@end

