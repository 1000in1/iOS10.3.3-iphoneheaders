/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:53 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/DataActivation.app/DataActivation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DataActivationWebViewControllerDelegate <NSObject>
@required
-(void)dataActivationWebViewControllerAccoutDidUpdateSuccessfully:(id)arg1;
-(char)dataActivationWebViewControllerShouldAllowPlanPurchaseWithIccid:(id)arg1;
-(void)dataActivationWebViewController:(id)arg1 didPurchasePlanSuccessfullyWithIccid:(id)arg2;
-(void)dataActivationWebViewControllerDidFinish:(id)arg1;
-(id)dataActivationWebViewController:(id)arg1 proxySettingsForRequest:(id)arg2;
-(id)dataActivationWebViewController:(id)arg1 connectionPropertiesForRequest:(id)arg2;
-(void)dataActivationWebViewController:(id)arg1 didFailLoadWithError:(id)arg2;

@end

