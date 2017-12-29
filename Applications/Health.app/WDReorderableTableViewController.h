/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:28 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HKTableViewController.h>

@protocol WDReorderableTableViewControllerDelegate;
@class UILongPressGestureRecognizer, CADisplayLink, UIView, NSIndexPath;

@interface WDReorderableTableViewController : HKTableViewController {

	UILongPressGestureRecognizer* _longPressRecognizer;
	CADisplayLink* _scrollTimer;
	UIView* _draggingView;
	float _scrollSpeed;
	NSIndexPath* _currentIndexPath;
	char _reordering;
	id<WDReorderableTableViewControllerDelegate> _delegate;
	float _draggingViewOpacity;

}

@property (assign,getter=isReordering,nonatomic) char reordering;                                       //@synthesize reordering=_reordering - In the implementation block
@property (assign,nonatomic,__weak) id<WDReorderableTableViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) float draggingViewOpacity;                                                 //@synthesize draggingViewOpacity=_draggingViewOpacity - In the implementation block
-(void)_longPressFired:(id)arg1 ;
-(void)willBeginReordering;
-(void)didEndReordering;
-(void)_cancelLongPress;
-(void)_beginPressAndHoldGestureWithRecognizer:(id)arg1 ;
-(void)_recognizerPanned:(id)arg1 ;
-(void)_recognizerEnded:(id)arg1 ;
-(void)_alertDelegateDidBeginReordering:(id)arg1 ;
-(void)_performTableViewUpdatesWithBlock:(/*^block*/id)arg1 ;
-(void)_updateCurrentIndexIfNecessary:(id)arg1 ;
-(void)_activateScrollTimer;
-(void)_deactivateScrollTimer;
-(void)_alertDelegateDidEndReordering;
-(id)_targetIndexPathWithHeight:(float)arg1 yPosition:(float)arg2 ;
-(void)_alertDelegateDidMoveFromIndexPath:(id)arg1 toIndexPath:(id)arg2 ;
-(float)draggingViewOpacity;
-(void)setDraggingViewOpacity:(float)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<WDReorderableTableViewControllerDelegate>)arg1 ;
-(id<WDReorderableTableViewControllerDelegate>)delegate;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(float)_heightForRowAtIndexPath:(id)arg1 ;
-(id)initWithStyle:(int)arg1 ;
-(void)_scrollTimerFired:(id)arg1 ;
-(unsigned)_numberOfRows;
-(void)setReordering:(char)arg1 ;
-(char)isReordering;
@end
