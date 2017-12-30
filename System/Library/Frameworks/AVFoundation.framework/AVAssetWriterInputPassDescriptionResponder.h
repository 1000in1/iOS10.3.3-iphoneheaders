/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:43 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, AVAssetWriterInputPassDescription;

@interface AVAssetWriterInputPassDescriptionResponder : NSObject {

	NSObject*<OS_dispatch_queue> _callbackQueue;
	int _stoppedResponding;
	NSObject*<OS_dispatch_queue> _serializationQueue;
	char _hasRespondedAtLeastOnce;
	AVAssetWriterInputPassDescription* _mostRecentPassDescription;
	/*^block*/id _callbackBlock;

}
-(id)init;
-(void)dealloc;
-(id)initWithCallbackQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)respondToNewPassDescription:(id)arg1 ;
-(void)stopRespondingToPassDescriptions;
-(char)_hasStoppedResponding;
-(void)_releaseAndClearCallbackBlock_invokeOnSerializationQueue;
-(void)finalize;
@end

