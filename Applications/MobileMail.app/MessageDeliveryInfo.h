/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:55 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSDate;

@interface MessageDeliveryInfo : NSObject <NSCoding> {

	NSDate* _created;
	NSDate* _lastAttempt;
	int _numberOfFailures;
	int _failedCellularAttempts;
	int _lastStatus;
	unsigned _messageSize;
	unsigned _throughput;

}

@property (nonatomic,readonly) NSDate * created;                      //@synthesize created=_created - In the implementation block
@property (assign,nonatomic) int numberOfFailures;                    //@synthesize numberOfFailures=_numberOfFailures - In the implementation block
@property (assign,nonatomic) int failedCellularAttempts;              //@synthesize failedCellularAttempts=_failedCellularAttempts - In the implementation block
@property (assign,nonatomic) int lastStatus;                          //@synthesize lastStatus=_lastStatus - In the implementation block
@property (nonatomic,retain) NSDate * lastAttempt;                    //@synthesize lastAttempt=_lastAttempt - In the implementation block
@property (assign,nonatomic) unsigned messageSize;                    //@synthesize messageSize=_messageSize - In the implementation block
@property (assign,nonatomic) unsigned throughput;                     //@synthesize throughput=_throughput - In the implementation block
-(NSDate *)lastAttempt;
-(void)setLastAttempt:(NSDate *)arg1 ;
-(int)numberOfFailures;
-(void)setNumberOfFailures:(int)arg1 ;
-(int)failedCellularAttempts;
-(void)setFailedCellularAttempts:(int)arg1 ;
-(void)setThroughput:(unsigned)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setMessageSize:(unsigned)arg1 ;
-(unsigned)messageSize;
-(int)lastStatus;
-(void)setLastStatus:(int)arg1 ;
-(unsigned)throughput;
-(NSDate *)created;
@end

