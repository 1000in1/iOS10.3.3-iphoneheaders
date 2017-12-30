/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:40:39 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/UserEventPlugins/ADEventListenerPlugin.plugin/ADEventListenerPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ADApplicationStateChangeEventListener, ADPowerEventListener, PLAggregateLogger;

@interface ADEventListener : NSObject {

	ADApplicationStateChangeEventListener* _appStateChangeEventListener;
	ADPowerEventListener* _powerEventListener;
	PLAggregateLogger* _aggregateLogger;

}
-(void)registerForThermalNotification;
-(void)dealloc;
-(id)initWithQueue:(id)arg1 ;
@end

