/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:29 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLPlatformObject.h>
#import <cloudphotod/CPLEngineLibraryImplementation.h>

@class NSString;

@interface CPLBaseEngineLibrary : CPLPlatformObject <CPLEngineLibraryImplementation>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)createLibraryWithError:(id*)arg1 ;
-(id)componentName;
-(void)openWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)closeAndDeactivate:(char)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getStatusWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getStatusDictionaryWithCompletionHandler:(/*^block*/id)arg1 ;
@end

