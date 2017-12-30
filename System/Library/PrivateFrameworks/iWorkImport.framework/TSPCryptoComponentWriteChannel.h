/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 1:10:39 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPComponentWriteChannel.h>

@protocol TSPComponentWriteChannel, TSPMutableCryptoInfo, OS_dispatch_semaphore, OS_dispatch_data;
@class NSObject, NSString;

@interface TSPCryptoComponentWriteChannel : NSObject <TSPComponentWriteChannel> {

	id<TSPComponentWriteChannel> _writeChannel;
	id<TSPMutableCryptoInfo> _encryptionInfo;
	unsigned long _bufferSize;
	NSObject*<OS_dispatch_semaphore> _bufferSemaphore;
	char* _buffer;
	NSObject*<OS_dispatch_data> _bufferDispatchData;
	unsigned long _bufferPosition;
	unsigned long _remainingBufferSize;
	CCCryptorRef _cryptor;
	SCD_Struct_TS306 _ccHmacContext;
	unsigned long _encodedBlockLength;
	unsigned long _decryptedBlockLength;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithWriteChannel:(id)arg1 encryptionInfo:(id)arg2 ;
-(id)initWithWriteChannel:(id)arg1 encryptionInfo:(id)arg2 bufferSize:(unsigned long)arg3 ;
-(char)_initializeBlock;
-(void)_writeData:(id)arg1 isDecryptedData:(char)arg2 ;
-(char)_finalizeBlockForClosing:(char)arg1 ;
-(id)init;
-(void)dealloc;
-(void)close;
-(void)writeData:(id)arg1 ;
-(char)_resetBuffer;
@end

