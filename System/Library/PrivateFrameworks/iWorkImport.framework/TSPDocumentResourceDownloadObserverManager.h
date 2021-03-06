/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 1:10:39 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface TSPDocumentResourceDownloadObserverManager : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableDictionary* _downloadObserversMap;

}
+(id)sharedManager;
-(void)addDownloadObserver:(id)arg1 forData:(id)arg2 digestString:(id)arg3 options:(unsigned)arg4 isInternalObserver:(char)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)notifyDownloadObserversForDigestString:(id)arg1 withStatus:(int)arg2 info:(id)arg3 wait:(char)arg4 ;
-(id)init;
@end

