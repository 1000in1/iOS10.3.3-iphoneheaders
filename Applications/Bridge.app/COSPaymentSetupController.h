/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:46 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKPaymentSetupViewControllerDelegate.h>
#import <Bridge/COSBuddyController.h>

@protocol COSBuddyControllerDelegate;
@class PKPaymentSetupAssistantRegistrationViewController, NSString;

@interface COSPaymentSetupController : NSObject <PKPaymentSetupViewControllerDelegate, COSBuddyController> {

	id<COSBuddyControllerDelegate> _delegate;
	PKPaymentSetupAssistantRegistrationViewController* _registrationController;

}

@property (nonatomic,retain) PKPaymentSetupAssistantRegistrationViewController * registrationController;              //@synthesize registrationController=_registrationController - In the implementation block
@property (assign,nonatomic,__weak) id<COSBuddyControllerDelegate> delegate;                                          //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)controllerNeedsToRunForBuddyControllerDelegate:(id)arg1 ;
-(id)holdActivityIdentifier;
-(PKPaymentSetupAssistantRegistrationViewController *)registrationController;
-(void)setRegistrationController:(PKPaymentSetupAssistantRegistrationViewController *)arg1 ;
-(id)init;
-(void)setDelegate:(id<COSBuddyControllerDelegate>)arg1 ;
-(id<COSBuddyControllerDelegate>)delegate;
-(id)viewController;
-(char)controllerAllowsNavigatingBackTo;
-(char)holdBeforeDisplaying;
-(void)viewControllerDidTerminateSetupFlow:(id)arg1 ;
@end

