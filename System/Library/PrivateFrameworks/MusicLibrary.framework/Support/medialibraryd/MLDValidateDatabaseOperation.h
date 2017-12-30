/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:14 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/Support/medialibraryd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, ML3MusicLibrary, NSError, NSArray;

@interface MLDValidateDatabaseOperation : NSOperation {

	NSObject*<OS_dispatch_queue> _serialQueue;
	NSMutableArray* _completionBlocks;
	char _truncateBeforeValidating;
	char _success;
	ML3MusicLibrary* _library;
	NSError* _error;

}

@property (nonatomic,readonly) ML3MusicLibrary * library;                //@synthesize library=_library - In the implementation block
@property (nonatomic,readonly) NSArray * completionBlocks; 
@property (assign,nonatomic) char truncateBeforeValidating;              //@synthesize truncateBeforeValidating=_truncateBeforeValidating - In the implementation block
@property (nonatomic,readonly) char success;                             //@synthesize success=_success - In the implementation block
@property (nonatomic,readonly) NSError * error;                          //@synthesize error=_error - In the implementation block
-(void)removeAllCompletionBlocks;
-(char)_truncateDatabaseFileForLibrary:(id)arg1 withError:(id*)arg2 ;
-(char)_validateLibraryDatabaseIfNecessary:(id)arg1 withError:(id*)arg2 ;
-(char)_internalUserAgreesToRebuildUnmigratableDatabase;
-(char)_performDatabasePreprocessingWithLibrary:(id)arg1 error:(id*)arg2 ;
-(char)_performSchemaUpgradeWithLibrary:(id)arg1 error:(id*)arg2 ;
-(char)truncateBeforeValidating;
-(void)setTruncateBeforeValidating:(char)arg1 ;
-(void)setCompletionBlock:(/*^block*/id)arg1 ;
-(void)main;
-(NSArray *)completionBlocks;
-(void)addCompletionBlock:(/*^block*/id)arg1 ;
-(ML3MusicLibrary *)library;
-(id)initWithLibrary:(id)arg1 ;
-(NSError *)error;
-(char)success;
@end

