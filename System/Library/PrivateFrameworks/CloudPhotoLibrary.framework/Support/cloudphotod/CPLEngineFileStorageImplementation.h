/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:29 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CPLEngineFileStorageImplementation <CPLPlatformImplementation>
@required
-(id)retainFileURLForIdentity:(id)arg1 resourceType:(unsigned)arg2 error:(id*)arg3;
-(void)checkFileSizeForIdentity:(id)arg1;
-(char)releaseFileURL:(id)arg1 error:(id*)arg2;
-(char)hasFileWithIdentity:(id)arg1;
-(char)storeUnretainedFileAtURL:(id)arg1 identity:(id)arg2 isOriginal:(char)arg3 error:(id*)arg4;
-(char)discardAllRetainedFileURLsWithError:(id*)arg1;
-(char)storeFileAtURL:(id)arg1 identity:(id)arg2 isOriginal:(char)arg3 needsCommit:(char*)arg4 onNewFile:(/*^block*/id)arg5 error:(id*)arg6;
-(char)storeData:(id)arg1 identity:(id)arg2 isOriginal:(char)arg3 needsCommit:(char*)arg4 onNewFile:(/*^block*/id)arg5 error:(id*)arg6;
-(char)deleteFileWithIdentity:(id)arg1 includingOriginal:(char)arg2 error:(id*)arg3;
-(char)markForDeleteFileWithIdentity:(id)arg1 error:(id*)arg2;
-(char)storeUnretainedData:(id)arg1 identity:(id)arg2 isOriginal:(char)arg3 error:(id*)arg4;
-(id)fileEnumeratorIncludingPropertiesForKeys:(id)arg1 errorHandler:(/*^block*/id)arg2;
-(char)closeWithError:(id*)arg1;
-(char)openWithError:(id*)arg1;

@end

