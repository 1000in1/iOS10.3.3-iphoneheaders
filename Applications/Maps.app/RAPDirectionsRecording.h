/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:32 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <Maps/RAPAuxiliaryControlsRecording.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSMutableArray, NSData, RAPUserSearchInput, GEORPCorrectedSearch, NSString;

@interface RAPDirectionsRecording : PBCodable <RAPAuxiliaryControlsRecording, NSCopying> {

	SCD_Struct_RA13* _clusteredRouteRideSelections;
	unsigned long long _originatingAuxiliaryControlIndex;
	NSMutableArray* _auxiliaryControls;
	NSMutableArray* _directionsRequests;
	NSData* _directionsResponseID;
	NSMutableArray* _directionsResponses;
	RAPUserSearchInput* _endWaypoint;
	GEORPCorrectedSearch* _endWaypointCorrectedSearchTemplate;
	NSData* _overviewScreenshotImageData;
	unsigned _selectedDirectionsResponseIndex;
	unsigned _selectedSuggestedRouteIndexInDirectionsResponse;
	RAPUserSearchInput* _startWaypoint;
	GEORPCorrectedSearch* _startWaypointCorrectedSearchTemplate;
	SCD_Struct_RA14 _has;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * auxiliaryControls; 
@property (nonatomic,readonly) char hasOriginatingAuxiliaryControlIndex; 
@property (nonatomic,readonly) unsigned long long originatingAuxiliaryControlIndex; 
@property (nonatomic,retain) NSMutableArray * directionsRequests;                                      //@synthesize directionsRequests=_directionsRequests - In the implementation block
@property (nonatomic,retain) NSMutableArray * directionsResponses;                                     //@synthesize directionsResponses=_directionsResponses - In the implementation block
@property (assign,nonatomic) char hasSelectedDirectionsResponseIndex; 
@property (assign,nonatomic) unsigned selectedDirectionsResponseIndex;                                 //@synthesize selectedDirectionsResponseIndex=_selectedDirectionsResponseIndex - In the implementation block
@property (assign,nonatomic) char hasSelectedSuggestedRouteIndexInDirectionsResponse; 
@property (assign,nonatomic) unsigned selectedSuggestedRouteIndexInDirectionsResponse;                 //@synthesize selectedSuggestedRouteIndexInDirectionsResponse=_selectedSuggestedRouteIndexInDirectionsResponse - In the implementation block
@property (nonatomic,readonly) char hasOverviewScreenshotImageData; 
@property (nonatomic,retain) NSData * overviewScreenshotImageData;                                     //@synthesize overviewScreenshotImageData=_overviewScreenshotImageData - In the implementation block
@property (nonatomic,readonly) char hasDirectionsResponseID; 
@property (nonatomic,retain) NSData * directionsResponseID;                                            //@synthesize directionsResponseID=_directionsResponseID - In the implementation block
@property (nonatomic,readonly) char hasStartWaypoint; 
@property (nonatomic,retain) RAPUserSearchInput * startWaypoint;                                       //@synthesize startWaypoint=_startWaypoint - In the implementation block
@property (nonatomic,readonly) char hasEndWaypoint; 
@property (nonatomic,retain) RAPUserSearchInput * endWaypoint;                                         //@synthesize endWaypoint=_endWaypoint - In the implementation block
@property (nonatomic,retain) NSMutableArray * auxiliaryControls;                                       //@synthesize auxiliaryControls=_auxiliaryControls - In the implementation block
@property (assign,nonatomic) char hasOriginatingAuxiliaryControlIndex; 
@property (assign,nonatomic) unsigned long long originatingAuxiliaryControlIndex;                      //@synthesize originatingAuxiliaryControlIndex=_originatingAuxiliaryControlIndex - In the implementation block
@property (nonatomic,readonly) char hasStartWaypointCorrectedSearchTemplate; 
@property (nonatomic,retain) GEORPCorrectedSearch * startWaypointCorrectedSearchTemplate;              //@synthesize startWaypointCorrectedSearchTemplate=_startWaypointCorrectedSearchTemplate - In the implementation block
@property (nonatomic,readonly) char hasEndWaypointCorrectedSearchTemplate; 
@property (nonatomic,retain) GEORPCorrectedSearch * endWaypointCorrectedSearchTemplate;                //@synthesize endWaypointCorrectedSearchTemplate=_endWaypointCorrectedSearchTemplate - In the implementation block
@property (nonatomic,readonly) unsigned clusteredRouteRideSelectionsCount; 
@property (nonatomic,readonly) unsigned* clusteredRouteRideSelections; 
+(Class)directionsRequestsType;
+(Class)directionsResponsesType;
+(Class)auxiliaryControlsType;
-(void)addDirectionsRequests:(id)arg1 ;
-(id)directionsRequestsAtIndex:(unsigned)arg1 ;
-(void)addDirectionsResponses:(id)arg1 ;
-(id)directionsResponsesAtIndex:(unsigned)arg1 ;
-(void)setSelectedDirectionsResponseIndex:(unsigned)arg1 ;
-(void)setHasSelectedDirectionsResponseIndex:(char)arg1 ;
-(char)hasSelectedDirectionsResponseIndex;
-(void)setSelectedSuggestedRouteIndexInDirectionsResponse:(unsigned)arg1 ;
-(void)setHasSelectedSuggestedRouteIndexInDirectionsResponse:(char)arg1 ;
-(char)hasSelectedSuggestedRouteIndexInDirectionsResponse;
-(void)addAuxiliaryControls:(id)arg1 ;
-(id)auxiliaryControlsAtIndex:(unsigned)arg1 ;
-(char)hasStartWaypointCorrectedSearchTemplate;
-(char)hasEndWaypointCorrectedSearchTemplate;
-(unsigned)selectedDirectionsResponseIndex;
-(unsigned)selectedSuggestedRouteIndexInDirectionsResponse;
-(GEORPCorrectedSearch *)startWaypointCorrectedSearchTemplate;
-(void)setStartWaypointCorrectedSearchTemplate:(GEORPCorrectedSearch *)arg1 ;
-(GEORPCorrectedSearch *)endWaypointCorrectedSearchTemplate;
-(void)setEndWaypointCorrectedSearchTemplate:(GEORPCorrectedSearch *)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)hasDirectionsResponseID;
-(NSData *)directionsResponseID;
-(void)setDirectionsResponseID:(NSData *)arg1 ;
-(void)clearDirectionsRequests;
-(unsigned)directionsRequestsCount;
-(void)clearDirectionsResponses;
-(unsigned)directionsResponsesCount;
-(void)clearAuxiliaryControls;
-(unsigned)auxiliaryControlsCount;
-(void)setOriginatingAuxiliaryControlIndex:(unsigned long long)arg1 ;
-(void)setHasOriginatingAuxiliaryControlIndex:(char)arg1 ;
-(char)hasOriginatingAuxiliaryControlIndex;
-(NSMutableArray *)directionsRequests;
-(void)setDirectionsRequests:(NSMutableArray *)arg1 ;
-(NSMutableArray *)directionsResponses;
-(void)setDirectionsResponses:(NSMutableArray *)arg1 ;
-(NSArray *)auxiliaryControls;
-(void)setAuxiliaryControls:(NSArray *)arg1 ;
-(unsigned long long)originatingAuxiliaryControlIndex;
-(char)hasOverviewScreenshotImageData;
-(char)hasStartWaypoint;
-(char)hasEndWaypoint;
-(NSData *)overviewScreenshotImageData;
-(void)setOverviewScreenshotImageData:(NSData *)arg1 ;
-(RAPUserSearchInput *)startWaypoint;
-(void)setStartWaypoint:(RAPUserSearchInput *)arg1 ;
-(RAPUserSearchInput *)endWaypoint;
-(void)setEndWaypoint:(RAPUserSearchInput *)arg1 ;
-(unsigned)clusteredRouteRideSelectionsCount;
-(unsigned*)clusteredRouteRideSelections;
-(void)clearClusteredRouteRideSelections;
-(void)addClusteredRouteRideSelections:(unsigned)arg1 ;
-(unsigned)clusteredRouteRideSelectionsAtIndex:(unsigned)arg1 ;
-(void)setClusteredRouteRideSelections:(unsigned*)arg1 count:(unsigned)arg2 ;
@end

