/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:28:55 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilitySettings/AccessibilitySettings-Structs.h>
#import <AccessibilitySettings/AXCaptionStyleChooserController.h>

@class NSMutableArray;

@interface AXCaptioningThemeController : AXCaptionStyleChooserController {

	NSMutableArray* _editableHiddenSpecifiers;
	NSMutableArray* _editableVisibleSpecifiers;
	char _isEditingTable;
	NSMutableArray* _customProfiles;
	NSMutableArray* _defaultProfiles;

}

@property (nonatomic,retain) NSMutableArray * customProfiles;               //@synthesize customProfiles=_customProfiles - In the implementation block
@property (nonatomic,retain) NSMutableArray * defaultProfiles;              //@synthesize defaultProfiles=_defaultProfiles - In the implementation block
-(void)setCustomProfiles:(NSMutableArray *)arg1 ;
-(void)setDefaultProfiles:(NSMutableArray *)arg1 ;
-(void)_themeCountChanged:(id)arg1 ;
-(void)_resetActiveProfileToDefault;
-(char)_profileOverridesStyle:(CFStringRef)arg1 ;
-(void)_selectProfile:(id)arg1 ;
-(void)_addEditButton;
-(NSMutableArray *)customProfiles;
-(void)_editPressed;
-(void)_manageHiddenSpecifiers:(char)arg1 editing:(char)arg2 ;
-(void)_setVideoOverridesStyle:(id)arg1 specifier:(id)arg2 ;
-(id)_videoOverridesStyle:(id)arg1 ;
-(NSMutableArray *)defaultProfiles;
-(void)_donePressed;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(char)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(char)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(void)viewDidLoad;
-(id)specifiers;
@end

