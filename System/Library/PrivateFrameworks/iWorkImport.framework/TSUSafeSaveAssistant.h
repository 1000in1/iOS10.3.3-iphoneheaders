/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 1:10:37 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL;

@interface TSUSafeSaveAssistant : NSObject {

	NSURL* _saveURL;
	NSURL* _temporaryDirectoryURL;
	NSURL* _writeURL;

}

@property (nonatomic,readonly) NSURL * writeURL;              //@synthesize writeURL=_writeURL - In the implementation block
+(id)temporaryDirectoryURLForWritingToURL:(id)arg1 error:(id*)arg2 ;
+(char)finishWritingToURL:(id)arg1 byMovingItemAtURL:(id)arg2 addingAttributes:(id)arg3 error:(id*)arg4 ;
+(void)removeTemporaryDirectoryAtURL:(id)arg1 ;
+(void)writeAttributes:(id)arg1 toURL:(id)arg2 ;
-(void)removeTemporaryDirectory;
-(char)endSaveWithSuccess:(char)arg1 toURL:(id)arg2 addingAttributes:(id)arg3 error:(id*)arg4 ;
-(id)initForSavingToURL:(id)arg1 error:(id*)arg2 ;
-(char)endSaveWithSuccess:(char)arg1 addingAttributes:(id)arg2 error:(id*)arg3 ;
-(NSURL *)writeURL;
-(id)init;
-(void)dealloc;
@end

