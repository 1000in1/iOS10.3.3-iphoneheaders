/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:11 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/OTACrashCopier
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OTACrashCopier/OTACrashCopier-Structs.h>
@class NSString;

@interface OTAConditionMonitor : NSObject {

	SCNetworkReachabilityRef _reachabilityRef;
	int _consentToken;
	NSString* _markerPath[3][2];
	double _lastTime[3][2];
	double _desiredThrottle[3];
	double _desiredInterval[3];
	char _isRoaming;
	char _hasTelephonyCapability;
	char _isAppleTV;
	int _connectionType;
	char _haveUserConsent;

}

@property (assign,nonatomic) char haveUserConsent;              //@synthesize haveUserConsent=_haveUserConsent - In the implementation block
@property (nonatomic,readonly) int connectionType;              //@synthesize connectionType=_connectionType - In the implementation block
@property (nonatomic,readonly) char isAppleTV;                  //@synthesize isAppleTV=_isAppleTV - In the implementation block
-(double)readDefault:(id)arg1 orUse:(double)arg2 ;
-(void)setHaveUserConsent:(char)arg1 ;
-(char)_getIsRoaming;
-(void)_readDateFromSubmission:(int)arg1 forMarker:(int)arg2 ;
-(char)shouldConsider:(int)arg1 ;
-(double)timeSinceLast:(int)arg1 forCadence:(int)arg2 ;
-(void)_touchMarkerFile:(id)arg1 withModDate:(id)arg2 ;
-(double)windowDuration:(int)arg1 ;
-(char)maySubmitLogs:(int)arg1 WithOverride:(char)arg2 ;
-(void)markTimeForLast:(int)arg1 forCadence:(int)arg2 withResult:(char)arg3 ;
-(void)setNetworkConnectionType:(int)arg1 ;
-(void)setIsRoaming:(char)arg1 ;
-(SCD_Struct_OT1)calcDelayBeforeNextSubmission:(char)arg1 ;
-(char)haveUserConsent;
-(id)init;
-(void)dealloc;
-(int)connectionType;
-(char)isAppleTV;
-(void)install;
@end

