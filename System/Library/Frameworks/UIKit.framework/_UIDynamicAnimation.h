/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:29 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@interface _UIDynamicAnimation : NSObject {

	/*^block*/id _completion;
	int _state;
	unsigned _began : 1;
	unsigned _running : 1;
	unsigned _completing : 1;
	unsigned _yield : 1;
	unsigned _grouped : 1;
	unsigned _usesNSTimer : 1;

}

@property (nonatomic,readonly) int state; 
+(void)_updateAnimations:(id)arg1 timer:(id)arg2 ;
+(void)_updateAnimations:(id)arg1 ;
+(void)_updateAnimationsWithTimer:(id)arg1 ;
+(id)dynamicAnimationForView:(id)arg1 withInitialValue:(double)arg2 velocity:(double)arg3 type:(int)arg4 anchorPoint:(CGPoint)arg5 ;
-(void)pu_setFriction:(double)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(int)state;
-(void)stop;
-(void)runWithCompletion:(/*^block*/id)arg1 ;
-(char)_animateForInterval:(double)arg1 ;
-(void)_appendDescriptionToString:(id)arg1 atLevel:(int)arg2 ;
-(void)_completeWithFinished:(char)arg1 ;
-(char)_usesNSTimer;
-(void)runWithCompletion:(/*^block*/id)arg1 forScreen:(id)arg2 runLoopMode:(id)arg3 ;
-(void)_stopAnimation;
-(void)_appendSubclassDescription:(id)arg1 atLevel:(int)arg2 ;
-(void)_callAppliers:(/*^block*/id)arg1 additionalEndAppliers:(/*^block*/id)arg2 done:(char)arg3 ;
-(void)_cancelWithAppliers:(/*^block*/id)arg1 ;
-(char)_shouldYield;
-(void)_setShouldYield:(char)arg1 ;
-(void)_setUsesNSTimer:(char)arg1 ;
-(char)_isGrouped;
-(void)_setGrouped:(char)arg1 ;
-(char)_isRunning;
@end

