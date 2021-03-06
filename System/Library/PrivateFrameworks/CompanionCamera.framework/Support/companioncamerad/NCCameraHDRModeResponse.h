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

@interface NCCameraHDRModeResponse : PBCodable <NSCopying> {

	int _hdrMode;
	SCD_Struct_NC2 _has;

}

@property (assign,nonatomic) char hasHdrMode; 
@property (assign,nonatomic) int hdrMode;                  //@synthesize hdrMode=_hdrMode - In the implementation block
-(void)setHasHdrMode:(char)arg1 ;
-(char)hasHdrMode;
-(id)hdrModeAsString:(int)arg1 ;
-(int)StringAsHdrMode:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHdrMode:(int)arg1 ;
-(int)hdrMode;
@end

