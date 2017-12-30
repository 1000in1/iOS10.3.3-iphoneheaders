/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:29:17 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/NotificationsSettings.bundle/NotificationsSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <NotificationsSettings/BulletinBoardAppDetailControllerDelegate.h>
#import <NotificationsSettings/SortOrderSelectionViewControllerDelegate.h>

@protocol OS_dispatch_semaphore;
@class NSObject, PSSpecifier, NSDictionary, NSString;

@interface BulletinBoardController : PSListController <BulletinBoardAppDetailControllerDelegate, SortOrderSelectionViewControllerDelegate> {

	int _orderRule;
	NSObject*<OS_dispatch_semaphore> _loadSem;
	NSObject*<OS_dispatch_semaphore> _sectionOrderRuleSem;
	PSSpecifier* _groupByAppSwitchSpecifier;
	int _recentsOrderRule;
	char _loadingFromBBGateway;
	char _loadingSectionOrderFromBBGateway;
	char _telephonyDevice;
	PSSpecifier* _emptyCell;
	NSDictionary* _urlResourceDictionary;

}

@property (nonatomic,retain) NSDictionary * urlResourceDictionary;              //@synthesize urlResourceDictionary=_urlResourceDictionary - In the implementation block
@property (assign,nonatomic) char telephonyDevice;                              //@synthesize telephonyDevice=_telephonyDevice - In the implementation block
@property (nonatomic,retain) PSSpecifier * emptyCell;                           //@synthesize emptyCell=_emptyCell - In the implementation block
@property (assign) char loadingFromBBGateway;                                   //@synthesize loadingFromBBGateway=_loadingFromBBGateway - In the implementation block
@property (assign) char loadingSectionOrderFromBBGateway;                       //@synthesize loadingSectionOrderFromBBGateway=_loadingSectionOrderFromBBGateway - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_sectionUIDescriptions;
-(void)setLoadingSectionOrderFromBBGateway:(char)arg1 ;
-(PSSpecifier *)emptyCell;
-(char)telephonyDevice;
-(char)loadingFromBBGateway;
-(id)_alphabetizedSpecifiersFrom:(id)arg1 ;
-(void)_loadSectionOrderRule;
-(void)setCmasAlertState:(id)arg1 forSpecifier:(id)arg2 ;
-(void)sortOrderSelectionViewControllerWillDisappear:(id)arg1 ;
-(void)sortOrderSelectionViewController:(id)arg1 updatedSortOrderState:(int)arg2 ;
-(char)loadingSectionOrderFromBBGateway;
-(id)_sectionIDs;
-(void)_loadSections;
-(void)_clearSections;
-(void)appDetailControllerWillDisappear:(id)arg1 ;
-(id)groupByApp:(id)arg1 ;
-(id)cmasAlertsValue:(id)arg1 ;
-(void)setUrlResourceDictionary:(NSDictionary *)arg1 ;
-(void)_toggleGroupByAppSwitchVisibleForRule:(int)arg1 animated:(char)arg2 ;
-(void)_reallyLoadSections:(id)arg1 ;
-(id)_sortedSections:(id)arg1 ;
-(id)sortOrderType:(id)arg1 ;
-(NSDictionary *)urlResourceDictionary;
-(void)setLoadingFromBBGateway:(char)arg1 ;
-(id)_filterSuppressedSections:(id)arg1 ;
-(id)sectionsOrderedByInOutState:(id)arg1 ;
-(void)_addRegionalAlertGroupToSpecifiers:(id)arg1 ;
-(void)setEmptyCell:(PSSpecifier *)arg1 ;
-(void)sortOrderSelectionViewController:(id)arg1 updatedSections:(id)arg2 ;
-(void)setGroupByApp:(id)arg1 specifier:(id)arg2 ;
-(id)_sectionDescriptions;
-(id)init;
-(void)dealloc;
-(void)viewWillAppear:(char)arg1 ;
-(id)controllerForSpecifier:(id)arg1 ;
-(void)handleURL:(id)arg1 ;
-(void)setDesiredVerticalContentOffset:(float)arg1 ;
-(void)setTelephonyDevice:(char)arg1 ;
-(void)_reloadSections;
-(void)profileNotification:(id)arg1 ;
-(id)specifiers;
@end

