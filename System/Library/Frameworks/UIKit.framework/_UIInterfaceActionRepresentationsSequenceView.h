/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:36 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIScrollView.h>

@class UIInterfaceActionVisualStyle, NSArray, NSLayoutConstraint, _UIInterfaceActionSeparatableSequenceView;

@interface _UIInterfaceActionRepresentationsSequenceView : UIScrollView {

	int _sizingSeparatedContentSequenceViewToFitDisabledCount;
	UIInterfaceActionVisualStyle* _visualStyle;
	NSArray* _arrangedActionRepresentationViews;
	int _actionLayoutAxis;
	unsigned _visualCornerPosition;
	NSLayoutConstraint* _minimumHeightConstraint;
	_UIInterfaceActionSeparatableSequenceView* _separatedContentSequenceView;

}

@property (nonatomic,readonly) NSLayoutConstraint * minimumHeightConstraint;                                          //@synthesize minimumHeightConstraint=_minimumHeightConstraint - In the implementation block
@property (nonatomic,readonly) _UIInterfaceActionSeparatableSequenceView * separatedContentSequenceView;              //@synthesize separatedContentSequenceView=_separatedContentSequenceView - In the implementation block
@property (nonatomic,retain) UIInterfaceActionVisualStyle * visualStyle;                                              //@synthesize visualStyle=_visualStyle - In the implementation block
@property (nonatomic,retain) NSArray * arrangedActionRepresentationViews;                                             //@synthesize arrangedActionRepresentationViews=_arrangedActionRepresentationViews - In the implementation block
@property (assign,nonatomic) int actionLayoutAxis;                                                                    //@synthesize actionLayoutAxis=_actionLayoutAxis - In the implementation block
@property (assign,nonatomic) unsigned visualCornerPosition;                                                           //@synthesize visualCornerPosition=_visualCornerPosition - In the implementation block
-(void)layoutSubviews;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)willUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(CGSize)intrinsicContentSize;
-(void)updateConstraints;
-(void)_notifyDidScroll;
-(float)_contentFitCanScrollThreshold;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 ;
-(void)_applyVisualStyle;
-(void)setVisualStyle:(UIInterfaceActionVisualStyle *)arg1 ;
-(UIInterfaceActionVisualStyle *)visualStyle;
-(void)reloadDisplayedContentVisualStyle;
-(unsigned)visualCornerPosition;
-(void)setVisualCornerPosition:(unsigned)arg1 ;
-(id)initWithVisualStyle:(id)arg1 ;
-(float)fittingWidthForLayoutAxis:(int)arg1 ;
-(NSLayoutConstraint *)minimumHeightConstraint;
-(int)actionLayoutAxis;
-(void)_loadDefaultSizingConstraints;
-(void)_updateSeparatedContentSequenceViewToFitSizeIfPossible;
-(void)_disableSeparatedContentSequenceViewToFit;
-(void)_enableSeparatedContentSequenceViewToFit;
-(void)_temporarilySkipSizingSeparatedContentSequenceViewToFit;
-(void)_updateMinimumHeightConstraint;
-(NSArray *)arrangedActionRepresentationViews;
-(float)_minimumNumberOfRowsRequiredVisible;
-(char)_isHorizontalLayout;
-(CGSize)_sizeByApplyingLayoutMarginsAsOutsetToSize:(CGSize)arg1 ;
-(void)_applyVisualStyleToSeparatedContentSequenceView;
-(void)setActionLayoutAxis:(int)arg1 ;
-(void)setArrangedActionRepresentationViews:(NSArray *)arg1 ;
-(_UIInterfaceActionSeparatableSequenceView *)separatedContentSequenceView;
@end

