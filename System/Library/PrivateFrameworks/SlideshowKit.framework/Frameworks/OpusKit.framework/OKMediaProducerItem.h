/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:37 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OKMediaItem.h>

@class OKProducerPlugin;

@interface OKMediaProducerItem : OKMediaItem {

	OKProducerPlugin* _plugin;

}
+(id)scheme;
+(id)urlForMediaObject:(id)arg1 ;
+(id)urlForProducerPluginIdentifier:(id)arg1 andResourcePath:(id)arg2 ;
-(void)dealloc;
-(void)setMediaObject:(id)arg1 ;
-(id)mediaObject;
-(id)resourceURLWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)importMediaToDirectoryURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)createMetadataWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)createThumbnailImageForResolution:(unsigned)arg1 withMetadata:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(char)wantsTemporaryDiskCache;
-(char)wantsDiskCachedMetadata;
-(char)wantsDiskCachedThumbnailForResolution:(unsigned)arg1 ;
-(id)parseDate:(id)arg1 ;
-(id)_fileURL;
-(id)initWithProducerPluginIdentifier:(id)arg1 andResourcePath:(id)arg2 ;
@end

