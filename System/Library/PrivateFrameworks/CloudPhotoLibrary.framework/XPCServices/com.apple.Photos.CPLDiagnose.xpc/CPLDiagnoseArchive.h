/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:30 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/XPCServices/com.apple.Photos.CPLDiagnose.xpc/com.apple.Photos.CPLDiagnose
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <com.apple.Photos.CPLDiagnose/com.apple.Photos.CPLDiagnose-Structs.h>
@interface CPLDiagnoseArchive : NSObject {

	archiveRef _archive;

}
-(void)closeArchive;
-(id)initWithPath:(id)arg1 shouldCompress:(char)arg2 ;
-(int)addDirectoryToArchive:(id)arg1 withDirName:(id)arg2 ;
-(int)addFileToArchive:(id)arg1 withFileName:(id)arg2 ;
@end

