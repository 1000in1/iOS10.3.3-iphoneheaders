/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 1:10:39 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSString, TSPDatabase, TSPDistributableFileManager;

@interface TSPDatabaseArchiverWriter : NSObject {

	long long _dataStateIdentifier;
	NSString* _fileStateIdentifier;
	char _hasDataState;
	char _hasFileState;
	TSPDatabase* _database;
	TSPDistributableFileManager* _fileManager;
	NSString* _filenameHint;
	char _forceFileStorage;

}

@property (nonatomic,readonly) char hasDataState;                         //@synthesize hasDataState=_hasDataState - In the implementation block
@property (assign,nonatomic) long long dataStateIdentifier; 
@property (nonatomic,readonly) char hasFileState;                         //@synthesize hasFileState=_hasFileState - In the implementation block
@property (nonatomic,retain) NSString * fileStateIdentifier; 
@property (nonatomic,retain) NSString * filenameHint;                     //@synthesize filenameHint=_filenameHint - In the implementation block
@property (assign,nonatomic) char forceFileStorage;                       //@synthesize forceFileStorage=_forceFileStorage - In the implementation block
-(char)hasDataState;
-(char)hasFileState;
-(sqlite3_blobRef)_openDatabaseBlobWithSize:(int)arg1 ;
-(void)_writeDataFromInputStreamToDatabase:(id)arg1 length:(int)arg2 ;
-(void)_writeDataFromInputStreamToFile:(id)arg1 length:(long long)arg2 ;
-(void)setDataStateIdentifier:(long long)arg1 ;
-(void)setFileStateIdentifier:(NSString *)arg1 ;
-(id)initWithDatabase:(id)arg1 fileManager:(id)arg2 ;
-(char)serializeArchive:(const Message*)arg1 ;
-(long long)dataStateIdentifier;
-(NSString *)fileStateIdentifier;
-(void)serializeDataFromStream:(id)arg1 length:(long long)arg2 ;
-(NSString *)filenameHint;
-(void)setFilenameHint:(NSString *)arg1 ;
-(char)forceFileStorage;
-(void)setForceFileStorage:(char)arg1 ;
@end

