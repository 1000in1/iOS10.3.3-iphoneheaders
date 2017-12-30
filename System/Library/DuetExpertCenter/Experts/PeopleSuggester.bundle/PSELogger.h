/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:38 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/DuetExpertCenter/Experts/PeopleSuggester.bundle/PeopleSuggester
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _DECAggregateLogger;

@interface PSELogger : NSObject {

	_DECAggregateLogger* _logger;

}
+(id)_keyWithSubkey:(id)arg1 ;
+(id)_keyWithSubkey:(id)arg1 suffix:(id)arg2 ;
+(id)_outcomeToString:(unsigned)arg1 ;
-(void)logOutcome:(unsigned)arg1 ;
-(void)logEngagementWithSource:(id)arg1 ;
-(void)logPredictionsBySource:(id)arg1 predictions:(unsigned)arg2 ;
-(void)logPersonItemStatistics:(id)arg1 ;
-(id)initWithDECAggregateLogger:(id)arg1 ;
@end

