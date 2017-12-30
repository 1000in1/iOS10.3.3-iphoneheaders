/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:47 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SyncedDefaults.framework/Support/syncdefaultsd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AAAccountManager, AAAccount, NSDictionary, NSURL;

@interface SYDAccount : NSObject {

	AAAccountManager* _accountManager;
	AAAccount* _account;
	char _allowsCellular;
	NSDictionary* _accountProperties;
	char _needsToReloadAccount;

}

@property (getter=isValid,nonatomic,readonly) char valid; 
@property (nonatomic,readonly) NSURL * serverURL; 
@property (nonatomic,readonly) char allowsCellular;                    //@synthesize allowsCellular=_allowsCellular - In the implementation block
+(id)enabledAccountForManager:(id)arg1 ;
-(void)_loadAccountIfNecessary;
-(void)_accountsChangedNotification;
-(NSURL *)serverURL;
-(id)init;
-(id)description;
-(char)isValid;
-(char)allowsCellular;
-(id)credentials;
-(void)shutdown;
@end
