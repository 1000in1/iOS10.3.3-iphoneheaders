/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:28 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/InCallService.app/InCallService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <InCallService/InCallService-Structs.h>
#import <UIKit/UIView.h>

@protocol PHCarPlayInCallButtonsViewDelegate;
@class NSMutableDictionary, NSArray, NSMutableArray;

@interface PHCarPlayInCallButtonsView : UIView {

	int _buttonsMode;
	id<PHCarPlayInCallButtonsViewDelegate> _delegate;
	int _highlightedControlIndex;
	float _buttonDistributionScalingFactor;
	NSMutableDictionary* _buttonsDictionary;
	NSArray* _buttonsArray;
	NSMutableArray* _buttonDividerViews;

}

@property (assign) float buttonDistributionScalingFactor;                        //@synthesize buttonDistributionScalingFactor=_buttonDistributionScalingFactor - In the implementation block
@property (retain) NSMutableDictionary * buttonsDictionary;                      //@synthesize buttonsDictionary=_buttonsDictionary - In the implementation block
@property (retain) NSArray * buttonsArray;                                       //@synthesize buttonsArray=_buttonsArray - In the implementation block
@property (retain) NSMutableArray * buttonDividerViews;                          //@synthesize buttonDividerViews=_buttonDividerViews - In the implementation block
@property (assign) int buttonsMode;                                              //@synthesize buttonsMode=_buttonsMode - In the implementation block
@property (assign) id<PHCarPlayInCallButtonsViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int highlightedControlIndex;                        //@synthesize highlightedControlIndex=_highlightedControlIndex - In the implementation block
@property (readonly) int numberOfControls; 
-(char)shouldShowActionTypeSendToVoicemail;
-(void)setButtonsMode:(int)arg1 animated:(char)arg2 ;
-(NSArray *)buttonsArray;
-(void)setButtonsArray:(NSArray *)arg1 ;
-(void)callModelChangedNotification:(id)arg1 ;
-(void)setButtonDistributionScalingFactor:(float)arg1 ;
-(void)setButtonsDictionary:(NSMutableDictionary *)arg1 ;
-(void)setButtonDividerViews:(NSMutableArray *)arg1 ;
-(void)phoneCallStatusChangedNotification:(id)arg1 ;
-(id)buttonForButtonType:(int)arg1 createIfNecessary:(char)arg2 createWithHorizontalPositionFraction:(float)arg3 ;
-(id)existingButtonsNotInArray:(id)arg1 ;
-(void)applyHorizontalPositioningConstraintWithFraction:(float)arg1 forButton:(id)arg2 ;
-(NSMutableArray *)buttonDividerViews;
-(void)applyHorizontalPositioningConstraintWithFraction:(float)arg1 forDividerView:(id)arg2 ;
-(void)removeButtons:(id)arg1 ;
-(void)updateButtonsForCallModelState;
-(NSMutableDictionary *)buttonsDictionary;
-(float)distributedFractionForUndistributedFraction:(float)arg1 ;
-(float)buttonDistributionScalingFactor;
-(id)keyForButtonType:(int)arg1 ;
-(void)buttonWasTapped:(id)arg1 ;
-(int)numberOfControls;
-(int)buttonsMode;
-(void)setButtonsMode:(int)arg1 ;
-(int)highlightedControlIndex;
-(void)setHighlightedControlIndex:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<PHCarPlayInCallButtonsViewDelegate>)arg1 ;
-(void)dealloc;
-(id<PHCarPlayInCallButtonsViewDelegate>)delegate;
-(id)preferredFocusEnvironments;
-(char)canBecomeFirstResponder;
-(void)setMuted:(char)arg1 ;
@end

