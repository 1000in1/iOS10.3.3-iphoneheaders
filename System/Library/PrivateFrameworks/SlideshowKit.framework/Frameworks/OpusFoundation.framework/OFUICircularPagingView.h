/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:34 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusFoundation/OpusFoundation-Structs.h>
#import <OpusFoundation/OFUIView.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol OFUICircularPagingViewDelegate;
@class OFUICircularPagingViewController, UIScrollView, UIView, NSString;

@interface OFUICircularPagingView : OFUIView <UIScrollViewDelegate> {

	float _gapBetweenPages;
	OFUICircularPagingViewController* _circularPagingViewController;
	id<OFUICircularPagingViewDelegate> _delegate;
	UIScrollView* _scrollView;
	UIView* _previousPagingView;
	UIView* _currentPagingView;
	UIView* _nextPagingView;
	char _rotationInProgress;
	char _scrollViewIsMoving;

}

@property (assign,nonatomic) OFUICircularPagingViewController * circularPagingViewController;              //@synthesize circularPagingViewController=_circularPagingViewController - In the implementation block
@property (assign,nonatomic) id<OFUICircularPagingViewDelegate> delegate;                                  //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<OFUICircularPagingViewDelegate>)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(void)setBounds:(CGRect)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(id<OFUICircularPagingViewDelegate>)delegate;
-(void)didRotate;
-(void)commonInit;
-(void)_updateLayout;
-(void)setCircularPagingViewController:(OFUICircularPagingViewController *)arg1 ;
-(void)willAnimateRotation;
-(CGRect)_frameForScrollView;
-(CGRect)_frameForPageAtIndex:(unsigned)arg1 ;
-(id)pagingViewAtIndex:(unsigned)arg1 ;
-(OFUICircularPagingViewController *)circularPagingViewController;
@end
