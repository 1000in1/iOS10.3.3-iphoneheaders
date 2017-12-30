/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:52 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/Agents/useractivityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <useractivityd/useractivityd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDHandoffUserActivityWasSuggested : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSString* _activityType;
	NSString* _bundleIdentifier;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) char hasBundleIdentifier; 
@property (nonatomic,retain) NSString * bundleIdentifier;               //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) char hasActivityType; 
@property (nonatomic,retain) NSString * activityType;                   //@synthesize activityType=_activityType - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(unsigned long long)timestamp;
-(NSString *)bundleIdentifier;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)activityType;
-(id)dictionaryRepresentation;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(char)arg1 ;
-(char)hasTimestamp;
-(char)hasBundleIdentifier;
-(void)setActivityType:(NSString *)arg1 ;
-(char)hasActivityType;
@end

