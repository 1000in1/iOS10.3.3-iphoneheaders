/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:58:04 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunesstored/itunesstored-Structs.h>
#import <StoreServices/SSMemoryEntity.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SSDownloadPolicy, NSData;

@interface DownloadPolicy : SSMemoryEntity <NSCopying> {

	SSDownloadPolicy* _cachedPolicy;

}

@property (nonatomic,copy) NSData * policyData; 
@property (nonatomic,readonly) SSDownloadPolicy * downloadPolicy; 
+(Class)databaseEntityClass;
+(id)defaultProperties;
-(id)_newBackgroundTaskAgentJobWithRule:(id)arg1 ;
-(NSData *)policyData;
-(id)copyBackgroundTaskAgentJobs;
-(void)setPolicyData:(NSData *)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SSDownloadPolicy *)downloadPolicy;
@end

