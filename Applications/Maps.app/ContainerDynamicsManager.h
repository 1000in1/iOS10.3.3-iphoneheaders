/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:40 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIDynamicAnimatorDelegate.h>

@protocol ContainerDynamicsDelegate;
@class StickyPositionBehavior, UIDynamicAnimator, NSString;

@interface ContainerDynamicsManager : NSObject <UIDynamicAnimatorDelegate> {

	StickyPositionBehavior* _stickyPositionBehavior;
	id<ContainerDynamicsDelegate> _delegate;
	UIDynamicAnimator* _animator;
	/*^block*/id _completionSnapBlock;

}

@property (assign,nonatomic,__weak) id<ContainerDynamicsDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIDynamicAnimator * animator;                               //@synthesize animator=_animator - In the implementation block
@property (nonatomic,copy) id completionSnapBlock;                                       //@synthesize completionSnapBlock=_completionSnapBlock - In the implementation block
@property (nonatomic,readonly) float postionY; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)startDragging;
-(void)stopDragging;
-(void)setCurrentAnchorPoint:(CGPoint)arg1 ;
-(void)cancelAllBehaviors;
-(void)cancelCurrentBehaviors;
-(float)postionY;
-(void)snapToPoint:(CGPoint)arg1 completion:(/*^block*/id)arg2 ;
-(id)completionSnapBlock;
-(void)setCompletionSnapBlock:(id)arg1 ;
-(void)setDelegate:(id<ContainerDynamicsDelegate>)arg1 ;
-(void)dealloc;
-(id<ContainerDynamicsDelegate>)delegate;
-(void)setAnimator:(UIDynamicAnimator *)arg1 ;
-(void)dynamicAnimatorWillResume:(id)arg1 ;
-(void)dynamicAnimatorDidPause:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)addLinearVelocity:(CGPoint)arg1 ;
-(UIDynamicAnimator *)animator;
-(id)initWithContainer:(id)arg1 ;
@end

