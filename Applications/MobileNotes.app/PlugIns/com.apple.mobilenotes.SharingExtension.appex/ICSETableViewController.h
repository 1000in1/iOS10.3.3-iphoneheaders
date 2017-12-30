/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:03 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileNotes.app/PlugIns/com.apple.mobilenotes.SharingExtension.appex/com.apple.mobilenotes.SharingExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/NSFetchedResultsControllerDelegate.h>

@class ICSEMainViewController, UITableView, NSFetchedResultsController, NSString;

@interface ICSETableViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, NSFetchedResultsControllerDelegate> {

	ICSEMainViewController* _mainViewController;
	UITableView* _tableView;
	NSFetchedResultsController* _fetchedResultsController;

}

@property (assign,nonatomic,__weak) UITableView * tableView;                           //@synthesize tableView=_tableView - In the implementation block
@property (retain) NSFetchedResultsController * fetchedResultsController;              //@synthesize fetchedResultsController=_fetchedResultsController - In the implementation block
@property (nonatomic,retain) ICSEMainViewController * mainViewController;              //@synthesize mainViewController=_mainViewController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)refreshList;
-(NSFetchedResultsController *)fetchedResultsController;
-(void)notesContextRefreshNotification:(id)arg1 ;
-(void)setFetchedResultsController:(NSFetchedResultsController *)arg1 ;
-(void)extensionHostDidBecomeActive:(id)arg1 ;
-(id)noteForIndexPath:(id)arg1 ;
-(char)isPasswordProtectedNoteAtIndexPath:(id)arg1 ;
-(void)controllerDidChangeContent:(id)arg1 ;
-(char)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)didReceiveMemoryWarning;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)setTableView:(UITableView *)arg1 ;
-(id)backgroundView;
-(UITableView *)tableView;
-(id)contentScrollView;
-(void)viewDidLoad;
-(ICSEMainViewController *)mainViewController;
-(void)setMainViewController:(ICSEMainViewController *)arg1 ;
@end

