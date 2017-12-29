/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:40 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface MapsThrottler : NSObject {

	char _hasScheduledUpdateHandler;
	NSDate* _lastUpdateSentDate;
	/*^block*/id _updateHandler;
	id _value;
	NSDate* _valueTimeStamp;
	double _throttlingInterval;

}

@property (nonatomic,readonly) double throttlingInterval;              //@synthesize throttlingInterval=_throttlingInterval - In the implementation block
@property (nonatomic,copy,readonly) id updateHandler;                  //@synthesize updateHandler=_updateHandler - In the implementation block
@property (nonatomic,retain) id value;                                 //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) NSDate * valueTimeStamp;                //@synthesize valueTimeStamp=_valueTimeStamp - In the implementation block
-(id)initWithThrottlingInterval:(double)arg1 updateHandler:(/*^block*/id)arg2 ;
-(void)_scheduleUpdateHandlerWithDelay:(double)arg1 ;
-(double)throttlingInterval;
-(NSDate *)valueTimeStamp;
-(id)init;
-(id)value;
-(void)setValue:(id)arg1 ;
-(id)updateHandler;
@end
