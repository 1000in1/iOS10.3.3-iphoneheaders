/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:14 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/Support/medialibraryd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <medialibraryd/MLDDiagnostic.h>

@class NSDate, NSArray, NSError;

@interface MLDMutableDiagnostic : MLDDiagnostic

@property (nonatomic,retain) NSDate * date; 
@property (assign,nonatomic) char locked; 
@property (nonatomic,copy) NSArray * activeClients; 
@property (nonatomic,copy) NSArray * activeXPCTransactions; 
@property (nonatomic,copy) NSArray * databaseFileDiagnostics; 
@property (assign,nonatomic) char writerSuspended; 
@property (nonatomic,copy) NSArray * activeTransactions; 
@property (nonatomic,copy) NSArray * enqueuedConcurrentOperations; 
@property (nonatomic,copy) NSArray * enqueuedSerialOperations; 
@property (nonatomic,retain) NSError * lastImportError; 
@property (nonatomic,copy) NSArray * activeImportOperations; 
@property (nonatomic,copy) NSArray * suspendedImportOperations; 
-(void)setActiveClients:(NSArray *)arg1 ;
-(void)setActiveXPCTransactions:(NSArray *)arg1 ;
-(void)setDatabaseFileDiagnostics:(NSArray *)arg1 ;
-(void)setWriterSuspended:(char)arg1 ;
-(void)setEnqueuedConcurrentOperations:(NSArray *)arg1 ;
-(void)setEnqueuedSerialOperations:(NSArray *)arg1 ;
-(void)setLastImportError:(NSError *)arg1 ;
-(void)setActiveImportOperations:(NSArray *)arg1 ;
-(void)setSuspendedImportOperations:(NSArray *)arg1 ;
-(void)setLocked:(char)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(void)setActiveTransactions:(NSArray *)arg1 ;
@end

