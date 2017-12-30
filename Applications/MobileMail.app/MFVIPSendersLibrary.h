/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:56 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MFMailMessageLibraryDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, MFEmailSet, NSUbiquitousKeyValueStore, MFMailMessageLibrary, NSString;

@interface MFVIPSendersLibrary : NSObject <MFMailMessageLibraryDelegate> {

	NSObject*<OS_dispatch_queue> _addressBookQueue;
	void* _addressBook;
	int _addressBookResetCount;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _vipSendersByReference;
	MFEmailSet* _vipSenderAddresses;
	NSUbiquitousKeyValueStore* _cloudStore;
	MFMailMessageLibrary* _library;
	NSObject*<OS_dispatch_queue> _pendingAddressQueue;
	MFEmailSet* _pendingAdds;
	MFEmailSet* _pendingRemoves;

}

@property (nonatomic,retain,readonly) id<MFUserProfileProvider> userProfileProvider; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultMessageLibrary;
+(id)defaultInstance;
-(void)checkForAddressBookChanges;
-(id)senderForUniqueReference:(id)arg1 ;
-(id)allVIPEmailAddressesCriterion;
-(id)senderForEmails:(id)arg1 andDisplayNames:(id)arg2 ;
-(char)hasVIPSenders;
-(id)allVIPSenders;
-(id)allVIPEmailAddresses;
-(id)_pendingVIPChangesPath;
-(id)_readRawVIPSenderRepresentations;
-(void)_performTasksAfterProtectedDataBecomesAvailable;
-(void)_libraryDidFinishReconciliation:(id)arg1 ;
-(void)_checkForAddressBookChangesNeedingRevert:(char)arg1 ;
-(unsigned)_saveVIPSender:(id)arg1 ;
-(void)_deleteVIPSenderWithReferences:(id)arg1 ;
-(void)_enumerateVIPSenders:(/*^block*/id)arg1 ;
-(void)_syncVIPSender:(id)arg1 withStore:(id)arg2 ;
-(void)_postNotificationsForInserts:(id)arg1 updates:(id)arg2 deletes:(id)arg3 ;
-(char)_clearVIPSenderFlagForSenders:(id)arg1 retryFailedSenders:(char)arg2 ;
-(char)_setVIPSenderFlagForSenders:(id)arg1 retryFailedSenders:(char)arg2 ;
-(void)_removePendingVIPChanges;
-(id)_copyCriterionForSenders:(id)arg1 ;
-(id)_messagesForSenders:(id)arg1 success:(char*)arg2 ;
-(void)_savePendingVIPChanges_nts;
-(void)_updateVIPSender:(id)arg1 ;
-(id)_copyRepresentationForVIPSender:(id)arg1 reference:(id*)arg2 ;
-(void)_saveRawVIPSenderRepresentations:(id)arg1 ;
-(void)_insertVIPSender:(id)arg1 ;
-(id)_copyVIPSenderFromRepresentation:(id)arg1 withReference:(id)arg2 ;
-(id)_copyAllVIPSenders;
-(id)_copyAllVIPEmailAddresses;
-(id)_copyVIPSenderWithUniqueReference:(id)arg1 ;
-(char)_mergeRemoteChanges:(id)arg1 fromStore:(id)arg2 ;
-(id)_referenceForVIPWithSubsetOfAddresses:(id)arg1 ;
-(void)_handleAddressBookNotification;
-(char)saveVIPSenders:(id)arg1 error:(id*)arg2 ;
-(char)deleteVIPSendersWithUniqueIdentifiers:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(id)initWithLibrary:(id)arg1 ;
-(id<MFUserProfileProvider>)userProfileProvider;
-(id)library:(id)arg1 willAddMessage:(id)arg2 ;
-(void)_storeChangedExternally:(id)arg1 ;
-(char)_synchronize;
@end

