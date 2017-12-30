/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:37 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOStorageCompletion, GEOLatLng, GEOMapItemStorage, NSString;

@interface RAPUserSearchInput : PBCodable <NSCopying> {

	GEOStorageCompletion* _completionStorage;
	GEOLatLng* _coordinate;
	int _origin;
	GEOMapItemStorage* _placeMapItemStorage;
	NSString* _searchString;
	NSString* _singleLineAddressString;
	SCD_Struct_RA35 _has;

}

@property (nonatomic,readonly) char hasSearchString; 
@property (nonatomic,retain) NSString * searchString;                               //@synthesize searchString=_searchString - In the implementation block
@property (nonatomic,readonly) char hasSingleLineAddressString; 
@property (nonatomic,retain) NSString * singleLineAddressString;                    //@synthesize singleLineAddressString=_singleLineAddressString - In the implementation block
@property (nonatomic,readonly) char hasPlaceMapItemStorage; 
@property (nonatomic,retain) GEOMapItemStorage * placeMapItemStorage;               //@synthesize placeMapItemStorage=_placeMapItemStorage - In the implementation block
@property (nonatomic,readonly) char hasCompletionStorage; 
@property (nonatomic,retain) GEOStorageCompletion * completionStorage;              //@synthesize completionStorage=_completionStorage - In the implementation block
@property (nonatomic,readonly) char hasCoordinate; 
@property (nonatomic,retain) GEOLatLng * coordinate;                                //@synthesize coordinate=_coordinate - In the implementation block
@property (assign,nonatomic) char hasOrigin; 
@property (assign,nonatomic) int origin;                                            //@synthesize origin=_origin - In the implementation block
-(char)hasCompletionStorage;
-(GEOStorageCompletion *)completionStorage;
-(void)setCompletionStorage:(GEOStorageCompletion *)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)origin;
-(void)setOrigin:(int)arg1 ;
-(NSString *)searchString;
-(id)dictionaryRepresentation;
-(void)setSearchString:(NSString *)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)hasSearchString;
-(char)hasCoordinate;
-(char)hasOrigin;
-(char)hasSingleLineAddressString;
-(void)setHasOrigin:(char)arg1 ;
-(id)originAsString:(int)arg1 ;
-(int)StringAsOrigin:(id)arg1 ;
-(NSString *)singleLineAddressString;
-(void)setSingleLineAddressString:(NSString *)arg1 ;
-(void)setCoordinate:(GEOLatLng *)arg1 ;
-(GEOLatLng *)coordinate;
-(char)hasPlaceMapItemStorage;
-(GEOMapItemStorage *)placeMapItemStorage;
-(void)setPlaceMapItemStorage:(GEOMapItemStorage *)arg1 ;
@end

