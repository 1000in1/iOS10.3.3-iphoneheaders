/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:42 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSInputStream.h>

@interface NSCFInputStream : NSInputStream
+(id)allocWithZone:(NSZone*)arg1 ;
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(id)initWithFileAtPath:(id)arg1 ;
-(char)getBuffer:(char**)arg1 length:(unsigned*)arg2 ;
-(char)_setCFClientFlags:(unsigned long)arg1 callback:(/*function pointer*/void*)arg2 context:(SCD_Struct_NS47*)arg3 ;
-(void)_scheduleInCFRunLoop:(CFRunLoopRef)arg1 forMode:(CFStringRef)arg2 ;
-(void)_unscheduleFromCFRunLoop:(CFRunLoopRef)arg1 forMode:(CFStringRef)arg2 ;
-(oneway void)release;
-(void)setDelegate:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)retain;
-(unsigned)retainCount;
-(unsigned)hash;
-(id)delegate;
-(id)initWithData:(id)arg1 ;
-(char)allowsWeakReference;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(id)initWithURL:(id)arg1 ;
-(void)close;
-(id)propertyForKey:(id)arg1 ;
-(char)setProperty:(id)arg1 forKey:(id)arg2 ;
-(char)retainWeakReference;
-(void)open;
-(unsigned)streamStatus;
-(char)hasBytesAvailable;
-(int)read:(char*)arg1 maxLength:(unsigned)arg2 ;
-(id)streamError;
@end

