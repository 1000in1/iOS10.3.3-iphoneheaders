/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:59 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IDSAppleSMSRegistrationCenterListener
@required
-(void)center:(id)arg1 succeededIdentification:(id)arg2 phoneNumber:(id)arg3 token:(id)arg4;
-(void)center:(id)arg1 failedIdentification:(id)arg2 error:(int)arg3;
-(void)centerNeedsNewIdentification:(id)arg1;

@end

