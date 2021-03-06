/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:07 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
#import <UIKit/UIKit-Structs.h>
@class NSObject, NSData;

@interface _UIDecompressionInfo : NSObject {

	unsigned long jpegDecodeRequestID;
	NSObject*<OS_dispatch_semaphore> syncSemaphore;
	NSObject*<OS_dispatch_semaphore> metadataSemaphore;
	NSData* imageData;
	CGSize maxSize;
	int renderingIntent;
	char decompressionComplete;
	char metadataComplete;

}
-(id)initWithData:(id)arg1 maxSize:(CGSize)arg2 renderingIntent:(int)arg3 ;
@end

