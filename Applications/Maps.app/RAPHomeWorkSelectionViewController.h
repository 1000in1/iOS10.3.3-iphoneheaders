/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:36 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <Maps/HomeWorkAddressEditorViewControllerDelegate.h>
#import <Maps/RAPInstrumentableTarget.h>

@class RAPHomeWorkCorrectionsWhichOneQuestion, RAPReport, NSString;

@interface RAPHomeWorkSelectionViewController : UITableViewController <HomeWorkAddressEditorViewControllerDelegate, RAPInstrumentableTarget> {

	RAPHomeWorkCorrectionsWhichOneQuestion* _question;
	RAPReport* _report;

}

@property (nonatomic,retain) RAPHomeWorkCorrectionsWhichOneQuestion * question;              //@synthesize question=_question - In the implementation block
@property (nonatomic,retain) RAPReport * report;                                             //@synthesize report=_report - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) int analyticTarget; 
@property (nonatomic,readonly) int backAction; 
-(void)setQuestion:(RAPHomeWorkCorrectionsWhichOneQuestion *)arg1 ;
-(RAPHomeWorkCorrectionsWhichOneQuestion *)question;
-(int)backAction;
-(int)analyticTarget;
-(void)homeWorkAddressEditorViewController:(id)arg1 dismissedWithSuccess:(char)arg2 ;
-(id)initWithReport:(id)arg1 question:(id)arg2 ;
-(char)isAddNewAddressRow:(int)arg1 ;
-(id)homeWorkCorrectionQuestionForIndexPath:(id)arg1 ;
-(id)textLabelForQuestion:(id)arg1 ;
-(id)detailTextLabelForQuestion:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(char)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)setReport:(RAPReport *)arg1 ;
-(RAPReport *)report;
@end

