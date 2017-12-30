/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:38:28 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/NanoPreferenceBundles/Applications/NanoClockBridgeSettings.bundle/NanoClockBridgeSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface NCBSWorldCityDisplayListModel : NSObject {

	NSArray* _cachedCities;

}

@property (nonatomic,readonly) unsigned count; 
+(id)sharedInstance;
-(id)cityForIndex:(unsigned)arg1 ;
-(id)cityDisplayAbbreviationForIndex:(unsigned)arg1 ;
-(id)cityDisplayNameForIndex:(unsigned)arg1 ;
-(void)handleAbbreviationStoreChange:(id)arg1 ;
-(void)_fetchCitiesAndNotify:(char)arg1 ;
-(id)_cachedCityAtIndex:(unsigned)arg1 ;
-(void)handleWorldCitiesChanged;
-(id)init;
-(void)dealloc;
-(unsigned)count;
-(void)_notifyClientsOfChange;
@end

