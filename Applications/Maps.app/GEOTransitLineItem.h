/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:31 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, GEOMapRegion;


@protocol GEOTransitLineItem <GEOTransitLine>
@property (nonatomic,readonly) NSArray * labelItems; 
@property (nonatomic,readonly) id<GEOTransitAttribution> attribution; 
@property (nonatomic,readonly) GEOMapRegion * mapRegion; 
@property (nonatomic,readonly) NSArray * incidents; 
@property (nonatomic,readonly) char isIncidentsTTLExpired; 
@property (nonatomic,readonly) char hasIncidentComponent; 
@property (nonatomic,readonly) char hasEncyclopedicInfo; 
@property (nonatomic,readonly) id<GEOEncyclopedicInfo> encyclopedicInfo; 
@required
-(GEOMapRegion *)mapRegion;
-(NSArray *)labelItems;
-(NSArray *)incidents;
-(id<GEOTransitAttribution>)attribution;
-(char)isIncidentsTTLExpired;
-(char)hasIncidentComponent;
-(char)hasEncyclopedicInfo;
-(id<GEOEncyclopedicInfo>)encyclopedicInfo;

@end

