/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:22:38 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/AccessoryUpdaterBundles/StandaloneHIDFudPlugins.bundle/StandaloneHIDFudPlugins
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FudPluginDelegate, OS_os_log;
#import <StandaloneHIDFudPlugins/StandaloneHIDFudPlugins-Structs.h>
@class NSMutableDictionary, NSDictionary, NSObject, NSString;

@interface SHFUDevice : NSObject {

	IOHIDDeviceRef _deviceRef;
	char _useFWUpdateReportIDs;
	char _sendOffsets;
	char _sendUberInitAndCommit;
	unsigned char _protocolVersion;
	unsigned short _hardwareVersion;
	unsigned short _productID;
	unsigned short _vendorID;
	unsigned short _primaryUsage;
	unsigned short _primaryUsagePage;
	unsigned short _writeBufferSize;
	unsigned short _updateFlags;
	NSMutableDictionary* _fwVersions;
	NSDictionary* _powerSource;
	id<FudPluginDelegate> _delegate;
	NSObject*<OS_os_log> _logHandle;
	unsigned _locationID;
	NSString* _deviceAddress;
	NSString* _serialNumber;
	NSString* _errorDomain;
	NSString* _className;
	NSString* _productName;
	NSString* _transport;

}

@property (nonatomic,copy) NSString * errorDomain;                               //@synthesize errorDomain=_errorDomain - In the implementation block
@property (nonatomic,copy) NSString * className;                                 //@synthesize className=_className - In the implementation block
@property (nonatomic,copy) NSString * productName;                               //@synthesize productName=_productName - In the implementation block
@property (nonatomic,copy) NSString * transport;                                 //@synthesize transport=_transport - In the implementation block
@property (nonatomic,readonly) unsigned short productID;                         //@synthesize productID=_productID - In the implementation block
@property (nonatomic,readonly) unsigned short vendorID;                          //@synthesize vendorID=_vendorID - In the implementation block
@property (nonatomic,readonly) unsigned short primaryUsage;                      //@synthesize primaryUsage=_primaryUsage - In the implementation block
@property (nonatomic,readonly) unsigned short primaryUsagePage;                  //@synthesize primaryUsagePage=_primaryUsagePage - In the implementation block
@property (nonatomic,readonly) char useFWUpdateReportIDs;                        //@synthesize useFWUpdateReportIDs=_useFWUpdateReportIDs - In the implementation block
@property (nonatomic,readonly) char sendOffsets;                                 //@synthesize sendOffsets=_sendOffsets - In the implementation block
@property (nonatomic,readonly) char sendUberInitAndCommit;                       //@synthesize sendUberInitAndCommit=_sendUberInitAndCommit - In the implementation block
@property (nonatomic,readonly) unsigned short writeBufferSize;                   //@synthesize writeBufferSize=_writeBufferSize - In the implementation block
@property (nonatomic,readonly) unsigned short updateFlags;                       //@synthesize updateFlags=_updateFlags - In the implementation block
@property (nonatomic,readonly) unsigned char protocolVersion;                    //@synthesize protocolVersion=_protocolVersion - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * fwVersions;                 //@synthesize fwVersions=_fwVersions - In the implementation block
@property (assign,nonatomic,__weak) id<FudPluginDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<OS_os_log> logHandle;              //@synthesize logHandle=_logHandle - In the implementation block
@property (nonatomic,readonly) unsigned short hardwareVersion;                   //@synthesize hardwareVersion=_hardwareVersion - In the implementation block
@property (assign,nonatomic) unsigned locationID;                                //@synthesize locationID=_locationID - In the implementation block
@property (nonatomic,retain) NSDictionary * powerSource;                         //@synthesize powerSource=_powerSource - In the implementation block
@property (nonatomic,readonly) int batteryCapacity; 
@property (nonatomic,readonly) char batteryIsCharging; 
@property (nonatomic,readonly) NSString * deviceAddress;                         //@synthesize deviceAddress=_deviceAddress - In the implementation block
@property (nonatomic,readonly) NSString * serialNumber;                          //@synthesize serialNumber=_serialNumber - In the implementation block
+(id)getDevices:(id)arg1 logHandle:(id)arg2 withVendorID:(int)arg3 productID:(int)arg4 errorDomain:(id)arg5 error:(id*)arg6 ;
+(id)getDevicesWithMatchingDict:(CFDictionaryRef)arg1 errorDomain:(id)arg2 error:(id*)arg3 delegate:(id)arg4 logHandle:(id)arg5 ;
+(id)getDevices:(id)arg1 logHandle:(id)arg2 registryEntryID:(id)arg3 errorDomain:(id)arg4 error:(id*)arg5 ;
+(id)sendAllFirmwaresToDeviceWithVendorID:(id)arg1 productID:(id)arg2 parsers:(id)arg3 totalPrepareBytes:(unsigned)arg4 bytesSent:(unsigned*)arg5 featureReportDelay:(id)arg6 logHandle:(id)arg7 pluginDelegate:(id)arg8 errorDomain:(id)arg9 ;
+(char)ignoreVersionCheck;
+(id)getStringPropertyFromService:(unsigned)arg1 withKey:(CFStringRef)arg2 ;
+(id)getNumberPropertyFromService:(unsigned)arg1 withKey:(CFStringRef)arg2 ;
+(void)registerForMatchNotificationWithVendorID:(id)arg1 productID:(id)arg2 ;
+(void)setIgnoreVersionCheck:(char)arg1 ;
-(id)auErrorString:(unsigned char)arg1 ;
-(char)sendOffsets;
-(unsigned short)primaryUsage;
-(int)batteryCapacity;
-(void)logVersions:(id)arg1 ;
-(id)ioReturnString:(int)arg1 ;
-(NSMutableDictionary *)fwVersions;
-(char)firmwareVersionsEqualTo:(id)arg1 ;
-(id)initWithDeviceRef:(unsigned)arg1 delegate:(id)arg2 logHandle:(id)arg3 errorDomain:(id)arg4 ;
-(id)sendAllFirmwaresToDevice:(id)arg1 totalPrepareBytes:(unsigned)arg2 bytesSent:(unsigned*)arg3 featureReportDelay:(id)arg4 ;
-(id)commitAllFirmwares;
-(char)hardwareVersionSupportedBy:(id)arg1 ;
-(char)firmwareVersionsOlderThan:(id)arg1 ;
-(unsigned)getTotalFirmwareBytes:(id)arg1 ;
-(id)initWithDeviceRef:(unsigned)arg1 delegate:(id)arg2 logHandle:(id)arg3 errorDomain:(id)arg4 buffer:(char*)arg5 bufferLength:(unsigned long)arg6 ;
-(unsigned short)primaryUsagePage;
-(char)useFWUpdateReportIDs;
-(char)sendUberInitAndCommit;
-(int)setReportID:(unsigned char)arg1 buffer:(char*)arg2 length:(unsigned long)arg3 ;
-(char)shouldInstallFW:(id)arg1 ;
-(id)sendSingleFirmwareToDevice:(id)arg1 totalPrepareBytes:(unsigned)arg2 bytesSent:(unsigned*)arg3 featureReportDelay:(id)arg4 ;
-(id)latestFirmwareForHardware:(id)arg1 ;
-(int)getReportID:(unsigned char)arg1 buffer:(char*)arg2 length:(unsigned*)arg3 ;
-(char)batteryIsCharging;
-(id)init;
-(void)setDelegate:(id<FudPluginDelegate>)arg1 ;
-(void)dealloc;
-(id)description;
-(id<FudPluginDelegate>)delegate;
-(void)reset;
-(NSString *)className;
-(NSDictionary *)powerSource;
-(void)setPowerSource:(NSDictionary *)arg1 ;
-(unsigned char)protocolVersion;
-(NSString *)productName;
-(void)setProductName:(NSString *)arg1 ;
-(NSString *)errorDomain;
-(void)setErrorDomain:(NSString *)arg1 ;
-(void)setClassName:(NSString *)arg1 ;
-(unsigned short)updateFlags;
-(unsigned short)productID;
-(unsigned short)vendorID;
-(NSString *)serialNumber;
-(NSObject*<OS_os_log>)logHandle;
-(unsigned)locationID;
-(unsigned short)writeBufferSize;
-(unsigned short)hardwareVersion;
-(NSString *)transport;
-(void)setTransport:(NSString *)arg1 ;
-(NSString *)deviceAddress;
-(void)setLocationID:(unsigned)arg1 ;
-(void)setLogHandle:(NSObject*<OS_os_log>)arg1 ;
@end

