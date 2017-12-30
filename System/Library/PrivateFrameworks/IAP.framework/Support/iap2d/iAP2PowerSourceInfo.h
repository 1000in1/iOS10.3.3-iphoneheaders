/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:58 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iap2d
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface iAP2PowerSourceInfo : NSObject {

	unsigned short availableCurrentForDevice;
	char isValidAvailableCurrentForDevice;
	char shouldChargeDeviceBattery;
	char isValidShouldChargeDeviceBattery;
	unsigned short siphoningCurrent;
	char isValidSiphoningCurrent;
	unsigned paramCountArr[6];
	char isValidReserveCurrent;
	char maxNonSiphoningCurrentExceeded;
	char _isValidMaxNonSiphoningCurrentExceeded;
	unsigned short reserveCurrent;

}

@property (assign) unsigned short availableCurrentForDevice; 
@property (assign) char shouldChargeDeviceBattery; 
@property (assign) unsigned short siphoningCurrent; 
@property (assign) unsigned short reserveCurrent; 
@property (assign) char maxNonSiphoningCurrentExceeded; 
@property (assign) char isValidAvailableCurrentForDevice; 
@property (assign) char isValidShouldChargeDeviceBattery; 
@property (assign) char isValidSiphoningCurrent; 
@property (assign) char isValidReserveCurrent; 
@property (assign) char isValidMaxNonSiphoningCurrentExceeded;              //@synthesize isValidMaxNonSiphoningCurrentExceeded=_isValidMaxNonSiphoningCurrentExceeded - In the implementation block
-(void)incrementParamCount:(int)arg1 ;
-(unsigned)paramCount:(int)arg1 ;
-(int)processPowerSourceUpdate:(id)arg1 ;
-(unsigned short)availableCurrentForDevice;
-(void)setAvailableCurrentForDevice:(unsigned short)arg1 ;
-(char)shouldChargeDeviceBattery;
-(void)setShouldChargeDeviceBattery:(char)arg1 ;
-(char)isValidAvailableCurrentForDevice;
-(void)setIsValidAvailableCurrentForDevice:(char)arg1 ;
-(char)isValidShouldChargeDeviceBattery;
-(void)setIsValidShouldChargeDeviceBattery:(char)arg1 ;
-(unsigned short)siphoningCurrent;
-(void)setSiphoningCurrent:(unsigned short)arg1 ;
-(char)isValidSiphoningCurrent;
-(void)setIsValidSiphoningCurrent:(char)arg1 ;
-(unsigned short)reserveCurrent;
-(void)setReserveCurrent:(unsigned short)arg1 ;
-(char)isValidReserveCurrent;
-(void)setIsValidReserveCurrent:(char)arg1 ;
-(char)maxNonSiphoningCurrentExceeded;
-(void)setMaxNonSiphoningCurrentExceeded:(char)arg1 ;
-(char)isValidMaxNonSiphoningCurrentExceeded;
-(void)setIsValidMaxNonSiphoningCurrentExceeded:(char)arg1 ;
-(id)init;
-(void)dealloc;
@end

