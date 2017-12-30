/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:23 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HKTableViewController.h>

@class NSSet, HKDataUnit, HKUnitController, NSArray, UIBarButtonItem, UIFont;

@interface WDUnitPreferenceViewController : HKTableViewController {

	NSSet* _units;
	HKDataUnit* _dataUnit;
	HKUnitController* _unitController;
	NSArray* _rows;
	int _selectedRowIndex;
	int _originalSelectedRowIndex;
	UIBarButtonItem* _doneButton;
	UIBarButtonItem* _cancelButton;
	char _requiresChangeConfirmation;
	UIFont* _bodyFont;

}

@property (nonatomic,retain) UIFont * bodyFont;                            //@synthesize bodyFont=_bodyFont - In the implementation block
@property (assign,nonatomic) char requiresChangeConfirmation;              //@synthesize requiresChangeConfirmation=_requiresChangeConfirmation - In the implementation block
-(void)setBodyFont:(UIFont *)arg1 ;
-(id)initWithUnits:(id)arg1 dataUnit:(id)arg2 unitController:(id)arg3 ;
-(void)setRequiresChangeConfirmation:(char)arg1 ;
-(id)_sortedUnitPreferenceRows;
-(char)requiresChangeConfirmation;
-(void)_updateCurrentUnit:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(int)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(UIFont *)bodyFont;
-(void)_doneButtonTapped:(id)arg1 ;
-(void)_cancelButtonTapped:(id)arg1 ;
@end

