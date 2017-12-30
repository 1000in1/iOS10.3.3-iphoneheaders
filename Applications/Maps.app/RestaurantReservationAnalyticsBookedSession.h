/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:42 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface RestaurantReservationAnalyticsBookedSession : NSObject {

	char _tappedChangeReservation;
	char _bookedUsingMaps;
	char _viewedInProactiveTray;
	char _tappedProactiveTrayItem;
	char _viewedInPlacecard;
	char _viewedDetailsFromPlacecard;
	char _hasAppsInstalled;
	char _hasAppsEnabled;
	char _sessionEnded;
	NSString* _sessionID;
	NSString* _appID;
	unsigned long long _muid;

}

@property (assign,nonatomic) char sessionEnded;                            //@synthesize sessionEnded=_sessionEnded - In the implementation block
@property (nonatomic,readonly) NSString * sessionID;                       //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,retain) NSString * appID;                             //@synthesize appID=_appID - In the implementation block
@property (assign,nonatomic) unsigned long long muid;                      //@synthesize muid=_muid - In the implementation block
@property (assign,nonatomic) char tappedChangeReservation;                 //@synthesize tappedChangeReservation=_tappedChangeReservation - In the implementation block
@property (assign,nonatomic) char bookedUsingMaps;                         //@synthesize bookedUsingMaps=_bookedUsingMaps - In the implementation block
@property (assign,nonatomic) char viewedInProactiveTray;                   //@synthesize viewedInProactiveTray=_viewedInProactiveTray - In the implementation block
@property (assign,nonatomic) char tappedProactiveTrayItem;                 //@synthesize tappedProactiveTrayItem=_tappedProactiveTrayItem - In the implementation block
@property (assign,nonatomic) char viewedInPlacecard;                       //@synthesize viewedInPlacecard=_viewedInPlacecard - In the implementation block
@property (assign,nonatomic) char viewedDetailsFromPlacecard;              //@synthesize viewedDetailsFromPlacecard=_viewedDetailsFromPlacecard - In the implementation block
@property (assign,nonatomic) char hasAppsInstalled;                        //@synthesize hasAppsInstalled=_hasAppsInstalled - In the implementation block
@property (assign,nonatomic) char hasAppsEnabled;                          //@synthesize hasAppsEnabled=_hasAppsEnabled - In the implementation block
+(void)removeAnalyticsBookedSession:(id)arg1 ;
+(id)currentAnalyticsBookedSessionForMuid:(unsigned long long)arg1 createIfNotPresent:(char)arg2 ;
-(void)_mapsBackgrounded;
-(void)_mapsForegrounded;
-(void)_restartSession;
-(char)hasAppsInstalled;
-(void)setHasAppsInstalled:(char)arg1 ;
-(char)hasAppsEnabled;
-(void)setHasAppsEnabled:(char)arg1 ;
-(char)sessionEnded;
-(void)setSessionEnded:(char)arg1 ;
-(id)init;
-(id)description;
-(void)endSession;
-(NSString *)sessionID;
-(void)setBookedUsingMaps:(char)arg1 ;
-(void)setViewedInProactiveTray:(char)arg1 ;
-(void)setTappedProactiveTrayItem:(char)arg1 ;
-(char)bookedUsingMaps;
-(char)viewedInProactiveTray;
-(char)tappedProactiveTrayItem;
-(void)setMuid:(unsigned long long)arg1 ;
-(unsigned long long)muid;
-(void)setViewedInPlacecard:(char)arg1 ;
-(void)setViewedDetailsFromPlacecard:(char)arg1 ;
-(void)setTappedChangeReservation:(char)arg1 ;
-(char)viewedInPlacecard;
-(char)viewedDetailsFromPlacecard;
-(char)tappedChangeReservation;
-(void)setAppID:(NSString *)arg1 ;
-(NSString *)appID;
@end

