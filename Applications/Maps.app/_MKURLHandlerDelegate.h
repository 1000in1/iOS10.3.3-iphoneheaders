/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:33 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _MKURLHandlerDelegate <NSObject>
@optional
-(char)URLHandler:(id)arg1 launchIntoTesterWithParam:(id)arg2;

@required
-(char)URLHandler:(id)arg1 launchIntoShowMapItems:(id)arg2 options:(id)arg3 originIsActiveWatch:(char)arg4;
-(char)URLHandler:(id)arg1 showAddress:(id)arg2 label:(id)arg3;
-(char)URLHandler:(id)arg1 launchIntoTableBookingForMapItem:(id)arg2 options:(id)arg3 originIsActiveWatch:(char)arg4;
-(char)URLHandler:(id)arg1 launchIntoRAPForMapItem:(id)arg2 options:(id)arg3 originIsActiveWatch:(char)arg4;
-(char)URLHandler:(id)arg1 launchIntoDirectionsWithMapItems:(id)arg2 options:(id)arg3 originIsActiveWatch:(char)arg4;
-(char)URLHandler:(id)arg1 showDirectionsFrom:(id)arg2 to:(id)arg3 using:(unsigned)arg4;
-(char)URLHandler:(id)arg1 launchWithOptions:(id)arg2;
-(char)URLHandler:(id)arg1 launchIntoSearchWithMapItems:(id)arg2 options:(id)arg3 originIsActiveWatch:(char)arg4;
-(char)URLHandler:(id)arg1 setShowTraffic:(char)arg2;
-(char)URLHandler:(id)arg1 setMapType:(unsigned)arg2;
-(char)URLHandler:(id)arg1 setSchemeForCapture:(id)arg2 sourceApplication:(id)arg3 isLaunchedFromTTL:(char)arg4 ttlEventTime:(id)arg5;
-(char)URLHandler:(id)arg1 showLineWithID:(unsigned long long)arg2 name:(id)arg3;
-(char)URLHandler:(id)arg1 showFavoritesType:(int)arg2;
-(char)URLHandler:(id)arg1 setContentProvider:(id)arg2;
-(char)URLHandler:(id)arg1 search:(id)arg2 at:(CLLocationCoordinate2D)arg3;
-(char)URLHandler:(id)arg1 setRegionWithCenter:(CLLocationCoordinate2D)arg2;
-(char)URLHandler:(id)arg1 setRegion:(SCD_Struct_RA12)arg2;
-(char)URLHandler:(id)arg1 setRegionWithCenter:(CLLocationCoordinate2D)arg2 zoomLevel:(float)arg3;
-(char)URLHandler:(id)arg1 setUserTrackingMode:(int)arg2;
-(char)URLHandler:(id)arg1 showMapWithoutPinAt:(CLLocationCoordinate2D)arg2;
-(char)URLHandler:(id)arg1 showMapItem:(id)arg2 label:(id)arg3 at:(CLLocationCoordinate2D)arg4;
-(char)URLHandler:(id)arg1 showAddressByRecordID:(id)arg2 addressID:(id)arg3;
-(char)URLHandler:(id)arg1 showMUID:(unsigned long long)arg2 resultProviderID:(int)arg3 coordinate:(CLLocationCoordinate2D)arg4 query:(id)arg5;
-(char)URLHandler:(id)arg1 showExternalBusinessID:(id)arg2 ofContentProvider:(id)arg3;

@end

