/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:29 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PQLResultSetInitializer.h>

@class NSString;

@interface CPLPrequeliteDownloadResource : NSObject <PQLResultSetInitializer> {

	unsigned _position;
	NSString* _itemIdentifier;
	unsigned _resourceType;
	NSString* _fingerPrint;
	NSString* _fileUTI;
	unsigned _taskIdentifier;
	int _retryCount;
	int _status;

}

@property (assign,nonatomic) unsigned position;                     //@synthesize position=_position - In the implementation block
@property (nonatomic,copy) NSString * itemIdentifier;               //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (assign,nonatomic) unsigned resourceType;                 //@synthesize resourceType=_resourceType - In the implementation block
@property (nonatomic,copy) NSString * fingerPrint;                  //@synthesize fingerPrint=_fingerPrint - In the implementation block
@property (nonatomic,copy) NSString * fileUTI;                      //@synthesize fileUTI=_fileUTI - In the implementation block
@property (assign,nonatomic) unsigned taskIdentifier;               //@synthesize taskIdentifier=_taskIdentifier - In the implementation block
@property (assign,nonatomic) int retryCount;                        //@synthesize retryCount=_retryCount - In the implementation block
@property (assign,nonatomic) int status;                            //@synthesize status=_status - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithResource:(id)arg1 andTaskIdentifier:(unsigned)arg2 ;
-(void)setTaskIdentifier:(unsigned)arg1 ;
-(void)setPosition:(unsigned)arg1 ;
-(unsigned)position;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(void)setRetryCount:(int)arg1 ;
-(int)retryCount;
-(unsigned)resourceType;
-(void)setResourceType:(unsigned)arg1 ;
-(id)resource;
-(unsigned)taskIdentifier;
-(NSString *)fingerPrint;
-(NSString *)fileUTI;
-(void)setFileUTI:(NSString *)arg1 ;
-(void)setFingerPrint:(NSString *)arg1 ;
-(NSString *)itemIdentifier;
-(void)setItemIdentifier:(NSString *)arg1 ;
-(id)initFromPQLResultSet:(id)arg1 error:(id*)arg2 ;
@end

