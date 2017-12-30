/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:29 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Magnifier.app/Magnifier
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Magnifier/Magnifier-Structs.h>
#import <Magnifier/MAGFilterSelectionPreviewView.h>

@class CALayer, UIView, CABackdropLayer, MAGNamedFilterSet, MAGFilterSetChangeSubscription, UISwipeGestureRecognizer;

@interface MAGReducedMotionFilterSelectionPreviewView : MAGFilterSelectionPreviewView {

	char _sizeTransitionInProgress;
	CALayer* _imageLayer;
	UIView* _imageContainer;
	CABackdropLayer* _filterLayer;
	MAGNamedFilterSet* _currentlyDisplayedFilterSet;
	MAGFilterSetChangeSubscription* _filterSetChangeSubscription;
	UISwipeGestureRecognizer* _swipeRightGestureRecognizer;
	UISwipeGestureRecognizer* _swipeLeftGestureRecognizer;

}

@property (nonatomic,retain) CALayer * imageLayer;                                                      //@synthesize imageLayer=_imageLayer - In the implementation block
@property (nonatomic,retain) UIView * imageContainer;                                                   //@synthesize imageContainer=_imageContainer - In the implementation block
@property (nonatomic,retain) CABackdropLayer * filterLayer;                                             //@synthesize filterLayer=_filterLayer - In the implementation block
@property (nonatomic,retain) MAGNamedFilterSet * currentlyDisplayedFilterSet;                           //@synthesize currentlyDisplayedFilterSet=_currentlyDisplayedFilterSet - In the implementation block
@property (nonatomic,retain) MAGFilterSetChangeSubscription * filterSetChangeSubscription;              //@synthesize filterSetChangeSubscription=_filterSetChangeSubscription - In the implementation block
@property (nonatomic,retain) UISwipeGestureRecognizer * swipeRightGestureRecognizer;                    //@synthesize swipeRightGestureRecognizer=_swipeRightGestureRecognizer - In the implementation block
@property (nonatomic,retain) UISwipeGestureRecognizer * swipeLeftGestureRecognizer;                     //@synthesize swipeLeftGestureRecognizer=_swipeLeftGestureRecognizer - In the implementation block
@property (assign,nonatomic) char sizeTransitionInProgress;                                             //@synthesize sizeTransitionInProgress=_sizeTransitionInProgress - In the implementation block
-(void)setFilterSetChangeSubscription:(MAGFilterSetChangeSubscription *)arg1 ;
-(MAGFilterSetChangeSubscription *)filterSetChangeSubscription;
-(UIView *)imageContainer;
-(void)centerFilterSet:(id)arg1 animated:(char)arg2 ;
-(void)sizeTransitionWillBeginToSize:(CGSize)arg1 ;
-(void)sizeTransitionDidEnd;
-(void)setImageContainer:(UIView *)arg1 ;
-(void)setFilterLayer:(CABackdropLayer *)arg1 ;
-(CABackdropLayer *)filterLayer;
-(void)swipedRight:(id)arg1 ;
-(void)setSwipeRightGestureRecognizer:(UISwipeGestureRecognizer *)arg1 ;
-(UISwipeGestureRecognizer *)swipeRightGestureRecognizer;
-(void)swipedLeft:(id)arg1 ;
-(void)setSwipeLeftGestureRecognizer:(UISwipeGestureRecognizer *)arg1 ;
-(UISwipeGestureRecognizer *)swipeLeftGestureRecognizer;
-(void)setCurrentlyDisplayedFilterSet:(MAGNamedFilterSet *)arg1 ;
-(MAGNamedFilterSet *)currentlyDisplayedFilterSet;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(char)sizeTransitionInProgress;
-(void)setSizeTransitionInProgress:(char)arg1 ;
-(CALayer *)imageLayer;
-(void)setImageLayer:(CALayer *)arg1 ;
@end

