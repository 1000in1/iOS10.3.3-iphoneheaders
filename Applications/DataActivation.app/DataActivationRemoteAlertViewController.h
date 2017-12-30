/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:53 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/DataActivation.app/DataActivation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <libobjc.A.dylib/RemoteUIControllerDelegate.h>
#import <DataActivation/DataActivationNoticeViewControllerDelegate.h>
#import <DataActivation/DataActivationWebViewControllerDelegate.h>
#import <DataActivation/CellularDataAvailabilityMonitorDelegate.h>

@class DataActivationViewController, CellularDataAvailabilityMonitor, NSString, NSMutableArray, RemoteUIController, DataActivationWebViewController, NSNumber, NSURLRequest, CTCellularPlanRequest;

@interface DataActivationRemoteAlertViewController : SBUIRemoteAlertServiceViewController <UINavigationControllerDelegate, RemoteUIControllerDelegate, DataActivationNoticeViewControllerDelegate, DataActivationWebViewControllerDelegate, CellularDataAvailabilityMonitorDelegate> {

	DataActivationViewController* _dataActivationViewController;
	CellularDataAvailabilityMonitor* _cellularDataAvailabilityMonitor;
	NSString* _currentConnectionType;
	NSMutableArray* _nextConnectionTypes;
	RemoteUIController* _remoteUIController;
	DataActivationWebViewController* _dataActivationWebViewController;
	int _proxyType;
	NSString* _proxyHost;
	NSNumber* _proxyPort;
	char _preferProvisioningInterface;
	char _shouldPostDeviceParameters;
	NSURLRequest* _launchURLRequest;
	char _startRequestWhenCellularDataBecomesAvailable;
	int _pendingErrorAlertType;
	char _isDataActivationViewVisible;
	unsigned _supportedOrientations;
	char _supportedOrientationIsValid;
	char _isPastRemoteUILoading;
	char _isSequoiaFlow;
	char _isRemotePlanFlow;
	CTCellularPlanRequest* _cellularPlanRequest;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)_isDeviceCapableOfMultiplePlans;
-(char)_isSelectedSequoia;
-(void)_loadCarrierBundleCellularDataPlanSettings;
-(id)_preferredConnectionTypes;
-(void)_loadRemoteUIController;
-(void)_pushWebViewControllerWithURL:(id)arg1 requestMethod:(unsigned)arg2 parameterSources:(unsigned)arg3 overrideParameters:(id)arg4 animated:(char)arg5 urlEncode:(char)arg6 ;
-(void)_beginDismissingSheet;
-(void)_setupNewDataActivationWebViewController;
-(void)_pushSequoiaFallbackDataActivationWebViewControllerWithURLString:(id)arg1 parameters:(id)arg2 ;
-(void)_showLocationDisabledAlert;
-(void)_showLocationServiceUnauthorizedAlert;
-(void)_showLocationUnavailableAlert;
-(void)_showConnectionErrorAlert;
-(id)_nextAvailableConnectionType;
-(char)_WWANActivationRequired;
-(char)_DynamicProvisioningRequired;
-(void)_destroyCurrentDataActivationWebViewController;
-(void)_loadLaunchURLRequestWithNextConnectionTypeOrShowErrorAlert;
-(id)_cellularPlanConnectionSettings;
-(id)_alertActionWithTitle:(id)arg1 style:(int)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_showCancelButton:(char)arg1 forViewController:(id)arg2 animated:(char)arg3 ;
-(char)_shouldShowBackButtonForViewController:(id)arg1 ;
-(void)dataActivationNoticeViewControllerDidPressDoneButton:(id)arg1 ;
-(void)dataActivationWebViewControllerAccoutDidUpdateSuccessfully:(id)arg1 ;
-(char)dataActivationWebViewControllerShouldAllowPlanPurchaseWithIccid:(id)arg1 ;
-(void)dataActivationWebViewController:(id)arg1 didPurchasePlanSuccessfullyWithIccid:(id)arg2 ;
-(void)dataActivationWebViewControllerDidFinish:(id)arg1 ;
-(id)dataActivationWebViewController:(id)arg1 proxySettingsForRequest:(id)arg2 ;
-(id)dataActivationWebViewController:(id)arg1 connectionPropertiesForRequest:(id)arg2 ;
-(void)dataActivationWebViewController:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(void)cellularDataAvailabilityMonitorCellularDataDidBecomeAvailable:(id)arg1 ;
-(void)dataActivationViewDidAppear;
-(void)_loadServerErrorPage:(id)arg1 ;
-(void)SIMStatusDidChangeWithUserInfo:(id)arg1 ;
-(unsigned)supportedInterfaceOrientations;
-(void)deactivate;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)viewDidLoad;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(char)arg3 ;
-(id)navigationController:(id)arg1 animationControllerForOperation:(int)arg2 fromViewController:(id)arg3 toViewController:(id)arg4 ;
-(void)_cancelButtonAction;
-(void)handleHomeButtonPressed;
-(void)remoteUIController:(id)arg1 willLoadRequest:(id)arg2 ;
-(void)_presentAlertController;
@end

