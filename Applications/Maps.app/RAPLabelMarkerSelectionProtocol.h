/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:35 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol RAPLabelMarkerSelectionProtocol <RAPInstrumentableTarget>
@property (nonatomic,readonly) NSString * localizedPlacePickingPrompt; 
@property (nonatomic,readonly) unsigned placePickingPreferredMapType; 
@property (nonatomic,readonly) RAPQuestion*<RAPMenuItem> followUpQuestion; 
@property (nonatomic,readonly) int featureType; 
@property (nonatomic,copy) id<RAPMapStateProtocol> placePickingMapContext; 
@required
-(RAPQuestion*<RAPMenuItem>)followUpQuestion;
-(void)setSelectedLabelMarker:(id)arg1;
-(NSString *)localizedPlacePickingPrompt;
-(unsigned)placePickingPreferredMapType;
-(id<RAPMapStateProtocol>)placePickingMapContext;
-(void)setPlacePickingMapContext:(id)arg1;
-(int)featureType;

@end

