/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 1:10:37 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface SFUCryptor : NSObject {

	int mOperation;
	CCCryptorRef mCryptor;
	unsigned long mBlockSize;
	char mFinished;
	char* mDecryptionInputBuffer;
	char* mOutputBuffer;
	char* mOutputBufferPos;
	unsigned long mOutputBufferAvailable;

}
-(void)dealloc;
-(id)initWithKey:(id)arg1 operation:(int)arg2 iv:(const char*)arg3 ivLength:(unsigned long)arg4 ;
-(char)cryptDataFromStream:(id)arg1 toBuffer:(char*)arg2 length:(unsigned long)arg3 bytesRead:(unsigned*)arg4 error:(id*)arg5 ;
-(id)initWithKey:(id)arg1 operation:(int)arg2 iv:(const char*)arg3 ivLength:(unsigned long)arg4 usePKCS7Padding:(char)arg5 ;
-(char)cryptDataFromBuffer:(const char*)arg1 length:(unsigned long)arg2 toStream:(id)arg3 finished:(char)arg4 crc32:(unsigned*)arg5 error:(id*)arg6 ;
-(char)cryptDataFromBuffer:(const char*)arg1 length:(unsigned long)arg2 toStream:(id)arg3 finished:(char)arg4 error:(id*)arg5 ;
@end

