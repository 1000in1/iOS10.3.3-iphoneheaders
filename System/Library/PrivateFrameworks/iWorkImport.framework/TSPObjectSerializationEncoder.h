/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 1:10:39 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPEncoder.h>

@protocol OS_dispatch_queue, OS_dispatch_data;
@class NSError, NSObject, TSPMemoryComponentWriteChannel, NSString;

@interface TSPObjectSerializationEncoder : NSObject <TSPEncoder> {

	char _alwaysDefragmentData;
	NSError* _error;
	char _isFinished;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _ioQueue;
	ObjectSerializationDirectory* _directory;
	TSPMemoryComponentWriteChannel* _metadataWriteChannel;
	TSPMemoryComponentWriteChannel* _rootComponentWriteChannel;
	NSObject*<OS_dispatch_data> _encodedData;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAlwaysDefragmentData:(char)arg1 ;
-(void)appendData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)finishEncodingWithCompletion:(/*^block*/id)arg1 ;
-(id)newRootObjectComponentWriteChannel;
-(id)newMetadataComponentWriteChannel;
-(id)init;
@end

