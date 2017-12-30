/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:54 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AVHapticEvent : NSObject {

	double _time;
	char _isParameter;
	unsigned _eventType;
	unsigned _paramType;
	float _value;

}

@property (readonly) double time;                     //@synthesize time=_time - In the implementation block
@property (readonly) char isParameter;                //@synthesize isParameter=_isParameter - In the implementation block
@property (readonly) unsigned eventType;              //@synthesize eventType=_eventType - In the implementation block
@property (readonly) unsigned paramType;              //@synthesize paramType=_paramType - In the implementation block
@property (readonly) float value;                     //@synthesize value=_value - In the implementation block
-(id)initWithEventType:(unsigned)arg1 time:(double)arg2 ;
-(id)initWithParameter:(unsigned)arg1 value:(float)arg2 time:(double)arg3 ;
-(char)isParameter;
-(unsigned)paramType;
-(float)value;
-(unsigned)eventType;
-(double)time;
@end

