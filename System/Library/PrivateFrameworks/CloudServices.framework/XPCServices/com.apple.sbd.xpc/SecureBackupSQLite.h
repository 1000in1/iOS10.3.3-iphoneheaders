/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:30 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/CloudServices.framework/XPCServices/com.apple.sbd.xpc/com.apple.sbd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <com.apple.sbd/com.apple.sbd-Structs.h>
#import <com.apple.sbd/SecureBackupDB.h>

@class NSData, NSURL, NSString;

@interface SecureBackupSQLite : NSObject <SecureBackupDB> {

	sqlite3Ref _db;
	NSURL* _url;
	NSString* _recordID;

}

@property (assign) sqlite3Ref db;                                   //@synthesize db=_db - In the implementation block
@property (readonly) NSURL * url;                                   //@synthesize url=_url - In the implementation block
@property (copy) NSString * recordID;                               //@synthesize recordID=_recordID - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSData * keybag; 
@property (readonly) NSData * keybagDigest; 
@property (readonly) NSData * manifestHash; 
+(sqlite3Ref)openDBWithURL:(id)arg1 truncate:(BOOL)arg2 ;
-(id)initWithURL:(id)arg1 recordID:(id)arg2 ;
-(BOOL)addItem:(id)arg1 withKey:(id)arg2 forClass:(id)arg3 error:(id*)arg4 ;
-(BOOL)removeItemWithKey:(id)arg1 error:(id*)arg2 ;
-(void)enumerateKeysAndItemsUsingBlock:(/*^block*/id)arg1 ;
-(void)resetDBWithKeybag:(id)arg1 ;
-(void)closeDB;
-(BOOL)sqliteExec:(id)arg1 ;
-(NSData *)keybagDigest;
-(NSData *)keybag;
-(NSURL *)url;
-(NSString *)recordID;
-(sqlite3Ref)db;
-(void)setDb:(sqlite3Ref)arg1 ;
-(void)setRecordID:(NSString *)arg1 ;
-(NSData *)manifestHash;
@end
