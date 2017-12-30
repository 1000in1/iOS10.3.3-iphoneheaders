/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:25 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Home.app/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <HomeUI/HUItemTableViewController.h>
#import <Home/HUAboutResidentDeviceViewControllerDelegate.h>
#import <Home/HOTriggerEditorDelegate.h>
#import <Home/HOTriggerListHeadlineCellDelegate.h>
#import <Home/HUColoredButtonCellDelegate.h>

@class HOTriggerListItemManager, NSString;

@interface HOTriggerListViewController : HUItemTableViewController <HUAboutResidentDeviceViewControllerDelegate, HOTriggerEditorDelegate, HOTriggerListHeadlineCellDelegate, HUColoredButtonCellDelegate> {

	HOTriggerListItemManager* _triggerItemManager;
	unsigned _editorPresentationMode;

}

@property (assign,nonatomic,__weak) HOTriggerListItemManager * triggerItemManager;              //@synthesize triggerItemManager=_triggerItemManager - In the implementation block
@property (assign,nonatomic) unsigned editorPresentationMode;                                   //@synthesize editorPresentationMode=_editorPresentationMode - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)learnMoreLinkTapped:(id)arg1 ;
-(void)triggerEditor:(id)arg1 didFinishWithTriggerBuilder:(id)arg2 ;
-(void)_updateBackgroundColorAndMargins;
-(HOTriggerListItemManager *)triggerItemManager;
-(void)setEditorPresentationMode:(unsigned)arg1 ;
-(void)_addTrigger:(id)arg1 ;
-(void)_showSummaryForTriggerItem:(id)arg1 ;
-(unsigned)editorPresentationMode;
-(void)setTriggerItemManager:(HOTriggerListItemManager *)arg1 ;
-(id)init;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(char)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(char)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLoad;
-(void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(char)arg4 ;
-(id)allCellClasses;
-(Class)cellClassForItem:(id)arg1 indexPath:(id)arg2 ;
-(char)shouldHideHeaderAboveSection:(int)arg1 ;
-(char)shouldHideFooterBelowSection:(int)arg1 ;
-(void)coloredButtonCellPressed:(id)arg1 ;
-(void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 ;
-(unsigned)automaticDisablingReasonsForItem:(id)arg1 ;
-(void)aboutResidentDeviceViewControllerDidFinish:(id)arg1 ;
-(char)shouldHideSeparatorsForCell:(id)arg1 indexPath:(id)arg2 ;
@end

