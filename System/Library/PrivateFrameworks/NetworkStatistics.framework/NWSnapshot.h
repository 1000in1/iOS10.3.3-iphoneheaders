/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:30:06 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/NetworkStatistics.framework/NetworkStatistics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NetworkStatistics/NetworkStatistics-Structs.h>
@interface NWSnapshot : NSObject {

	nstat_counts _counts;

}

@property (readonly) unsigned long long rxPackets; 
@property (readonly) unsigned long long rxBytes; 
@property (readonly) unsigned long long txPackets; 
@property (readonly) unsigned long long txBytes; 
@property (readonly) unsigned rxDuplicateBytes; 
@property (readonly) unsigned rxOutOfOrderBytes; 
@property (readonly) unsigned txRetransmittedBytes; 
@property (readonly) unsigned connectAttempts; 
@property (readonly) unsigned connectSuccesses; 
@property (readonly) double rttMinimum; 
@property (readonly) double rttAverage; 
@property (readonly) double rttVariation; 
@property (readonly) unsigned long long rxCellularBytes; 
@property (readonly) unsigned long long rxWiFiBytes; 
@property (readonly) unsigned long long rxWiredBytes; 
@property (readonly) unsigned long long txCellularBytes; 
@property (readonly) unsigned long long txWiFiBytes; 
@property (readonly) unsigned long long txWiredBytes; 
-(id)description;
-(unsigned)connectAttempts;
-(unsigned)connectSuccesses;
-(double)rttMinimum;
-(double)rttAverage;
-(void)_initWithCounts:(const nstat_counts*)arg1 ;
-(unsigned long long)txBytes;
-(unsigned long long)rxBytes;
-(unsigned long long)rxPackets;
-(unsigned long long)txPackets;
-(unsigned long long)rxWiredBytes;
-(unsigned long long)txWiredBytes;
-(unsigned long long)rxCellularBytes;
-(unsigned long long)txCellularBytes;
-(unsigned long long)rxWiFiBytes;
-(unsigned long long)txWiFiBytes;
-(double)rttVariation;
-(unsigned)rxDuplicateBytes;
-(unsigned)rxOutOfOrderBytes;
-(unsigned)txRetransmittedBytes;
@end
