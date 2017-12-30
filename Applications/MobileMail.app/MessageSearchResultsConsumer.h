/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:57 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MessageConsumer.h>
#import <libobjc.A.dylib/NSProgressReporting.h>

@class SearchOperation, NSProgress, NSMutableArray, NSString;

@interface MessageSearchResultsConsumer : NSObject <MessageConsumer, NSProgressReporting> {

	SearchOperation* _operation;
	NSProgress* _progress;
	unsigned _sentBatchCount;
	unsigned _nextBatchSize;
	NSMutableArray* _pendingMessages;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSProgress * progress; 
-(void)_sendForcibly:(char)arg1 ;
-(void)dealloc;
-(void)done;
-(NSProgress *)progress;
-(void)newMessagesAvailable:(id)arg1 ;
-(id)initWithOperation:(id)arg1 ;
-(char)shouldCancel;
@end

