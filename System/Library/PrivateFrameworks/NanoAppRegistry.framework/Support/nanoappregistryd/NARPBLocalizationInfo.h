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

@class NSMutableArray, NSString;

@interface NARPBLocalizationInfo : PBCodable <NSCopying> {

	NSMutableArray* _keys;
	NSString* _localization;
	NSMutableArray* _localizedValues;

}

@property (nonatomic,readonly) char hasLocalization; 
@property (nonatomic,retain) NSString * localization;                       //@synthesize localization=_localization - In the implementation block
@property (nonatomic,retain) NSMutableArray * keys;                         //@synthesize keys=_keys - In the implementation block
@property (nonatomic,retain) NSMutableArray * localizedValues;              //@synthesize localizedValues=_localizedValues - In the implementation block
-(void)addLocalizedValue:(id)arg1 ;
-(void)setLocalization:(NSString *)arg1 ;
-(unsigned)localizedValuesCount;
-(void)clearLocalizedValues;
-(id)localizedValueAtIndex:(unsigned)arg1 ;
-(char)hasLocalization;
-(NSMutableArray *)localizedValues;
-(void)setLocalizedValues:(NSMutableArray *)arg1 ;
-(NSString *)localization;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSMutableArray *)keys;
-(void)setKeys:(NSMutableArray *)arg1 ;
-(void)addKey:(id)arg1 ;
-(id)keyAtIndex:(unsigned)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)clearKeys;
-(unsigned)keysCount;
@end

