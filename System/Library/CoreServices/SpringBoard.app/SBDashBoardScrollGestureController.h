/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:27 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBSystemGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <SpringBoard/SBDashBoardEventHandling.h>

@protocol SBDashBoardScrollGestureControllerDelegate;
@class SBSystemGestureManager, SBPagedScrollView, SBDashBoardView, SBScreenEdgePanGestureRecognizer, SBSwallowingGestureRecognizer, UIGestureRecognizer, SBHorizontalScrollFailureRecognizer, NSString;

@interface SBDashBoardScrollGestureController : NSObject <SBSystemGestureRecognizerDelegate, BSDescriptionProviding, SBDashBoardEventHandling> {

	SBSystemGestureManager* _systemGestureManager;
	SBPagedScrollView* _scrollView;
	SBDashBoardView* _dashBoardView;
	int _scrollingStrategy;
	SBScreenEdgePanGestureRecognizer* _screenEdgeGestureRecognizer;
	SBSwallowingGestureRecognizer* _swallowGestureRecognizer;
	UIGestureRecognizer* _scrollViewGestureRecognizer;
	SBHorizontalScrollFailureRecognizer* _horizontalFailureGestureRecognizer;
	id<SBDashBoardScrollGestureControllerDelegate> _delegate;

}

@property (assign,nonatomic) int scrollingStrategy;                                                       //@synthesize scrollingStrategy=_scrollingStrategy - In the implementation block
@property (assign,nonatomic,__weak) id<SBDashBoardScrollGestureControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)viewForSystemGestureRecognizer:(id)arg1 ;
-(int)scrollingStrategy;
-(char)wouldHandleButtonEvent:(id)arg1 ;
-(id)initWithDashBoardView:(id)arg1 systemGestureManager:(id)arg2 ;
-(void)_horizontalScrollFailureGestureRecognizerChanged:(id)arg1 ;
-(void)_updateForScrollingStrategy:(int)arg1 fromScrollingStrategy:(int)arg2 ;
-(void)_registerGestures:(unsigned)arg1 ;
-(void)_unregisterGestures:(unsigned)arg1 ;
-(void)invalidate;
-(void)setDelegate:(id<SBDashBoardScrollGestureControllerDelegate>)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(NSString *)debugDescription;
-(id<SBDashBoardScrollGestureControllerDelegate>)delegate;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(char)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(char)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(char)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(char)handleEvent:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setScrollingStrategy:(int)arg1 ;
@end

