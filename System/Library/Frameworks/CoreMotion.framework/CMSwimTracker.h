/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:40 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CMSwimTrackerInternal;

@interface CMSwimTracker : NSObject {

	CMSwimTrackerInternal* _internal;

}

@property (nonatomic,readonly) CMSwimTrackerInternal * _internal;              //@synthesize internal=_internal - In the implementation block
+(unsigned)maxSwimDataEntries;
+(char)isAvailable;
-(id)init;
-(void)dealloc;
-(CMSwimTrackerInternal *)_internal;
-(void)startUpdatesFromRecord:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)stopUpdates;
-(void)querySwimUpdatesFromRecord:(id)arg1 handler:(/*^block*/id)arg2 ;
@end

