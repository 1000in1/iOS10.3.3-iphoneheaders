/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:29 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Magnifier.app/Magnifier
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Magnifier/Magnifier-Structs.h>
@class NSObject;

@interface MAGAutoBrightnessManager : NSObject {

	NSObject*<OS_dispatch_queue> _brightnessQueue;
	/*^block*/id _cameraBrightnessUpdateBlock;
	float* _samples;
	int _index;
	double _requestStartTime;

}
-(float)_normalizeCameraBrightness:(float)arg1 ;
-(void)requestCameraBrightnessUpdate:(/*^block*/id)arg1 ;
-(void)sampleCameraBrightnessIfNeeded:(opaqueCMSampleBufferRef)arg1 ;
-(id)init;
-(void)dealloc;
-(void)_cleanup;
@end

