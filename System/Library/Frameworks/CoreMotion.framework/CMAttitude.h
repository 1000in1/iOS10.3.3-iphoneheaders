/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:39 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CMAttitude : NSObject <NSCopying, NSSecureCoding> {

	id _internal;

}

@property (nonatomic,readonly) double roll; 
@property (nonatomic,readonly) double pitch; 
@property (nonatomic,readonly) double yaw; 
@property (nonatomic,readonly) SCD_Struct_CM8 rotationMatrix; 
@property (nonatomic,readonly) SCD_Struct_CM7 quaternion; 
+(char)supportsSecureCoding;
-(_GLKQuaternion)GLKQuaternion;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SCD_Struct_CM7)quaternion;
-(id)initWithQuaternion:(SCD_Struct_CM7)arg1 ;
-(SCD_Struct_CM8)rotationMatrix;
-(double)roll;
-(double)pitch;
-(double)yaw;
-(void)setQuaternion:(SCD_Struct_CM7)arg1 ;
-(void)multiplyByInverseOfAttitude:(id)arg1 ;
@end

