/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 1:10:36 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSUProgress.h>

@protocol OS_dispatch_queue;
@class TSUScaledProgressStorage, TSUProgress, NSObject;

@interface TSUScaledProgress : TSUProgress {

	TSUScaledProgressStorage* mStorage;
	TSUProgress* mProgress;
	id mProgressObserver;
	NSObject*<OS_dispatch_queue> mProgressQueue;

}

@property (retain) TSUProgress * progress; 
@property (assign) double maxValue; 
-(id)init;
-(void)dealloc;
-(double)value;
-(void)setProgress:(TSUProgress *)arg1 ;
-(TSUProgress *)progress;
-(void)removeProgressObserver:(id)arg1 ;
-(char)isIndeterminate;
-(double)maxValue;
-(void)setMaxValue:(double)arg1 ;
-(id)addProgressObserverWithValueInterval:(double)arg1 queue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)p_removeProgressObserverFromProgressInQueue;
-(void)p_addProgressObserverToProgressInQueue;
@end

