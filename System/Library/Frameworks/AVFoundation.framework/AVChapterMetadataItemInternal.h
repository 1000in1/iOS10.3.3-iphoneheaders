/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:37:14 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSObjectNSCopying, OS_dispatch_queue;
#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference, NSString, NSMutableArray, NSObject;

@interface AVChapterMetadataItemInternal : NSObject {

	AVWeakReference* weakReference;
	OpaqueFigAssetRef figAsset;
	long chapterGroupIndex;
	long chapterIndex;
	NSString* chapterType;
	NSString* extendedLanguageTag;
	NSString* languageCode;
	NSString* chapterDataType;
	id<NSObject><NSCopying> value;
	SCD_Struct_AV2 time;
	SCD_Struct_AV2 duration;
	int valueStatus;
	long valueErrorCode;
	NSMutableArray* completions;
	NSObject*<OS_dispatch_queue> readWriteQueue;

}
@end
