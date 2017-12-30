/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:28:55 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilitySettings/AXReorderableCheckmarkListController.h>

@class NSMutableDictionary;

@interface SCATCustomizeMenuBaseController : AXReorderableCheckmarkListController {

	NSMutableDictionary* _hiddenIndexesToDictionaries;

}

@property (nonatomic,retain) NSMutableDictionary * hiddenIndexesToDictionaries;              //@synthesize hiddenIndexesToDictionaries=_hiddenIndexesToDictionaries - In the implementation block
-(id)menuItemSpecifiersIncludingToggleButton;
-(int)indexOfSectionForItems;
-(id)filterAndTrackMenuItemsMatchingBlock:(/*^block*/id)arg1 allItems:(id)arg2 ;
-(id)restorePreviouslyFilteredItemsToItems:(id)arg1 ;
-(id)_nameForToggle;
-(void)_toggleButtonTapped:(id)arg1 ;
-(void)setHiddenIndexesToDictionaries:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)hiddenIndexesToDictionaries;
-(char)_toggleShouldEnableAllMenuItems;
-(id)itemAfterTogglingEnabledState:(id)arg1 ;
-(void)_updateToggleButtonName;
-(id)titleForItem:(id)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(char)isItemEnabled:(id)arg1 ;
-(id)specifiers;
@end

