/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:28 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/InCallService.app/InCallService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UINavigationBarDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <InCallService/PHConferenceParticipantCellProtocol.h>

@class NSMutableArray, UITableView, NSString;

@interface PHConferenceParticipantsViewController : UIViewController <UINavigationBarDelegate, UITableViewDataSource, UITableViewDelegate, PHConferenceParticipantCellProtocol> {

	NSMutableArray* _conferenceParticipantCalls;
	UITableView* _conferenceTable;

}

@property (retain) NSMutableArray * conferenceParticipantCalls;              //@synthesize conferenceParticipantCalls=_conferenceParticipantCalls - In the implementation block
@property (retain) UITableView * conferenceTable;                            //@synthesize conferenceTable=_conferenceTable - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)conferenceParticipantCellRequestedEndCall:(id)arg1 ;
-(void)conferenceParticipantCellRequestedTakeCallPrivate:(id)arg1 ;
-(void)callStatusChanged:(id)arg1 ;
-(void)handleCallModelChangedNotification:(id)arg1 ;
-(void)setConferenceTable:(UITableView *)arg1 ;
-(void)setConferenceParticipantCalls:(NSMutableArray *)arg1 ;
-(void)dismissConferenceView;
-(UITableView *)conferenceTable;
-(void)dismissAfterPrivate;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(char)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(NSMutableArray *)conferenceParticipantCalls;
-(void)removeCall:(id)arg1 ;
@end

