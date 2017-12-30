/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:33 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/_UISharingPublicController.h>
#import <UIKit/UIActionSheetPresentationControllerDelegate.h>

@protocol OS_dispatch_semaphore, UICloudSharingControllerDelegate, _UICloudSharingControllerDelegate_Private;
@class NSObject, CKShare, _UIResilientRemoteViewContainerViewController, _UIShareInvitationRemoteViewController, CKContainer, NSArray, UIViewController, NSString;

@interface UICloudSharingController : UIViewController <_UISharingPublicController, UIActionSheetPresentationControllerDelegate> {

	char _isDelayingPresentation;
	NSObject*<OS_dispatch_semaphore> _viewServiceValidSema;
	char _shareNeedsDeletion;
	id<UICloudSharingControllerDelegate> _delegate;
	CKShare* _share;
	unsigned _availablePermissions;
	_UIResilientRemoteViewContainerViewController* _childViewController;
	_UIShareInvitationRemoteViewController* _remoteViewController;
	CKContainer* _container;
	NSArray* _participantDetails;
	/*^block*/id _preparationHandler;
	UIViewController* _originalPresentingViewController;
	UIViewController* _strongReferenceToOurself;
	id<_UICloudSharingControllerDelegate_Private> _privateDelegate;

}

@property (setter=_setChildViewController:,getter=_childViewController,nonatomic,retain) _UIResilientRemoteViewContainerViewController * childViewController;                               //@synthesize childViewController=_childViewController - In the implementation block
@property (getter=_remoteViewController,nonatomic,readonly) _UIShareInvitationRemoteViewController * remoteViewController;                                                                  //@synthesize remoteViewController=_remoteViewController - In the implementation block
@property (nonatomic,retain) CKShare * share;                                                                                                                                               //@synthesize share=_share - In the implementation block
@property (nonatomic,retain) CKContainer * container;                                                                                                                                       //@synthesize container=_container - In the implementation block
@property (setter=_setParticipantDetails:,getter=_participantDetails,nonatomic,retain) NSArray * participantDetails;                                                                        //@synthesize participantDetails=_participantDetails - In the implementation block
@property (nonatomic,copy) id preparationHandler;                                                                                                                                           //@synthesize preparationHandler=_preparationHandler - In the implementation block
@property (assign,setter=_setOriginalPresentingViewController:,getter=_originalPresentingViewController,nonatomic,__weak) UIViewController * originalPresentingViewController;              //@synthesize originalPresentingViewController=_originalPresentingViewController - In the implementation block
@property (setter=_setStrongReferenceToOurself:,getter=_strongReferenceToOurself,nonatomic,retain) UIViewController * strongReferenceToOurself;                                             //@synthesize strongReferenceToOurself=_strongReferenceToOurself - In the implementation block
@property (assign,nonatomic,__weak) id<_UICloudSharingControllerDelegate_Private> privateDelegate;                                                                                          //@synthesize privateDelegate=_privateDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<UICloudSharingControllerDelegate> delegate;                                                                                                          //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned availablePermissions;                                                                                                                                 //@synthesize availablePermissions=_availablePermissions - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<UICloudSharingControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<UICloudSharingControllerDelegate>)delegate;
-(char)_commonInit;
-(CKContainer *)container;
-(void)setContainer:(CKContainer *)arg1 ;
-(void)_setChildViewController:(id)arg1 ;
-(id)_remoteViewController;
-(id)_childViewController;
-(void)__viewControllerWillBePresented:(char)arg1 ;
-(char)_requiresCustomPresentationController;
-(id)_customPresentationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(CKShare *)share;
-(void)setPrivateDelegate:(id<_UICloudSharingControllerDelegate_Private>)arg1 ;
-(id)preparationHandler;
-(void)_setParticipantDetails:(id)arg1 ;
-(void)setShare:(CKShare *)arg1 ;
-(id)initWithShare:(id)arg1 container:(id)arg2 ;
-(void)setPreparationHandler:(id)arg1 ;
-(unsigned)availablePermissions;
-(void)_dismissViewControllerWithError:(id)arg1 ;
-(id<_UICloudSharingControllerDelegate_Private>)privateDelegate;
-(void)_deleteShareAfterDismissalWithoutSave:(/*^block*/id)arg1 ;
-(void)_sendDidStopSharingDelegate;
-(void)_didDismiss;
-(void)_setOriginalPresentingViewController:(id)arg1 ;
-(id)_sharingViewPresentationController;
-(id)_originalPresentingViewController;
-(void)_callPreparationHandler:(/*^block*/id)arg1 ;
-(void)_shareDidChange:(id)arg1 ;
-(void)_shareWasMadePrivate;
-(void)_performAuxiliaryActionWithCompletion:(/*^block*/id)arg1 ;
-(void)_performHeaderActionWithCompletion:(/*^block*/id)arg1 ;
-(void)_requestSavedShareWithCompletion:(/*^block*/id)arg1 ;
-(void)_dismissForActivityRepresentation:(/*^block*/id)arg1 ;
-(void)_representFullscreenAfterActivityDismissal:(/*^block*/id)arg1 ;
-(id)initWithShare:(id)arg1 preparationHandler:(/*^block*/id)arg2 ;
-(id)initWithPreparationHandler:(/*^block*/id)arg1 ;
-(id)activityItemSource;
-(void)setAvailablePermissions:(unsigned)arg1 ;
-(id)_participantDetails;
-(id)_strongReferenceToOurself;
-(void)_setStrongReferenceToOurself:(id)arg1 ;
@end

