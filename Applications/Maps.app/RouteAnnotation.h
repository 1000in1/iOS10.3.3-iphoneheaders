/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:35 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <libobjc.A.dylib/MKAnnotation.h>

@class Route, NSString;

@interface RouteAnnotation : NSObject <MKAnnotation> {

	Route* _route;

}

@property (nonatomic,__weak,readonly) Route * route;                         //@synthesize route=_route - In the implementation block
@property (assign,nonatomic) CLLocationCoordinate2D coordinate; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
+(id)keyPathsForValuesAffectingCoordinate;
-(NSString *)description;
-(Route *)route;
-(id)initWithRoute:(id)arg1 ;
-(void)setCoordinate:(CLLocationCoordinate2D)arg1 ;
-(CLLocationCoordinate2D)coordinate;
@end

