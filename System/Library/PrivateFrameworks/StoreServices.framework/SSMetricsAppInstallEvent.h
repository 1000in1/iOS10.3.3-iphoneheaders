/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:03 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSMetricsMutableEvent.h>

@class NSString;

@interface SSMetricsAppInstallEvent : SSMetricsMutableEvent

@property (nonatomic,retain) NSString * buildVersion; 
@property (nonatomic,retain) NSString * bundleID; 
@property (nonatomic,retain) NSString * hardwareType; 
@property (nonatomic,retain) NSString * installError; 
@property (assign,nonatomic) unsigned installStatus; 
@property (assign,nonatomic) unsigned installType; 
@property (assign,nonatomic) long long jobID; 
+(unsigned)_installStatusForString:(id)arg1 ;
+(unsigned)_installTypeForString:(id)arg1 ;
+(id)_stringForInstallStatus:(unsigned)arg1 ;
+(id)_stringForInstallType:(unsigned)arg1 ;
-(void)setInstallType:(unsigned)arg1 ;
-(unsigned)installType;
-(char)requiresDiagnosticSendingPermission;
-(NSString *)installError;
-(unsigned)installStatus;
-(long long)jobID;
-(void)setHardwareType:(NSString *)arg1 ;
-(void)setInstallError:(NSString *)arg1 ;
-(void)setInstallStatus:(unsigned)arg1 ;
-(void)setJobID:(long long)arg1 ;
-(id)init;
-(id)description;
-(NSString *)buildVersion;
-(NSString *)hardwareType;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(void)setBuildVersion:(NSString *)arg1 ;
@end

