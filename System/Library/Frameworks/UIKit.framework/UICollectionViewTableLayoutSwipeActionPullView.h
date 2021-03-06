/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:24 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@protocol UICollectionViewTableLayoutSwipeActionPullViewDelegate;
@class NSMutableArray, NSArray, UIView, _UIFeedbackStatesBehavior, UICollectionViewTableLayoutSwipeAction, UIColor;

@interface UICollectionViewTableLayoutSwipeActionPullView : UIView {

	NSMutableArray* _buttons;
	NSArray* _actions;
	UIView* _backgroundView;
	char _swipeActionsDidChange;
	float _openThreshold;
	float _confirmationThreshold;
	unsigned _cellEdge;
	unsigned _state;
	float _currentOffset;
	id<UICollectionViewTableLayoutSwipeActionPullViewDelegate> _delegate;
	float _progressToConfirm;
	_UIFeedbackStatesBehavior* _feedbackBehavior;

}

@property (assign,nonatomic) id<UICollectionViewTableLayoutSwipeActionPullViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned cellEdge;                                                              //@synthesize cellEdge=_cellEdge - In the implementation block
@property (nonatomic,readonly) UICollectionViewTableLayoutSwipeAction * primarySwipeAction; 
@property (nonatomic,readonly) float currentOffset;                                                            //@synthesize currentOffset=_currentOffset - In the implementation block
@property (nonatomic,readonly) float openThreshold; 
@property (nonatomic,readonly) float confirmationThreshold; 
@property (nonatomic,readonly) UIColor * primaryActionColor; 
@property (nonatomic,readonly) char primaryActionIsDestructive; 
@property (nonatomic,readonly) char primaryActionResetsSwipedRow; 
@property (nonatomic,readonly) char hasActions; 
@property (assign,nonatomic) unsigned state;                                                                   //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) float progressToConfirm;                                                          //@synthesize progressToConfirm=_progressToConfirm - In the implementation block
@property (assign,nonatomic,__weak) _UIFeedbackStatesBehavior * feedbackBehavior;                              //@synthesize feedbackBehavior=_feedbackBehavior - In the implementation block
-(id)init;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<UICollectionViewTableLayoutSwipeActionPullViewDelegate>)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)description;
-(id<UICollectionViewTableLayoutSwipeActionPullViewDelegate>)delegate;
-(unsigned)state;
-(void)setState:(unsigned)arg1 ;
-(_UIFeedbackStatesBehavior *)feedbackBehavior;
-(void)setFeedbackBehavior:(_UIFeedbackStatesBehavior *)arg1 ;
-(unsigned)_swipeActionCount;
-(UICollectionViewTableLayoutSwipeAction *)primarySwipeAction;
-(float)_directionalMultiplier;
-(unsigned)cellEdge;
-(float)confirmationThreshold;
-(void)_tappedButton:(id)arg1 ;
-(void)_rebuildButtons;
-(unsigned)_nextStateForPullView;
-(void)setProgressToConfirm:(float)arg1 ;
-(float)progressToConfirm;
-(float)_progressToState:(unsigned)arg1 ;
-(char)primaryActionResetsSwipedRow;
-(char)_offsetMeetsConfirmationThreshold:(float)arg1 progress:(float*)arg2 ;
-(id)initWithCellEdge:(unsigned)arg1 ;
-(char)primaryActionIsDestructive;
-(char)hasActions;
-(UIColor *)primaryActionColor;
-(float)openThreshold;
-(void)resetView;
-(void)configureWithSwipeActions:(id)arg1 ;
-(void)moveToOffset:(float)arg1 animated:(char)arg2 usingSpringWithStiffnessFactor:(float)arg3 initialVelocity:(float)arg4 ;
-(float)currentOffset;
@end

