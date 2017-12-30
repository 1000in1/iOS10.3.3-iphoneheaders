/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:38 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSData.h>

@interface NSMutableData : NSData

@property (readonly) void* mutableBytes; 
@property (assign) unsigned length; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)dataWithLength:(unsigned)arg1 ;
+(id)dataWithCapacity:(unsigned)arg1 ;
-(char)_isCompact;
-(void)resetBytesInRange:(NSRange)arg1 ;
-(id)initWithCapacity:(unsigned)arg1 ;
-(void)appendBytes:(const void*)arg1 length:(unsigned)arg2 ;
-(Class)classForCoder;
-(void)setData:(id)arg1 ;
-(void)setLength:(unsigned)arg1 ;
-(void)appendData:(id)arg1 ;
-(void*)mutableBytes;
-(id)initWithLength:(unsigned)arg1 ;
-(void)increaseLengthBy:(unsigned)arg1 ;
-(void)replaceBytesInRange:(NSRange)arg1 withBytes:(const void*)arg2 ;
-(void)replaceBytesInRange:(NSRange)arg1 withBytes:(const void*)arg2 length:(unsigned)arg3 ;
@end

