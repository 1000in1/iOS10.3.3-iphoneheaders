/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:29 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLPlatformObject.h>
#import <cloudphotod/CPLEngineStorageImplementation.h>

@class CPLPrequeliteTable, NSString;

@interface CPLPrequeliteStorage : CPLPlatformObject <CPLEngineStorageImplementation> {

	CPLPrequeliteTable* _mainTable;
	char _superWasCalled;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)pqStore;
-(char)createIndexWithName:(id)arg1 withDefinition:(id)arg2 unique:(char)arg3 error:(id*)arg4 ;
-(id)mainTable;
-(char)createMainTableWithDefinition:(id)arg1 error:(id*)arg2 ;
-(char)createVariable:(id)arg1 defaultValue:(id)arg2 error:(id*)arg3 ;
-(char)setValue:(id)arg1 forVariable:(id)arg2 error:(id*)arg3 ;
-(char)createIndexOnColumn:(id)arg1 error:(id*)arg2 ;
-(id)variableWithName:(id)arg1 type:(id)arg2 ;
-(char)initializeStorage;
-(char)upgradeStorageToVersion:(long long)arg1 ;
-(id)valueForVariable:(id)arg1 ;
-(id)status;
-(id)engineLibrary;
-(void)writeTransactionDidFail;
-(void)writeTransactionDidSucceed;
-(char)_checkSuperWasCalled;
-(id)statusDictionary;
-(id)initWithAbstractObject:(id)arg1 ;
-(char)closeWithError:(id*)arg1 ;
-(char)openWithError:(id*)arg1 ;
@end

