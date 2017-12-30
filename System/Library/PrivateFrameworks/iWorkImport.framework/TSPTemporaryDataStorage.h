/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 1:10:38 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPFileDataStorage.h>

@protocol TSPCryptoInfo;
@class TSPTemporaryDataStorageURL;

@interface TSPTemporaryDataStorage : TSPFileDataStorage {

	TSPTemporaryDataStorageURL* _temporaryDataStorageURL;
	id<TSPCryptoInfo> _decryptionInfo;
	char _leakTemporaryFile;
	char _isMissingData;
	char _gilligan_isRemote;
	char _isMissingOriginalData;

}

@property (nonatomic,readonly) char isMissingOriginalData;              //@synthesize isMissingOriginalData=_isMissingOriginalData - In the implementation block
@property (nonatomic,readonly) char isMissingData;                      //@synthesize isMissingData=_isMissingData - In the implementation block
-(id)initWithTemporaryDataStorageURL:(id)arg1 decryptionInfo:(id)arg2 ;
-(void)performIOChannelReadWithAccessor:(/*^block*/id)arg1 ;
-(id)decryptionInfo;
-(char)isMissingData;
-(char)gilligan_isRemote;
-(id)initWithTemporaryDataStorageURL:(id)arg1 decryptionInfo:(id)arg2 isMissingOriginalData:(char)arg3 isMissingData:(char)arg4 gilligan_isRemote:(char)arg5 ;
-(void)setGilligan_isRemote:(char)arg1 ;
-(void)leakTemporaryFile;
-(void)performReadWithAccessor:(/*^block*/id)arg1 ;
-(id)writeData:(id)arg1 toPackageWriter:(id)arg2 infoMessage:(DataInfo*)arg3 preferredFilename:(id)arg4 ;
-(id)initWithTemporaryDataStorageURL:(id)arg1 decryptionInfo:(id)arg2 isMissingOriginalData:(char)arg3 isMissingData:(char)arg4 ;
-(char)isMissingOriginalData;
-(id)init;
-(void)dealloc;
-(unsigned long long)length;
@end

