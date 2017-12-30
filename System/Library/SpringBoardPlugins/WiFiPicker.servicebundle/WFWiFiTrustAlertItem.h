/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:40:03 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/SpringBoardPlugins/WiFiPicker.servicebundle/WiFiPicker
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUI/SBAlertItem.h>

@class NSString, NSArray;

@interface WFWiFiTrustAlertItem : SBAlertItem {

	NSString* _displayName;
	NSString* _networkName;
	NSArray* _certificateArray;
	char _sentResponse;

}
-(id)initWithCertificateArray:(id)arg1 networkName:(id)arg2 ;
-(id)_scanDictionaryWithCertificateData;
-(void)_acceptTrustCert;
-(void)_viewTrustCert;
-(void)dealloc;
-(char)dismissOnLock;
-(void)configure:(char)arg1 requirePasscodeForActions:(char)arg2 ;
-(char)allowMenuButtonDismissal;
-(void)didDeactivateForReason:(int)arg1 ;
-(char)supportsAlertController;
@end

