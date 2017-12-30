/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:26 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Reminders.app/Reminders
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Reminders/Reminders-Structs.h>
#import <UIKit/UIViewController.h>
#import <Reminders/RemindersListPickerDelegate.h>
#import <Reminders/RemindersListControllerDelegate.h>
#import <Reminders/RemindersNewListControllerDelegate.h>
#import <Reminders/RemindersInvitationControllerDelegate.h>

@protocol RemindersMasterViewControllerDelegate;
@class RemindersListPicker, RemindersSearchView, UIToolbar, UIView, UIBarButtonItem, NSString;

@interface RemindersMasterViewController : UIViewController <RemindersListPickerDelegate, RemindersListControllerDelegate, RemindersNewListControllerDelegate, RemindersInvitationControllerDelegate> {

	RemindersListPicker* _listPicker;
	RemindersSearchView* _searchView;
	UIToolbar* _addEditToolbar;
	UIView* _dividerLine;
	UIBarButtonItem* _editButton;
	UIBarButtonItem* _addListButton;
	char _isSearching;
	UIBarButtonItem* _frontFixedSpace;
	char _newListDisplayed;
	id<RemindersMasterViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<RemindersMasterViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)invitationControllerDeclined:(id)arg1 ;
-(void)invitationControllerAccepted:(id)arg1 ;
-(id)initWithSearchBarView:(id)arg1 ;
-(void)selectCalendar:(id)arg1 ;
-(void)selectScheduled;
-(char)scheduledSelected;
-(void)searchWillBecomeActive:(char)arg1 ;
-(void)addListButtonTapped:(id)arg1 ;
-(void)selectFirstAvailableCalendar;
-(void)listPickerDidChangeSelectedCalendar:(id)arg1 ;
-(void)listPickerDidSelect:(id)arg1 ;
-(void)listPickerDidEditCalendars:(id)arg1 ;
-(void)newListControllerCreatedList:(id)arg1 ;
-(void)newListControllerCanceledList:(id)arg1 ;
-(void)setDelegate:(id<RemindersMasterViewControllerDelegate>)arg1 ;
-(id<RemindersMasterViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)selectedCalendar;
-(void)editButtonTapped:(id)arg1 ;
@end

