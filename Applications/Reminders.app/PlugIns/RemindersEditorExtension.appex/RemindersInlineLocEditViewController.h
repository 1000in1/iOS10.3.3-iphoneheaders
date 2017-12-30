/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:27 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Reminders.app/PlugIns/RemindersEditorExtension.appex/RemindersEditorExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemindersEditorExtension/RemindersEditorExtension-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UISearchBarDelegate.h>
#import <RemindersEditorExtension/RemindersLocationPickerModelDelegate.h>
#import <libobjc.A.dylib/ABSearchOperationDelegate.h>
#import <libobjc.A.dylib/MKMapViewDelegate.h>
#import <Maps/MKMapViewDelegatePrivate.h>
#import <RemindersEditorExtension/RemindersMapDragRadiusDelegate.h>

@protocol RemindersLocationEditorDelegate;
@class UISearchBar, UIView, UITableView, UISegmentedControl, MKMapView, RemindersMapDragRadiusView, NSMutableArray, NSString, EKStructuredLocation, RemindersLocationPickerModel, _MKLocationShifter, MKLocalSearch, NSArray, NSOperationQueue, ABSearchOperation, NSLayoutConstraint;

@interface RemindersInlineLocEditViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UISearchBarDelegate, RemindersLocationPickerModelDelegate, ABSearchOperationDelegate, MKMapViewDelegate, MKMapViewDelegatePrivate, RemindersMapDragRadiusDelegate> {

	UISearchBar* _searchBar;
	UIView* _dividerView;
	UITableView* _tableView;
	UISegmentedControl* _proximityControl;
	UIView* _proximityControlBackground;
	MKMapView* _mapView;
	RemindersMapDragRadiusView* _dragView;
	NSMutableArray* _constraints;
	NSString* _selectedLocationAddressString;
	EKStructuredLocation* _structuredLocation;
	int _proximity;
	RemindersLocationPickerModel* _model;
	_MKLocationShifter* _locationShifter;
	char _needsAddToRecents;
	NSMutableArray* _recents;
	MKLocalSearch* _locationSearch;
	NSArray* _locationSearchResults;
	NSOperationQueue* _abSearchQueue;
	ABSearchOperation* _abSearchOperation;
	NSMutableArray* _abSearchResults;
	NSMutableArray* _abAccumulatingResults;
	char _everConnectedToCar;
	NSLayoutConstraint* _mapHeightConstraint;
	id<RemindersLocationEditorDelegate> _delegate;

}

@property (assign,nonatomic) id<RemindersLocationEditorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)locationImage;
+(id)homeImage;
+(id)workImage;
+(id)pinImage;
+(id)carImage;
-(char)_hasLocation;
-(void)_updateMapHeight;
-(void)_createProximityControlIfNeeded;
-(void)_proximityChanged:(id)arg1 ;
-(float)mapHeight;
-(char)_allowsSearching;
-(void)setupMap;
-(id)overlayWithCenterCoordinate:(CLLocationCoordinate2D)arg1 radius:(double)arg2 ;
-(void)displayLocation:(id)arg1 ;
-(void)_updateLayoutContraints;
-(char)_showCarOptions;
-(void)locationPickerModelDidUpdateCurrentLocation:(id)arg1 ;
-(void)locationPickerModelDidUpdateCustomLocation:(id)arg1 ;
-(void)locationPickerModel:(id)arg1 didUpdateMeCardItem:(int)arg2 ;
-(void)locationPickerModelDidChangeSelection:(id)arg1 ;
-(void)locationPickerModel:(id)arg1 didEncounterError:(id)arg2 ;
-(void)radiusDidChange:(double)arg1 ;
-(SCD_Struct_Re2)boundingMapRectForOverlay:(id)arg1 ;
-(id)overlayForRadius:(double)arg1 ;
-(id)initWithProximity:(int)arg1 structuredLocation:(id)arg2 ;
-(void)setDelegate:(id<RemindersLocationEditorDelegate>)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3 ;
-(id<RemindersLocationEditorDelegate>)delegate;
-(void)loadView;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(void)mapView:(id)arg1 didDeselectLabelMarker:(id)arg2 ;
-(void)mapView:(id)arg1 didSelectLabelMarker:(id)arg2 ;
-(void)mapViewDidChangeVisibleRegion:(id)arg1 ;
-(void)updateRecents:(id)arg1 ;
-(void)searchOperation:(id)arg1 didFindMatches:(id)arg2 moreComing:(char)arg3 ;
-(void)mapView:(id)arg1 regionWillChangeAnimated:(char)arg2 ;
-(void)mapView:(id)arg1 regionDidChangeAnimated:(char)arg2 ;
-(id)mapView:(id)arg1 rendererForOverlay:(id)arg2 ;
-(void)_updateUI;
-(void)resetSearchResults;
@end

