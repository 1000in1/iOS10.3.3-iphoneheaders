/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:18 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/FindMyiPhone.app/FindMyiPhone
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MKOverlay <MKAnnotation>
@property (nonatomic,readonly) CLLocationCoordinate2D coordinate; 
@property (nonatomic,readonly) SCD_Struct_Ma3 boundingMapRect; 
@optional
-(char)intersectsMapRect:(SCD_Struct_Ma3)arg1;
-(char)canReplaceMapContent;

@required
-(SCD_Struct_Ma3)boundingMapRect;
-(CLLocationCoordinate2D)coordinate;

@end

