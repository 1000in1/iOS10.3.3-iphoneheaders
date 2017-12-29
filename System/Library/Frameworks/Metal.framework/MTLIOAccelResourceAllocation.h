/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:22 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/MTLResourceAllocationInfo.h>

@class NSString;

@interface MTLIOAccelResourceAllocation : MTLResourceAllocationInfo {

	NSString* _memoryPool;
	unsigned _virtualSize;
	unsigned _residentSize;
	unsigned _dirtySize;
	char _purgeable;
	unsigned long long _uniqueIdentifier;

}
-(char)purgeable;
-(id)initWithPool:(id)arg1 virtualSize:(unsigned)arg2 residentSize:(unsigned)arg3 dirtySize:(unsigned)arg4 purgeable:(char)arg5 uniqueID:(unsigned long long)arg6 ;
-(id)memoryPool;
-(unsigned)residentSize;
-(unsigned)dirtySize;
-(void)dealloc;
-(unsigned)virtualSize;
-(unsigned long long)uniqueIdentifier;
@end
