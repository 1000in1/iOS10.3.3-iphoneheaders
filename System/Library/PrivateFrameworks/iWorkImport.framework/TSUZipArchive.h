/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 1:10:37 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableSet;

@interface TSUZipArchive : NSObject {

	unsigned _options;
	NSMutableDictionary* _entriesMap;
	NSMutableSet* _entries;

}

@property (nonatomic,readonly) unsigned long long archiveLength; 
@property (nonatomic,readonly) char isValid; 
-(void)collapseCommonRootDirectory;
-(unsigned long long)archiveLength;
-(id)newArchiveReadChannel;
-(void)readLocalFileHeaderEntriesFromChannel:(id)arg1 offset:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)readEndOfCentralDirectoryData:(id)arg1 eocdOffset:(long long)arg2 channel:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)readZip64EndOfCentralDirectoryLocatorWithChannel:(id)arg1 eocdOffset:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)readCentralDirectoryWithEntryCount:(unsigned)arg1 offset:(long long)arg2 size:(unsigned long)arg3 channel:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)readZip64EndOfCentralDirectoryLocatorData:(id)arg1 channel:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)readZip64EndOfCentralDirectoryWithChannel:(id)arg1 offset:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)readZip64EndOfCentralDirectoryData:(id)arg1 channel:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)readCentralDirectoryData:(id)arg1 entryCount:(unsigned)arg2 completion:(/*^block*/id)arg3 ;
-(char)readCentralFileHeaderWithBuffer:(const void*)arg1 dataSize:(unsigned*)arg2 error:(id*)arg3 ;
-(char)readFilenameFromBuffer:(const void*)arg1 nameLength:(unsigned short)arg2 entry:(id)arg3 dataSize:(unsigned*)arg4 error:(id*)arg5 ;
-(char)readExtraFieldsFromBuffer:(const void*)arg1 extraFieldsLength:(unsigned short)arg2 entry:(id)arg3 dataSize:(unsigned*)arg4 error:(id*)arg5 ;
-(char)readFileCommentFromBuffer:(const void*)arg1 fileCommentLength:(unsigned short)arg2 entry:(id)arg3 dataSize:(unsigned*)arg4 error:(id*)arg5 ;
-(char)readZip64ExtraFieldFromBuffer:(const void*)arg1 dataLength:(unsigned short)arg2 entry:(id)arg3 error:(id*)arg4 ;
-(void)readLocalFileHeaderData:(id)arg1 atOffset:(long long)arg2 channel:(id)arg3 completion:(/*^block*/id)arg4 ;
-(char)readLocalFileHeaderFilenameAndExtraFieldsData:(id)arg1 forEntry:(id)arg2 error:(id*)arg3 ;
-(id)normalizeEntryName:(id)arg1 ;
-(id)readChannelForEntry:(id)arg1 validateCRC:(char)arg2 ;
-(id)streamReadChannelForEntry:(id)arg1 validateCRC:(char)arg2 ;
-(void)readArchiveWithQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)readChannelForEntry:(id)arg1 ;
-(id)streamReadChannelForEntry:(id)arg1 ;
-(id)containedZipArchiveForEntry:(id)arg1 options:(unsigned)arg2 error:(id*)arg3 ;
-(id)entryForName:(id)arg1 ;
-(id)tsp_dataForEntry:(id)arg1 ;
-(id)init;
-(id)debugDescription;
-(char)isValid;
-(id)initWithOptions:(unsigned)arg1 ;
-(void)addEntry:(id)arg1 ;
-(void)enumerateEntriesUsingBlock:(/*^block*/id)arg1 ;
@end

