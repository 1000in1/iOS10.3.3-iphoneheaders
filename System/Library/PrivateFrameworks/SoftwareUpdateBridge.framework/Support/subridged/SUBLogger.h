/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:41 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateBridge.framework/Support/subridged
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_os_log;
@class NSObject;

@interface SUBLogger : NSObject {

	NSObject*<OS_os_log> _logInfo;
	NSObject*<OS_os_log> _logError;
	int _logLevel;

}

@property (assign,nonatomic) int logLevel;              //@synthesize logLevel=_logLevel - In the implementation block
+(id)sharedLogger;
-(int)logLevel;
-(void)setLogLevel:(int)arg1 ;
-(id)init;
-(void)dealloc;
-(void)logAtLevel:(int)arg1 label:(const char*)arg2 format:(id)arg3 ;
-(void)setLoglevel:(int)arg1 ;
@end

