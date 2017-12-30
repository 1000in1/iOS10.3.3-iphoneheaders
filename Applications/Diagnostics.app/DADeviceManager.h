/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:54 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Diagnostics.app/Diagnostics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Diagnostics/DAAccessoryInformationManagerDelegate.h>

@class NSMutableArray, NSSet, NSMutableSet, DAAccessoryInformationManager, NSString;

@interface DADeviceManager : NSObject <DAAccessoryInformationManagerDelegate> {

	char _forceSelectableAppleWatch;
	char _didAddInitalDevices;
	NSMutableArray* _mutableDevices;
	NSSet* _selectableSerialNumbers;
	NSMutableSet* _selectableProducts;
	DAAccessoryInformationManager* _accessoryManager;

}

@property (nonatomic,retain) NSMutableArray * mutableDevices;                               //@synthesize mutableDevices=_mutableDevices - In the implementation block
@property (nonatomic,retain) NSSet * selectableSerialNumbers;                               //@synthesize selectableSerialNumbers=_selectableSerialNumbers - In the implementation block
@property (nonatomic,retain) NSMutableSet * selectableProducts;                             //@synthesize selectableProducts=_selectableProducts - In the implementation block
@property (assign,nonatomic) char forceSelectableAppleWatch;                                //@synthesize forceSelectableAppleWatch=_forceSelectableAppleWatch - In the implementation block
@property (nonatomic,retain) DAAccessoryInformationManager * accessoryManager;              //@synthesize accessoryManager=_accessoryManager - In the implementation block
@property (assign,nonatomic) char didAddInitalDevices;                                      //@synthesize didAddInitalDevices=_didAddInitalDevices - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)accessoryDidConnect:(unsigned)arg1 ;
-(void)accessoryDidDisconnectWithSerialNumber:(id)arg1 ;
-(char)didAddInitalDevices;
-(id)discoverPairedAccessories;
-(NSMutableArray *)mutableDevices;
-(void)setDidAddInitalDevices:(char)arg1 ;
-(void)nanoRegistryDevicePaired:(id)arg1 ;
-(void)nanoRegistryDeviceUnpaired:(id)arg1 ;
-(DAAccessoryInformationManager *)accessoryManager;
-(char)forceSelectableAppleWatch;
-(NSSet *)selectableSerialNumbers;
-(NSMutableSet *)selectableProducts;
-(void)setSelectableSerialNumbers:(NSSet *)arg1 ;
-(id)parseRequiredSerialNumbersFromURI:(id)arg1 ;
-(void)parseRequiredProductsFromURI:(id)arg1 ;
-(void)parseSelectableProductsFromURI:(id)arg1 ;
-(char)isSafeBitFieldString:(id)arg1 ;
-(id)productsFromBitFieldHexString:(id)arg1 ;
-(char)isMultipleAppleWatchPaired;
-(void)setForceSelectableAppleWatch:(char)arg1 ;
-(void)setSelectableProducts:(NSMutableSet *)arg1 ;
-(void)idleLocalDevices;
-(void)suspendTestsOnLocalDevices;
-(void)resumeTestsOnLocalDevices;
-(void)endLocalDevices;
-(char)isDeviceSelectable:(id)arg1 ;
-(void)deviceFilterURI:(id)arg1 ;
-(void)setMutableDevices:(NSMutableArray *)arg1 ;
-(void)setAccessoryManager:(DAAccessoryInformationManager *)arg1 ;
-(id)init;
-(void)registerForLocalNotifications;
-(id)devices;
-(void)addDevice:(id)arg1 ;
-(void)removeDevice:(id)arg1 ;
-(void)requiredSerialNumbers:(id)arg1 ;
-(void)selectableSerialNumbers:(id)arg1 ;
@end

