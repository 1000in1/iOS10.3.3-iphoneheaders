/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:38:15 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Messages/iMessageBalloons/HandwritingProvider.bundle/HandwritingProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HandwritingProvider/HandwritingProvider-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSDate, DKDrawing;

@interface HWHandwritingItem : NSObject <NSCopying, NSSecureCoding> {

	NSUUID* _uuid;
	NSDate* _creationDate;
	DKDrawing* _drawing;

}

@property (retain) NSUUID * uuid;                      //@synthesize uuid=_uuid - In the implementation block
@property (retain) NSDate * creationDate;              //@synthesize creationDate=_creationDate - In the implementation block
@property (retain) DKDrawing * drawing;                //@synthesize drawing=_drawing - In the implementation block
+(char)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
-(NSDate *)creationDate;
-(void)setCreationDate:(NSDate *)arg1 ;
-(DKDrawing *)drawing;
-(void)setDrawing:(DKDrawing *)arg1 ;
-(id)initWithDrawing:(id)arg1 ;
@end

