/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:34 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/HomeWorkAddressEditorLabelPicker.h>
#import <Maps/HomeWorkAddressEditorLabelPickerDelegate.h>

@class PlaceCardItem, MapsLocationOfInterest;

@interface LOILabelEditorViewController : HomeWorkAddressEditorLabelPicker <HomeWorkAddressEditorLabelPickerDelegate> {

	PlaceCardItem* _placeCardItem;
	MapsLocationOfInterest* _locationOfInterest;
	char _alreadyPressedDone;

}
-(void)homeWorkAddressEditorLabelPicker:(id)arg1 didSelectLocationOfInterestType:(id)arg2 ;
-(id)initWithPlaceCardItem:(id)arg1 ;
-(void)_saveSelectionToCoreRoutineCompletion:(/*^block*/id)arg1 ;
-(char)_isHeaderSection:(int)arg1 ;
-(id)visitTimespanText;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(int)arg2 ;
-(void)viewDidLoad;
-(void)_cancel:(id)arg1 ;
-(void)_done:(id)arg1 ;
@end

