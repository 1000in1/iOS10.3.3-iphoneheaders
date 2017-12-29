/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:52 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/PlugIns/TransitWidget.appex/TransitWidget
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct UIEdgeInsets {
	float top;
	float left;
	float bottom;
	float right;
} UIEdgeInsets;

typedef struct ArtworkWidthCalculatorSizeParameter {
	float defaultArtworkViewWidth;
	float maxArtworkViewWidth;
	UIEdgeInsets artworkInsets;
} ArtworkWidthCalculatorSizeParameter;

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned avoidBusRoutes : 1;
	unsigned avoidFerryRoutes : 1;
	unsigned avoidMetroLightRailRoutes : 1;
	unsigned avoidRailRoutes : 1;
} SCD_Struct_Di3;

typedef struct {
	unsigned selectedPlaceIndex : 1;
	unsigned selectedTransitFeatureID : 1;
	unsigned collectionsMode : 1;
	unsigned isDroppedPinPresented : 1;
	unsigned isDroppedPinSelected : 1;
	unsigned isPresentingSelectedPlace : 1;
} SCD_Struct_Ma4;

typedef struct {
	unsigned arrivalTime : 1;
	unsigned currentRouteIndex : 1;
	unsigned currentRouteStep : 1;
	unsigned departureTime : 1;
	unsigned displayMethod : 1;
	unsigned earlierPagesLoaded : 1;
	unsigned laterPagesLoaded : 1;
	unsigned routesPerEarlierPage : 1;
	unsigned routesPerInitialPage : 1;
	unsigned routesPerLaterPage : 1;
	unsigned transitPrioritization : 1;
	unsigned transitSurchargeOption : 1;
	unsigned isPlayingTrace : 1;
} SCD_Struct_Di5;
