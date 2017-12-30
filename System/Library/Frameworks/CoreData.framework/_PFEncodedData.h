/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:51 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreFoundation/NSData.h>

@class NSData;

@interface _PFEncodedData : NSData {

	NSData* _aData;
	unsigned _byteCount;

}
+(Class)classForCoder;
-(Class)classForArchiver;
-(NSRange)rangeOfData:(id)arg1 options:(unsigned)arg2 range:(NSRange)arg3 ;
-(id)privateCopy;
-(id)init;
-(oneway void)release;
-(id)initWithCoder:(id)arg1 ;
-(id)retain;
-(unsigned)retainCount;
-(id)description;
-(unsigned)length;
-(id)mutableCopy;
-(char)writeToURL:(id)arg1 options:(unsigned)arg2 error:(id*)arg3 ;
-(char)writeToURL:(id)arg1 atomically:(char)arg2 ;
-(const void*)bytes;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)getBytes:(void*)arg1 length:(unsigned)arg2 ;
-(char)_isDeallocating;
-(char)writeToFile:(id)arg1 atomically:(char)arg2 ;
-(char)writeToFile:(id)arg1 options:(unsigned)arg2 error:(id*)arg3 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(char)_tryRetain;
-(void)getBytes:(void*)arg1 range:(NSRange)arg2 ;
-(char)isEqualToData:(id)arg1 ;
-(id)subdataWithRange:(NSRange)arg1 ;
@end

