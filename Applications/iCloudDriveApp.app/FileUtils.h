/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:51 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/iCloudDriveApp.app/iCloudDriveApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FileUtils : NSObject
+(id)getResourceValue:(id)arg1 forURL:(id)arg2 ;
+(id)mkdir:(id)arg1 ;
+(id)move:(id)arg1 to:(id)arg2 ;
+(char)isFile:(id)arg1 ;
+(char)isDir:(id)arg1 ;
+(id)fileUTI:(id)arg1 ;
+(id)containerAndRelativePathforURL:(id)arg1 container:(id*)arg2 relativePathComponents:(id*)arg3 ;
+(id)pathBarArrowCharacter:(char)arg1 ;
+(id)docDir;
+(char)evictDocument:(id)arg1 ;
+(void)dumpURLResourceValues:(id)arg1 ;
+(void)logFileAttributes:(id)arg1 ;
+(char)isValidExtensionForContainer:(id)arg1 ;
+(char)isAudioVideoImageFile:(id)arg1 ;
+(id)displayableLocationForURL:(id)arg1 ;
+(id)remove:(id)arg1 ;
+(char)isValidFilename:(id)arg1 ;
+(char)exists:(id)arg1 ;
@end

