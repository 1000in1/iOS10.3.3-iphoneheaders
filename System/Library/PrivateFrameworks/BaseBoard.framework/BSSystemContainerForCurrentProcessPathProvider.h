/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:17 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSPathProviding.h>

@class NSString, NSURL;

@interface BSSystemContainerForCurrentProcessPathProvider : NSObject <BSPathProviding>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSURL * defaultPath; 
@property (nonatomic,readonly) NSURL * libraryPath; 
@property (nonatomic,readonly) NSURL * cachesPath; 
-(NSURL *)cachesPath;
-(NSURL *)libraryPath;
-(NSURL *)defaultPath;
@end
