/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:54 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/DiagnosticsService.app/PlugIns/Diagnostic-3738.appex/Diagnostic-3738
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSString;

@interface DABackupRestoreEvent : NSObject {

	char _successfulBackup;
	NSDate* _date;
	NSString* _engine;
	int _backupRestoreEventCode;

}

@property (nonatomic,retain) NSDate * date;                           //@synthesize date=_date - In the implementation block
@property (nonatomic,retain) NSString * engine;                       //@synthesize engine=_engine - In the implementation block
@property (assign,nonatomic) int backupRestoreEventCode;              //@synthesize backupRestoreEventCode=_backupRestoreEventCode - In the implementation block
@property (assign,nonatomic) char successfulBackup;                   //@synthesize successfulBackup=_successfulBackup - In the implementation block
-(int)backupRestoreEventCode;
-(id)initWithDate:(id)arg1 eventSubType:(id)arg2 successfulBackup:(char)arg3 eventCode:(int)arg4 ;
-(void)setBackupRestoreEventCode:(int)arg1 ;
-(char)successfulBackup;
-(void)setSuccessfulBackup:(char)arg1 ;
-(id)dictionary;
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
-(void)setEngine:(NSString *)arg1 ;
-(NSString *)engine;
@end

