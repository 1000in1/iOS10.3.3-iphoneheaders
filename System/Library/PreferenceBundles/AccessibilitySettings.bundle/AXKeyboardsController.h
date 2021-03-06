/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:28:55 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilitySettings/AccessibilityBaseListController.h>

@class NSArray;

@interface AXKeyboardsController : AccessibilityBaseListController {

	NSArray* _stickyKeysSpecificSpecifiers;

}

@property (nonatomic,retain) NSArray * stickyKeysSpecificSpecifiers;              //@synthesize stickyKeysSpecificSpecifiers=_stickyKeysSpecificSpecifiers - In the implementation block
-(id)stickyKeysEnabled:(id)arg1 ;
-(void)setLowerCase:(id)arg1 specifier:(id)arg2 ;
-(id)lowercaseString:(id)arg1 ;
-(id)keyRepeatEnabled:(id)arg1 ;
-(id)slowKeysEnabled:(id)arg1 ;
-(void)_stickyKeysEnabledDidChange;
-(NSArray *)stickyKeysSpecificSpecifiers;
-(void)setStickyKeysSpecificSpecifiers:(NSArray *)arg1 ;
-(id)init;
-(void)dealloc;
-(void)viewWillAppear:(char)arg1 ;
-(id)specifiers;
@end

