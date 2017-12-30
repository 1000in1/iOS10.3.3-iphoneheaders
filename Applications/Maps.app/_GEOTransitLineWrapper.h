/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:36 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOTransitLine.h>

@protocol GEOTransitArtworkDataSource;
@class NSString, NSArray;

@interface _GEOTransitLineWrapper : NSObject <GEOTransitLine> {

	NSString* _name;
	id<GEOTransitArtworkDataSource> _artwork;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long muid; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) id<GEOTransitSystem> system; 
@property (nonatomic,readonly) unsigned departureTimeDisplayStyle; 
@property (nonatomic,readonly) char departuresAreVehicleSpecific; 
@property (nonatomic,readonly) id<GEOTransitArtworkDataSource> artwork; 
@property (nonatomic,readonly) id<GEOTransitArtworkDataSource> modeArtwork; 
@property (nonatomic,readonly) char hasLineColorString; 
@property (nonatomic,readonly) NSString * lineColorString; 
@property (nonatomic,readonly) char showVehicleNumber; 
@property (nonatomic,readonly) NSArray * operatingHours; 
-(id)initWithName:(id)arg1 artwork:(id)arg2 ;
-(NSString *)name;
-(id<GEOTransitSystem>)system;
-(unsigned long long)muid;
-(NSArray *)operatingHours;
-(id<GEOTransitArtworkDataSource>)artwork;
-(id<GEOTransitArtworkDataSource>)modeArtwork;
-(char)showVehicleNumber;
-(unsigned)departureTimeDisplayStyle;
-(char)departuresAreVehicleSpecific;
-(char)hasLineColorString;
-(NSString *)lineColorString;
@end

