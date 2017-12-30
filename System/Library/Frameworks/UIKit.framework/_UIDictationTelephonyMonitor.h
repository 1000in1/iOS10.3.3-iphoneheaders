/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:28 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, NSObject;
@class NSObject, CTCallCenter, IMAVCallManager;

@interface _UIDictationTelephonyMonitor : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	CTCallCenter* _callCentre;
	IMAVCallManager* _facetimeCallManager;
	id<NSObject> _notificationToken;
	char _telephonyActivity;
	/*^block*/id _activityChanged;

}

@property (nonatomic,readonly) char telephonyActivity;              //@synthesize telephonyActivity=_telephonyActivity - In the implementation block
@property (copy) id activityChanged;                                //@synthesize activityChanged=_activityChanged - In the implementation block
-(id)init;
-(void)dealloc;
-(void)start;
-(void)_backgroundInit;
-(void)_backgroundReset;
-(id)activityChanged;
-(char)telephonyActivity;
-(void)setActivityChanged:(id)arg1 ;
@end

