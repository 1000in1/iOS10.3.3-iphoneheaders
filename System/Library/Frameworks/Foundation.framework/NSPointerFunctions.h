/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:42 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NSPointerFunctions : NSObject <NSCopying>

@property (assign) /*function pointer*/void* hashFunction; 
@property (assign) /*function pointer*/void* isEqualFunction; 
@property (assign) /*function pointer*/void* sizeFunction; 
@property (assign) /*function pointer*/void* descriptionFunction; 
@property (assign) /*function pointer*/void* relinquishFunction; 
@property (assign) /*function pointer*/void* acquireFunction; 
@property (assign) char usesStrongWriteBarrier; 
@property (assign) char usesWeakReadAndWriteBarriers; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)pointerFunctionsWithOptions:(unsigned)arg1 ;
-(void)setUsesStrongWriteBarrier:(char)arg1 ;
-(void)setUsesWeakReadAndWriteBarriers:(char)arg1 ;
-(/*function pointer*/void*)sizeFunction;
-(/*function pointer*/void*)hashFunction;
-(/*function pointer*/void*)isEqualFunction;
-(/*function pointer*/void*)descriptionFunction;
-(/*function pointer*/void*)acquireFunction;
-(/*function pointer*/void*)relinquishFunction;
-(char)usesStrongWriteBarrier;
-(char)usesWeakReadAndWriteBarriers;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithOptions:(unsigned)arg1 ;
-(void)setAcquireFunction:(/*function pointer*/void*)arg1 ;
-(void)setRelinquishFunction:(/*function pointer*/void*)arg1 ;
-(void)setHashFunction:(/*function pointer*/void*)arg1 ;
-(void)setIsEqualFunction:(/*function pointer*/void*)arg1 ;
-(void)setSizeFunction:(/*function pointer*/void*)arg1 ;
-(void)setDescriptionFunction:(/*function pointer*/void*)arg1 ;
@end

