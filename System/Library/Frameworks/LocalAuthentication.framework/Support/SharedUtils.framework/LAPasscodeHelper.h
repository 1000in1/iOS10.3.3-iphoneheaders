/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 7:25:41 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/SharedUtils.framework/SharedUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface LAPasscodeHelper : NSObject
+(id)sharedInstance;
-(char)isPasscodeSetWithError:(id*)arg1 ;
-(int)verifyPassword:(id)arg1 acmContext:(id)arg2 userId:(id)arg3 ;
-(int)createStash:(id)arg1 mode:(int)arg2 manifest:(id)arg3 ;
-(char)useLightOnDarkPasscodeScreenWithPolicy:(int)arg1 policyOptions:(id)arg2 ;
@end

