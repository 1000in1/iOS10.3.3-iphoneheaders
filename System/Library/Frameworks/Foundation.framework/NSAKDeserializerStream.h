/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:44 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSDeserializerStream.h>

@interface NSAKDeserializerStream : NSObject <NSDeserializerStream> {

	const void* memory;
	const char* current;
	unsigned left;
	unsigned max;
	char freeWhenDone;

}
-(id)initFromMemoryNoCopy:(const void*)arg1 length:(unsigned)arg2 freeWhenDone:(char)arg3 ;
-(int)readInt;
-(unsigned)readAlignedDataSize;
-(void)readData:(void*)arg1 length:(unsigned)arg2 ;
-(id)initFromPath:(id)arg1 ;
-(void)dealloc;
@end

