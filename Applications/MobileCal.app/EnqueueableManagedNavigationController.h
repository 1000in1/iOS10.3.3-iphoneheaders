/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:55 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>
#import <MobileCal/EnqueueableDismissOperationProtocol.h>

@class MainViewController, NSOperationQueue, NSString;

@interface EnqueueableManagedNavigationController : UINavigationController <EnqueueableDismissOperationProtocol> {

	char _enqueuingDismissalsDisabled;
	MainViewController* _sourceViewController;
	NSOperationQueue* _showViewControllersWhenReadyQueue;

}

@property (nonatomic,retain) NSOperationQueue * showViewControllersWhenReadyQueue;              //@synthesize showViewControllersWhenReadyQueue=_showViewControllersWhenReadyQueue - In the implementation block
@property (assign,nonatomic) MainViewController * sourceViewController;                         //@synthesize sourceViewController=_sourceViewController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)showViewController:(id)arg1 sender:(id)arg2 animated:(char)arg3 completion:(/*^block*/id)arg4 ;
-(Class)showViewControllerOperationClass;
-(void)sourceViewController:(id)arg1 notifiesReadinessForPresentation:(char)arg2 ;
-(void)enqueueStackResetOperation;
-(void)dismissViewControllerWithoutEnqueuingWithTransition:(int)arg1 completion:(/*^block*/id)arg2 ;
-(void)setShowViewControllersWhenReadyQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)showViewControllersWhenReadyQueue;
-(id)_popoverPresentationOperationInQueue;
-(char)_shouldDoExternalPresentationOfManagedNavigationController;
-(void)_addDoneButtonIfNeededToViewController:(id)arg1 ;
-(void)enqueueStackResetOperationDismissingPresentations:(char)arg1 cancelOperations:(char)arg2 completionBlock:(/*^block*/id)arg3 ;
-(char)_shouldEnqueueDismissals;
-(void)setAllowsEnqueuedDismissal:(char)arg1 ;
-(id)init;
-(void)dealloc;
-(MainViewController *)sourceViewController;
-(void)dismissViewControllerWithTransition:(int)arg1 completion:(/*^block*/id)arg2 ;
-(void)dismissModalViewControllerWithTransition:(int)arg1 ;
-(void)_doneButtonTapped;
-(void)cancelOutstandingOperations;
-(void)setSourceViewController:(MainViewController *)arg1 ;
-(void)enqueueBlock:(/*^block*/id)arg1 ;
@end
