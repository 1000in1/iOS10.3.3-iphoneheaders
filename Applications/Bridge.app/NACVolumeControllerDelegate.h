/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:46 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NACVolumeControllerDelegate <NSObject>
@optional
-(void)volumeControllerDidUpdateMutedState:(id)arg1;
-(void)volumeControllerDidUpdateEUVolumeLimit:(id)arg1;
-(void)volumeControllerDidUpdateVolumeWarningEnabled:(id)arg1;
-(void)volumeControllerDidUpdateHapticIntensity:(id)arg1;
-(void)volumeControllerDidUpdateSystemMutedState:(id)arg1;
-(void)volumeControllerDidUpdateProminentHapticState:(id)arg1;

@required
-(void)volumeControllerDidUpdateVolumeControlAvailibility:(id)arg1;
-(void)volumeControllerDidUpdateVolumeValue:(id)arg1;

@end

