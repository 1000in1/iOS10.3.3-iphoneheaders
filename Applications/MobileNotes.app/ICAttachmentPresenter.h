/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:59 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileNotes/MobileNotes-Structs.h>
#import <libobjc.A.dylib/QLPreviewControllerDataSource.h>
#import <libobjc.A.dylib/QLPreviewControllerDelegate.h>
#import <MobileNotes/ICAttachmentPresentationDelegate.h>
#import <MobileNotes/ICImageAttachmentPresentationDelegate.h>

@class UIViewController, NSArray, ICAttachment, UIView, QLPreviewController, UIBarButtonItem, NSString;

@interface ICAttachmentPresenter : NSObject <QLPreviewControllerDataSource, QLPreviewControllerDelegate, ICAttachmentPresentationDelegate, ICImageAttachmentPresentationDelegate> {

	char _displayShowInNote;
	char _attachmentEditable;
	UIViewController* _presentedViewController;
	NSArray* _attachments;
	ICAttachment* _attachment;
	UIView* _viewToPresentFrom;
	UIViewController* _presentingViewController;
	QLPreviewController* _qlPreviewController;
	UIBarButtonItem* _showInNoteButton;

}

@property (retain) ICAttachment * attachment;                                 //@synthesize attachment=_attachment - In the implementation block
@property (retain) UIView * viewToPresentFrom;                                //@synthesize viewToPresentFrom=_viewToPresentFrom - In the implementation block
@property (assign) char displayShowInNote;                                    //@synthesize displayShowInNote=_displayShowInNote - In the implementation block
@property (getter=isAttachmentEditable) char attachmentEditable;              //@synthesize attachmentEditable=_attachmentEditable - In the implementation block
@property (__weak) UIViewController * presentingViewController;               //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (retain) QLPreviewController * qlPreviewController;                 //@synthesize qlPreviewController=_qlPreviewController - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * showInNoteButton;              //@synthesize showInNoteButton=_showInNoteButton - In the implementation block
@property (retain) UIViewController * presentedViewController;                //@synthesize presentedViewController=_presentedViewController - In the implementation block
@property (nonatomic,readonly) NSArray * attachments;                         //@synthesize attachments=_attachments - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)presentAttachment:(id)arg1 fromView:(id)arg2 displayShowInNote:(char)arg3 ;
+(char)presentAttachment:(id)arg1 fromView:(id)arg2 displayShowInNote:(char)arg3 editable:(char)arg4 presentingViewController:(id)arg5 ;
+(char)markupAttachment:(id)arg1 fromView:(id)arg2 presentingViewController:(id)arg3 ;
+(id)previewViewControllerForAttachment:(id)arg1 fromView:(id)arg2 isFromAttachmentBrowser:(char)arg3 ;
-(id)previewActionItemsForAttachment;
-(void)showInNote:(id)arg1 ;
-(void)attachmentWillBeDeletedNotification:(id)arg1 ;
-(UIBarButtonItem *)showInNoteButton;
-(void)setViewToPresentFrom:(UIView *)arg1 ;
-(void)setDisplayShowInNote:(char)arg1 ;
-(void)setAttachmentEditable:(char)arg1 ;
-(void)presentAttachment;
-(void)presentDrawing;
-(void)presentImage;
-(void)presentMovie;
-(void)presentURL;
-(void)presentQuickLook;
-(char)displayShowInNote;
-(void)setShowInNoteButton:(UIBarButtonItem *)arg1 ;
-(void)presentAttachmentViewController:(id)arg1 ;
-(UIView *)viewToPresentFrom;
-(id)viewToPresentFromForQuickLook;
-(char)isAttachmentEditable;
-(UIView*)viewToPresentAttachmentFrom;
-(void)attachmentViewControllerDidDismiss:(id)arg1 ;
-(void)dealloc;
-(char)prefersStatusBarHidden;
-(UIViewController *)presentingViewController;
-(void)openURL:(id)arg1 ;
-(UIViewController *)presentedViewController;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(id)initWithAttachment:(id)arg1 ;
-(NSArray *)attachments;
-(void)previewControllerDidDismiss:(id)arg1 ;
-(int)numberOfPreviewItemsInPreviewController:(id)arg1 ;
-(id)previewController:(id)arg1 previewItemAtIndex:(int)arg2 ;
-(id)previewController:(id)arg1 transitionViewForPreviewItem:(id)arg2 ;
-(void)setAttachment:(ICAttachment *)arg1 ;
-(ICAttachment *)attachment;
-(void)setPresentedViewController:(UIViewController *)arg1 ;
-(void)previewController:(id)arg1 updatedContentsURL:(id)arg2 forEditedItem:(id)arg3 ;
-(char)previewController:(id)arg1 canEditItem:(id)arg2 ;
-(void)dismiss:(id)arg1 ;
-(QLPreviewController *)qlPreviewController;
-(void)setQlPreviewController:(QLPreviewController *)arg1 ;
-(void)mediaDidLoad:(id)arg1 ;
-(UIImage*)attachmentImage;
@end

