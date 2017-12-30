/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:28 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/InCallService.app/InCallService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PHCarPlayHardwareControlsBroadcaster, PHCarPlayRootContainerViewController;

@interface PHCarPlayManager : NSObject {

	PHCarPlayHardwareControlsBroadcaster* _hardwareControlsBroadcaster;
	PHCarPlayRootContainerViewController* _rootContainerViewController;

}

@property (retain) PHCarPlayHardwareControlsBroadcaster * hardwareControlsBroadcaster;              //@synthesize hardwareControlsBroadcaster=_hardwareControlsBroadcaster - In the implementation block
@property (retain) PHCarPlayRootContainerViewController * rootContainerViewController;              //@synthesize rootContainerViewController=_rootContainerViewController - In the implementation block
+(char)shouldLimitKeypadAccess;
-(PHCarPlayHardwareControlsBroadcaster *)hardwareControlsBroadcaster;
-(void)setHardwareControlsBroadcaster:(PHCarPlayHardwareControlsBroadcaster *)arg1 ;
-(PHCarPlayRootContainerViewController *)rootContainerViewController;
-(void)setRootContainerViewController:(PHCarPlayRootContainerViewController *)arg1 ;
@end

