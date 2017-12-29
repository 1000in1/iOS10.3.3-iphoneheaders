/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:45 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIView.h>
#import <Maps/NavsignLabelDelegate.h>

@protocol NavContainerLayoutDelegate;
@class NSString, NSArray, GuidanceManeuverView, NavSignLabel, UIImageView, UIActivityIndicatorView, NSLayoutConstraint, UIView;

@interface NavPrimarySignView : UIView <NavsignLabelDelegate> {

	char _needsUpdateShield;
	char _dimmed;
	char _shieldViewReducedSize;
	unsigned _primarySignType;
	NSString* _primaryMajorText;
	NSArray* _primaryMinorTextAlternatives;
	GuidanceManeuverView* _primaryManeuverView;
	NSString* _shieldText;
	int _shieldType;
	unsigned _signsLayout;
	id<NavContainerLayoutDelegate> _layoutDelegate;
	NavSignLabel* _primaryMajorLabel;
	NavSignLabel* _primaryMinorLabel;
	UIImageView* _shieldView;
	UIActivityIndicatorView* _spinner;
	NSLayoutConstraint* _primaryLabelBaselineToTopConstraint;
	NSLayoutConstraint* _shieldViewTopToTopConstraint;
	NSLayoutConstraint* _secondaryLabelBaselineToPrimaryLabelBaselineConstraint;
	NSLayoutConstraint* _bottomToPrimaryLabelBaselineConstraint;
	NSLayoutConstraint* _bottomToSecondaryLabelBaselineConstraint;
	NSLayoutConstraint* _heightConstraint;
	NSLayoutConstraint* _primaryLabelLeadingToPrimaryManeuverViewTrailingConstraint;
	NSLayoutConstraint* _trailingToShieldViewTrailingConstraint;

}

@property (nonatomic,retain) NavSignLabel * primaryMajorLabel;                                                             //@synthesize primaryMajorLabel=_primaryMajorLabel - In the implementation block
@property (nonatomic,retain) NavSignLabel * primaryMinorLabel;                                                             //@synthesize primaryMinorLabel=_primaryMinorLabel - In the implementation block
@property (nonatomic,retain) UIImageView * shieldView;                                                                     //@synthesize shieldView=_shieldView - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * spinner;                                                            //@synthesize spinner=_spinner - In the implementation block
@property (assign,getter=isShieldViewReducedSize,nonatomic) char shieldViewReducedSize;                                    //@synthesize shieldViewReducedSize=_shieldViewReducedSize - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * primaryLabelBaselineToTopConstraint;                                     //@synthesize primaryLabelBaselineToTopConstraint=_primaryLabelBaselineToTopConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * shieldViewTopToTopConstraint;                                            //@synthesize shieldViewTopToTopConstraint=_shieldViewTopToTopConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * secondaryLabelBaselineToPrimaryLabelBaselineConstraint;                  //@synthesize secondaryLabelBaselineToPrimaryLabelBaselineConstraint=_secondaryLabelBaselineToPrimaryLabelBaselineConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * bottomToPrimaryLabelBaselineConstraint;                                  //@synthesize bottomToPrimaryLabelBaselineConstraint=_bottomToPrimaryLabelBaselineConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * bottomToSecondaryLabelBaselineConstraint;                                //@synthesize bottomToSecondaryLabelBaselineConstraint=_bottomToSecondaryLabelBaselineConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * heightConstraint;                                                        //@synthesize heightConstraint=_heightConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * primaryLabelLeadingToPrimaryManeuverViewTrailingConstraint;              //@synthesize primaryLabelLeadingToPrimaryManeuverViewTrailingConstraint=_primaryLabelLeadingToPrimaryManeuverViewTrailingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * trailingToShieldViewTrailingConstraint;                                  //@synthesize trailingToShieldViewTrailingConstraint=_trailingToShieldViewTrailingConstraint - In the implementation block
@property (assign,nonatomic) unsigned primarySignType;                                                                     //@synthesize primarySignType=_primarySignType - In the implementation block
@property (nonatomic,copy) NSString * primaryMajorText;                                                                    //@synthesize primaryMajorText=_primaryMajorText - In the implementation block
@property (nonatomic,copy) NSArray * primaryMinorTextAlternatives;                                                         //@synthesize primaryMinorTextAlternatives=_primaryMinorTextAlternatives - In the implementation block
@property (nonatomic,readonly) GuidanceManeuverView * primaryManeuverView;                                                 //@synthesize primaryManeuverView=_primaryManeuverView - In the implementation block
@property (nonatomic,copy) NSString * shieldText;                                                                          //@synthesize shieldText=_shieldText - In the implementation block
@property (assign,nonatomic) int shieldType;                                                                               //@synthesize shieldType=_shieldType - In the implementation block
@property (assign,nonatomic) unsigned signsLayout;                                                                         //@synthesize signsLayout=_signsLayout - In the implementation block
@property (assign,nonatomic,__weak) id<NavContainerLayoutDelegate> layoutDelegate;                                         //@synthesize layoutDelegate=_layoutDelegate - In the implementation block
@property (assign,getter=isDimmed,nonatomic) char dimmed;                                                                  //@synthesize dimmed=_dimmed - In the implementation block
@property (nonatomic,readonly) unsigned numberOfLinesDisplayedOnMinorLabel; 
@property (nonatomic,readonly) UIView * viewForSecondarySignTextToAlignLeading; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSignsLayout:(unsigned)arg1 ;
-(unsigned)signsLayout;
-(void)updateTheme;
-(SCD_Struct_Di11)arrowMetrics;
-(void)setSignsLayout:(unsigned)arg1 withAnimation:(id)arg2 ;
-(char)navsignLabelCanExpand;
-(void)navsignLabelIncreaseFrameWidth;
-(void)setConstraintPrioritiesForOneLabel;
-(void)setConstraintPrioritiesForTwoLabels;
-(CGSize)arrowReferenceSize;
-(void)setPrimarySignType:(unsigned)arg1 ;
-(void)setPrimaryMajorText:(NSString *)arg1 ;
-(void)setPrimaryMinorText:(id)arg1 ;
-(void)setNeedsUpdateShield;
-(void)updateShieldView;
-(CGAffineTransform)transformForView:(id)arg1 scaledToLeadingAtScale:(float)arg2 ;
-(CGAffineTransform)transformForView:(id)arg1 scaledToTopAndTrailingAtScale:(float)arg2 ;
-(void)transformLabelsForSignsLayout:(unsigned)arg1 ;
-(unsigned)numberOfLinesDisplayedOnMinorLabel;
-(UIView *)viewForSecondarySignTextToAlignLeading;
-(void)configureForRerouting;
-(void)configureForProceedToRouteWithDisplayString:(id)arg1 ;
-(void)configureForFailedToReroute;
-(void)configureForArrivalWithDestinationString:(id)arg1 maneuverType:(int)arg2 ;
-(unsigned)primarySignType;
-(NSString *)primaryMajorText;
-(NSArray *)primaryMinorTextAlternatives;
-(void)setPrimaryMinorTextAlternatives:(NSArray *)arg1 ;
-(GuidanceManeuverView *)primaryManeuverView;
-(NavSignLabel *)primaryMajorLabel;
-(void)setPrimaryMajorLabel:(NavSignLabel *)arg1 ;
-(NavSignLabel *)primaryMinorLabel;
-(void)setPrimaryMinorLabel:(NavSignLabel *)arg1 ;
-(UIImageView *)shieldView;
-(void)setShieldView:(UIImageView *)arg1 ;
-(char)isShieldViewReducedSize;
-(void)setShieldViewReducedSize:(char)arg1 ;
-(NSLayoutConstraint *)primaryLabelBaselineToTopConstraint;
-(void)setPrimaryLabelBaselineToTopConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)shieldViewTopToTopConstraint;
-(void)setShieldViewTopToTopConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)secondaryLabelBaselineToPrimaryLabelBaselineConstraint;
-(void)setSecondaryLabelBaselineToPrimaryLabelBaselineConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)bottomToPrimaryLabelBaselineConstraint;
-(void)setBottomToPrimaryLabelBaselineConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)bottomToSecondaryLabelBaselineConstraint;
-(void)setBottomToSecondaryLabelBaselineConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)primaryLabelLeadingToPrimaryManeuverViewTrailingConstraint;
-(void)setPrimaryLabelLeadingToPrimaryManeuverViewTrailingConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)trailingToShieldViewTrailingConstraint;
-(void)setTrailingToShieldViewTrailingConstraint:(NSLayoutConstraint *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(NSLayoutConstraint *)heightConstraint;
-(void)setHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(UIActivityIndicatorView *)spinner;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(NSString *)shieldText;
-(void)setShieldText:(NSString *)arg1 ;
-(void)setShieldType:(int)arg1 ;
-(int)shieldType;
-(void)setupSubviews;
-(void)setupConstraints;
-(void)clearContent;
-(void)setLayoutDelegate:(id<NavContainerLayoutDelegate>)arg1 ;
-(id<NavContainerLayoutDelegate>)layoutDelegate;
-(void)setDimmed:(char)arg1 ;
-(char)isDimmed;
@end
