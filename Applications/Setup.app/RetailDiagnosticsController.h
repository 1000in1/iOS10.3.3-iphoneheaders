/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:31 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Setup/SetupChoiceController.h>
#import <Setup/DADiagnosticsRemoteDelegate.h>

@class SetupChoice, DADiagnosticsRemoteHostViewController, NSString;

@interface RetailDiagnosticsController : SetupChoiceController <DADiagnosticsRemoteDelegate> {

	SetupChoice* _startChoice;
	DADiagnosticsRemoteHostViewController* _diagnosticsRemoteController;

}

@property (nonatomic,retain) DADiagnosticsRemoteHostViewController * diagnosticsRemoteController;              //@synthesize diagnosticsRemoteController=_diagnosticsRemoteController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)controllerNeedsToRun;
-(void)startOver;
-(void)performExtendedInitializationWithCompletion:(/*^block*/id)arg1 ;
-(char)wantsNextButton;
-(id)footerDetailText;
-(char)useTableLayout;
-(id)footerIconName;
-(id)footerIconTintColor;
-(DADiagnosticsRemoteHostViewController *)diagnosticsRemoteController;
-(void)setDiagnosticsRemoteController:(DADiagnosticsRemoteHostViewController *)arg1 ;
-(void)_finishController;
-(id)init;
-(id)titleText;
-(void)controllerDone;
-(void)didTerminateWithError:(id)arg1 ;
@end

