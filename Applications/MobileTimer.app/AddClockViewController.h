/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:15 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileTimer.app/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <UIKit/UITableViewController.h>
#import <UIKit/UISearchBarDelegate.h>

@protocol AddClockViewControllerDelegate;
@class ClockSearchField, NSArray, NSMutableIndexSet, UILabel, NSString;

@interface AddClockViewController : UITableViewController <UISearchBarDelegate> {

	ClockSearchField* _searchField;
	NSArray* _cities;
	NSArray* _partitionedCities;
	NSArray* _sectionIndexTitles;
	NSMutableIndexSet* _populatedIndexSet;
	id<AddClockViewControllerDelegate> _delegate;
	NSArray* _centerNoResultsFoundLabelConstraints;
	UILabel* _noResultsFoundLabel;
	CGRect _keyboardFrame;

}

@property (assign,nonatomic) CGRect keyboardFrame;                                            //@synthesize keyboardFrame=_keyboardFrame - In the implementation block
@property (nonatomic,retain) NSArray * centerNoResultsFoundLabelConstraints;                  //@synthesize centerNoResultsFoundLabelConstraints=_centerNoResultsFoundLabelConstraints - In the implementation block
@property (nonatomic,retain) UILabel * noResultsFoundLabel;                                   //@synthesize noResultsFoundLabel=_noResultsFoundLabel - In the implementation block
@property (assign,nonatomic,__weak) id<AddClockViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) ClockSearchField * searchField;                                //@synthesize searchField=_searchField - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)prepopulateSuggestions;
-(void)_keyboardWillDismiss:(id)arg1 ;
-(UILabel *)noResultsFoundLabel;
-(void)setNoResultsFoundLabel:(UILabel *)arg1 ;
-(void)_addAutolayoutConstraintsForNoResultsFoundLabel;
-(void)_removeAutolayoutConstraintsForNoResultsFoundLabel;
-(void)_showNoResultsFound:(char)arg1 ;
-(NSArray *)centerNoResultsFoundLabelConstraints;
-(float)_calculateVerticalMultiplierForKeyboard;
-(void)setCenterNoResultsFoundLabelConstraints:(NSArray *)arg1 ;
-(void)_reloadNoResultsFoundLabelForKeyboardNotification:(id)arg1 ;
-(void)_keyboardWillResize:(id)arg1 ;
-(id)init;
-(void)setDelegate:(id<AddClockViewControllerDelegate>)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(id)sectionIndexTitlesForTableView:(id)arg1 ;
-(int)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(int)arg3 ;
-(id<AddClockViewControllerDelegate>)delegate;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLoad;
-(void)_keyboardWillShow:(id)arg1 ;
-(ClockSearchField *)searchField;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(void)_dismiss;
-(CGRect)keyboardFrame;
-(void)setKeyboardFrame:(CGRect)arg1 ;
@end

