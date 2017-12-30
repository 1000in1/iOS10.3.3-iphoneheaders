/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:58:02 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSData;

@interface DaemonBiometricOptInOperation : ISOperation {

	NSData* _authToken;
	char _requiresStoreAuthentication;
	/*^block*/id _resultBlock;

}

@property (nonatomic,copy) NSData * authToken; 
@property (assign) char requiresStoreAuthentication; 
@property (copy) id resultBlock; 
-(char)requiresStoreAuthentication;
-(id)_authenticateWithAccount:(id)arg1 error:(id*)arg2 ;
-(char)_registerAccount:(id)arg1 withAuthToken:(id)arg2 ;
-(void)setRequiresStoreAuthentication:(char)arg1 ;
-(id)init;
-(void)run;
-(NSData *)authToken;
-(void)setAuthToken:(NSData *)arg1 ;
-(char)_updateTouchIDSettingsForAccount:(id)arg1 ;
-(void)setResultBlock:(id)arg1 ;
-(id)resultBlock;
@end

