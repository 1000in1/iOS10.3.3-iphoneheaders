/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:39 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <libobjc.A.dylib/MKAnnotation.h>

@class NSString;

@interface RAPTransitLinesAnnotation : NSObject <MKAnnotation> {

	NSString* _title;
	CLLocationCoordinate2D _coordinate;

}

@property (nonatomic,readonly) CLLocationCoordinate2D coordinate;              //@synthesize coordinate=_coordinate - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                          //@synthesize title=_title - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
-(id)initWithCoordinate:(CLLocationCoordinate2D)arg1 title:(id)arg2 ;
-(NSString *)title;
-(CLLocationCoordinate2D)coordinate;
@end

