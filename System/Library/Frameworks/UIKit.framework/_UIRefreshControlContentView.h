/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:30:01 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UIRefreshControl, UIColor, _UIFeedbackImpactBehavior, NSAttributedString;

@interface _UIRefreshControlContentView : UIView {

	UIRefreshControl* _refreshControl;
	UIColor* _tintColor;
	_UIFeedbackImpactBehavior* _impactFeedbackBehavior;

}

@property (nonatomic,readonly) int style; 
@property (assign,nonatomic) UIRefreshControl * refreshControl;                               //@synthesize refreshControl=_refreshControl - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;                                             //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic,retain) NSAttributedString * attributedTitle; 
@property (nonatomic,readonly) float minimumSnappingHeight; 
@property (nonatomic,readonly) float maximumSnappingHeight; 
@property (nonatomic,retain) _UIFeedbackImpactBehavior * impactFeedbackBehavior;              //@synthesize impactFeedbackBehavior=_impactFeedbackBehavior - In the implementation block
-(void)setAttributedTitle:(NSAttributedString *)arg1 ;
-(int)style;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(void)setRefreshControl:(UIRefreshControl *)arg1 ;
-(UIRefreshControl *)refreshControl;
-(_UIFeedbackImpactBehavior *)impactFeedbackBehavior;
-(void)setImpactFeedbackBehavior:(_UIFeedbackImpactBehavior *)arg1 ;
-(NSAttributedString *)attributedTitle;
-(void)refreshControlInvalidatedSnappingHeight;
-(float)_heightAtWhichNoneOfTheInterfaceElementsAreVisibleEvenIfTheControlIsStillPartiallyOnScreen;
-(float)maximumSnappingHeight;
-(float)minimumSnappingHeight;
-(void)willTransitionFromState:(int)arg1 toState:(int)arg2 ;
-(void)didTransitionFromState:(int)arg1 toState:(int)arg2 ;
@end
