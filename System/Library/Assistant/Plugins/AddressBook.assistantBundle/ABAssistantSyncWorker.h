/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:22:44 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Assistant/Plugins/AddressBook.assistantBundle/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBook/AddressBook-Structs.h>
#import <AddressBook/AFSyncHandler.h>

@protocol ABAssistantSyncDelegate;
@class NSString;

@interface ABAssistantSyncWorker : NSObject <AFSyncHandler> {

	id<ABAssistantSyncDelegate> _delegate;
	CFArrayRef _allRecords;
	CFArrayRef _changedIDs;
	CFArrayRef _changeTypes;
	CFArrayRef _sequenceNumbers;
	long _syncIndex;
	long _syncCount;
	char _databaseNotAvailable;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)syncDidEnd;
-(void)clearSyncCache;
-(id)syncSnapshotForKey:(id)arg1 ;
-(id)syncVerificationKeyForKey:(id)arg1 ;
-(void)beginSyncWithAnchor:(id)arg1 validity:(id)arg2 forKey:(id)arg3 beginInfo:(id)arg4 ;
-(void)getChangeAfterAnchor:(id)arg1 changeInfo:(id)arg2 ;
-(id)getCurrentValidity;
-(id)initWithDelegate:(id)arg1 ;
@end

