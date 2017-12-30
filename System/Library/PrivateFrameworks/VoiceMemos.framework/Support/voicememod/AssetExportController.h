/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:55 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/Support/voicememod
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSOperationQueue, NSObject, NSMutableDictionary;

@interface AssetExportController : NSObject {

	NSOperationQueue* _operationQueue;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSMutableDictionary* _exportOperationsByCompositionAVURL;
	NSMutableDictionary* _waveformOperationsByCompositionAVURL;

}
-(void)finalizeAssetWithCompositionAVURL:(id)arg1 cacheWaveform:(char)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)init;
@end

