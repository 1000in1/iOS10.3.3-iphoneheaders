/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:54 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class MFSwipeDismissalGestureRecognizer, UIPanGestureRecognizer, MFSwipeActionUIConfigurator, _UIFeedbackStatesBehavior, NSString;

@interface MFSwipeHandler : NSObject <UIGestureRecognizerDelegate> {

	MFSwipeDismissalGestureRecognizer* _dismissalGestureRecognizer;
	UIPanGestureRecognizer* _swipeActionPanRecognizer;
	SCD_Struct_MF13 _currentSwipeConfiguration;
	unsigned _currentSwipeState;
	float _initialTranslation;
	float _confirmationTranslationAdjustment;
	char _active;
	MFSwipeActionUIConfigurator* _configurator;
	_UIFeedbackStatesBehavior* _swipeFeedbackBehavior;

}

@property (assign,nonatomic) MFSwipeActionUIConfigurator * configurator;                     //@synthesize configurator=_configurator - In the implementation block
@property (nonatomic,retain) _UIFeedbackStatesBehavior * swipeFeedbackBehavior;              //@synthesize swipeFeedbackBehavior=_swipeFeedbackBehavior - In the implementation block
@property (nonatomic,readonly) SCD_Struct_MF13 currentSwipeConfiguration; 
@property (nonatomic,readonly) unsigned currentSwipeState;                                   //@synthesize currentSwipeState=_currentSwipeState - In the implementation block
@property (assign,getter=isActive,nonatomic) char active;                                    //@synthesize active=_active - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_swipeRecognizerDidRecognize:(id)arg1 ;
-(void)_dismissalRecognizerDidRecognize:(id)arg1 ;
-(void)_moveSwipedItemToOffset:(float)arg1 animated:(char)arg2 usingSpringWithStiffness:(float)arg3 ;
-(void)_clearSwipeInfo;
-(void)initiateSwipeWithDirection:(unsigned)arg1 location:(CGPoint)arg2 userInitiated:(char)arg3 ;
-(SCD_Struct_MF11)_currentSwipeInfoWithTargetOffset:(float)arg1 animated:(char)arg2 usingSpringWithStiffness:(float)arg3 ;
-(id)initWithSwipeUIConfigurator:(id)arg1 ;
-(void)cancelSwipe;
-(SCD_Struct_MF13)currentSwipeConfiguration;
-(unsigned)currentSwipeState;
-(void)dealloc;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(char)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(char)isActive;
-(void)setActive:(char)arg1 ;
-(void)_swipeRecognizerBegan:(id)arg1 ;
-(void)_swipeRecognizerChanged:(id)arg1 ;
-(void)_swipeRecognizerEnded:(id)arg1 wasCancelled:(char)arg2 ;
-(void)setSwipeFeedbackBehavior:(_UIFeedbackStatesBehavior *)arg1 ;
-(_UIFeedbackStatesBehavior *)swipeFeedbackBehavior;
-(void)_setUp;
-(MFSwipeActionUIConfigurator *)configurator;
-(void)setConfigurator:(MFSwipeActionUIConfigurator *)arg1 ;
@end

