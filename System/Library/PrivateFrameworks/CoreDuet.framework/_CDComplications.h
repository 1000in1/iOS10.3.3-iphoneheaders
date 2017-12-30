/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:43 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, CDSession, NSUserDefaults, NSMutableDictionary, NSDictionary, CDAttribute;

@interface _CDComplications : NSObject {

	NSObject*<OS_dispatch_queue> complicationQueue;
	CDSession* session;
	int deviceChangeToken;
	NSUserDefaults* pushLimits;
	NSMutableDictionary* meterTokens;
	NSDictionary* _activeComplications;
	CDAttribute* attribute;

}

@property (nonatomic,copy) NSDictionary * activeComplications;              //@synthesize activeComplications=_activeComplications - In the implementation block
+(id)sharedComplication;
+(id)initializeForAdmissionChecking:(char)arg1 ;
-(id)initForComplications;
-(void)readOutActiveComplications;
-(int)remainingPushesOnComplication:(id)arg1 andReduceBy:(id)arg2 ;
-(NSDictionary *)activeComplications;
-(char)watchIsCharging;
-(int)remainingPushesOnComplicationForiOSApplicationWithBundleID:(id)arg1 ;
-(char)admissionCheckOnComplication:(id)arg1 forRemote:(char)arg2 error:(id*)arg3 ;
-(char)isBundleActiveComplication:(id)arg1 ;
-(void)meteringStartedOnComplication:(id)arg1 costDictionary:(id)arg2 onDate:(id)arg3 ;
-(void)meteringUpdateOnComplication:(id)arg1 costDictionary:(id)arg2 onDate:(id)arg3 ;
-(void)meteringStoppedOnComplication:(id)arg1 costDictionary:(id)arg2 onDate:(id)arg3 ;
-(id)CDAttributeForComplication:(id)arg1 error:(id*)arg2 ;
-(void)setActiveComplications:(NSDictionary *)arg1 ;
@end

