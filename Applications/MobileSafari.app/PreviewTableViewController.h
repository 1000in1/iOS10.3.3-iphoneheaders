/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:11 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>

@protocol PreviewTableViewControllerDelegate, LinkPreviewProvider;
@interface PreviewTableViewController : UITableViewController {

	id<PreviewTableViewControllerDelegate> _previewDelegate;
	id<LinkPreviewProvider> _linkPreviewProvider;

}

@property (assign,nonatomic,__weak) id<PreviewTableViewControllerDelegate> previewDelegate;              //@synthesize previewDelegate=_previewDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<LinkPreviewProvider> linkPreviewProvider;                         //@synthesize linkPreviewProvider=_linkPreviewProvider - In the implementation block
-(id<LinkPreviewProvider>)linkPreviewProvider;
-(void)setLinkPreviewProvider:(id<LinkPreviewProvider>)arg1 ;
-(void)viewDidLoad;
-(void)commitPreviewViewController:(id)arg1 ;
-(id)previewViewControllerForRowAtIndexPath:(id)arg1 ;
-(void)didDismissPreviewViewController:(id)arg1 committing:(char)arg2 ;
-(id<PreviewTableViewControllerDelegate>)previewDelegate;
-(void)setPreviewDelegate:(id<PreviewTableViewControllerDelegate>)arg1 ;
@end

