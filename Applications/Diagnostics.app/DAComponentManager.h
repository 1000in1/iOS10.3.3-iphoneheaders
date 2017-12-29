/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:08 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Diagnostics.app/Diagnostics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Diagnostics/Diagnostics-Structs.h>
@class DAAudioComponent, DABluetoothComponent, DASystemComponent, DAMLBComponent, DAWiFiComponent, DAStorageComponent, DADisplayComponent, DATemperatureSensorComponent, DAProximitySensorComponent, DABarometerComponent, DATouchIDComponent, DACameraComponent, DAButtonComponent, DABasebandComponent, DAMotionCoprocessorComponent, DALightningControllerComponent, DAAccessoryComponent, DASSHBComponent, DABatteryComponent, DAMultiTouchComponent, DAGyroComponent, DAApplePayComponent, DACompassComponent, DAAccelerometerComponent, DAAmbientLightSensorComponent, DAForceTouchComponent, NSArray;

@interface DAComponentManager : NSObject {

	DAAudioComponent* _audioCodecComponent;
	DAAudioComponent* _audioComponent;
	DABluetoothComponent* _bluetoothComponent;
	DASystemComponent* _systemComponent;
	DAMLBComponent* _MLBComponent;
	DAWiFiComponent* _WiFiComponent;
	DAStorageComponent* _storageComponent;
	DADisplayComponent* _displayComponent;
	DATemperatureSensorComponent* _temperatureComponent;
	DAProximitySensorComponent* _proximitySensorComponent;
	DABarometerComponent* _barometerComponent;
	DATouchIDComponent* _touchIDComponent;
	DACameraComponent* _frontCameraComponent;
	DACameraComponent* _rearCameraComponent;
	DACameraComponent* _rearTelephotoCameraComponent;
	DAButtonComponent* _ringerButtonComponent;
	DAButtonComponent* _homeButtonComponent;
	DAButtonComponent* _volumeDecrementButtonComponent;
	DAButtonComponent* _volumeIncrementButtonComponent;
	DAButtonComponent* _sleepButtonComponent;
	DABasebandComponent* _basebandComponent;
	DAAudioComponent* _vibrationMotorComponent;
	DAMotionCoprocessorComponent* _motionCoprocessorComponent;
	DALightningControllerComponent* _lightningControllerComponent;
	DAAccessoryComponent* _miniJackAccessoryComponent;
	DAAccessoryComponent* _USBAccessoryComponent;
	DAAccessoryComponent* _smartKeyboardComponent;
	DAAccessoryComponent* _applePencilComponent;
	DAAccessoryComponent* _airPodsComponent;
	DAAccessoryComponent* _airPodsCaseComponent;
	DASSHBComponent* _SSHBComponent;
	DAAccessoryComponent* _smartBatteryCaseComponent;
	DABatteryComponent* _smartBatteryCaseBatteryComponent;
	DAMultiTouchComponent* _multiTouchComponent;
	DABatteryComponent* _batteryComponent;
	DAGyroComponent* _gyroComponent;
	DAApplePayComponent* _ApplePayComponent;
	DACompassComponent* _compassComponent;
	DAAccelerometerComponent* _accelerometerComponent;
	DAAmbientLightSensorComponent* _ambientLightSensorComponent;
	DAForceTouchComponent* _forceTouchComponent;
	DAAudioComponent* _hapticEngineComponent;
	NSArray* _components;

}

@property (nonatomic,retain) NSArray * components;                                                         //@synthesize components=_components - In the implementation block
@property (nonatomic,readonly) DAAudioComponent * audioCodecComponent;                                     //@synthesize audioCodecComponent=_audioCodecComponent - In the implementation block
@property (nonatomic,readonly) DAAudioComponent * audioComponent;                                          //@synthesize audioComponent=_audioComponent - In the implementation block
@property (nonatomic,readonly) DABluetoothComponent * bluetoothComponent;                                  //@synthesize bluetoothComponent=_bluetoothComponent - In the implementation block
@property (nonatomic,readonly) DASystemComponent * systemComponent;                                        //@synthesize systemComponent=_systemComponent - In the implementation block
@property (nonatomic,readonly) DAMLBComponent * MLBComponent;                                              //@synthesize MLBComponent=_MLBComponent - In the implementation block
@property (nonatomic,readonly) DAWiFiComponent * WiFiComponent;                                            //@synthesize WiFiComponent=_WiFiComponent - In the implementation block
@property (nonatomic,readonly) DAStorageComponent * storageComponent;                                      //@synthesize storageComponent=_storageComponent - In the implementation block
@property (nonatomic,readonly) DADisplayComponent * displayComponent;                                      //@synthesize displayComponent=_displayComponent - In the implementation block
@property (nonatomic,readonly) DATemperatureSensorComponent * temperatureComponent;                        //@synthesize temperatureComponent=_temperatureComponent - In the implementation block
@property (nonatomic,readonly) DAProximitySensorComponent * proximitySensorComponent;                      //@synthesize proximitySensorComponent=_proximitySensorComponent - In the implementation block
@property (nonatomic,readonly) DABarometerComponent * barometerComponent;                                  //@synthesize barometerComponent=_barometerComponent - In the implementation block
@property (nonatomic,readonly) DATouchIDComponent * touchIDComponent;                                      //@synthesize touchIDComponent=_touchIDComponent - In the implementation block
@property (nonatomic,readonly) DACameraComponent * frontCameraComponent;                                   //@synthesize frontCameraComponent=_frontCameraComponent - In the implementation block
@property (nonatomic,readonly) DACameraComponent * rearCameraComponent;                                    //@synthesize rearCameraComponent=_rearCameraComponent - In the implementation block
@property (nonatomic,readonly) DACameraComponent * rearTelephotoCameraComponent;                           //@synthesize rearTelephotoCameraComponent=_rearTelephotoCameraComponent - In the implementation block
@property (nonatomic,readonly) DAButtonComponent * ringerButtonComponent;                                  //@synthesize ringerButtonComponent=_ringerButtonComponent - In the implementation block
@property (nonatomic,readonly) DAButtonComponent * homeButtonComponent;                                    //@synthesize homeButtonComponent=_homeButtonComponent - In the implementation block
@property (nonatomic,readonly) DAButtonComponent * volumeDecrementButtonComponent;                         //@synthesize volumeDecrementButtonComponent=_volumeDecrementButtonComponent - In the implementation block
@property (nonatomic,readonly) DAButtonComponent * volumeIncrementButtonComponent;                         //@synthesize volumeIncrementButtonComponent=_volumeIncrementButtonComponent - In the implementation block
@property (nonatomic,readonly) DAButtonComponent * sleepButtonComponent;                                   //@synthesize sleepButtonComponent=_sleepButtonComponent - In the implementation block
@property (nonatomic,readonly) DABasebandComponent * basebandComponent;                                    //@synthesize basebandComponent=_basebandComponent - In the implementation block
@property (nonatomic,readonly) DAAudioComponent * vibrationMotorComponent;                                 //@synthesize vibrationMotorComponent=_vibrationMotorComponent - In the implementation block
@property (nonatomic,readonly) DAMotionCoprocessorComponent * motionCoprocessorComponent;                  //@synthesize motionCoprocessorComponent=_motionCoprocessorComponent - In the implementation block
@property (nonatomic,readonly) DALightningControllerComponent * lightningControllerComponent;              //@synthesize lightningControllerComponent=_lightningControllerComponent - In the implementation block
@property (nonatomic,readonly) DAAccessoryComponent * miniJackAccessoryComponent;                          //@synthesize miniJackAccessoryComponent=_miniJackAccessoryComponent - In the implementation block
@property (nonatomic,readonly) DAAccessoryComponent * USBAccessoryComponent;                               //@synthesize USBAccessoryComponent=_USBAccessoryComponent - In the implementation block
@property (nonatomic,readonly) DAAccessoryComponent * smartKeyboardComponent;                              //@synthesize smartKeyboardComponent=_smartKeyboardComponent - In the implementation block
@property (nonatomic,readonly) DAAccessoryComponent * applePencilComponent;                                //@synthesize applePencilComponent=_applePencilComponent - In the implementation block
@property (nonatomic,readonly) DAAccessoryComponent * airPodsComponent;                                    //@synthesize airPodsComponent=_airPodsComponent - In the implementation block
@property (nonatomic,readonly) DAAccessoryComponent * airPodsCaseComponent;                                //@synthesize airPodsCaseComponent=_airPodsCaseComponent - In the implementation block
@property (setter=SHBComponent,nonatomic,readonly) DASSHBComponent * SSHBComponent;                        //@synthesize SSHBComponent=_SSHBComponent - In the implementation block
@property (nonatomic,readonly) DAAccessoryComponent * smartBatteryCaseComponent;                           //@synthesize smartBatteryCaseComponent=_smartBatteryCaseComponent - In the implementation block
@property (nonatomic,readonly) DABatteryComponent * smartBatteryCaseBatteryComponent;                      //@synthesize smartBatteryCaseBatteryComponent=_smartBatteryCaseBatteryComponent - In the implementation block
@property (nonatomic,readonly) DAMultiTouchComponent * multiTouchComponent;                                //@synthesize multiTouchComponent=_multiTouchComponent - In the implementation block
@property (nonatomic,readonly) DABatteryComponent * batteryComponent;                                      //@synthesize batteryComponent=_batteryComponent - In the implementation block
@property (nonatomic,readonly) DAGyroComponent * gyroComponent;                                            //@synthesize gyroComponent=_gyroComponent - In the implementation block
@property (nonatomic,readonly) DAApplePayComponent * ApplePayComponent;                                    //@synthesize ApplePayComponent=_ApplePayComponent - In the implementation block
@property (nonatomic,readonly) DACompassComponent * compassComponent;                                      //@synthesize compassComponent=_compassComponent - In the implementation block
@property (nonatomic,readonly) DAAccelerometerComponent * accelerometerComponent;                          //@synthesize accelerometerComponent=_accelerometerComponent - In the implementation block
@property (nonatomic,readonly) DAAmbientLightSensorComponent * ambientLightSensorComponent;                //@synthesize ambientLightSensorComponent=_ambientLightSensorComponent - In the implementation block
@property (nonatomic,readonly) DAForceTouchComponent * forceTouchComponent;                                //@synthesize forceTouchComponent=_forceTouchComponent - In the implementation block
@property (nonatomic,readonly) DAAudioComponent * hapticEngineComponent;                                   //@synthesize hapticEngineComponent=_hapticEngineComponent - In the implementation block
+(id)sharedInstance;
-(DASystemComponent *)systemComponent;
-(DABasebandComponent *)basebandComponent;
-(id)profileWithFilter:(NSDictionary*)arg1 ;
-(id)addComponent:(id)arg1 toArray:(id)arg2 ;
-(DAAudioComponent *)audioCodecComponent;
-(DABluetoothComponent *)bluetoothComponent;
-(DAMLBComponent *)MLBComponent;
-(DAWiFiComponent *)WiFiComponent;
-(DAStorageComponent *)storageComponent;
-(DADisplayComponent *)displayComponent;
-(DATemperatureSensorComponent *)temperatureComponent;
-(DAProximitySensorComponent *)proximitySensorComponent;
-(DABarometerComponent *)barometerComponent;
-(DATouchIDComponent *)touchIDComponent;
-(DACameraComponent *)frontCameraComponent;
-(DACameraComponent *)rearCameraComponent;
-(DACameraComponent *)rearTelephotoCameraComponent;
-(DAButtonComponent *)ringerButtonComponent;
-(DAButtonComponent *)homeButtonComponent;
-(DAButtonComponent *)volumeDecrementButtonComponent;
-(DAButtonComponent *)volumeIncrementButtonComponent;
-(DAButtonComponent *)sleepButtonComponent;
-(DAAudioComponent *)vibrationMotorComponent;
-(DAMotionCoprocessorComponent *)motionCoprocessorComponent;
-(DALightningControllerComponent *)lightningControllerComponent;
-(DAAccessoryComponent *)miniJackAccessoryComponent;
-(DAAccessoryComponent *)USBAccessoryComponent;
-(DAAccessoryComponent *)smartKeyboardComponent;
-(DAAccessoryComponent *)applePencilComponent;
-(DAAccessoryComponent *)airPodsComponent;
-(DAAccessoryComponent *)airPodsCaseComponent;
-(DASSHBComponent *)SSHBComponent;
-(DAAccessoryComponent *)smartBatteryCaseComponent;
-(DABatteryComponent *)smartBatteryCaseBatteryComponent;
-(DAMultiTouchComponent *)multiTouchComponent;
-(DABatteryComponent *)batteryComponent;
-(DAGyroComponent *)gyroComponent;
-(DAApplePayComponent *)ApplePayComponent;
-(DACompassComponent *)compassComponent;
-(DAAccelerometerComponent *)accelerometerComponent;
-(DAAmbientLightSensorComponent *)ambientLightSensorComponent;
-(DAForceTouchComponent *)forceTouchComponent;
-(DAAudioComponent *)hapticEngineComponent;
-(id)init;
-(NSArray *)components;
-(void)setComponents:(NSArray *)arg1 ;
-(id)profile;
-(DAAudioComponent *)audioComponent;
@end
