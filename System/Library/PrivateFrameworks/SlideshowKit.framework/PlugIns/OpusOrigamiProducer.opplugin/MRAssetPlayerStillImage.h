/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:40 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <OpusOrigamiProducer/MRAssetPlayer.h>

@protocol OS_dispatch_semaphore;
@class NSObject;

@interface MRAssetPlayerStillImage : MRAssetPlayer {

	NSObject*<OS_dispatch_semaphore> _semaphore;
	char _isLoaded;
	char _isLoadingOrLoaded;

}
-(void)loadForTime:(double)arg1 ;
-(id)retainedByUserImageAtTime:(double)arg1 displayLinkTimestamp:(double)arg2 ;
-(id)initWithPath:(id)arg1 size:(CGSize)arg2 master:(id)arg3 andOptions:(id)arg4 ;
-(void)dealloc;
@end

