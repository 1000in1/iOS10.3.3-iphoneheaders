/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:45 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Bridge/Bridge-Structs.h>
#import <UIKit/UINavigationController.h>
#import <Bridge/COSGetStartedDelegate.h>

@protocol COSGetStartedViewControllerDelegate;
@class COSGetStartedInternalViewController, NSString;

@interface COSGetStartedViewController : UINavigationController <COSGetStartedDelegate> {

	char _didRegisterNRObserver;
	id<COSGetStartedViewControllerDelegate> _getStartedDelegate;
	COSGetStartedInternalViewController* _internalController;

}

@property (assign,nonatomic) char didRegisterNRObserver;                                                     //@synthesize didRegisterNRObserver=_didRegisterNRObserver - In the implementation block
@property (nonatomic,retain) COSGetStartedInternalViewController * internalController;                       //@synthesize internalController=_internalController - In the implementation block
@property (assign,nonatomic,__weak) id<COSGetStartedViewControllerDelegate> getStartedDelegate;              //@synthesize getStartedDelegate=_getStartedDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)nanoRegistryStatusChanged:(id)arg1 ;
-(void)_registerNRObserver;
-(void)_unregisterNRObserver;
-(void)presentUnpairingViewControllerAnimated:(char)arg1 ;
-(void)_setOrientationModeForSize:(CGSize)arg1 ;
-(void)tappedStartInternal;
-(void)userTappedStart;
-(void)showConnectivityAlert;
-(void)userTappedSubmitRadar;
-(id<COSGetStartedViewControllerDelegate>)getStartedDelegate;
-(void)setGetStartedDelegate:(id<COSGetStartedViewControllerDelegate>)arg1 ;
-(char)didRegisterNRObserver;
-(void)setDidRegisterNRObserver:(char)arg1 ;
-(COSGetStartedInternalViewController *)internalController;
-(void)setInternalController:(COSGetStartedInternalViewController *)arg1 ;
-(id)init;
-(void)dealloc;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)stopAnimating;
-(void)startAnimating;
@end

