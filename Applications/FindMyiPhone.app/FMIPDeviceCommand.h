/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:22 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/FindMyiPhone.app/FindMyiPhone
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FindMyiPhone/FMIPBaseCommand.h>

@class NSString;

@interface FMIPDeviceCommand : FMIPBaseCommand {

	char _isFamilyDevice;
	NSString* _deviceId;

}

@property (nonatomic,copy) NSString * deviceId;                //@synthesize deviceId=_deviceId - In the implementation block
@property (assign,nonatomic) char isFamilyDevice;              //@synthesize isFamilyDevice=_isFamilyDevice - In the implementation block
-(char)isFamilyDevice;
-(void)setIsFamilyDevice:(char)arg1 ;
-(id)init;
-(id)jsonBodyDictionary;
-(void)setDeviceId:(NSString *)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(NSString *)deviceId;
@end
