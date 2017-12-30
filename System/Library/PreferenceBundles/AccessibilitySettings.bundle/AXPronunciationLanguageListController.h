/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:28:55 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilitySettings/AccessibilityBaseListController.h>

@protocol AXPronunciationLanguageListControllerDelegate;
@class NSMutableSet;

@interface AXPronunciationLanguageListController : AccessibilityBaseListController {

	id<AXPronunciationLanguageListControllerDelegate> _delegate;
	NSMutableSet* _selectedLanguages;

}

@property (nonatomic,retain) NSMutableSet * selectedLanguages;                                        //@synthesize selectedLanguages=_selectedLanguages - In the implementation block
@property (assign,nonatomic) id<AXPronunciationLanguageListControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setSelectedLanguages:(NSMutableSet *)arg1 ;
-(NSMutableSet *)selectedLanguages;
-(void)setDelegate:(id<AXPronunciationLanguageListControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id<AXPronunciationLanguageListControllerDelegate>)delegate;
-(void)viewWillAppear:(char)arg1 ;
-(id)specifiers;
@end

