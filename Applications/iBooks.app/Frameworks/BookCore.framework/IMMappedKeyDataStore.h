/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:47 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/iBooks.app/Frameworks/BookCore.framework/BookCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet, NSString;

@interface IMMappedKeyDataStore : NSObject {

	NSObject*<OS_dispatch_queue> _keyQueue;
	NSObject*<OS_dispatch_queue> _loadQueue;
	NSObject*<OS_dispatch_queue> _saveQueue;
	NSMutableSet* _keys;
	NSString* _path;

}

@property (nonatomic,retain) NSString * path;              //@synthesize path=_path - In the implementation block
-(void)_fetchKeys;
-(void)_setData:(id)arg1 xattrs:(id)arg2 forKey:(id)arg3 ;
-(id)_xattrs:(id)arg1 forKey:(id)arg2 ;
-(void)setData:(id)arg1 xattrs:(id)arg2 forKey:(id)arg3 completion:(/*^block*/id)arg4 queue:(id)arg5 ;
-(void)fetchDataForKey:(id)arg1 options:(unsigned)arg2 xattrs:(id)arg3 handler:(/*^block*/id)arg4 queue:(id)arg5 ;
-(void)fetchKeysPassingTest:(/*^block*/id)arg1 handler:(/*^block*/id)arg2 queue:(id)arg3 ;
-(void)removeDataForKeysPassingTest:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 queue:(id)arg3 ;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(id)_dataForKey:(id)arg1 ;
-(id)URLForKey:(id)arg1 ;
@end

