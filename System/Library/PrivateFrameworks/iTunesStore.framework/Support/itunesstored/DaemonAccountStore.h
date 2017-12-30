/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:58:04 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSAccountStore.h>

@class NSMutableArray;

@interface DaemonAccountStore : SSAccountStore {

	NSMutableArray* _accounts;

}

@property (getter=isAuthenticationActive,readonly) char authenticationActive; 
+(void)observeXPCServer:(id)arg1 ;
+(void)addAccountWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)getAccountAuthenticatedWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)getAccountsWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)getAuthenticationActiveWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)resetAccountWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)setAccountCreditsWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)signOutAccountsWithMessage:(id)arg1 connection:(id)arg2 ;
+(void)updateAccountPasswordSettings:(id)arg1 connection:(id)arg2 ;
+(id)defaultStore;
-(void)_handleMessage:(id)arg1 connection:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)synchronizeData;
-(void)resetAuthenticationState;
-(void)_authenticateBeganNotification:(id)arg1 ;
-(void)_authenticateEndedNotification:(id)arg1 ;
-(void)_synchronizeData;
-(id)_activeLockerAccount;
-(id)_addAccount:(id)arg1 asActiveAccount:(char)arg2 asActiveLockerAccount:(char)arg3 ;
-(void)_postAccountStoreDidChange;
-(void)_setCreditsString:(id)arg1 forAccountWithUniqueIdentifier:(id)arg2 ;
-(void)_signOutAccount:(id)arg1 ;
-(void)_setActiveAccount:(id)arg1 ;
-(void)_setActiveLockerAccount:(id)arg1 ;
-(void)_claimUserApps;
-(void)_sendAccountsReplyForMessage:(id)arg1 connection:(id)arg2 ;
-(void)_obliterateBiometricsForAccountID:(id)arg1 ;
-(void)_commitAccount:(id)arg1 toKeyValueStoreInDomain:(id)arg2 ;
-(id)_copyActiveAccountIdentifier:(id*)arg1 ;
-(void)_accountChangeNotification;
-(void)signOutAllAccountsWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)accountWithUniqueIdentifier:(id)arg1 scope:(int)arg2 ;
-(id)accountWithUniqueIdentifier:(id)arg1 reloadIfNecessary:(char)arg2 ;
-(char)isAuthenticationActive;
-(void)setAccountCredits:(id)arg1 forAccountWithUniqueIdentifier:(id)arg2 ;
-(id)_accountWithUniqueIdentifier:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)_accounts;
-(id)_activeAccount;
-(id)activeLockerAccount;
-(void)signOutAllAccounts;
-(id)accountWithUniqueIdentifier:(id)arg1 ;
-(id)setActiveAccount:(id)arg1 ;
-(id)setActiveLockerAccount:(id)arg1 ;
-(id)activeAccount;
-(id)addAccount:(id)arg1 ;
-(void)signOutAccount:(id)arg1 ;
-(void)reloadAccounts;
-(id)accounts;
@end

