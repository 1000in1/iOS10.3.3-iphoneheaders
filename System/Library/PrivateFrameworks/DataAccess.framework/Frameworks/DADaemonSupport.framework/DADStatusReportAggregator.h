/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:39 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DADaemonSupport.framework/DADaemonSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface DADStatusReportAggregator : NSObject {

	int _numOutstandingReports;
	/*^block*/id _completionBlock;
	NSMutableDictionary* _persistentUUIDToStatusReport;
	char _finished;

}
-(void)noteAdditionalReportDicts:(id)arg1 ;
-(void)_coalesceAndReport;
-(id)initWithStatusReports:(id)arg1 numOutstandingReports:(int)arg2 timeout:(double)arg3 completionBlock:(/*^block*/id)arg4 ;
@end
