/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:28 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/InCallService.app/InCallService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <InCallService/InCallService-Structs.h>
#import <UIKit/UIView.h>
#import <InCallService/PHSlidingButtonDelegateProtocol.h>

@protocol PHBottomBarDelegateProtocol;
@class NSArray, UIView, UIButton, PHSlidingButton, NSMutableArray, NSString;

@interface PHBottomBar : UIView <PHSlidingButtonDelegateProtocol> {

	char _declineAndRemindIsAvailable;
	char _declineAndMessageIsAvailable;
	char _enabled;
	char _blursBackground;
	char _usesLowerButtons;
	char _animating;
	id<PHBottomBarDelegateProtocol> _delegate;
	int _currentState;
	int _orientation;
	float _bottomMargin;
	float _yOffsetForLoweredButtons;
	NSArray* _buttonLayoutConstraints;
	UIView* _topLayoutGuide;
	UIView* _mainButtonLayoutGuide;
	NSArray* _horizontalConstraintsForSupplementalButtons;
	UIButton* _supplementalTopLeftButton;
	UIButton* _supplementalTopRightButton;
	UIButton* _mainLeftButton;
	UIButton* _mainRightButton;
	UIButton* _sideButtonLeft;
	UIButton* _sideButtonRight;
	UIButton* _supplementalBottomRightButton;
	UIButton* _supplementalBottomLeftButton;
	PHSlidingButton* _slidingButton;
	NSMutableArray* _hijackedGestureRecognizers;
	/*^block*/id _pendingStateBlock;

}

@property (retain) NSArray * buttonLayoutConstraints;                                  //@synthesize buttonLayoutConstraints=_buttonLayoutConstraints - In the implementation block
@property (nonatomic,retain) UIView * topLayoutGuide;                                  //@synthesize topLayoutGuide=_topLayoutGuide - In the implementation block
@property (nonatomic,retain) UIView * mainButtonLayoutGuide;                           //@synthesize mainButtonLayoutGuide=_mainButtonLayoutGuide - In the implementation block
@property (retain) NSArray * horizontalConstraintsForSupplementalButtons;              //@synthesize horizontalConstraintsForSupplementalButtons=_horizontalConstraintsForSupplementalButtons - In the implementation block
@property (nonatomic,retain) UIButton * supplementalTopLeftButton;                     //@synthesize supplementalTopLeftButton=_supplementalTopLeftButton - In the implementation block
@property (nonatomic,retain) UIButton * supplementalTopRightButton;                    //@synthesize supplementalTopRightButton=_supplementalTopRightButton - In the implementation block
@property (nonatomic,retain) UIButton * mainLeftButton;                                //@synthesize mainLeftButton=_mainLeftButton - In the implementation block
@property (nonatomic,retain) UIButton * mainRightButton;                               //@synthesize mainRightButton=_mainRightButton - In the implementation block
@property (nonatomic,retain) UIButton * sideButtonLeft;                                //@synthesize sideButtonLeft=_sideButtonLeft - In the implementation block
@property (nonatomic,retain) UIButton * sideButtonRight;                               //@synthesize sideButtonRight=_sideButtonRight - In the implementation block
@property (nonatomic,retain) UIButton * supplementalBottomRightButton;                 //@synthesize supplementalBottomRightButton=_supplementalBottomRightButton - In the implementation block
@property (nonatomic,retain) UIButton * supplementalBottomLeftButton;                  //@synthesize supplementalBottomLeftButton=_supplementalBottomLeftButton - In the implementation block
@property (nonatomic,retain) PHSlidingButton * slidingButton;                          //@synthesize slidingButton=_slidingButton - In the implementation block
@property (nonatomic,retain) NSMutableArray * hijackedGestureRecognizers;              //@synthesize hijackedGestureRecognizers=_hijackedGestureRecognizers - In the implementation block
@property (assign,nonatomic) char animating;                                           //@synthesize animating=_animating - In the implementation block
@property (copy) id pendingStateBlock;                                                 //@synthesize pendingStateBlock=_pendingStateBlock - In the implementation block
@property (__weak) id<PHBottomBarDelegateProtocol> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char declineAndRemindIsAvailable;                         //@synthesize declineAndRemindIsAvailable=_declineAndRemindIsAvailable - In the implementation block
@property (assign,nonatomic) char declineAndMessageIsAvailable;                        //@synthesize declineAndMessageIsAvailable=_declineAndMessageIsAvailable - In the implementation block
@property (assign,nonatomic) char enabled;                                             //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) char blursBackground;                                     //@synthesize blursBackground=_blursBackground - In the implementation block
@property (assign,nonatomic) char usesLowerButtons;                                    //@synthesize usesLowerButtons=_usesLowerButtons - In the implementation block
@property (assign,nonatomic) int currentState;                                         //@synthesize currentState=_currentState - In the implementation block
@property (assign,nonatomic) int orientation;                                          //@synthesize orientation=_orientation - In the implementation block
@property (nonatomic,readonly) CGSize effectiveSize; 
@property (assign,nonatomic) float bottomMargin;                                       //@synthesize bottomMargin=_bottomMargin - In the implementation block
@property (assign,nonatomic) float yOffsetForLoweredButtons;                           //@synthesize yOffsetForLoweredButtons=_yOffsetForLoweredButtons - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(float)defaultYOffsetForBottomButtons;
+(float)defaultBottomSupplementalButtonSpacing;
+(float)defaultWidth;
+(float)defaultSideMarginForSingleButton;
+(float)defaultSideMarginForDoubleButton;
+(float)defaultInterButtonSpacing;
+(float)defaultBottomMargin;
-(NSArray *)buttonLayoutConstraints;
-(void)setButtonLayoutConstraints:(NSArray *)arg1 ;
-(CGRect)frameForControlWithActionType:(int)arg1 ;
-(char)shouldShowActionTypeSendToVoicemail;
-(CGSize)effectiveSize;
-(PHSlidingButton *)slidingButton;
-(void)setSlidingButton:(PHSlidingButton *)arg1 ;
-(void)setUsesLowerButtons:(char)arg1 ;
-(void)setDeclineAndMessageIsAvailable:(char)arg1 ;
-(void)setDeclineAndRemindIsAvailable:(char)arg1 ;
-(void)setCurrentState:(int)arg1 animated:(char)arg2 animationCompletionBlock:(/*^block*/id)arg3 ;
-(id)nameForActionType:(int)arg1 ;
-(void)setYOffsetForLoweredButtons:(float)arg1 ;
-(void)setAction:(int)arg1 enabled:(char)arg2 ;
-(void)refreshCustomizedActionTypeTitles;
-(void)setAction:(int)arg1 selected:(char)arg2 ;
-(char)shouldShowActionTypeCameraFlip;
-(char)shouldShowActionTypeAudioRoute;
-(UIView *)mainButtonLayoutGuide;
-(void)_clearHijackedGestureRecognizers;
-(NSMutableArray *)hijackedGestureRecognizers;
-(char)usesLowerButtons;
-(float)yOffsetForLoweredButtons;
-(void)updateTopLayoutGuide;
-(void)updateMainButtonLayoutGuide;
-(id)controlForActionType:(int)arg1 ;
-(id)viewLabels;
-(void)setPendingStateBlock:(id)arg1 ;
-(char)animateFromState:(int)arg1 toState:(int)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeAllButtons;
-(id)makeButtonWithType:(int)arg1 title:(id)arg2 image:(id)arg3 color:(id)arg4 font:(id)arg5 fontColor:(id)arg6 ;
-(void)setMainLeftButton:(UIButton *)arg1 ;
-(void)setSupplementalBottomLeftButton:(UIButton *)arg1 ;
-(void)setMainRightButton:(UIButton *)arg1 ;
-(void)setSupplementalTopLeftButton:(UIButton *)arg1 ;
-(void)setSupplementalTopRightButton:(UIButton *)arg1 ;
-(id)makeSlidingButtonWithType:(int)arg1 ;
-(void)setSupplementalBottomRightButton:(UIButton *)arg1 ;
-(void)setSideButtonLeft:(UIButton *)arg1 ;
-(UIButton *)mainRightButton;
-(UIButton *)mainLeftButton;
-(UIButton *)supplementalTopLeftButton;
-(UIButton *)supplementalTopRightButton;
-(UIButton *)supplementalBottomLeftButton;
-(UIButton *)supplementalBottomRightButton;
-(UIButton *)sideButtonLeft;
-(char)declineAndMessageIsAvailable;
-(char)declineAndRemindIsAvailable;
-(id)constraintsForState:(int)arg1 ;
-(id)_layoutConstraintsForSupplementalBottomLeftButtonInCall;
-(id)customTitleStringForActionType:(int)arg1 givenDefaultTitle:(id)arg2 ;
-(id)pendingStateBlock;
-(void)refreshCustomizedActionTypeTitleForButton:(id)arg1 ;
-(id)updatedImageForActionType:(int)arg1 givenDefaultImage:(id)arg2 ;
-(id)updatedSelectedImageForActionType:(int)arg1 givenDefaultSelectedImage:(id)arg2 ;
-(int)updatedActionTypeForActionType:(int)arg1 ;
-(void)prepareButtonsForAnimationEnd;
-(void)animateFromIncomingCallStateToInCallState:(int)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)animateInSupplementalBottomRightButton:(id)arg1 WithCompletion:(/*^block*/id)arg2 ;
-(void)animateOutSupplementalBottomRightButtonToState:(int)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)animateFromIncomingCallStateToFaceTimeInCallState:(int)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)animateOutSupplementalBottomLeftButtonToState:(int)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)animateFromOutgoingStateToInCallStateWithCompletion:(/*^block*/id)arg1 ;
-(void)animateFromOutgoingStateToCallbackAndMessageUIToState:(int)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)prepareButtonsForAnimationBegin;
-(void)_startShopDemoMode;
-(int)_gestureStateToCompletionState:(int)arg1 ;
-(void)setMainButtonLayoutGuide:(UIView *)arg1 ;
-(NSArray *)horizontalConstraintsForSupplementalButtons;
-(void)setHorizontalConstraintsForSupplementalButtons:(NSArray *)arg1 ;
-(void)setHijackedGestureRecognizers:(NSMutableArray *)arg1 ;
-(id)init;
-(void)addSubview:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(char)enabled;
-(void)setDelegate:(id<PHBottomBarDelegateProtocol>)arg1 ;
-(void)dealloc;
-(char)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id<PHBottomBarDelegateProtocol>)delegate;
-(void)setOrientation:(int)arg1 ;
-(int)orientation;
-(int)currentState;
-(void)setEnabled:(char)arg1 ;
-(CGSize)intrinsicContentSize;
-(UIView *)topLayoutGuide;
-(void)setAnimating:(char)arg1 ;
-(char)animating;
-(void)setCurrentState:(int)arg1 ;
-(void)buttonPressed:(id)arg1 ;
-(char)blursBackground;
-(void)setBlursBackground:(char)arg1 ;
-(void)buttonLongPressed:(id)arg1 ;
-(void)slidingButton:(id)arg1 didSlideToProportion:(float)arg2 ;
-(void)slidingButtonWillFinishSlide;
-(void)slidingButtonDidFinishSlide;
-(UIButton *)sideButtonRight;
-(void)setSideButtonRight:(UIButton *)arg1 ;
-(void)setTopLayoutGuide:(UIView *)arg1 ;
-(float)bottomMargin;
-(void)setBottomMargin:(float)arg1 ;
@end

