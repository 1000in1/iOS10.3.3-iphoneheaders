/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:42 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_CDStringKeyDataValueStoring.h>

@protocol OS_dispatch_queue, OS_os_log;
@class NSObject, NSMutableDictionary;

@interface _CDSharedMemoryKeyValueStore : NSObject <_CDStringKeyDataValueStoring> {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _archivingQueue;
	char _needToPersist;
	NSObject*<OS_os_log> _log;
	NSMutableDictionary* _dictionary;
	void* _mappedMem;
	unsigned long _size;

}

@property (nonatomic,readonly) unsigned long size;              //@synthesize size=_size - In the implementation block
+(id)sharedInstance;
+(unsigned long)defaultSize;
+(id)log;
+(id)defaultName;
+(void*)openOrCreateSharedMemoryWithName:(id)arg1 size:(unsigned long)arg2 ;
+(id)readKeyedDataDictionaryFromMemory:(void*)arg1 size:(unsigned long)arg2 ;
+(id)keyValueStoreWithName:(id)arg1 size:(unsigned long)arg2 ;
-(unsigned long)size;
-(id)valueForKey:(id)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)allKeys;
-(id)initWithName:(id)arg1 size:(unsigned long)arg2 ;
-(id)errorForExceedingSizeLimits;
-(char)persistToShMemWithCompletionBlock:(/*^block*/id)arg1 ;
-(char)setData:(id)arg1 forKey:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(char)asyncPersistToShMemWithCompletionBlock:(/*^block*/id)arg1 ;
-(char)removeDataForKeys:(id)arg1 ;
-(void*)memoryPointer;
-(char)setData:(id)arg1 forKey:(id)arg2 ;
-(char)removeDataForKey:(id)arg1 ;
-(id)dataForKey:(id)arg1 ;
@end

