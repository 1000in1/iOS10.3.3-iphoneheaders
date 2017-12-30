/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:56 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <UIKit/UITableViewController.h>
#import <MobileMail/ABPeoplePickerNavigationControllerPrivateDelegate.h>
#import <FaceTime/ABUnknownPersonViewControllerDelegate.h>

@class NSMutableArray, NSString;

@interface MFVIPSendersListTableViewController : UITableViewController <ABPeoplePickerNavigationControllerPrivateDelegate, ABUnknownPersonViewControllerDelegate> {

	NSMutableArray* _allVIPs;
	int _sectionCount;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_updateVIPSendersList:(id)arg1 ;
-(void)_addNewVIPSender;
-(void)_refreshVIPSendersList;
-(void)dismissPeoplePicker:(id)arg1 ;
-(id)_labelWithPreferenceStyleFormattingForString:(id)arg1 ;
-(void)dealloc;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(char)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3 ;
-(char)shouldAutorotate;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(void)viewDidLoad;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(id)initWithStyle:(int)arg1 ;
-(void)unknownPersonViewController:(id)arg1 didResolveToPerson:(void*)arg2 ;
-(char)unknownPersonViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 ;
-(void)peoplePickerNavigationController:(id)arg1 didSelectPerson:(void*)arg2 ;
-(void)peoplePickerNavigationControllerDidCancel:(id)arg1 ;
@end

