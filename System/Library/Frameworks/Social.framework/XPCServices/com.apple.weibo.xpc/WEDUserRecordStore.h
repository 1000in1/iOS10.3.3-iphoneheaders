/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 7:32:28 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Social.framework/XPCServices/com.apple.weibo.xpc/com.apple.weibo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <com.apple.twitter/ABSearchOperationDelegate.h>

@class WEDSession, SLDatabase, ACAccount, ACAccountStore, NSString;

@interface WEDUserRecordStore : NSObject <ABSearchOperationDelegate> {

	WEDSession* _weakSession;
	SLDatabase* _database;
	ACAccount* _account;
	ACAccountStore* _accountStore;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_updateFollowedUserRecords;
-(void)_runSynchronouslyOnCoreDataQueue:(/*^block*/id)arg1 ;
-(id)_userRecordWithDictionaryRepresentation:(id)arg1 existed:(char*)arg2 ;
-(void)_saveUserRecordStoreWithHandler:(/*^block*/id)arg1 ;
-(id)initWithSession:(id)arg1 database:(id)arg2 account:(id)arg3 accountStore:(id)arg4 ;
-(void)updateFollowedUserRecordsIfNeeded;
-(void)userRecordsMatchingPredicate:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)_userRecordEntityWithScreenName:(id)arg1 ;
-(void)_consumeUserRecordRepresentations:(id)arg1 ;
-(void)_fetchFollowedUserRecordsWithCursor:(id)arg1 ;
-(void)_consumeAddressBookRecords:(id)arg1 ;
-(void)_findABEntriesWithWeiboScreenNames:(/*^block*/id)arg1 ;
-(id)_userRecordEntityWithUID:(id)arg1 ;
-(void)_consumeScreenName:(id)arg1 existed:(char*)arg2 ;
-(void)_findABEntriesWithScreenName:(id)arg1 ;
-(void)dealloc;
-(void)searchOperation:(id)arg1 didFindMatches:(id)arg2 moreComing:(char)arg3 ;
@end
