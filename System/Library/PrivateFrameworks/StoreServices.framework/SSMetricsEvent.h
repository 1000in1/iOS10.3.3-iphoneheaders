/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:32 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SSMetricsEvent : NSObject {

	char _shouldSuppressDSIDHeader;
	NSString* _eventType;

}

@property (nonatomic,retain,readonly) NSString * eventType;                //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,readonly) char shouldSuppressDSIDHeader;              //@synthesize shouldSuppressDSIDHeader=_shouldSuppressDSIDHeader - In the implementation block
+(id)_globalCanaryLock;
+(id)globalEventCanary;
+(void)setGlobalEventCanary:(id)arg1 ;
-(char)isFieldBlacklistEnabled;
-(char)isBlacklistedByConfiguration:(id)arg1 ;
-(id)allTableEntityPropertiesPermittedByConfiguration:(id)arg1 externalValues:(id)arg2 ;
-(id)decorateReportingURL:(id)arg1 ;
-(char)shouldSuppressDSIDHeader;
-(char)requiresDiagnosticSendingPermission;
-(id)_dictionaryRepresentationOfBody;
-(id)allTableEntityPropertiesPermittedByConfiguration:(id)arg1 ;
-(NSString *)eventType;
-(id)millisecondsFromTimeInterval:(double)arg1 ;
-(double)timeIntervalFromMilliseconds:(id)arg1 ;
-(void)appendPropertiesToBody:(id)arg1 ;
@end
