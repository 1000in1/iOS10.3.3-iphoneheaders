/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:40 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface CLSensorRecorderSensorMeta : NSObject <NSSecureCoding> {

	char _movement;
	unsigned _offset;
	unsigned _dataSize;
	int _dataType;
	unsigned long long _identifier;
	double _startTime;
	unsigned long long _timestamp;
	unsigned long long _dataIdentifier;

}

@property (assign) unsigned long long identifier;                  //@synthesize identifier=_identifier - In the implementation block
@property (assign) double startTime;                               //@synthesize startTime=_startTime - In the implementation block
@property (assign) unsigned long long timestamp;                   //@synthesize timestamp=_timestamp - In the implementation block
@property (assign) unsigned long long dataIdentifier;              //@synthesize dataIdentifier=_dataIdentifier - In the implementation block
@property (assign) unsigned offset;                                //@synthesize offset=_offset - In the implementation block
@property (assign) unsigned dataSize;                              //@synthesize dataSize=_dataSize - In the implementation block
@property (assign) int dataType;                                   //@synthesize dataType=_dataType - In the implementation block
@property (assign) char movement;                                  //@synthesize movement=_movement - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)timestamp;
-(unsigned long long)identifier;
-(void)setStartTime:(double)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)setIdentifier:(unsigned long long)arg1 ;
-(double)startTime;
-(void)setOffset:(unsigned)arg1 ;
-(unsigned)offset;
-(unsigned long long)dataIdentifier;
-(unsigned)dataSize;
-(void)setDataIdentifier:(unsigned long long)arg1 ;
-(void)setDataSize:(unsigned)arg1 ;
-(char)movement;
-(void)setMovement:(char)arg1 ;
-(id)initWithDataType:(int)arg1 ;
-(void)setDataType:(int)arg1 ;
-(int)dataType;
@end

