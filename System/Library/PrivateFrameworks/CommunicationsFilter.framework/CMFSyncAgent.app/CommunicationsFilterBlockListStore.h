/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:30 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsFilter.framework/CMFSyncAgent.app/CMFSyncAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NPSManager;

@interface CommunicationsFilterBlockListStore : NSObject {

	NPSManager* _npsManager;

}
+(id)sharedInstance;
-(void)_storeDidChangeExternally;
-(id)copyAllItemsAsDictionaries;
-(void)_updateKVStoreItems:(id)arg1 ;
-(id)_isItemInList:(id)arg1 blockList:(id)arg2 ;
-(void)_updateStore:(id)arg1 revision:(unsigned)arg2 updateKVS:(char)arg3 updateLocal:(char)arg4 itemsNeedConversion:(char)arg5 ;
-(id)init;
-(void)dealloc;
-(char)addItemForAllServices:(id)arg1 ;
-(char)removeItemForAllServices:(id)arg1 ;
-(char)isItemInList:(id)arg1 ;
-(id)copyAllItems;
-(id)_copyItems:(char)arg1 ;
@end

