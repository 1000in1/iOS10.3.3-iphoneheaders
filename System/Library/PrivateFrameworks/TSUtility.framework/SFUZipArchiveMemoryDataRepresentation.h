/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:48 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSUtility/SFUDataRepresentation.h>
#import <TSUtility/SFUZipArchiveDataRepresentation.h>

@class NSData, NSString;

@interface SFUZipArchiveMemoryDataRepresentation : SFUDataRepresentation <SFUZipArchiveDataRepresentation> {

	NSData* mData;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)data;
-(id)initWithData:(id)arg1 ;
-(id)inputStream;
-(id)bufferedInputStream;
-(long long)dataLength;
-(id)bufferedInputStreamWithOffset:(long long)arg1 length:(long long)arg2 ;
-(id)inputStreamWithOffset:(long long)arg1 length:(long long)arg2 ;
-(char)isReadable;
-(id)bufferedInputStreamWithBufferSize:(unsigned long)arg1 ;
-(char)hasSameLocationAs:(id)arg1 ;
@end

