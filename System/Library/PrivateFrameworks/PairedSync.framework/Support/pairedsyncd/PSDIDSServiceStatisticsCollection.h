/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:21 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/PairedSync.framework/Support/pairedsyncd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, NSString;

@interface PSDIDSServiceStatisticsCollection : NSObject <NSSecureCoding> {

	NSMutableDictionary* _statistics;
	NSString* _channelName;

}

@property (nonatomic,copy) NSString * channelName;              //@synthesize channelName=_channelName - In the implementation block
+(id)knownChannelNames;
+(id)statisticsCollectionWithChannelName:(id)arg1 statisticsDictionary:(id)arg2 ;
+(char)supportsSecureCoding;
-(id)statisticsCollectionByDiffingStatisticsCollection:(id)arg1 ;
-(void)enumerateServiceStatisticsWithBlock:(/*^block*/id)arg1 ;
-(id)statisticsForServiceName:(id)arg1 ;
-(void)addServiceStatistics:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setChannelName:(NSString *)arg1 ;
-(NSString *)channelName;
@end

