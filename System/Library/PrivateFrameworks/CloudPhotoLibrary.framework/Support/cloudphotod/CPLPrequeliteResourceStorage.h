/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:29 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <cloudphotod/CPLPrequeliteStorage.h>
#import <cloudphotod/CPLEngineResourceStorageImplementation.h>

@class CPLPrequeliteVariable, NSString;

@interface CPLPrequeliteResourceStorage : CPLPrequeliteStorage <CPLEngineResourceStorageImplementation> {

	CPLPrequeliteVariable* _totalSizeVar;
	CPLPrequeliteVariable* _totalOriginalSizeVar;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)initializeStorage;
-(char)upgradeStorageToVersion:(long long)arg1 ;
-(char)_incrementTotalResourceSize:(unsigned long long)arg1 error:(id*)arg2 ;
-(char)_incrementTotalOriginalResourceSize:(unsigned long long)arg1 error:(id*)arg2 ;
-(char)_decrementTotalResourceSize:(unsigned long long)arg1 error:(id*)arg2 ;
-(char)_decrementTotalOriginalResourceSize:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)status;
-(unsigned)retainCountForIdentity:(id)arg1 ;
-(char)retainIdentity:(id)arg1 isTrackedOriginal:(char)arg2 error:(id*)arg3 ;
-(char)releaseIdentity:(id)arg1 lastReference:(char*)arg2 isTrackedOriginal:(char)arg3 error:(id*)arg4 ;
-(unsigned long long)totalResourceSize;
-(unsigned long long)totalOriginalResourceSize;
-(void)enumerateIdentitiesWithBlock:(/*^block*/id)arg1 ;
-(id)initWithAbstractObject:(id)arg1 ;
-(char)resetWithError:(id*)arg1 ;
@end
