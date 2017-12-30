/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:35 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/RAPMutableMapStateProtocol.h>

@protocol RAPPlace, RAPDisplayedDirectionsPlan;
@class RAPTransitLine, GEOMapServiceTraits, GEOMapRegion, NSData, NSArray, NSString, GEOComposedRoute, MKMapCamera;

@interface RAPMapState : NSObject <RAPMutableMapStateProtocol> {

	char _showingImagery;
	char _showingLabels;
	char _isShowingDirections;
	id<RAPPlace> _reportedPlace;
	RAPTransitLine* _reportedLine;
	GEOMapServiceTraits* _traits;
	GEOMapRegion* _mapRegion;
	float _mapZoomLevel;
	unsigned _mapType;
	NSData* _mapSnapshotImageData;
	NSArray* _mapVisibleTileSets;
	NSString* _mapTileStateLog;
	id<RAPDisplayedDirectionsPlan> _displayedDirectionsPlan;
	GEOComposedRoute* _activeComposedRoute;
	MKMapCamera* _mapCamera;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isShowingImagery,nonatomic,readonly) char showingImagery; 
@property (getter=isShowingLabels,nonatomic,readonly) char showingLabels; 
@property (nonatomic,readonly) char isShowingDirections; 
@property (nonatomic,readonly) id<RAPPlace> reportedPlace; 
@property (nonatomic,readonly) RAPTransitLine * reportedLine; 
@property (nonatomic,readonly) GEOMapServiceTraits * traits; 
@property (nonatomic,copy,readonly) GEOMapRegion * mapRegion; 
@property (nonatomic,readonly) float mapZoomLevel; 
@property (nonatomic,readonly) unsigned mapType; 
@property (nonatomic,copy,readonly) NSData * mapSnapshotImageData; 
@property (nonatomic,copy,readonly) NSArray * mapVisibleTileSets; 
@property (nonatomic,copy,readonly) NSString * mapTileStateLog; 
@property (nonatomic,readonly) id<RAPDisplayedDirectionsPlan> displayedDirectionsPlan; 
@property (nonatomic,readonly) GEOComposedRoute * activeComposedRoute; 
@property (nonatomic,readonly) MKMapCamera * mapCamera; 
-(id<RAPPlace>)reportedPlace;
-(MKMapCamera *)mapCamera;
-(char)isShowingImagery;
-(void)setShowingImagery:(char)arg1 ;
-(char)isShowingLabels;
-(void)setShowingLabels:(char)arg1 ;
-(char)isShowingDirections;
-(void)setIsShowingDirections:(char)arg1 ;
-(void)setReportedPlace:(id<RAPPlace>)arg1 ;
-(RAPTransitLine *)reportedLine;
-(void)setReportedLine:(RAPTransitLine *)arg1 ;
-(NSData *)mapSnapshotImageData;
-(void)setMapSnapshotImageData:(NSData *)arg1 ;
-(NSArray *)mapVisibleTileSets;
-(void)setMapVisibleTileSets:(NSArray *)arg1 ;
-(NSString *)mapTileStateLog;
-(void)setMapTileStateLog:(NSString *)arg1 ;
-(id<RAPDisplayedDirectionsPlan>)displayedDirectionsPlan;
-(void)setDisplayedDirectionsPlan:(id<RAPDisplayedDirectionsPlan>)arg1 ;
-(GEOComposedRoute *)activeComposedRoute;
-(void)setActiveComposedRoute:(GEOComposedRoute *)arg1 ;
-(void)setMapCamera:(MKMapCamera *)arg1 ;
-(id)initWithMapView:(id)arg1 traits:(id)arg2 place:(id)arg3 ;
-(GEOMapServiceTraits *)traits;
-(GEOMapRegion *)mapRegion;
-(void)setMapRegion:(GEOMapRegion *)arg1 ;
-(void)setTraits:(GEOMapServiceTraits *)arg1 ;
-(unsigned)mapType;
-(void)setMapType:(unsigned)arg1 ;
-(void)setMapZoomLevel:(float)arg1 ;
-(float)mapZoomLevel;
@end

