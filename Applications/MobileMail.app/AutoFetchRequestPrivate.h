/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:53 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/AFCVisibleMailboxFetch.h>

@class NSString, MFMailboxUid, MFMailMessageStore, MFError, MFActivityMonitor, MailAccount;

@interface AutoFetchRequestPrivate : NSObject <AFCVisibleMailboxFetch> {

	NSString* _remoteID;
	MFMailboxUid* _uid;
	MFMailMessageStore* _store;
	NSString* _key;
	double _responsiveness;
	unsigned _gotNewMessagesState;
	char _wasPrimaryMailbox;
	MFError* _error;
	int _result;
	char _shouldLoadMessageBody;
	char _dontNotify;
	char _displayErrors;
	char _compactMailbox;
	char _isVisibleFetch;
	char _isUserRequested;
	char _isForegroundRequest;
	char _shouldGrowFetchWindow;
	char _downloadAllMessages;
	char _isPush;
	char _isScheduled;
	MFActivityMonitor* _monitor;

}

@property (nonatomic,copy) NSString * remoteIDToPreserve;                //@synthesize remoteID=_remoteID - In the implementation block
@property (nonatomic,copy) NSString * key;                               //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) char shouldCompact;                         //@synthesize compactMailbox=_compactMailbox - In the implementation block
@property (assign,nonatomic) char displayErrors;                         //@synthesize displayErrors=_displayErrors - In the implementation block
@property (assign,nonatomic) unsigned gotNewMessagesState;               //@synthesize gotNewMessagesState=_gotNewMessagesState - In the implementation block
@property (assign,nonatomic) char wasPrimaryMailbox;                     //@synthesize wasPrimaryMailbox=_wasPrimaryMailbox - In the implementation block
@property (assign,nonatomic) char isVisibleFetch;                        //@synthesize isVisibleFetch=_isVisibleFetch - In the implementation block
@property (assign,nonatomic) char isUserRequested;                       //@synthesize isUserRequested=_isUserRequested - In the implementation block
@property (assign,nonatomic) char isForegroundRequest;                   //@synthesize isForegroundRequest=_isForegroundRequest - In the implementation block
@property (assign,nonatomic) char shouldGrowFetchWindow;                 //@synthesize shouldGrowFetchWindow=_shouldGrowFetchWindow - In the implementation block
@property (assign,nonatomic) char downloadAllMessages;                   //@synthesize downloadAllMessages=_downloadAllMessages - In the implementation block
@property (assign,nonatomic) char isPush;                                //@synthesize isPush=_isPush - In the implementation block
@property (assign,nonatomic) char isScheduled;                           //@synthesize isScheduled=_isScheduled - In the implementation block
@property (assign,nonatomic) char shouldLoadMessageBody;                 //@synthesize shouldLoadMessageBody=_shouldLoadMessageBody - In the implementation block
@property (assign,nonatomic) char dontNotify;                            //@synthesize dontNotify=_dontNotify - In the implementation block
@property (assign,nonatomic) double responsiveness;                      //@synthesize responsiveness=_responsiveness - In the implementation block
@property (nonatomic,retain) MFError * error;                            //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) int result;                               //@synthesize result=_result - In the implementation block
@property (nonatomic,readonly) MFActivityMonitor * monitor;              //@synthesize monitor=_monitor - In the implementation block
@property (nonatomic,readonly) MFMailboxUid * uid;                       //@synthesize uid=_uid - In the implementation block
@property (nonatomic,readonly) MailAccount * account; 
@property (nonatomic,readonly) char shouldNotify; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDisplayErrors:(char)arg1 ;
-(void)setRemoteIDToPreserve:(NSString *)arg1 ;
-(void)setShouldCompact:(char)arg1 ;
-(char)willGrowFetchWindow;
-(id)initRequestForMailboxUid:(id)arg1 ;
-(void)setIsForegroundRequest:(char)arg1 ;
-(void)setShouldGrowFetchWindow:(char)arg1 ;
-(void)logSummary:(id)arg1 error:(id)arg2 ;
-(NSString *)remoteIDToPreserve;
-(char)displayErrors;
-(char)shouldCompact;
-(char)wasPrimaryMailbox;
-(void)setWasPrimaryMailbox:(char)arg1 ;
-(char)isVisibleFetch;
-(void)setIsVisibleFetch:(char)arg1 ;
-(double)responsiveness;
-(void)setResponsiveness:(double)arg1 ;
-(char)shouldLoadMessageBody;
-(void)setShouldLoadMessageBody:(char)arg1 ;
-(char)dontNotify;
-(void)setDontNotify:(char)arg1 ;
-(char)isForegroundRequest;
-(char)downloadAllMessages;
-(void)setDownloadAllMessages:(char)arg1 ;
-(char)isPush;
-(void)setIsPush:(char)arg1 ;
-(void)setIsScheduled:(char)arg1 ;
-(char)isScheduled;
-(NSString *)key;
-(void)dealloc;
-(void)run;
-(MFMailboxUid *)uid;
-(void)setKey:(NSString *)arg1 ;
-(int)result;
-(MFActivityMonitor *)monitor;
-(char)isUserRequested;
-(void)setIsUserRequested:(char)arg1 ;
-(char)shouldGrowFetchWindow;
-(void)setGotNewMessagesState:(unsigned)arg1 ;
-(unsigned)gotNewMessagesState;
-(id)mailbox;
-(char)shouldNotify;
-(MailAccount *)account;
-(MFError *)error;
-(void)setError:(MFError *)arg1 ;
@end

