/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:55 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UITableViewController.h>
#import <UIKit/UITextFieldDelegate.h>

@class UIPrintPanelViewController, UIPrintPreviewViewController, UIPrinterBrowserViewController, NSString;

@interface UIPrintPanelTableViewController : UITableViewController <UITextFieldDelegate> {

	UIPrintPanelViewController* _printPanelViewController;
	int _settingsRow;
	int _rangeRow;
	int _copiesRow;
	int _duplexRow;
	int _grayscaleRow;
	int _stapleRow;
	int _punchRow;
	int _paperRow;
	int _jobAccountIDRow;
	int _settingsSection;
	char _contactingPrinter;
	char _printerWarningWasShown;
	char _settingsExpanded;
	UIPrintPreviewViewController* _printPreviewViewController;
	int _previousPageIndexInCenterOfPreview;
	UIPrinterBrowserViewController* _browserController;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(int)arg2 ;
-(unsigned)supportedInterfaceOrientations;
-(id)keyCommands;
-(char)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLoad;
-(char)textFieldShouldReturn:(id)arg1 ;
-(void)_updateSize;
-(void)showCancelButton;
-(char)accessibilityPerformMagicTap;
-(void)setShowContactingPrinter:(char)arg1 ;
-(id)initWithPrintPanelViewController:(id)arg1 ;
-(void)setPdfFileURL:(id)arg1 destinationPaper:(id)arg2 pdfPassword:(id)arg3 ;
-(void)clearPrintPanelViewController;
-(void)setShowPreviewGenerating:(char)arg1 ;
-(void)updatePageRangeText;
-(void)_update:(char)arg1 ;
-(void)cancelButtonPressed:(id)arg1 ;
-(char)shouldEnablePrintButton;
-(void)showContacting;
-(float)heightOfPreviewView;
-(void)showPreviewGenerating;
-(void)printButtonPressed:(id)arg1 ;
-(void)updateCopies:(id)arg1 ;
-(void)updateDuplex:(id)arg1 ;
-(void)updateGrayscale:(id)arg1 ;
-(void)updateStaple:(id)arg1 ;
-(void)updatePunch:(id)arg1 ;
-(void)updateJobAccountID:(id)arg1 ;
-(id)textForSettings;
-(void)updateSettingsSummaryText;
-(id)jobAccountTextField;
-(void)selectJobAccountID;
-(void)dismissKeyboardIfNeccessary;
-(void)promptForJobAccountID;
-(id)pdfFileURL;
-(void)moreButtonPushed:(id)arg1 ;
-(void)updatePageRange:(NSRange)arg1 ;
@end
