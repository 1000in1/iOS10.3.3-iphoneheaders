/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:45 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppSupport/AppSupport-Structs.h>
#import <Foundation/NSString.h>

@class NSString;

@interface _CPBundleIdentifierString : NSString {

	NSString* _executablePath;
	NSString* _bundleIdentifierOrProcessName;
	char _isProcessName;

}
-(void)_loadBundleIdentifierOrProcessName;
-(id)_initWithExecutablePath:(id)arg1 ;
-(char)_isProcessName;
-(void)dealloc;
-(unsigned)length;
-(unsigned short)characterAtIndex:(unsigned)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
@end

