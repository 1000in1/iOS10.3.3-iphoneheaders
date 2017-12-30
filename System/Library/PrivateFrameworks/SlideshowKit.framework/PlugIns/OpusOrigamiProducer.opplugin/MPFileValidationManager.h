/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:39 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MPFileValidationManager : NSObject
+(char)validateFilesForMovies:(id)arg1 extensionsOnly:(char)arg2 ;
+(char)validateFiles:(id)arg1 allowAudio:(char)arg2 allowImages:(char)arg3 allowMovies:(char)arg4 extensionsOnly:(char)arg5 ;
+(void)checkFileExtension:(id)arg1 isAudio:(char*)arg2 isImage:(char*)arg3 isVideo:(char*)arg4 ;
+(id)resolveAliasPath:(id)arg1 ;
+(char)validateFilesForAudio:(id)arg1 extensionsOnly:(char)arg2 ;
+(char)validateFilesForImages:(id)arg1 extensionsOnly:(char)arg2 ;
@end

