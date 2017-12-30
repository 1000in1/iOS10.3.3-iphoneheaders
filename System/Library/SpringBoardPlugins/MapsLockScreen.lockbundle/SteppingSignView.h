/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:40:01 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/SpringBoardPlugins/MapsLockScreen.lockbundle/MapsLockScreen
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsLockScreen/MapsLockScreen-Structs.h>
#import <UIKit/UIView.h>

@protocol SteppingSignViewDelegate;
@class NSArray, UIView, VariableBaselineSpacingStackView, SteppingTransitArtworkView, UILabel, MKExpandingLabel, NSLayoutConstraint, UILongPressGestureRecognizer, GEOComposedTransitTripRouteStep, MKTransitInfoLabelView;

@interface SteppingSignView : UIView {

	NSArray* _layoutConstraints;
	UIView* _centeredContentView;
	VariableBaselineSpacingStackView* _textStackView;
	SteppingTransitArtworkView* _artworkGroupView;
	UILabel* _majorInstructionLabel;
	MKExpandingLabel* _minorInstructionLabel;
	UILabel* _tertiaryInstructionLabel;
	NSLayoutConstraint* _topToMajorInstructionLabelConstraint;
	NSLayoutConstraint* _yCenteredInShieldMajorInstructionLabelConstraint;
	UILongPressGestureRecognizer* _clusteredLabelLongTapGestureRecognizer;
	char _dimmed;
	id<SteppingSignViewDelegate> _delegate;
	float _preferredMaxLayoutWidth;
	GEOComposedTransitTripRouteStep* _boardClusteredStep;
	MKTransitInfoLabelView* _clusteredRouteOptionsLabel;

}

@property (assign,nonatomic,__weak) id<SteppingSignViewDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) float preferredMaxLayoutWidth;                                      //@synthesize preferredMaxLayoutWidth=_preferredMaxLayoutWidth - In the implementation block
@property (assign,getter=isDimmed,nonatomic) char dimmed;                                        //@synthesize dimmed=_dimmed - In the implementation block
@property (nonatomic,retain) NSArray * imageSources; 
@property (nonatomic,copy) GEOComposedTransitTripRouteStep * boardClusteredStep;                 //@synthesize boardClusteredStep=_boardClusteredStep - In the implementation block
@property (assign,nonatomic) char minorTextExpanded; 
@property (nonatomic,readonly) MKTransitInfoLabelView * clusteredRouteOptionsLabel;              //@synthesize clusteredRouteOptionsLabel=_clusteredRouteOptionsLabel - In the implementation block
+(id)preferredMinorTextAttributes;
+(id)preferredMajorTextAttributes;
+(id)preferredTertiaryTextAttributes;
+(char)requiresConstraintBasedLayout;
-(NSArray *)imageSources;
-(void)setMajorAttributedText:(id)arg1 ;
-(void)setMinorAttributedText:(id)arg1 ;
-(void)setTertiaryAttributedText:(id)arg1 ;
-(void)setImageSources:(NSArray *)arg1 ;
-(void)resetConstraints;
-(id)_fontPresentAtView:(id)arg1 ;
-(float)_preferredTextLeadingForAvailableWidth:(float)arg1 ;
-(float)_maxWidthInstructionText;
-(float)_maxWidthForImages;
-(float)_baselineToTopMarginForView:(id)arg1 ;
-(void)_resetLayoutConstraints;
-(void)_configureExpandingLabel:(id)arg1 ;
-(void)_configureRouteClusteringLabel:(id)arg1 ;
-(void)_clusteredRouteOptionsButtonTapped:(id)arg1 ;
-(void)updateDynamicType;
-(void)setMinorTextExpanded:(char)arg1 ;
-(void)setBoardClusteredStep:(GEOComposedTransitTripRouteStep *)arg1 ;
-(GEOComposedTransitTripRouteStep *)boardClusteredStep;
-(MKTransitInfoLabelView *)clusteredRouteOptionsLabel;
-(char)minorTextExpanded;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<SteppingSignViewDelegate>)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<SteppingSignViewDelegate>)delegate;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(id)viewForLastBaselineLayout;
-(void)setPreferredMaxLayoutWidth:(float)arg1 ;
-(float)preferredMaxLayoutWidth;
-(id)viewForFirstBaselineLayout;
-(void)_configureLabel:(id)arg1 ;
-(void)clearContent;
-(void)setDimmed:(char)arg1 ;
-(char)isDimmed;
@end

