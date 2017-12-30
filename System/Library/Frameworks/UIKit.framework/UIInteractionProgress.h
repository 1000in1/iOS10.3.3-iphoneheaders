/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:22 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSPointerArray;

@interface UIInteractionProgress : NSObject {

	NSPointerArray* _observers;
	float _previousPercentComplete;
	double _previousUpdateTime;
	double _mostRecentUpdateTime;
	int _atLeastTwoUpdates;
	float _percentComplete;

}

@property (nonatomic,readonly) float percentComplete;              //@synthesize percentComplete=_percentComplete - In the implementation block
@property (nonatomic,readonly) float velocity; 
-(id)init;
-(id)description;
-(float)percentComplete;
-(float)velocity;
-(void)addProgressObserver:(id)arg1 ;
-(void)endInteraction:(char)arg1 ;
-(unsigned)_indexOfObserver:(id)arg1 ;
-(void)setPercentComplete:(float)arg1 ;
-(void)endInteraction:(char)arg1 finalVelocity:(float)arg2 ;
-(void)removeProgressObserver:(id)arg1 ;
-(int)numberOfObservers;
@end

