/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:53 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <UIKit/UISplitViewController.h>
#import <UIKit/UIMultiColumnViewControllerDelegate.h>
#import <UIKit/UISplitViewControllerDelegate.h>
#import <MobileMail/TransferMailboxPickerAnimationDelegate.h>

@class NSSet, UINavigationController, TransferNavigationController, MFTransferStackViewController, UIMultiColumnViewController, NSString;

@interface MFTransferSplitViewController : UISplitViewController <UIMultiColumnViewControllerDelegate, UISplitViewControllerDelegate, TransferMailboxPickerAnimationDelegate> {

	unsigned _transferOptions;
	NSSet* _messagesToDisplay;
	UINavigationController* _stackNavigationController;
	char _usePushFromLeftPresentation;
	char _receivedFirstNumColumnChange;
	TransferNavigationController* _transferNavigationController;
	MFTransferStackViewController* _stackViewController;
	UIMultiColumnViewController* _multiColumnController;

}

@property (assign,nonatomic) char receivedFirstNumColumnChange;                                        //@synthesize receivedFirstNumColumnChange=_receivedFirstNumColumnChange - In the implementation block
@property (nonatomic,retain) TransferNavigationController * transferNavigationController;              //@synthesize transferNavigationController=_transferNavigationController - In the implementation block
@property (nonatomic,retain) MFTransferStackViewController * stackViewController;                      //@synthesize stackViewController=_stackViewController - In the implementation block
@property (nonatomic,retain) UIMultiColumnViewController * multiColumnController;                      //@synthesize multiColumnController=_multiColumnController - In the implementation block
@property (assign,nonatomic) char usePushFromLeftPresentation;                                         //@synthesize usePushFromLeftPresentation=_usePushFromLeftPresentation - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(MFTransferStackViewController *)stackViewController;
-(id)initWithMessages:(id)arg1 options:(unsigned)arg2 ;
-(void)setStackViewController:(MFTransferStackViewController *)arg1 ;
-(void)setUsePushFromLeftPresentation:(char)arg1 ;
-(TransferNavigationController *)transferNavigationController;
-(UIMultiColumnViewController *)multiColumnController;
-(void)setMultiColumnController:(UIMultiColumnViewController *)arg1 ;
-(char)receivedFirstNumColumnChange;
-(void)setReceivedFirstNumColumnChange:(char)arg1 ;
-(void)_ensurePrimaryViewControllerIsVisibleAnimated:(char)arg1 ;
-(void)transferMailboxPickerController:(id)arg1 animateMessageToPoint:(CGPoint)arg2 inView:(id)arg3 didFinishDelegate:(id)arg4 selector:(SEL)arg5 context:(id)arg6 ;
-(void)transferMailboxPickerController:(id)arg1 animateMessageToThumbnailFrame:(CGRect)arg2 inView:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)transferMailboxPickerController:(id)arg1 viewForMessage:(id)arg2 ;
-(id)initWithMessages:(id)arg1 ;
-(void)setTransferNavigationController:(TransferNavigationController *)arg1 ;
-(char)usePushFromLeftPresentation;
-(void)dealloc;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(char)splitViewController:(id)arg1 collapseSecondaryViewController:(id)arg2 ontoPrimaryViewController:(id)arg3 ;
-(id)splitViewController:(id)arg1 separateSecondaryViewControllerFromPrimaryViewController:(id)arg2 ;
-(id)primaryViewControllerForCollapsingSplitViewController:(id)arg1 ;
-(void)splitViewController:(id)arg1 willChangeToDisplayMode:(int)arg2 ;
-(void)multiColumnViewController:(id)arg1 willShowColumns:(unsigned)arg2 ;
@end

