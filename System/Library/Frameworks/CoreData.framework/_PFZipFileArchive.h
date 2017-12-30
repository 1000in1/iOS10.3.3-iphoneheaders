/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:51 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreData/CoreData-Structs.h>
@class NSDictionary, NSData, NSString, NSArray, NSMutableDictionary, NSMutableArray, PFZipEndOfCentralDirectoryRecord;

@interface _PFZipFileArchive : NSObject {

	NSDictionary* _contents;
	NSData* _data;
	id _provider;
	int _desc;
	NSString* _path;
	NSArray* _names;
	NSDictionary* _properties;
	NSMutableDictionary* _cachedContents;
	void* _reserved;
	struct {
		unsigned providerSuppliesContents : 1;
		unsigned providerSuppliesStreams : 1;
		unsigned providerSuppliesProperties : 1;
		unsigned noContentsCaching : 1;
		unsigned fileOpen : 1;
		unsigned reserved : 27;
	}  _zFlags;
	void** _reserved2[5];
	NSMutableDictionary* _entryNameToData;
	NSMutableDictionary* _entryNameToLocalFileHeader;
	NSMutableDictionary* _entryNameToCentralDirectoryFileHeader;
	NSMutableArray* _localFileHeaders;
	NSMutableArray* _centralDirectoryEntries;
	PFZipEndOfCentralDirectoryRecord* _endRecord;

}

@property (nonatomic,readonly) NSArray * entryNames; 
+(unsigned)readInt32FromBytes:(const char*)arg1 offset:(unsigned*)arg2 ;
+(void)writeInt64:(unsigned long long)arg1 toData:(id)arg2 ;
+(void)writeInt32:(unsigned)arg1 toData:(id)arg2 ;
+(void)writeInt16:(unsigned short)arg1 toData:(id)arg2 ;
+(unsigned short)readInt16FromBytes:(const char*)arg1 offset:(unsigned*)arg2 ;
+(id)createStringFromBytes:(const char*)arg1 offset:(unsigned*)arg2 length:(unsigned)arg3 ;
-(char)load:(id*)arg1 ;
-(id)initWithPath:(id)arg1 options:(unsigned)arg2 error:(id*)arg3 ;
-(id)contentsForEntryName:(id)arg1 ;
-(id)initWithEntryNames:(id)arg1 contents:(id)arg2 properties:(id)arg3 options:(unsigned)arg4 ;
-(id)initWithData:(id)arg1 options:(unsigned)arg2 error:(id*)arg3 ;
-(int)openArchiveFile:(id*)arg1 ;
-(char)addLocalFileHeaderWithBytes:(const char*)arg1 offset:(unsigned)arg2 ;
-(char)addCentralDirectoryEndRecordWithBytes:(const char*)arg1 offset:(unsigned)arg2 ;
-(char)addCentralDirectoryHeaderWithBytes:(const char*)arg1 offset:(unsigned)arg2 ;
-(char)compareBytes:(const char*)arg1 length:(unsigned)arg2 withLocalFileHeader:(id)arg3 ;
-(id)initWithEntryNames:(id)arg1 dataProvider:(id)arg2 options:(unsigned)arg3 ;
-(id)streamForEntryName:(id)arg1 ;
-(char)writeContentsForEntryName:(id)arg1 toFile:(id)arg2 options:(unsigned)arg3 error:(id*)arg4 ;
-(id)propertiesForEntryName:(id)arg1 ;
-(id)archiveStream;
-(char)readDataForLocalFileHeader:(id)arg1 fromBytes:(const void*)arg2 error:(id*)arg3 ;
-(id)createDataForEntryName:(id)arg1 cache:(char)arg2 error:(id*)arg3 ;
-(id)init;
-(void)invalidate;
-(void)dealloc;
-(char)isValid;
-(char)writeToFile:(id)arg1 options:(unsigned)arg2 error:(id*)arg3 ;
-(id)archiveData;
-(NSArray *)entryNames;
-(void)finalize;
@end

