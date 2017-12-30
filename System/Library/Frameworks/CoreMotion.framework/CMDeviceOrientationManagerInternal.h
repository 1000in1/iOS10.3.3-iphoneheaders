/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:40 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSOperationQueue, NSObject;

@interface CMDeviceOrientationManagerInternal : NSObject {

	os_unfair_lock_s fSampleLock;
	Dispatcher* fDeviceOrientationDispatcher;
	/*^block*/id fDeviceOrientationHandler;
	NSOperationQueue* fDeviceOrientationQueue;
	NSObject*<OS_dispatch_semaphore> fDeviceOrientationSemaphore;
	char fDidSignalSemaphore;
	int fOrientationCallbackMode;
	BOOL fEnableOrientationNotification;
	Sample fLatestDeviceOrientationSample;
	Sample fLastSignificantOrientationSample;

}
-(id)init;
-(void)dealloc;
@end

