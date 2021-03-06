/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:42 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class AVAssetInspectorLoader, AVAssetClientURLRequestHelper, NSURL, NSArray, AVAssetResourceLoader, AVAssetCache, NSObject, NSDictionary, AVWeakReference;

@interface AVURLAssetInternal : NSObject {

	AVAssetInspectorLoader* loader;
	AVAssetClientURLRequestHelper* URLRequestHelper;
	NSURL* URL;
	NSArray* tracks;
	AVAssetResourceLoader* resourceLoader;
	long makeOneResourceLoaderOnly;
	AVAssetCache* assetCache;
	long makeOneAssetDownloadCacheOnly;
	NSObject*<OS_dispatch_queue> tracksAccessQueue;
	NSDictionary* initializationOptions;
	char hasInstanceIdentifierMapping;
	AVWeakReference* sessionReference;

}
@end

