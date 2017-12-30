/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:35 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class RAPTransitLine, GEOMapServiceTraits, GEOMapRegion, NSData, NSArray, NSString, GEOComposedRoute, MKMapCamera;


@protocol RAPMutableMapStateProtocol <RAPMapStateProtocol>
@property (assign,getter=isShowingImagery,nonatomic) char showingImagery; 
@property (assign,getter=isShowingLabels,nonatomic) char showingLabels; 
@property (assign,nonatomic) char isShowingDirections; 
@property (nonatomic,retain) id<RAPPlace> reportedPlace; 
@property (nonatomic,retain) RAPTransitLine * reportedLine; 
@property (nonatomic,retain) GEOMapServiceTraits * traits; 
@property (nonatomic,copy) GEOMapRegion * mapRegion; 
@property (assign,nonatomic) float mapZoomLevel; 
@property (assign,nonatomic) unsigned mapType; 
@property (nonatomic,copy) NSData * mapSnapshotImageData; 
@property (nonatomic,copy) NSArray * mapVisibleTileSets; 
@property (nonatomic,copy) NSString * mapTileStateLog; 
@property (nonatomic,retain) id<RAPDisplayedDirectionsPlan> displayedDirectionsPlan; 
@property (nonatomic,retain) GEOComposedRoute * activeComposedRoute; 
@property (nonatomic,retain) MKMapCamera * mapCamera; 
@required
-(id<RAPPlace>)reportedPlace;
-(MKMapCamera *)mapCamera;
-(char)isShowingImagery;
-(void)setShowingImagery:(char)arg1;
-(char)isShowingLabels;
-(void)setShowingLabels:(char)arg1;
-(char)isShowingDirections;
-(void)setIsShowingDirections:(char)arg1;
-(void)setReportedPlace:(id)arg1;
-(RAPTransitLine *)reportedLine;
-(void)setReportedLine:(id)arg1;
-(NSData *)mapSnapshotImageData;
-(void)setMapSnapshotImageData:(id)arg1;
-(NSArray *)mapVisibleTileSets;
-(void)setMapVisibleTileSets:(id)arg1;
-(NSString *)mapTileStateLog;
-(void)setMapTileStateLog:(id)arg1;
-(id<RAPDisplayedDirectionsPlan>)displayedDirectionsPlan;
-(void)setDisplayedDirectionsPlan:(id)arg1;
-(GEOComposedRoute *)activeComposedRoute;
-(void)setActiveComposedRoute:(id)arg1;
-(void)setMapCamera:(id)arg1;
-(GEOMapServiceTraits *)traits;
-(GEOMapRegion *)mapRegion;
-(void)setMapRegion:(id)arg1;
-(void)setTraits:(id)arg1;
-(unsigned)mapType;
-(void)setMapType:(unsigned)arg1;
-(void)setMapZoomLevel:(float)arg1;
-(float)mapZoomLevel;

@end

