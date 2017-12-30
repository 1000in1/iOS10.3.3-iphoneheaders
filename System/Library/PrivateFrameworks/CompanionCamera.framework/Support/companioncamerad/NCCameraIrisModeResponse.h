/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:31 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/CompanionCamera.framework/Support/companioncamerad
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <companioncamerad/companioncamerad-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NCCameraIrisModeResponse : PBCodable <NSCopying> {

	int _irisMode;
	SCD_Struct_NC2 _has;

}

@property (assign,nonatomic) char hasIrisMode; 
@property (assign,nonatomic) int irisMode;                  //@synthesize irisMode=_irisMode - In the implementation block
-(void)setHasIrisMode:(char)arg1 ;
-(char)hasIrisMode;
-(id)irisModeAsString:(int)arg1 ;
-(int)StringAsIrisMode:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setIrisMode:(int)arg1 ;
-(int)irisMode;
@end
