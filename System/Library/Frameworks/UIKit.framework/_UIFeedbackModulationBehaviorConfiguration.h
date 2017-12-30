/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:14 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIFeedbackGeneratorConfiguration.h>

@protocol _UIFeedbackContinuousPlayable;
@class _UIFeedback;

@interface _UIFeedbackModulationBehaviorConfiguration : _UIFeedbackGeneratorConfiguration {

	_UIFeedback*<_UIFeedbackContinuousPlayable> _feedback;
	/*^block*/id _feedbackUpdateBlock;

}

@property (nonatomic,retain) _UIFeedback*<_UIFeedbackContinuousPlayable> feedback;              //@synthesize feedback=_feedback - In the implementation block
@property (nonatomic,copy) id feedbackUpdateBlock;                                              //@synthesize feedbackUpdateBlock=_feedbackUpdateBlock - In the implementation block
+(id)defaultConfiguration;
+(id)sliderConfiguration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)feedbackKeyPaths;
-(int)requiredSupportLevel;
-(id)feedbackUpdateBlock;
-(_UIFeedback*<_UIFeedbackContinuousPlayable>)feedback;
-(void)setFeedback:(_UIFeedback*<_UIFeedbackContinuousPlayable>)arg1 ;
-(void)setFeedbackUpdateBlock:(id)arg1 ;
@end

