/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:00 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/SSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, NSString;

@interface SSOperationProgress : NSObject <SSXPCCoding, NSCopying> {

	char _canPause;
	double _changeRate;
	long long _currentValue;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	double _estimatedTimeRemaining;
	long long _maxValue;
	long long _normalizedCurrentValue;
	long long _normalizedMaxValue;
	int _operationType;
	NSMutableArray* _snapshotTimes;
	NSMutableArray* _snapshotValues;
	int _units;

}

@property (assign) char canPause; 
@property (assign) int operationType; 
@property (assign) double changeRate; 
@property (assign) long long currentValue; 
@property (assign) double estimatedTimeRemaining; 
@property (assign) long long maxValue; 
@property (assign) int units; 
@property (assign) long long normalizedCurrentValue; 
@property (assign) long long normalizedMaxValue; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCanPause:(char)arg1 ;
-(void)setNormalizedCurrentValue:(long long)arg1 ;
-(void)setNormalizedMaxValue:(long long)arg1 ;
-(void)setOperationType:(int)arg1 ;
-(char)canPause;
-(long long)normalizedCurrentValue;
-(long long)normalizedMaxValue;
-(double)estimatedTimeRemaining;
-(double)changeRate;
-(void)_updateStatisticsFromSnapshots;
-(void)resetSnapshots;
-(void)setChangeRate:(double)arg1 ;
-(void)setEstimatedTimeRemaining:(double)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)snapshot;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(int)units;
-(void)setUnits:(int)arg1 ;
-(long long)currentValue;
-(void)setCurrentValue:(long long)arg1 ;
-(long long)maxValue;
-(void)setMaxValue:(long long)arg1 ;
-(int)operationType;
@end

