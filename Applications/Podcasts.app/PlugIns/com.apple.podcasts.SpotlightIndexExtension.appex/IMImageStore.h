/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:23 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Podcasts.app/PlugIns/com.apple.podcasts.SpotlightIndexExtension.appex/com.apple.podcasts.SpotlightIndexExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <com.apple.podcasts.SpotlightIndexExtension/com.apple.podcasts.SpotlightIndexExtension-Structs.h>
#import <com.apple.podcasts.SpotlightIndexExtension/IMCache.h>

@class NSString, IMMemoryCache, IMImageDiskCache;

@interface IMImageStore : NSObject <IMCache> {

	NSString* _name;
	IMMemoryCache* _memoryCache;
	IMImageDiskCache* _diskCache;

}

@property (nonatomic,copy) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) IMMemoryCache * memoryCache;               //@synthesize memoryCache=_memoryCache - In the implementation block
@property (nonatomic,readonly) IMImageDiskCache * diskCache;              //@synthesize diskCache=_diskCache - In the implementation block
@property (assign,nonatomic) char disableMemoryCache; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultBasePath;
+(float)defaultMaxImageSize;
+(unsigned)_memorySize;
+(id)defaultName;
+(id)defaultStore;
-(id)initWithName:(id)arg1 basePath:(id)arg2 maxImageSize:(float)arg3 ;
-(void)setDisableMemoryCache:(char)arg1 ;
-(void)addImage:(id)arg1 forKey:(id)arg2 ;
-(id)_keyForSize:(CGSize)arg1 withBaseKey:(id)arg2 ;
-(IMImageDiskCache *)diskCache;
-(id)imageForKey:(id)arg1 size:(CGSize)arg2 ;
-(char)hasItemForKey:(id)arg1 ;
-(id)initWithName:(id)arg1 basePath:(id)arg2 ;
-(void)configureMemoryCache;
-(void)memoryWarning;
-(void)_addImage:(id)arg1 toMemoryCacheWithKey:(id)arg2 ;
-(id)_loadDiskCacheImageForKey:(id)arg1 ;
-(id)imageForKey:(id)arg1 size:(CGSize)arg2 resizeOptions:(int)arg3 ;
-(void)removeItemsWithPrefx:(id)arg1 ;
-(void)removeItemForKey:(id)arg1 ;
-(char)disableMemoryCache;
-(void)asyncAddImage:(id)arg1 forKey:(id)arg2 ;
-(id)imageInMemoryForKey:(id)arg1 size:(CGSize)arg2 ;
-(void)asyncImageForKey:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)asyncImageForKey:(id)arg1 size:(CGSize)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)asyncImageForKey:(id)arg1 size:(CGSize)arg2 resizeOptions:(int)arg3 completionHandler:(/*^block*/id)arg4 ;
-(char)hasItemForKey:(id)arg1 size:(CGSize)arg2 ;
-(id)init;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(char)isEmpty;
-(id)initWithName:(id)arg1 ;
-(void)clearCache;
-(id)imageForKey:(id)arg1 ;
-(id)fullName;
-(IMMemoryCache *)memoryCache;
@end

