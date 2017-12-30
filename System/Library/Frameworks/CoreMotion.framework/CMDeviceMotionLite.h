/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:40 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CMAttitude, NSString;

@interface CMDeviceMotionLite : NSObject <NSCopying, NSSecureCoding> {

	CMAttitude* fAttitude;
	SCD_Struct_CM3 fGravity;
	SCD_Struct_CM3 fUserAcceleration;
	SCD_Struct_CM3 fRotationRate;
	SCD_Struct_CM3 fRawAcceleration;
	SCD_Struct_CM3 fRawRotationRate;
	unsigned long long fMachTimestamp;
	NSString* fPhysicalDeviceUniqueID;

}

@property (nonatomic,readonly) CMAttitude * attitude; 
@property (nonatomic,readonly) SCD_Struct_CM3 rotationRate; 
@property (nonatomic,readonly) SCD_Struct_CM3 rawAcceleration; 
@property (nonatomic,readonly) SCD_Struct_CM3 rawRotationRate; 
@property (nonatomic,readonly) unsigned long long machTimestamp; 
@property (nonatomic,readonly) SCD_Struct_CM3 gravity; 
@property (nonatomic,readonly) SCD_Struct_CM3 userAcceleration; 
@property (nonatomic,readonly) float tip; 
@property (nonatomic,readonly) float tilt; 
@property (nonatomic,retain,readonly) NSString * physicalDeviceUniqueID; 
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CMAttitude *)attitude;
-(SCD_Struct_CM3)gravity;
-(id)initWithDeviceMotionLite:(SCD_Struct_CM32)arg1 andDeviceID:(id)arg2 ;
-(SCD_Struct_CM3)rawAcceleration;
-(SCD_Struct_CM3)rawRotationRate;
-(NSString *)physicalDeviceUniqueID;
-(float)tilt;
-(float)tip;
-(SCD_Struct_CM3)userAcceleration;
-(SCD_Struct_CM3)rotationRate;
-(unsigned long long)machTimestamp;
@end

