/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 7:25:41 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/MechanismPlugins/MechPasscode.bundle/MechPasscode
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/LABackoffCounter.h>

@class NSNumber, NSUserDefaults, NSDictionary, NSError;

@interface BackoffCounter : NSObject <LABackoffCounter> {

	NSNumber* _retryUptime;
	unsigned _failures;
	NSUserDefaults* _defaults;
	NSDictionary* _sepLockInfo;

}

@property (readonly) NSError * errorAuthenticationFailedWithBackoff; 
+(id)sharedInstance;
-(id)_retryTime;
-(void)_computeRetryTime;
-(void)_saveDefault:(id)arg1 forKey:(id)arg2 ;
-(NSError *)errorAuthenticationFailedWithBackoff;
-(char)_validateBackoff;
-(id)_dateFromUptime:(id)arg1 ;
-(id)actionFailure;
-(id)actionFailureWithBackoffResult;
-(void)_saveDefaults;
-(id)init;
-(void)actionFailureWithReply:(/*^block*/id)arg1 ;
-(void)actionBackoffWithReply:(/*^block*/id)arg1 ;
-(void)actionSuccess;
-(void)currentBackoffErrorWithReply:(/*^block*/id)arg1 ;
-(void)_lockStateDidChange:(char)arg1 ;
@end
