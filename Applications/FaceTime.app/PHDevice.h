/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:58 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/FaceTime.app/FaceTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface PHDevice : NSObject {

	char _proximitySensorState;
	char _ringerSwitchEnabled;
	int _proximityDetectionMode;
	unsigned _ttyTransportMethod;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	int _proximitySensorStateNotifyToken;
	int _ringerStateNotifyToken;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;                               //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (assign,nonatomic) int proximityDetectionMode;                                               //@synthesize proximityDetectionMode=_proximityDetectionMode - In the implementation block
@property (assign,nonatomic) int proximitySensorStateNotifyToken;                                      //@synthesize proximitySensorStateNotifyToken=_proximitySensorStateNotifyToken - In the implementation block
@property (assign,nonatomic) int ringerStateNotifyToken;                                               //@synthesize ringerStateNotifyToken=_ringerStateNotifyToken - In the implementation block
@property (assign,nonatomic) char proximitySensorState;                                                //@synthesize proximitySensorState=_proximitySensorState - In the implementation block
@property (assign,getter=isRingerSwitchEnabled,nonatomic) char ringerSwitchEnabled;                    //@synthesize ringerSwitchEnabled=_ringerSwitchEnabled - In the implementation block
@property (assign,nonatomic) unsigned ttyTransportMethod;                                              //@synthesize ttyTransportMethod=_ttyTransportMethod - In the implementation block
@property (assign,getter=isProximitySensorEnabled,nonatomic) char proximitySensorEnabled; 
@property (nonatomic,readonly) char isTTYAvailable; 
+(id)currentDevice;
-(void)registerForProximitySensorStateNotifications;
-(void)registerForTTYTransportMethodNotifications;
-(void)unregisterForProximitySensorStateNotifications;
-(int)proximityDetectionMode;
-(void)setProximityDetectionMode:(int)arg1 ;
-(unsigned)ttyTransportMethod;
-(char)fetchProximitySensorState;
-(unsigned)fetchCurrentTTYTransportMethod;
-(int)proximitySensorStateNotifyToken;
-(void)setProximitySensorState:(char)arg1 ;
-(void)setTtyTransportMethod:(unsigned)arg1 ;
-(void)handleTTYTransportMethodChangedNotification:(id)arg1 ;
-(void)setProximitySensorStateNotifyToken:(int)arg1 ;
-(char)isProximitySensorEnabled;
-(void)setProximitySensorEnabled:(char)arg1 ;
-(char)proximitySensorState;
-(char)isRingerSwitchEnabled;
-(char)isTTYAvailable;
-(id)init;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)loadPropertiesOnConcurrentQueue;
-(unsigned long long)stateForNotifyToken:(int)arg1 ;
-(char)fetchRingerSwitchEnabled;
-(void)registerForRingerStateNotifications;
-(void)unregisterForRingerStateNotifications;
-(void)setRingerSwitchEnabled:(char)arg1 ;
-(int)ringerStateNotifyToken;
-(void)setRingerStateNotifyToken:(int)arg1 ;
@end

