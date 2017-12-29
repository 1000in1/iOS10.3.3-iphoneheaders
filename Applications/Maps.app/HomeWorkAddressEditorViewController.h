/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:47 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UITableViewController.h>
#import <Maps/LocationRefinementViewControllerDelegate.h>
#import <Maps/RAPAddressCellDelegate.h>
#import <Maps/HomeWorkAddressEditorLabelPickerDelegate.h>
#import <Maps/RAPInstrumentableTarget.h>

@protocol MKMapServiceTicket, HomeWorkAddressEditorViewControllerDelegate;
@class PlaceCardItem, GEOAddress, LocationOfInterestType, MKMapItem, RAPReport, NSMutableDictionary, RAPHomeWorkCorrectionsQuestion, NSString;

@interface HomeWorkAddressEditorViewController : UITableViewController <LocationRefinementViewControllerDelegate, RAPAddressCellDelegate, HomeWorkAddressEditorLabelPickerDelegate, RAPInstrumentableTarget> {

	PlaceCardItem* _placeCardItem;
	int _originalAddressType;
	GEOAddress* _correctedAddress;
	LocationOfInterestType* _correctedLocationOfInterestType;
	MKMapItem* _forwardGeoResult;
	id<MKMapServiceTicket> _forwardGeoServiceTicket;
	CLLocationCoordinate2D _correctedCoordinate;
	char _hasSubmittedRAP;
	RAPReport* _report;
	char _showRequiredPlaceHolderText;
	char _alreadyPressedDone;
	NSMutableDictionary* _requiredFieldsLength;
	RAPHomeWorkCorrectionsQuestion* _question;
	NSString* _correctedAddressSecondaryStreetLine;
	id<HomeWorkAddressEditorViewControllerDelegate> _delegate;

}

@property (nonatomic,copy) NSString * correctedAddressSecondaryStreetLine;                                 //@synthesize correctedAddressSecondaryStreetLine=_correctedAddressSecondaryStreetLine - In the implementation block
@property (assign,nonatomic,__weak) id<HomeWorkAddressEditorViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) RAPHomeWorkCorrectionsQuestion * question;                                  //@synthesize question=_question - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) int analyticTarget; 
@property (nonatomic,readonly) int backAction; 
+(id)deleteAddressAlertControllerWithDeletionHandler:(/*^block*/id)arg1 ;
+(id)followupQuestionControllerForController:(id)arg1 question:(id)arg2 ;
-(RAPHomeWorkCorrectionsQuestion *)question;
-(int)backAction;
-(int)analyticTarget;
-(id)_localizedTitle;
-(void)homeWorkAddressEditorLabelPicker:(id)arg1 didSelectLocationOfInterestType:(id)arg2 ;
-(void)locationRefinementViewController:(id)arg1 didSelectCoordinate:(CLLocationCoordinate2D)arg2 ;
-(void)valueForAddressType:(int)arg1 changedTo:(id)arg2 ;
-(void)rapCellSelectedCountryCell:(id)arg1 ;
-(void)coreRoutineEnabledStateChanged:(id)arg1 ;
-(id)initWithPlaceCardItem:(id)arg1 addressType:(int)arg2 label:(id)arg3 delegate:(id)arg4 ;
-(id)initWithPlaceCardItem:(id)arg1 delegate:(id)arg2 ;
-(id)initWithQuestion:(id)arg1 delegate:(id)arg2 ;
-(void)_launchLocationRefinementsWithCoordinate:(CLLocationCoordinate2D)arg1 ;
-(unsigned)_crosshairTypeForLocationOfInterestType:(id)arg1 ;
-(void)_showNoResultsDialog;
-(char)_canSendToForwardGeo;
-(void)_updateRequiredFieldsLengthForKind:(int)arg1 withString:(id)arg2 ;
-(char)_isRequiredField:(int)arg1 ;
-(char)_isLabelSection:(id)arg1 ;
-(char)_isDeletionSection:(id)arg1 ;
-(char)_isAddressSection:(id)arg1 ;
-(char)_isExistingAddress;
-(id)_twoPartStringForMultiLineString:(id)arg1 ;
-(void)_saveUpdateToCoreRoutine:(id)arg1 ;
-(void)initializeQuestionWithCompletion:(/*^block*/id)arg1 ;
-(void)_processRAPQuestionWithLocationAttributes:(id)arg1 ;
-(void)_rapCompletedUserAgreedToPrivacy:(char)arg1 withLocationAttributes:(id)arg2 ;
-(void)_showSubmissionPromptWithLocationAttributes:(id)arg1 ;
-(void)_submitRAPWithLocationAttributes:(id)arg1 ;
-(void)clearWhitespacesOnlyAddressLines;
-(void)setDelegate:(id<HomeWorkAddressEditorViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(char)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(id<HomeWorkAddressEditorViewControllerDelegate>)delegate;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(NSString *)correctedAddressSecondaryStreetLine;
-(void)setCorrectedAddressSecondaryStreetLine:(NSString *)arg1 ;
-(void)_cancel:(id)arg1 ;
-(void)_done:(id)arg1 ;
@end
