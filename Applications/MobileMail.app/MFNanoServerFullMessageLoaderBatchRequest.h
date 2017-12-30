/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:52 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableOrderedSet, NSMutableSet, NSMutableDictionary;

@interface MFNanoServerFullMessageLoaderBatchRequest : NSObject <NSCopying> {

	char _resultIncludesProtectedMessages;
	/*^block*/id _completionBlock;
	NSMutableOrderedSet* _outstandingMessageIdRequests;
	NSMutableSet* _pendingMessageIdRequests;
	NSMutableDictionary* _resultedMessagesById;

}

@property (nonatomic,retain) NSMutableOrderedSet * outstandingMessageIdRequests;              //@synthesize outstandingMessageIdRequests=_outstandingMessageIdRequests - In the implementation block
@property (nonatomic,retain) NSMutableSet * pendingMessageIdRequests;                         //@synthesize pendingMessageIdRequests=_pendingMessageIdRequests - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * resultedMessagesById;                      //@synthesize resultedMessagesById=_resultedMessagesById - In the implementation block
@property (assign,nonatomic) char resultIncludesProtectedMessages;                            //@synthesize resultIncludesProtectedMessages=_resultIncludesProtectedMessages - In the implementation block
@property (nonatomic,copy) id completionBlock;                                                //@synthesize completionBlock=_completionBlock - In the implementation block
-(char)enqueueMessageId:(id)arg1 ;
-(void)addResult:(id)arg1 isProtectedMessage:(char)arg2 ;
-(NSMutableDictionary *)resultedMessagesById;
-(id)initWithMessageIds:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)dequeueAllMessageIds;
-(id)dequeueMessageId;
-(char)enqueueMessageIds:(id)arg1 ;
-(void)cancelRequestForMessageId:(id)arg1 ;
-(void)addResults:(id)arg1 isProtectedMessage:(char)arg2 ;
-(char)isRequestCompleted;
-(char)resultIncludesProtectedMessages;
-(NSMutableOrderedSet *)outstandingMessageIdRequests;
-(void)setOutstandingMessageIdRequests:(NSMutableOrderedSet *)arg1 ;
-(NSMutableSet *)pendingMessageIdRequests;
-(void)setPendingMessageIdRequests:(NSMutableSet *)arg1 ;
-(void)setResultedMessagesById:(NSMutableDictionary *)arg1 ;
-(void)setResultIncludesProtectedMessages:(char)arg1 ;
-(void)dealloc;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)results;
@end

