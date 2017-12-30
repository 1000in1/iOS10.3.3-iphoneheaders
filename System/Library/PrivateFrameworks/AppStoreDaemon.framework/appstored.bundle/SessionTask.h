/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:16 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/appstored.bundle/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSMemoryEntity.h>

@protocol NSURLSessionDataDelegatePrivateNSURLSessionTaskDelegatePrivate;
@class NSURLSessionDataTask;

@interface SessionTask : SSMemoryEntity {

	NSURLSessionDataTask* _dataTask;
	id<NSURLSessionDataDelegatePrivate><NSURLSessionTaskDelegatePrivate> _delegate;

}

@property (nonatomic,retain) NSURLSessionDataTask * dataTask;                                                                   //@synthesize dataTask=_dataTask - In the implementation block
@property (assign,nonatomic,__weak) id<NSURLSessionDataDelegatePrivate><NSURLSessionTaskDelegatePrivate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long downloadID; 
@property (nonatomic,readonly) unsigned taskID; 
+(id)taskWithSession:(id)arg1 request:(id)arg2 ;
+(Class)databaseEntityClass;
+(id)defaultProperties;
-(id)initWithSession:(id)arg1 request:(id)arg2 ;
-(void)setDelegate:(id<NSURLSessionDataDelegatePrivate><NSURLSessionTaskDelegatePrivate>)arg1 ;
-(id<NSURLSessionDataDelegatePrivate><NSURLSessionTaskDelegatePrivate>)delegate;
-(unsigned)taskID;
-(void)setDownloadID:(long long)arg1 ;
-(long long)downloadID;
-(NSURLSessionDataTask *)dataTask;
-(void)setDataTask:(NSURLSessionDataTask *)arg1 ;
@end

