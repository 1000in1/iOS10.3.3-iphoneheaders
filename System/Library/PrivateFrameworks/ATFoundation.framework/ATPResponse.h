/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:51:53 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATFoundation/ATFoundation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ATPError;

@interface ATPResponse : PBCodable <NSCopying> {

	ATPError* _error;

}

@property (nonatomic,readonly) char hasError; 
@property (nonatomic,retain) ATPError * error;              //@synthesize error=_error - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)hasError;
-(ATPError *)error;
-(void)setError:(ATPError *)arg1 ;
@end

