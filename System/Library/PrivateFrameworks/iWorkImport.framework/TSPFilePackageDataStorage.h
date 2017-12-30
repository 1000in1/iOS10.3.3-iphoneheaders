/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 1:10:39 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPStreamDataStorage.h>

@protocol TSPCryptoInfo;
@class NSString, TSPFilePackage;

@interface TSPFilePackageDataStorage : TSPStreamDataStorage {

	NSString* _path;
	id<TSPCryptoInfo> _decryptionInfo;
	TSPFilePackage* _package;
	unsigned long long _encodedLength;
	unsigned _CRC;
	struct {
		unsigned didCalculateIsReadable : 1;
		unsigned didCalculateEncodedLength : 1;
		unsigned didCalculateCRC : 1;
		unsigned isReadable : 1;
		unsigned isMissingData : 1;
	}  _flags;

}
-(unsigned)CRC;
-(id)packageLocator;
-(unsigned char)packageIdentifier;
-(void)performIOChannelReadWithAccessor:(/*^block*/id)arg1 ;
-(id)decryptionInfo;
-(char)isMissingData;
-(char)copyToTemporaryURL:(id)arg1 encryptionInfo:(id)arg2 ;
-(void)didInitializeFromDocumentURL:(id)arg1 ;
-(id)initWithPath:(id)arg1 package:(id)arg2 decryptionInfo:(id)arg3 ;
-(char)isInPackage:(id)arg1 ;
-(void)setIsMissingData:(char)arg1 ;
-(id)writeData:(id)arg1 toPackageWriter:(id)arg2 infoMessage:(DataInfo*)arg3 preferredFilename:(id)arg4 ;
-(id)streamReadChannel;
-(id)init;
-(unsigned long long)length;
-(void)resetFlags;
-(unsigned long long)encodedLength;
-(char)isReadable;
@end
