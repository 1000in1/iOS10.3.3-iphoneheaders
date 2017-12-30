/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 1:10:37 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/SFUDataRepresentation.h>

@class NSData;

@interface SFUMemoryDataRepresentation : SFUDataRepresentation {

	NSData* mData;

}
-(void)dealloc;
-(id)data;
-(id)initWithData:(id)arg1 ;
-(id)initWithDataNoCopy:(id)arg1 ;
-(id)initWithDataRepresentation:(id)arg1 ;
-(unsigned long)readIntoData:(id)arg1 ;
-(id)inputStream;
-(id)bufferedInputStream;
-(long long)dataLength;
-(char)isReadable;
-(id)bufferedInputStreamWithBufferSize:(unsigned long)arg1 ;
-(char)hasSameLocationAs:(id)arg1 ;
@end

