/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:25 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UIKBRTRecognizerDelegate, _UIKBRTRecognizerTouchLoggingProtocol, _UIKBRTRecognizerTouchPointTrackingProtocol, OS_dispatch_queue;
#import <UIKit/UIKit-Structs.h>
@class NSMutableSet, NSObject, NSMutableArray;

@interface _UIKBRTRecognizer : NSObject {

	char _isWaiting;
	char _disableHomeRowReturn;
	id<_UIKBRTRecognizerDelegate> _delegate;
	id<_UIKBRTRecognizerTouchLoggingProtocol> _touchLogger;
	id<_UIKBRTRecognizerTouchPointTrackingProtocol> _touchTracker;
	NSMutableSet* _definitiveRules;
	NSMutableSet* _averagingRules;
	float _maximumNonRestMoveDistance;
	NSObject*<OS_dispatch_queue> _touchQueue;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSMutableArray* _touchInfos;
	NSMutableSet* _activeTouches;
	NSObject*<OS_dispatch_queue> _activeTouchesQueue;
	NSMutableArray* _ignoredTouches;
	NSObject*<OS_dispatch_queue> _ignoredTouchesQueue;
	unsigned _numProlongedTouches;
	CGSize _clusterRestHaloSize;
	double _touchIntervalAverage;

}

@property (assign,nonatomic) CGSize clusterRestHaloSize;                                                //@synthesize clusterRestHaloSize=_clusterRestHaloSize - In the implementation block
@property (assign,nonatomic) float maximumNonRestMoveDistance;                                          //@synthesize maximumNonRestMoveDistance=_maximumNonRestMoveDistance - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> touchQueue;                                   //@synthesize touchQueue=_touchQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> delegateQueue;                                //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,retain) NSMutableArray * touchInfos;                                               //@synthesize touchInfos=_touchInfos - In the implementation block
@property (nonatomic,retain) NSMutableSet * activeTouches;                                              //@synthesize activeTouches=_activeTouches - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> activeTouchesQueue;                           //@synthesize activeTouchesQueue=_activeTouchesQueue - In the implementation block
@property (nonatomic,retain) NSMutableArray * ignoredTouches;                                           //@synthesize ignoredTouches=_ignoredTouches - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> ignoredTouchesQueue;                          //@synthesize ignoredTouchesQueue=_ignoredTouchesQueue - In the implementation block
@property (assign,nonatomic) unsigned numProlongedTouches;                                              //@synthesize numProlongedTouches=_numProlongedTouches - In the implementation block
@property (assign,nonatomic) double touchIntervalAverage;                                               //@synthesize touchIntervalAverage=_touchIntervalAverage - In the implementation block
@property (nonatomic,retain) id<_UIKBRTRecognizerTouchLoggingProtocol> touchLogger;                     //@synthesize touchLogger=_touchLogger - In the implementation block
@property (nonatomic,retain) id<_UIKBRTRecognizerTouchPointTrackingProtocol> touchTracker;              //@synthesize touchTracker=_touchTracker - In the implementation block
@property (assign,nonatomic) id<_UIKBRTRecognizerDelegate> delegate;                                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSMutableSet * definitiveRules;                                          //@synthesize definitiveRules=_definitiveRules - In the implementation block
@property (nonatomic,readonly) NSMutableSet * averagingRules;                                           //@synthesize averagingRules=_averagingRules - In the implementation block
@property (assign,nonatomic) char disableHomeRowReturn;                                                 //@synthesize disableHomeRowReturn=_disableHomeRowReturn - In the implementation block
-(id)init;
-(void)setDelegate:(id<_UIKBRTRecognizerDelegate>)arg1 ;
-(id<_UIKBRTRecognizerDelegate>)delegate;
-(void)reset;
-(void)markTouchProcessed:(id)arg1 withIdentifier:(id)arg2 ;
-(void)explicitlyIgnoreTouch:(id)arg1 withIdentifier:(id)arg2 ;
-(void)touchDown:(id)arg1 withIdentifier:(id)arg2 canLogTouch:(char)arg3 ;
-(void)touchDragged:(id)arg1 withIdentifier:(id)arg2 ;
-(void)touchUp:(id)arg1 withIdentifier:(id)arg2 ;
-(void)touchCancelled:(id)arg1 withIdentifier:(id)arg2 ;
-(NSMutableSet *)averagingRules;
-(void)setStandardKeyPixelSize:(CGSize)arg1 ;
-(void)setDisableHomeRowReturn:(char)arg1 ;
-(void)setActiveTouches:(NSMutableSet *)arg1 ;
-(NSMutableSet *)activeTouches;
-(void)makeTouchIgnored:(id)arg1 force:(char)arg2 ;
-(void)kbStatusMessage:(id)arg1 ;
-(char)queryDelegateOfIgnoringTouch:(id)arg1 forOtherTouch:(char)arg2 ;
-(float)letRulesModifyNewTouchInfo:(id)arg1 ;
-(void)letRulesModifyPendingTouchInfo:(id)arg1 ;
-(char)makeTouchActive:(id)arg1 ;
-(void)_doBeginTouchWithTouchInfo:(id)arg1 ;
-(char)notifyDelegateOfMovedTouch:(id)arg1 ;
-(void)notifyDelegateOfMovedIgnoredTouch:(id)arg1 ;
-(void)_doMovedTouchWithTouchInfo:(id)arg1 ;
-(char)queryDelegateToBeginTouch:(id)arg1 forBeginState:(unsigned)arg2 restartIfNecessary:(char)arg3 ;
-(void)processTouchInfo:(id)arg1 ;
-(void)notifyDelegateOfCancelledTouch:(id)arg1 ;
-(void)_doEndedTouchWithTouchInfo:(id)arg1 ;
-(void)cancelTouchOnLayoutWithTouchInfo:(id)arg1 ;
-(void)_doCancelledTouchWithTouchInfo:(id)arg1 ;
-(char)removedFromActiveTouches:(id)arg1 ;
-(void)_doMarkTouchProcessedWithTouchInfo:(id)arg1 ;
-(void)_doIgnoreTouchWithTouchInfo:(id)arg1 ;
-(void)updateIgnoredTouchesForTouchInfo:(id)arg1 whenTouchInfo:(id)arg2 changesStateTo:(char)arg3 ;
-(void)notifyDelegateOfSuccessfulTouch:(id)arg1 ;
-(char)addedToActiveTouches:(id)arg1 ;
-(char)queryDelegateOfRestingTouch:(id)arg1 ;
-(void)notifyDelegateOfRestingTouch:(id)arg1 ;
-(void)makeTouchIgnored:(id)arg1 force:(char)arg2 withMessage:(id)arg3 ;
-(void)notifyDelegateOfIgnoringTouch:(id)arg1 ;
-(void)makeTouchIgnored:(id)arg1 force:(char)arg2 because:(id)arg3 ;
-(id<_UIKBRTRecognizerTouchLoggingProtocol>)touchLogger;
-(void)setTouchLogger:(id<_UIKBRTRecognizerTouchLoggingProtocol>)arg1 ;
-(id<_UIKBRTRecognizerTouchPointTrackingProtocol>)touchTracker;
-(void)setTouchTracker:(id<_UIKBRTRecognizerTouchPointTrackingProtocol>)arg1 ;
-(NSMutableSet *)definitiveRules;
-(char)disableHomeRowReturn;
-(CGSize)clusterRestHaloSize;
-(void)setClusterRestHaloSize:(CGSize)arg1 ;
-(float)maximumNonRestMoveDistance;
-(void)setMaximumNonRestMoveDistance:(float)arg1 ;
-(NSObject*<OS_dispatch_queue>)touchQueue;
-(void)setTouchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMutableArray *)touchInfos;
-(void)setTouchInfos:(NSMutableArray *)arg1 ;
-(NSObject*<OS_dispatch_queue>)activeTouchesQueue;
-(void)setActiveTouchesQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMutableArray *)ignoredTouches;
-(void)setIgnoredTouches:(NSMutableArray *)arg1 ;
-(NSObject*<OS_dispatch_queue>)ignoredTouchesQueue;
-(void)setIgnoredTouchesQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(unsigned)numProlongedTouches;
-(void)setNumProlongedTouches:(unsigned)arg1 ;
-(double)touchIntervalAverage;
-(void)setTouchIntervalAverage:(double)arg1 ;
@end

