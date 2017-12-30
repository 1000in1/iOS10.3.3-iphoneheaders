/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:29:22 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/WiFiCallingSettingsBundle.bundle/WiFiCallingSettingsBundle
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PHSettingsCloudCallingURLControllerDelegate;
@class NSString, PHSettingsWebViewController, TUCTCapabilityInfo;

@interface PHSettingsCloudCallingURLController : NSObject {

	NSString* _bundleDescriptor;
	id<PHSettingsCloudCallingURLControllerDelegate> _delegate;
	PHSettingsWebViewController* _webViewController;

}

@property (nonatomic,retain) NSString * bundleDescriptor;                                         //@synthesize bundleDescriptor=_bundleDescriptor - In the implementation block
@property (assign,nonatomic,__weak) PHSettingsWebViewController * webViewController;              //@synthesize webViewController=_webViewController - In the implementation block
@property (__weak) id<PHSettingsCloudCallingURLControllerDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) TUCTCapabilityInfo * callingCapabilityInfo; 
@property (nonatomic,readonly) char shouldEnableCapability; 
@property (nonatomic,readonly) char shouldShowEmergencyAddress; 
-(NSString *)bundleDescriptor;
-(void)setBundleDescriptor:(NSString *)arg1 ;
-(id)updateEmergencyAddressController;
-(char)shouldShowEmergencyAddress;
-(char)shouldEnableCapability;
-(void)enableCapability;
-(id)provisionCapabilityController;
-(void)loadWebViewController;
-(TUCTCapabilityInfo *)callingCapabilityInfo;
-(id)genericErrorAlertController;
-(void)webSheetCompletion;
-(id)_webViewControllerWithType:(int)arg1 ;
-(void)reloadWebViewController;
-(void)setDelegate:(id<PHSettingsCloudCallingURLControllerDelegate>)arg1 ;
-(id<PHSettingsCloudCallingURLControllerDelegate>)delegate;
-(PHSettingsWebViewController *)webViewController;
-(void)setWebViewController:(PHSettingsWebViewController *)arg1 ;
@end

