/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:31 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class RoutePlanningTiming, GEOTransitOptions;

@interface TransitRouteOptions : NSObject <NSCopying> {

	char _hasSurchargeOption;
	char _showICFares;
	RoutePlanningTiming* _timing;
	int _disabledModes;
	int _sortOption;
	int _surchargeOption;

}

@property (nonatomic,retain) RoutePlanningTiming * timing;                         //@synthesize timing=_timing - In the implementation block
@property (assign,nonatomic) int disabledModes;                                    //@synthesize disabledModes=_disabledModes - In the implementation block
@property (assign,nonatomic) int sortOption;                                       //@synthesize sortOption=_sortOption - In the implementation block
@property (nonatomic,readonly) char hasSurchargeOption;                            //@synthesize hasSurchargeOption=_hasSurchargeOption - In the implementation block
@property (assign,nonatomic) int surchargeOption;                                  //@synthesize surchargeOption=_surchargeOption - In the implementation block
@property (assign,nonatomic) char showICFares;                                     //@synthesize showICFares=_showICFares - In the implementation block
@property (nonatomic,readonly) GEOTransitOptions * geoTransitOptions; 
+(int)disabledModesByTogglingMode:(int)arg1 inModes:(int)arg2 ;
+(char)isModeDisabled:(int)arg1 inModes:(int)arg2 ;
+(id)defaultRouteOptions;
+(int)enabledModesFromDisabled:(int)arg1 ;
+(id)headerTextForDisabledModes;
+(id)footerTextForDisabledModes;
+(id)cellTextForICFares;
+(id)footerTextForICFares;
-(id)initWithTiming:(id)arg1 disabledModes:(int)arg2 sortOption:(int)arg3 hasSurchargeOption:(char)arg4 surchargeOption:(int)arg5 showICFares:(char)arg6 ;
-(char)isEqualToTransitRouteOptions:(id)arg1 ;
-(GEOTransitOptions *)geoTransitOptions;
-(char)isModeDisabled:(int)arg1 ;
-(void)toggleModeEnabled:(int)arg1 ;
-(int)disabledModes;
-(void)setDisabledModes:(int)arg1 ;
-(int)sortOption;
-(void)setSortOption:(int)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)hasSurchargeOption;
-(void)setSurchargeOption:(int)arg1 ;
-(int)surchargeOption;
-(void)setShowICFares:(char)arg1 ;
-(char)showICFares;
-(RoutePlanningTiming *)timing;
-(void)setTiming:(RoutePlanningTiming *)arg1 ;
@end

