/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:39 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreFoundation/CoreFoundation-Structs.h>
@interface CFPDDataBuffer : NSObject
+(id)newBufferFromFile:(int)arg1 allowMappingIfSafe:(char)arg2 ;
+(id)newBufferFromPropertyList:(void*)arg1 ;
+(id)newBufferFromCFData:(CFDataRef)arg1 ;
-(char)purgable;
-(char)beginAccessing;
-(void)endAccessing;
-(char)validatePlist;
-(void*)copyPropertyListWithMutability:(unsigned long)arg1 ;
-(id)copyXPCData;
-(CFDataRef)copyCFData;
-(unsigned long)length;
-(void*)bytes;
@end

