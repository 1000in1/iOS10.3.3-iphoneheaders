/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:06 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXHearingSupport.framework/AXHearingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXHearingSupport/AXHearingAidDevice.h>

@class NSMutableArray, NSString, NSArray, NSDate;

@interface AXFakeHearingAidDevice : AXHearingAidDevice {

	NSMutableArray* _leftFakePrograms;
	NSMutableArray* _rightFakePrograms;
	/*^block*/id _writeBlock;
	char _isConnecting;
	char _connected;
	short _leftMicrophoneVolumeSteps;
	short _rightMicrophoneVolumeSteps;
	NSString* _name;
	NSArray* _manufacturer;
	NSArray* _model;
	NSString* _leftUUID;
	NSString* _rightUUID;
	float _rightBatteryLevel;
	float _leftBatteryLevel;
	NSString* _leftFirmwareVersion;
	NSString* _rightFirmwareVersion;
	NSString* _leftHardwareVersion;
	NSString* _rightHardwareVersion;
	NSDate* _leftBatteryLowDate;
	NSDate* _rightBatteryLowDate;
	int _type;
	unsigned long long _excludedProperties;

}

@property (assign,nonatomic) int type;                                           //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) char connected;                                     //@synthesize connected=_connected - In the implementation block
@property (nonatomic,retain) NSString * name;                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSArray * manufacturer;                             //@synthesize manufacturer=_manufacturer - In the implementation block
@property (nonatomic,retain) NSArray * model;                                    //@synthesize model=_model - In the implementation block
@property (nonatomic,retain) NSString * leftUUID;                                //@synthesize leftUUID=_leftUUID - In the implementation block
@property (nonatomic,retain) NSString * rightUUID;                               //@synthesize rightUUID=_rightUUID - In the implementation block
@property (assign,nonatomic) float rightBatteryLevel;                            //@synthesize rightBatteryLevel=_rightBatteryLevel - In the implementation block
@property (assign,nonatomic) float leftBatteryLevel;                             //@synthesize leftBatteryLevel=_leftBatteryLevel - In the implementation block
@property (assign,nonatomic) char isConnecting;                                  //@synthesize isConnecting=_isConnecting - In the implementation block
@property (nonatomic,retain) NSString * leftFirmwareVersion;                     //@synthesize leftFirmwareVersion=_leftFirmwareVersion - In the implementation block
@property (nonatomic,retain) NSString * rightFirmwareVersion;                    //@synthesize rightFirmwareVersion=_rightFirmwareVersion - In the implementation block
@property (nonatomic,retain) NSString * leftHardwareVersion;                     //@synthesize leftHardwareVersion=_leftHardwareVersion - In the implementation block
@property (nonatomic,retain) NSString * rightHardwareVersion;                    //@synthesize rightHardwareVersion=_rightHardwareVersion - In the implementation block
@property (nonatomic,retain) NSDate * leftBatteryLowDate;                        //@synthesize leftBatteryLowDate=_leftBatteryLowDate - In the implementation block
@property (nonatomic,retain) NSDate * rightBatteryLowDate;                       //@synthesize rightBatteryLowDate=_rightBatteryLowDate - In the implementation block
@property (assign,nonatomic) short leftMicrophoneVolumeSteps;                    //@synthesize leftMicrophoneVolumeSteps=_leftMicrophoneVolumeSteps - In the implementation block
@property (assign,nonatomic) short rightMicrophoneVolumeSteps;                   //@synthesize rightMicrophoneVolumeSteps=_rightMicrophoneVolumeSteps - In the implementation block
@property (assign,nonatomic) unsigned long long excludedProperties;              //@synthesize excludedProperties=_excludedProperties - In the implementation block
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setType:(int)arg1 ;
-(int)type;
-(char)isPersistent;
-(NSArray *)model;
-(void)connect;
-(id)valueForProperty:(unsigned long long)arg1 ;
-(void)disconnect;
-(NSArray *)manufacturer;
-(void)setManufacturer:(NSArray *)arg1 ;
-(char)isConnected;
-(void)persist;
-(void)setConnected:(char)arg1 ;
-(char)connected;
-(void)setValue:(id)arg1 forProperty:(unsigned long long)arg2 ;
-(char)isConnecting;
-(void)setModel:(NSArray *)arg1 ;
-(char)leftAvailable;
-(char)rightAvailable;
-(char)isLeftConnected;
-(float)leftBatteryLevel;
-(char)isRightConnected;
-(float)rightBatteryLevel;
-(void)setLeftUUID:(NSString *)arg1 ;
-(void)setRightUUID:(NSString *)arg1 ;
-(NSString *)leftUUID;
-(NSString *)rightUUID;
-(void)setLeftFirmwareVersion:(NSString *)arg1 ;
-(void)setRightFirmwareVersion:(NSString *)arg1 ;
-(void)setLeftHardwareVersion:(NSString *)arg1 ;
-(void)setRightHardwareVersion:(NSString *)arg1 ;
-(void)setLeftBatteryLowDate:(NSDate *)arg1 ;
-(void)setRightBatteryLowDate:(NSDate *)arg1 ;
-(short)leftMicrophoneVolumeSteps;
-(short)rightMicrophoneVolumeSteps;
-(id)leftPrograms;
-(id)rightPrograms;
-(char)programsListsAreEqual;
-(char)propertyIsAvailable:(unsigned long long)arg1 forEar:(int)arg2 ;
-(char)showCombinedPrograms;
-(char)didLoadRequiredProperties;
-(void)setLeftBatteryLevel:(float)arg1 ;
-(void)setRightBatteryLevel:(float)arg1 ;
-(void)setLeftMicrophoneVolumeSteps:(short)arg1 ;
-(void)setRightMicrophoneVolumeSteps:(short)arg1 ;
-(NSString *)leftFirmwareVersion;
-(NSString *)rightFirmwareVersion;
-(NSString *)leftHardwareVersion;
-(NSString *)rightHardwareVersion;
-(NSDate *)leftBatteryLowDate;
-(NSDate *)rightBatteryLowDate;
-(char)hasConnection;
-(char)didLoadBasicProperties;
-(void)setIsConnecting:(char)arg1 ;
-(id)persistentRepresentation;
-(void)writeInt:(unsigned char)arg1 toEar:(int)arg2 forProperty:(unsigned long long)arg3 ;
-(void)writeSignedInt:(char)arg1 toEar:(int)arg2 forProperty:(unsigned long long)arg3 ;
-(unsigned long long)availablePropertiesForPeripheral:(id)arg1 ;
-(id)initWithDeviceType:(int)arg1 ;
-(id)manufacturerForType;
-(id)modelForType;
-(void)createPrograms;
-(unsigned long long)excludedProperties;
-(void)registerWriteBlock:(/*^block*/id)arg1 ;
-(void)setNewName:(id)arg1 ;
-(void)setExcludedProperties:(unsigned long long)arg1 ;
@end
