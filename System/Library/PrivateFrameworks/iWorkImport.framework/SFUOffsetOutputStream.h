/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 1:10:37 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/SFUOutputStream.h>

@protocol SFUOutputStream;
@class NSString;

@interface SFUOffsetOutputStream : NSObject <SFUOutputStream> {

	id<SFUOutputStream> mOutputStream;
	long long mInitialOffset;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(long long)offset;
-(void)close;
-(void)seekToOffset:(long long)arg1 whence:(int)arg2 ;
-(char)canCreateInputStream;
-(char)canSeek;
-(id)closeLocalStream;
-(id)initWithOutputStream:(id)arg1 ;
-(id)inputStream;
-(void)writeBuffer:(const char*)arg1 size:(unsigned long)arg2 ;
@end

