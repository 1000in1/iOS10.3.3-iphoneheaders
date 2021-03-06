/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:51 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/iCloudDriveApp.app/iCloudDriveApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iCloudDriveApp/iCloudDriveApp-Structs.h>
#import <QuickLook/QLPreviewController.h>
#import <iCloudDriveApp/QLPreviewControllerPrivateDelegate.h>
#import <libobjc.A.dylib/QLPreviewControllerDataSource.h>
#import <libobjc.A.dylib/QLPreviewControllerDelegate.h>
#import <iCloudDriveApp/_UIDocumentListControllerPreviewViewController.h>

@class NSArray, PreviewItemManager, NSString;

@interface QuickLookItemController : QLPreviewController <QLPreviewControllerPrivateDelegate, QLPreviewControllerDataSource, QLPreviewControllerDelegate, _UIDocumentListControllerPreviewViewController> {

	NSArray* previewActionItems;
	PreviewItemManager* _itemManager;
	NSArray* _arrayOfDocuments;

}

@property (assign,nonatomic,__weak) PreviewItemManager * itemManager;              //@synthesize itemManager=_itemManager - In the implementation block
@property (nonatomic,retain) NSArray * arrayOfDocuments;                           //@synthesize arrayOfDocuments=_arrayOfDocuments - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSArray * previewActionItems; 
+(id)defaultController;
-(void)showMoveTarget:(id)arg1 ;
-(void)showWarningAndDeleteDocument:(id)arg1 ;
-(char)_qlPreviewItemIsPDFKind:(id)arg1 ;
-(void)quickLookNewItem:(id)arg1 ;
-(NSArray *)arrayOfDocuments;
-(void)setArrayOfDocuments:(NSArray *)arg1 ;
-(id)init;
-(void)viewWillDisappear:(char)arg1 ;
-(NSArray *)previewActionItems;
-(char)isVisible;
-(int)numberOfPreviewItemsInPreviewController:(id)arg1 ;
-(id)previewController:(id)arg1 previewItemAtIndex:(int)arg2 ;
-(void)setPreviewActionItems:(NSArray *)arg1 ;
-(char)previewController:(id)arg1 shouldSaveEditedItem:(id)arg2 ;
-(char)previewController:(id)arg1 canEditItem:(id)arg2 ;
-(PreviewItemManager *)itemManager;
-(void)setItemManager:(PreviewItemManager *)arg1 ;
-(id)initWithItemManager:(id)arg1 ;
@end

