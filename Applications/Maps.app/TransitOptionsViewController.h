/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:44 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/ControlContaineeViewController.h>
#import <Maps/MapsTheming.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@protocol GEOSurchargeOption, GEOSurchargeType, RoutePlanningDataCoordination;
@class NSArray, TransitRouteOptions, ModalCardHeaderView, UITableView, NSString;

@interface TransitOptionsViewController : ControlContaineeViewController <MapsTheming, UITableViewDelegate, UITableViewDataSource> {

	NSArray* _allTransitPrioritizations;
	id<GEOSurchargeOption> _surchargeOptions;
	id<GEOSurchargeType> _userSelectedSurcharge;
	char _showICFareOption;
	NSArray* _sections;
	TransitRouteOptions* _options;
	id<RoutePlanningDataCoordination> _dataCoordinator;
	ModalCardHeaderView* _modalHeaderView;
	UITableView* _tableView;

}

@property (nonatomic,retain) ModalCardHeaderView * modalHeaderView;                                 //@synthesize modalHeaderView=_modalHeaderView - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                               //@synthesize tableView=_tableView - In the implementation block
@property (assign,nonatomic,__weak) id<RoutePlanningDataCoordination> dataCoordinator;              //@synthesize dataCoordinator=_dataCoordinator - In the implementation block
@property (nonatomic,retain) TransitRouteOptions * options;                                         //@synthesize options=_options - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_customInit;
-(void)setSortOption:(int)arg1 ;
-(void)updateTheme;
-(id<RoutePlanningDataCoordination>)dataCoordinator;
-(void)setDataCoordinator:(id<RoutePlanningDataCoordination>)arg1 ;
-(ModalCardHeaderView *)modalHeaderView;
-(void)setModalHeaderView:(ModalCardHeaderView *)arg1 ;
-(void)configureWithDisplayHints:(id)arg1 ;
-(int)normalizedSectionIndex:(int)arg1 ;
-(int)_modeForIndexPath:(id)arg1 ;
-(int)_sortForIndexPath:(id)arg1 ;
-(id)_surchargeForIndexPath:(id)arg1 ;
-(id)_localizedNameForPriorityOption:(int)arg1 ;
-(void)_showICFareSwitchToggled:(id)arg1 ;
-(void)_updateCellForShowICFares:(id)arg1 ;
-(void)_updateAllTransitModeCells;
-(void)_updateAllSortOrderCells;
-(void)_updateAllSurchargeCells;
-(char)_isCurrentSelectedTransitModeIndividual;
-(void)_updateCell:(id)arg1 forTransitMode:(int)arg2 ;
-(void)_updateCell:(id)arg1 forSort:(int)arg2 ;
-(void)_updateCell:(id)arg1 forSurcharge:(id)arg2 ;
-(int)_surchargeOptionValueToDisplayAsSelected;
-(char)_optionsHaveChangedDisabledModes:(out char*)arg1 sortOption:(out char*)arg2 surchargeOption:(out char*)arg3 showICFare:(out char*)arg4 ;
-(void)_commitTransitOptions;
-(id)initWithCoder:(id)arg1 ;
-(float)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(char)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(int)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)setTableView:(UITableView *)arg1 ;
-(UITableView *)tableView;
-(void)viewDidLoad;
-(TransitRouteOptions *)options;
-(void)setOptions:(TransitRouteOptions *)arg1 ;
-(void)doneButtonTapped:(id)arg1 ;
-(void)_setupConstraints;
@end

