/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:15 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/NanoAppRegistry.framework/Support/nanoappregistryd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <nanoappregistryd/nanoappregistryd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NARPBApplicationStateWrapper : PBCodable <NSCopying> {

	char _isRemovedSystemApp;
	char _isRestricted;
	SCD_Struct_NA2 _has;

}

@property (assign,nonatomic) char hasIsRestricted; 
@property (assign,nonatomic) char isRestricted;                       //@synthesize isRestricted=_isRestricted - In the implementation block
@property (assign,nonatomic) char hasIsRemovedSystemApp; 
@property (assign,nonatomic) char isRemovedSystemApp;                 //@synthesize isRemovedSystemApp=_isRemovedSystemApp - In the implementation block
-(void)setIsRestricted:(char)arg1 ;
-(void)setHasIsRestricted:(char)arg1 ;
-(char)hasIsRestricted;
-(void)setIsRemovedSystemApp:(char)arg1 ;
-(void)setHasIsRemovedSystemApp:(char)arg1 ;
-(char)hasIsRemovedSystemApp;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(char)isRestricted;
-(char)isRemovedSystemApp;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
@end

