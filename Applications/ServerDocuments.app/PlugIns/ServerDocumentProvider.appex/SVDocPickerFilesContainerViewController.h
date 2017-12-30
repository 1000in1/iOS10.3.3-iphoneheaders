/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:30 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/ServerDocuments.app/PlugIns/ServerDocumentProvider.appex/ServerDocumentProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ServerDocumentProvider/ServerDocumentProvider-Structs.h>
#import <ServerDocsClient/SVFilesContainerViewController.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol SVFilesChildViewController;
@class SVMetadataItem, UIViewController, UIBarButtonItem, NSString;

@interface SVDocPickerFilesContainerViewController : SVFilesContainerViewController <UITextFieldDelegate> {

	SVMetadataItem* _currentlyDownloadingItem;
	UIViewController*<SVFilesChildViewController> _downloadingFileChildViewController;
	UIBarButtonItem* _exportOrMoveButton;

}

@property (nonatomic,retain) SVMetadataItem * currentlyDownloadingItem;                                                            //@synthesize currentlyDownloadingItem=_currentlyDownloadingItem - In the implementation block
@property (assign,nonatomic,__weak) UIViewController*<SVFilesChildViewController> downloadingFileChildViewController;              //@synthesize downloadingFileChildViewController=_downloadingFileChildViewController - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * exportOrMoveButton;                                                                 //@synthesize exportOrMoveButton=_exportOrMoveButton - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)metadataCacheDidUpdateAttributes:(id)arg1 ;
-(char)showDisclosureIndicatorForFiles;
-(void)tryExportOrMoveFileToPath:(id)arg1 ;
-(id)_mangledFilenameForPath:(id)arg1 withExistingFileNames:(id)arg2 ;
-(void)exportOrMoveFileToPath:(id)arg1 ;
-(void)_showExportOrMoveErrorAlertWithMessage:(id)arg1 ;
-(void)dismissAfterSuccessfullyExportingOrMovingFileToURL:(id)arg1 forPath:(id)arg2 ;
-(void)setUpToolbar;
-(void)exportOrMoveButtonPressed:(id)arg1 ;
-(void)setExportOrMoveButton:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)exportOrMoveButton;
-(void)startDownloadingItem:(id)arg1 ;
-(UIViewController*<SVFilesChildViewController>)downloadingFileChildViewController;
-(SVMetadataItem *)currentlyDownloadingItem;
-(void)setCurrentlyDownloadingItem:(SVMetadataItem *)arg1 ;
-(void)setDownloadingFileChildViewController:(UIViewController*<SVFilesChildViewController>)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(unsigned)documentPickerMode;
-(void)viewDidLoad;
-(id)originalURL;
-(id)validTypes;
-(char)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(void)cancelDownload:(id)arg1 ;
-(void)didSelectItem:(id)arg1 ;
@end

