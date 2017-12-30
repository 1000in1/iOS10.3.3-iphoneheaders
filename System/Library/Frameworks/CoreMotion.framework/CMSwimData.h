/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:40 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, NSDate;

@interface CMSwimData : NSObject <NSSecureCoding, NSCopying> {

	unsigned fRecordId;
	NSUUID* fSourceId;
	NSUUID* fSessionId;
	NSDate* fStartDate;
	NSDate* fEndDate;
	unsigned fStrokeCount;
	double fDistance;
	double fAvgPace;
	unsigned fLapCount;
	int fStrokeType;

}

@property (nonatomic,readonly) unsigned recordId; 
@property (nonatomic,readonly) NSUUID * sourceId; 
@property (nonatomic,readonly) NSUUID * sessionId; 
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
@property (nonatomic,readonly) unsigned strokeCount; 
@property (nonatomic,readonly) double distance; 
@property (nonatomic,readonly) double avgPace; 
@property (nonatomic,readonly) unsigned lapCount; 
@property (nonatomic,readonly) int strokeType; 
+(char)supportsSecureCoding;
+(unsigned)maxSwimDataEntries;
+(id)strokeTypeName:(int)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)distance;
-(id)initWithRecordId:(unsigned)arg1 sourceId:(id)arg2 sessionId:(id)arg3 startDate:(id)arg4 endDate:(id)arg5 strokeCount:(unsigned)arg6 distance:(double)arg7 avgPace:(double)arg8 lapCount:(unsigned)arg9 strokeType:(int)arg10 ;
-(double)avgPace;
-(void)convertToSwimEntry:(CLSwimEntry*)arg1 ;
-(id)initWithSwimEntry:(const CLSwimEntry*)arg1 ;
-(NSUUID *)sessionId;
-(NSUUID *)sourceId;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(unsigned)recordId;
-(unsigned)lapCount;
-(id)initWithSessionId:(id)arg1 ;
-(int)strokeType;
-(unsigned)strokeCount;
@end

