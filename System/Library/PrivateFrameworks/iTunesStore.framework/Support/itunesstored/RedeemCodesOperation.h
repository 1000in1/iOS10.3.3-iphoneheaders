/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:58:04 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>
#import <itunesstored/ISDialogOperationDelegate.h>

@class SSAuthenticationContext, ISBiometricStore, ISDialogButton, NSDictionary, NSArray, SSRedeemCodesResponse, NSString;

@interface RedeemCodesOperation : ISOperation <ISDialogOperationDelegate> {

	SSAuthenticationContext* _authenticationContext;
	ISBiometricStore* _biometricStore;
	char _cameraRecognized;
	ISDialogButton* _dialogButton;
	char _headless;
	NSDictionary* _installedExternalVersionByiTunesIdentifier;
	NSArray* _redeemCodes;
	NSDictionary* _redeemMetadataByCode;
	SSRedeemCodesResponse* _redeemResponse;
	NSString* _userAgent;

}

@property (readonly) NSArray * redeemCodes; 
@property (copy) SSAuthenticationContext * authenticationContext; 
@property (assign) char headless;                                              //@synthesize headless=_headless - In the implementation block
@property (assign) char cameraRecognized;                                      //@synthesize cameraRecognized=_cameraRecognized - In the implementation block
@property (copy) NSString * userAgent; 
@property (readonly) SSRedeemCodesResponse * redeemResponse; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SSRedeemCodesResponse *)redeemResponse;
-(void)_runHeadless;
-(void)_runNonHeadless;
-(char)_canPerformExtendedTouchIDActions;
-(char)_fetchRedeemCodeMetadataWithError:(id*)arg1 ;
-(id)_newURLRequestPropertiesForCode:(id)arg1 ;
-(char)_processDictionary:(id)arg1 dialog:(id*)arg2 error:(id*)arg3 ;
-(id)_newURLRequestPropertiesForServiceActionButton:(id)arg1 ;
-(id)_installedExternalVersionForRedeemCodeMetadata:(id)arg1 ;
-(char)_didUserCancelWithError:(id)arg1 ;
-(NSArray *)redeemCodes;
-(char)headless;
-(void)run;
-(NSString *)userAgent;
-(void)setUserAgent:(NSString *)arg1 ;
-(SSAuthenticationContext *)authenticationContext;
-(void)setCameraRecognized:(char)arg1 ;
-(void)operation:(id)arg1 selectedButton:(id)arg2 ;
-(void)setAuthenticationContext:(SSAuthenticationContext *)arg1 ;
-(id)initWithRedeemCodes:(id)arg1 ;
-(void)setHeadless:(char)arg1 ;
-(char)cameraRecognized;
@end

