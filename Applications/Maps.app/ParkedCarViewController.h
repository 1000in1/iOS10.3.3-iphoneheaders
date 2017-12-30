/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:38 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/ControlContaineeViewController.h>
#import <Maps/HeaderViewDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIImagePickerControllerDelegate.h>
#import <Maps/ParkedCarManagerObserver.h>
#import <Maps/LocationRefinementViewControllerDelegate.h>
#import <UIKit/UITextFieldDelegate.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>

@class ContainerHeaderView, MapsThemeLabel, NSLayoutConstraint, NSDateComponentsFormatter, NSTimer, UIScrollView, MKViewWithHairline, OverridenBackgroundColorButton, UITextField, UIView, UIImageView, UILabel, UITableView, NSArray, _ParkedCarAction, MKDistanceFormatter, ParkedCar, NSString;

@interface ParkedCarViewController : ControlContaineeViewController <HeaderViewDelegate, UITableViewDelegate, UITableViewDataSource, UINavigationControllerDelegate, UIImagePickerControllerDelegate, ParkedCarManagerObserver, LocationRefinementViewControllerDelegate, UITextFieldDelegate, UIViewControllerTransitioningDelegate> {

	ContainerHeaderView* _titleHeaderView;
	MapsThemeLabel* _headerTitleLabel;
	MapsThemeLabel* _headerSubtitleLabel;
	NSLayoutConstraint* _headerTitleBaselineToTopConstraint;
	NSLayoutConstraint* _headerSubtitleBaselineToTitleBaselineConstraint;
	NSLayoutConstraint* _headerSubtitleBaselineToBottomConstraint;
	char _visible;
	MapsThemeLabel* _timeHeaderLabel;
	MapsThemeLabel* _timeValueLabel;
	NSLayoutConstraint* _timeValueLabelBaselineConstraint;
	NSDateComponentsFormatter* _timestampFormatter;
	NSTimer* _timestampUpdateTimer;
	UIScrollView* _contentScrollView;
	MKViewWithHairline* _topActionsContainerView;
	OverridenBackgroundColorButton* _directionsButton;
	NSLayoutConstraint* _directionsButtonHeightConstraint;
	OverridenBackgroundColorButton* _editLocationButton;
	NSLayoutConstraint* _editLocationButtonHeightConstraint;
	MKViewWithHairline* _metadataContainerView;
	MapsThemeLabel* _notesHeaderLabel;
	UITextField* _notesTextField;
	NSLayoutConstraint* _notesBaselineConstraint;
	UIView* _photoContainer;
	UIView* _photoPlaceholderView;
	UIImageView* _photoPlaceholderIconView;
	UILabel* _photoPlaceholderLabel;
	UIImageView* _photoView;
	NSLayoutConstraint* _actionsTableHeightConstraint;
	UITableView* _actionsTableView;
	NSArray* _actions;
	_ParkedCarAction* _removeAction;
	MKDistanceFormatter* _distanceFormatter;
	NSArray* _smallWidthConstraints;
	NSArray* _largeWidthConstraints;
	ParkedCar* _parkedCar;

}

@property (nonatomic,retain) ParkedCar * parkedCar;                 //@synthesize parkedCar=_parkedCar - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)willChangeLayout:(unsigned)arg1 ;
-(char)updateConstraintsForLayout:(unsigned)arg1 ;
-(float)heightForLayout:(unsigned)arg1 ;
-(void)headerViewButtonTapped:(id)arg1 ;
-(ParkedCar *)parkedCar;
-(void)setParkedCar:(ParkedCar *)arg1 ;
-(void)updateTheme;
-(void)locationRefinementViewController:(id)arg1 didSelectCoordinate:(CLLocationCoordinate2D)arg2 ;
-(void)parkedCarManager:(id)arg1 didUpdateParkedCar:(id)arg2 ;
-(void)_hidePhotoView;
-(void)_showPhotoView;
-(void)_updateHeaderSubtitle;
-(void)_updateTimestamp;
-(void)_scheduleTimestampUpdateTimerIfNecessary;
-(void)_updateFromParkedCar;
-(void)_handleTapOnPhoto:(id)arg1 ;
-(void)_showLocationRefinement;
-(void)_showCamera;
-(void)_imagePickerDidRetake:(id)arg1 ;
-(void)_getDirections;
-(void)_editLocationTapped:(id)arg1 ;
-(void)adjustScrollForKeyboardWithRect:(CGRect)arg1 ;
-(void)dealloc;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(char)textFieldShouldReturn:(id)arg1 ;
-(void)imagePickerControllerDidCancel:(id)arg1 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
-(void)performAction:(int)arg1 ;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(void)keyboardWillShow:(id)arg1 ;
-(void)keyboardWillHide:(id)arg1 ;
-(void)_updateFonts;
@end

