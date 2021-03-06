/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:29 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PQLResultSetInitializer.h>

@class NSString;

@interface CPLPrequeliteUploadResource : NSObject <PQLResultSetInitializer> {

	char _available;
	unsigned _position;
	unsigned _pendingCount;
	NSString* _itemIdentifier;
	unsigned _resourceType;
	NSString* _fingerPrint;
	NSString* _fileUTI;
	int _fileKind;
	NSString* _originalPath;
	int _retryCount;
	int _status;

}

@property (assign,nonatomic) unsigned position;                              //@synthesize position=_position - In the implementation block
@property (assign,nonatomic) unsigned pendingCount;                          //@synthesize pendingCount=_pendingCount - In the implementation block
@property (nonatomic,copy) NSString * itemIdentifier;                        //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (assign,nonatomic) unsigned resourceType;                          //@synthesize resourceType=_resourceType - In the implementation block
@property (nonatomic,copy) NSString * fingerPrint;                           //@synthesize fingerPrint=_fingerPrint - In the implementation block
@property (nonatomic,copy) NSString * fileUTI;                               //@synthesize fileUTI=_fileUTI - In the implementation block
@property (assign,nonatomic) int fileKind;                                   //@synthesize fileKind=_fileKind - In the implementation block
@property (nonatomic,copy) NSString * originalPath;                          //@synthesize originalPath=_originalPath - In the implementation block
@property (assign,getter=isAvailable,nonatomic) char available;              //@synthesize available=_available - In the implementation block
@property (assign,nonatomic) int retryCount;                                 //@synthesize retryCount=_retryCount - In the implementation block
@property (assign,nonatomic) int status;                                     //@synthesize status=_status - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)originalPath;
-(void)setOriginalPath:(NSString *)arg1 ;
-(void)setPosition:(unsigned)arg1 ;
-(unsigned)position;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(void)setRetryCount:(int)arg1 ;
-(int)retryCount;
-(unsigned)resourceType;
-(void)setResourceType:(unsigned)arg1 ;
-(id)resource;
-(id)initWithResource:(id)arg1 ;
-(void)setFileKind:(int)arg1 ;
-(int)fileKind;
-(NSString *)fingerPrint;
-(NSString *)fileUTI;
-(void)setAvailable:(char)arg1 ;
-(void)setFileUTI:(NSString *)arg1 ;
-(void)setFingerPrint:(NSString *)arg1 ;
-(NSString *)itemIdentifier;
-(void)setItemIdentifier:(NSString *)arg1 ;
-(char)isAvailable;
-(id)initFromPQLResultSet:(id)arg1 error:(id*)arg2 ;
-(unsigned)pendingCount;
-(void)setPendingCount:(unsigned)arg1 ;
@end

