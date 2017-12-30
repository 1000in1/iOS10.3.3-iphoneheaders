/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 1:10:37 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SFUZipArchiveDataRepresentation;
#import <iWorkImport/iWorkImport-Structs.h>
@class NSMutableDictionary, SFUDataRepresentation, NSData, NSString, SFUCryptoKey;

@interface SFUZipArchive : NSObject {

	NSMutableDictionary* mEntries;
	SFUDataRepresentation*<SFUZipArchiveDataRepresentation> mDataRepresentation;
	NSData* mPassphraseVerifier;
	NSString* mPassphraseHint;
	SFUCryptoKey* mCryptoKey;
	NSData* mEncryptedDocumentUuid;

}
+(char)isZipArchiveAtPath:(id)arg1 ;
-(void)dealloc;
-(id)entryWithName:(id)arg1 ;
-(id)initWithPath:(id)arg1 collapseCommonRootDirectory:(char)arg2 ignoreCase:(char)arg3 ;
-(void)readEntries;
-(void)collapseCommonRootDirectoryIgnoreCase:(char)arg1 ;
-(id)initWithData:(id)arg1 collapseCommonRootDirectory:(char)arg2 ignoreCase:(char)arg3 ;
-(void)setCryptoKey:(id)arg1 ;
-(char)decompressAtPath:(id)arg1 wasEmpty:(char*)arg2 ;
-(id)allEntryNames;
-(id)initWithPath:(id)arg1 collapseCommonRootDirectory:(char)arg2 ;
-(id)initWithData:(id)arg1 collapseCommonRootDirectory:(char)arg2 ;
-(id)entryWithName:(id)arg1 dataLength:(long long)arg2 ;
-(id)passphraseVerifier;
-(id)passphraseHint;
-(id)encryptedDocumentUuid;
-(char)decompressAtPath:(id)arg1 ;
-(id)commonRootDirectoryIgnoringCase:(char)arg1 ;
-(SFUZipEndOfCentralDirectory)readEndOfCentralDirectoryFromInputStream:(id)arg1 ;
-(id)readFilenameFromBuffer:(const char*)arg1 size:(unsigned long)arg2 ;
-(void)readExtraFieldFromBuffer:(const char*)arg1 size:(unsigned long)arg2 entry:(id)arg3 ;
-(const char*)searchForEndOfCentralDirectoryFromInputStream:(id)arg1 offset:(long long*)arg2 ;
-(SFUZipEndOfCentralDirectory)readZip64EndOfCentralDirectoryFromInputStream:(id)arg1 eocdOffset:(long long)arg2 ;
-(SFUZipEndOfCentralDirectory)readZip64EndOfCentralDirectoryFromInputStream:(id)arg1 offset:(long long)arg2 ;
-(char)isEncrypted;
@end

