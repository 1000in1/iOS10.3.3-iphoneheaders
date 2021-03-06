/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:56 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <MobileMail/GenericSource.h>

@protocol MiniMallSource;
@class MFMessageCriterion, NSMutableArray, MFSparseMutable64IndexSet, NSArray;

@interface CriterionSource : GenericSource {

	id<MiniMallSource> _baseSource;
	MFMessageCriterion* _criterion;
	NSMutableArray* _messageInfos;
	NSMutableArray* _conversations;
	CFDictionaryRef _conversationTopMessageInfos;
	MFSparseMutable64IndexSet* _conversationHashes;
	unsigned _failedToLoadOlderMessages : 1;
	NSArray* _observationTokens;

}

@property (nonatomic,retain) MFMessageCriterion * criterion; 
@property (nonatomic,readonly) id<MiniMallSource> baseSource;              //@synthesize baseSource=_baseSource - In the implementation block
+(Class)classForSourceType:(unsigned)arg1 ;
+(id)criterionForSource:(id)arg1 ;
-(id)initWithSource:(id)arg1 criterion:(id)arg2 ;
-(id)mailboxUids;
-(char)representsMailboxUid:(id)arg1 ;
-(int)correspondingType;
-(char)supportsSearch;
-(void)setLastViewedMessage:(id)arg1 ;
-(char)supportsDeleteAll;
-(char)deleteMovesToTrash;
-(char)supportsMoveAll;
-(char)supportsMarkAll;
-(id)accountForAutoFetch;
-(char)shouldShowUnreadCount;
-(char)shouldCompactOnFetch;
-(id)lastViewedMessage;
-(id)messageForMessageID:(id)arg1 ;
-(id)uniqueIDForStorage;
-(char)representsMailboxID:(unsigned)arg1 ;
-(void)reloadPreferences;
-(void)setProtectedDataAvailable:(char)arg1 ;
-(void)_messagesCompacted:(id)arg1 ;
-(void)_conversationHasMerged:(id)arg1 ;
-(unsigned)currentFetchWindow;
-(int)fetchMobileSynchronously:(unsigned)arg1 preservingUID:(id)arg2 options:(unsigned)arg3 error:(id*)arg4 ;
-(char)canLoadOlderMessages;
-(int)fetchNumOlderMessages:(unsigned)arg1 preservingUID:(id)arg2 ;
-(CFDictionaryRef)copySendersByLibraryIDForConversation:(long long)arg1 ;
-(id)messageForMessageInfo:(id)arg1 cacheIfNotAlready:(char)arg2 ;
-(id)cachedMessageForMessageInfo:(id)arg1 ;
-(id)bulletinsContext;
-(unsigned)remoteMessageCount;
-(void)moveAllMessagesWithObserver:(id)arg1 toMailbox:(id)arg2 ;
-(void)markAllMessagesAsDeletedOrArchived:(unsigned)arg1 withObserver:(id)arg2 ;
-(id)copyMessageInfosForConversationsContainingMessagesMatchingCriterion:(id)arg1 ;
-(char)needsFetch;
-(char)supportsFlagging;
-(char)deleteMovesToTrashForMessageInfos:(id)arg1 ;
-(char)supportsArchivingForMessageInfos:(id)arg1 ;
-(char)shouldArchiveByDefaultForMessageInfos:(id)arg1 ;
-(char)shouldThreadConversations;
-(char)shouldIncludeWholeThreads;
-(char)shouldPlayNewMailSound;
-(id)equivalentCriterion;
-(id)storeSearchResultUsingSearchContext:(id)arg1 limit:(unsigned)arg2 error:(id*)arg3 ;
-(void)_loadMessages;
-(void)_forwardNotification:(id)arg1 ;
-(void)_handleSourceNotification:(id)arg1 ;
-(void)_baseSourceDidReload:(id)arg1 ;
-(id)_conversations;
-(id)loadMoreServerCriterion;
-(id)_filterMessage:(id)arg1 ;
-(void)_nts_insertMessageInfos:(id)arg1 addedMessages:(id)arg2 ;
-(CFDictionaryRef)_copyConversationTopMessageInfosForMessageInfos:(id)arg1 ;
-(id)_copyConversationHashesForMessageInfos:(id)arg1 ;
-(void)_nts_replaceIfNecessaryConversationTopMessageInfo:(id)arg1 ;
-(id)_copyCriterionForConversations:(id)arg1 ;
-(id<MiniMallSource>)baseSource;
-(id)init;
-(void)dealloc;
-(unsigned)type;
-(char)isProtectedDataAvailable;
-(void)close;
-(unsigned)messageCount;
-(void)open;
-(void)applyChanges;
-(id)lastViewedMessageDate;
-(char)supportsArchiving;
-(char)shouldArchiveByDefault;
-(char)shouldGrowFetchWindow;
-(id)copyMessagesWithRemoteIDs:(id)arg1 options:(unsigned)arg2 ;
-(id)copyMessagesWithRemoteIDs:(id)arg1 options:(unsigned)arg2 inMailbox:(id)arg3 ;
-(char)canFetchSearchResults;
-(int)fetchMessagesMatchingCriterion:(id)arg1 limit:(unsigned)arg2 ;
-(MFMessageCriterion *)criterion;
-(void)setCriterion:(MFMessageCriterion *)arg1 ;
-(id)mailboxName;
-(id)copyMessageInfosMatchingCriterion:(id)arg1 ;
-(long long)oldestKnownConversation;
-(id)oldestKnownMessage;
-(char)supportsThreadOperations;
-(id)initWithSource:(id)arg1 ;
-(void)flushCaches;
-(void)registerForNotifications;
-(id)diagnosticDescription;
@end

