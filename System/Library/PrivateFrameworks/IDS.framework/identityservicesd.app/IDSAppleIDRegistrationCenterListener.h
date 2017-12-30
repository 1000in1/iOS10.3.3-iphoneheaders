/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:59 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IDSAppleIDRegistrationCenterListener
@optional
-(void)center:(id)arg1 noteRegistrationRequired:(id)arg2;
-(void)center:(id)arg1 startedAuthenticating:(id)arg2;
-(void)center:(id)arg1 succeededAuthentication:(id)arg2;
-(void)center:(id)arg1 succeededLinkHandlesConfirmation:(id)arg2 emailAddress:(id)arg3;
-(void)center:(id)arg1 succeededUnlinkHandleRequest:(id)arg2 handle:(id)arg3;
-(void)center:(id)arg1 succeededEmailValidationRequest:(id)arg2 emailAddress:(id)arg3;
-(void)center:(id)arg1 succeededInitialRegionQuery:(id)arg2;
-(void)center:(id)arg1 succeededRegionValidation:(id)arg2 regionID:(id)arg3 phoneNumber:(id)arg4 extraContext:(id)arg5 verified:(char)arg6;
-(void)center:(id)arg1 failedAuthentication:(id)arg2 error:(int)arg3 info:(id)arg4;
-(void)center:(id)arg1 failedLinkHandlesConfirmation:(id)arg2 emailAddress:(id)arg3 error:(int)arg4 info:(id)arg5;
-(void)center:(id)arg1 failedUnlinkHandleRequest:(id)arg2 handle:(id)arg3 error:(int)arg4 info:(id)arg5;
-(void)center:(id)arg1 failedEmailValidationRequest:(id)arg2 emailAddress:(id)arg3 error:(int)arg4 info:(id)arg5;
-(void)center:(id)arg1 failedRegionValidation:(id)arg2 error:(int)arg3 info:(id)arg4;

@end

