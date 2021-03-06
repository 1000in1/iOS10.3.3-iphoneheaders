/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:17 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/FindMyiPhone.app/FindMyiPhone
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCacheDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString, NSMutableDictionary, NSMutableSet;

@interface DeviceImageManager : NSObject <NSCacheDelegate> {

	NSObject*<OS_dispatch_queue> cache_dq;
	float _deviceScale;
	NSString* _scaleSuffix;
	NSMutableDictionary* _imageCache;
	NSMutableSet* _missingImageURLs;

}

@property (assign,nonatomic) float deviceScale;                             //@synthesize deviceScale=_deviceScale - In the implementation block
@property (nonatomic,retain) NSString * scaleSuffix;                        //@synthesize scaleSuffix=_scaleSuffix - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * imageCache;              //@synthesize imageCache=_imageCache - In the implementation block
@property (nonatomic,retain) NSMutableSet * missingImageURLs;               //@synthesize missingImageURLs=_missingImageURLs - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)imageForDevice:(id)arg1 size:(int)arg2 variant:(int)arg3 ;
-(id)imageURLForDevice:(id)arg1 size:(int)arg2 variant:(int)arg3 ;
-(void)preloadImageURL:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)setDeviceScale:(float)arg1 ;
-(float)deviceScale;
-(void)setScaleSuffix:(NSString *)arg1 ;
-(id)imageURLForDeviceClass:(id)arg1 deviceModel:(id)arg2 deviceColor:(id)arg3 size:(int)arg4 variant:(int)arg5 ;
-(id)_imageBaseURL;
-(NSString *)scaleSuffix;
-(id)imageFromRawData:(id)arg1 ;
-(void)reportMissingImage:(id)arg1 ;
-(id)placeholderImageOfSize:(int)arg1 ;
-(NSMutableSet *)missingImageURLs;
-(void)setMissingImageURLs:(NSMutableSet *)arg1 ;
-(void)loadImageForDeviceClass:(id)arg1 deviceModel:(id)arg2 deviceColor:(id)arg3 size:(int)arg4 variant:(int)arg5 completion:(/*^block*/id)arg6 ;
-(void)preloadIconImagesWithCallback:(/*^block*/id)arg1 ;
-(id)deviceImageClassForDeviceClass:(id)arg1 ;
-(id)init;
-(NSMutableDictionary *)imageCache;
-(void)setImageCache:(NSMutableDictionary *)arg1 ;
@end

