/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:52 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/MTLArgumentInternal.h>

@interface MTLThreadgroupMemoryArgument : MTLArgumentInternal {

	unsigned short _alignment;
	unsigned _dataSize;

}
-(id)formattedDescription:(unsigned)arg1 ;
-(id)initWithName:(id)arg1 type:(unsigned)arg2 access:(unsigned)arg3 isActive:(char)arg4 locationIndex:(unsigned)arg5 arraySize:(unsigned)arg6 dataSize:(unsigned)arg7 alignment:(unsigned)arg8 ;
-(unsigned)threadgroupMemoryAlignment;
-(unsigned)threadgroupMemoryDataSize;
@end

