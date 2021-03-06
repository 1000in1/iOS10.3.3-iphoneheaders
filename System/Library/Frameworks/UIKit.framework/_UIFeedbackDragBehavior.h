/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:22 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIFeedbackGenerator.h>
#import <UIKit/UIFeedbackGeneratorUserInteractionDriven.h>

@protocol _UIFeedbackContinuousPlayable;
@class _UIFeedback, _UIFeedbackDragBehaviorConfiguration;

@interface _UIFeedbackDragBehavior : UIFeedbackGenerator <UIFeedbackGeneratorUserInteractionDriven> {

	int _state;
	_UIFeedback*<_UIFeedbackContinuousPlayable> _playingContinuousFeedback;

}

@property (getter=_dragConfiguration,nonatomic,readonly) _UIFeedbackDragBehaviorConfiguration * dragConfiguration; 
@property (assign,setter=_setState:,getter=_state,nonatomic) int state;                                                                                                                  //@synthesize state=_state - In the implementation block
@property (setter=_setPlayingContinuousFeedback:,getter=_playingContinuousFeedback,nonatomic,retain) _UIFeedback*<_UIFeedbackContinuousPlayable> playingContinuousFeedback;              //@synthesize playingContinuousFeedback=_playingContinuousFeedback - In the implementation block
+(Class)_configurationClass;
+(id)retargetBehaviorWithStyle:(int)arg1 coordinateSpace:(id)arg2 ;
+(id)dragBehaviorWithStyle:(int)arg1 coordinateSpace:(id)arg2 ;
+(id)dragBehaviorWithCoordinateSpace:(id)arg1 configuration:(id)arg2 ;
-(void)userInteractionEnded;
-(void)userInteractionStarted;
-(int)_state;
-(void)targetUpdated;
-(void)positionUpdated;
-(void)userInteractionCancelled;
-(id)_stats_key;
-(id)_playingContinuousFeedback;
-(void)_setState:(int)arg1 ;
-(void)_stopPlayingContinuousFeedback;
-(id)_dragConfiguration;
-(void)_startPlayingContinuousFeedback;
-(void)_startPlayingContinuousFeedbackNow;
-(void)_setPlayingContinuousFeedback:(id)arg1 ;
-(void)dropTargetUpdated;
-(void)snappedToFinalPosition;
@end

