/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:22 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <SpringBoard/SBPresentingDelegate.h>
#import <libobjc.A.dylib/CCUIControlCenterObserver.h>

@protocol SBCoordinatedPresenting;
@class SBLockScreenView, SBLockScreenHintTapGestureRecognizer, SBLockScreenHintLongPressGestureRecognizer, SBLockScreenHintPanGestureRecognizer, NSMutableSet, NSMapTable, NSDate, NSString;

@interface SBLockScreenHintManager : NSObject <UIGestureRecognizerDelegate, SBPresentingDelegate, CCUIControlCenterObserver> {

	char _gestureHandlingEnabled;
	char _guestGestureActive;
	char _didEvaluatePressDelay;
	char _fingerOnMesa;
	SBLockScreenView* _lockScreenView;
	SBLockScreenHintTapGestureRecognizer* _tapGesture;
	SBLockScreenHintLongPressGestureRecognizer* _longPressGesture;
	SBLockScreenHintPanGestureRecognizer* _panGesture;
	NSMutableSet* _gestures;
	NSMapTable* _controllersToGuestGestures;
	NSMapTable* _controllersToConflictingGuestGestures;
	int _gestureState;
	id<SBCoordinatedPresenting> _previousActiveController;
	id<SBCoordinatedPresenting> _activeController;
	unsigned _activeHintEdge;
	NSDate* _initialTouchTimeStamp;
	CGPoint _initialPanLocationInViewSpace;

}

@property (nonatomic,retain) SBLockScreenHintTapGestureRecognizer * tapGesture;                          //@synthesize tapGesture=_tapGesture - In the implementation block
@property (nonatomic,retain) SBLockScreenHintLongPressGestureRecognizer * longPressGesture;              //@synthesize longPressGesture=_longPressGesture - In the implementation block
@property (nonatomic,retain) SBLockScreenHintPanGestureRecognizer * panGesture;                          //@synthesize panGesture=_panGesture - In the implementation block
@property (assign,nonatomic) CGPoint initialPanLocationInViewSpace;                                      //@synthesize initialPanLocationInViewSpace=_initialPanLocationInViewSpace - In the implementation block
@property (nonatomic,retain) NSMutableSet * gestures;                                                    //@synthesize gestures=_gestures - In the implementation block
@property (nonatomic,retain) NSMapTable * controllersToGuestGestures;                                    //@synthesize controllersToGuestGestures=_controllersToGuestGestures - In the implementation block
@property (nonatomic,retain) NSMapTable * controllersToConflictingGuestGestures;                         //@synthesize controllersToConflictingGuestGestures=_controllersToConflictingGuestGestures - In the implementation block
@property (assign,nonatomic) int gestureState;                                                           //@synthesize gestureState=_gestureState - In the implementation block
@property (nonatomic,retain) id<SBCoordinatedPresenting> previousActiveController;                       //@synthesize previousActiveController=_previousActiveController - In the implementation block
@property (nonatomic,retain) id<SBCoordinatedPresenting> activeController;                               //@synthesize activeController=_activeController - In the implementation block
@property (assign,nonatomic) unsigned activeHintEdge;                                                    //@synthesize activeHintEdge=_activeHintEdge - In the implementation block
@property (nonatomic,retain) NSDate * initialTouchTimeStamp;                                             //@synthesize initialTouchTimeStamp=_initialTouchTimeStamp - In the implementation block
@property (assign,getter=isGuestGestureActive,nonatomic) char guestGestureActive;                        //@synthesize guestGestureActive=_guestGestureActive - In the implementation block
@property (assign,nonatomic) char didEvaluatePressDelay;                                                 //@synthesize didEvaluatePressDelay=_didEvaluatePressDelay - In the implementation block
@property (assign,getter=isFingerOnMesa,nonatomic) char fingerOnMesa;                                    //@synthesize fingerOnMesa=_fingerOnMesa - In the implementation block
@property (nonatomic,retain) SBLockScreenView * lockScreenView;                                          //@synthesize lockScreenView=_lockScreenView - In the implementation block
@property (assign,getter=isGestureHandlingEnabled,nonatomic) char gestureHandlingEnabled;                //@synthesize gestureHandlingEnabled=_gestureHandlingEnabled - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SBLockScreenView *)lockScreenView;
-(id)_lockScreenViewController;
-(void)setLockScreenView:(SBLockScreenView *)arg1 ;
-(void)resetCoordinatedPresentingController:(id)arg1 ;
-(void)removeCoordinatedPresentingController:(id)arg1 ;
-(void)addCoordinatedPresentingController:(id)arg1 ;
-(char)presentingController:(id)arg1 gestureRecognizerShouldBegin:(id)arg2 ;
-(void)presentingControllerDidFinishPresentation:(id)arg1 ;
-(NSMutableSet *)gestures;
-(char)presentingController:(id)arg1 gestureRecognizer:(id)arg2 shouldReceiveTouch:(id)arg3 ;
-(void)presentingController:(id)arg1 willHandleGesture:(id)arg2 ;
-(void)presentingController:(id)arg1 conflictingGestureDidBegin:(id)arg2 ;
-(void)presentingController:(id)arg1 conflictingGestureDidEnd:(id)arg2 ;
-(void)notificationCenterDidDismiss:(id)arg1 ;
-(void)setGestureHandlingEnabled:(char)arg1 ;
-(void)_removeTapGestureFailureRequirementFromGuestGestures:(id)arg1 ;
-(void)_installLocalGestures;
-(void)_resetGestureSequence;
-(void)_removeAllGestures;
-(void)setFingerOnMesa:(char)arg1 ;
-(char)_hasCoordinatedPresentingController:(id)arg1 ;
-(id)_controller:(id)arg1 managedGestureLikeGesture:(id)arg2 ;
-(void)_resetInitialPanLocation;
-(void)_setLocalGesture:(id)arg1 enabled:(char)arg2 ;
-(id)_viewForGestures;
-(CGRect)_cameraGrabberZone;
-(id)_lockScreenNotificationListController;
-(id)_lockScreenCameraController;
-(id)_lockScreenBottomLeftController;
-(CGRect)_topGrabberZone;
-(CGRect)_bottomLeftGrabberZone;
-(CGRect)_bottomGrabberZone;
-(id)_lockScreenNotificationListView;
-(id)_coordinatedPresentingControllerWithIdentifier:(int)arg1 ;
-(char)_isPresentationEnabledForController:(id)arg1 locationInWindow:(CGPoint)arg2 ;
-(char)_isBounceEnabledForController:(id)arg1 locationInWindow:(CGPoint)arg2 ;
-(id<SBCoordinatedPresenting>)previousActiveController;
-(void)setInitialPanLocationInViewSpace:(CGPoint)arg1 ;
-(void)_tapPeriodElapsed;
-(void)setPreviousActiveController:(id<SBCoordinatedPresenting>)arg1 ;
-(void)setActiveHintEdge:(unsigned)arg1 ;
-(void)setInitialTouchTimeStamp:(NSDate *)arg1 ;
-(char)isGestureHandlingEnabled;
-(void)_reenableGestures;
-(id)_controllerForGesture:(id)arg1 ;
-(int)_compareControllerWithIdentifier:(int)arg1 withControllerWithIdentifier:(int)arg2 ;
-(char)_doesController:(id)arg1 manageGestureLikeGesture:(id)arg2 ;
-(char)_isController:(id)arg1 excludingViewsUnderGesture:(id)arg2 ;
-(char)isFingerOnMesa;
-(void)_initializeInitialTouchTimeStamp;
-(unsigned)activeHintEdge;
-(void)_abortCurrentAnimationForController:(id)arg1 ;
-(void)_resetGestureSequenceAndReenableGestures;
-(void)_updateControllerPresentationForTapOrPress:(id)arg1 withAnimation:(/*^block*/id)arg2 abortingCurrentAnimation:(char)arg3 ;
-(double)_elapsedTapPeriod;
-(char)isGuestGestureActive;
-(id)_tapGestureForActiveController;
-(char)_hasTapPeriodElapsed;
-(void)_resetGesture:(id)arg1 ;
-(void)_cancelGuestGesturesExcludingController:(id)arg1 ;
-(void)_updateControllerPresentationForTap;
-(unsigned)_hintEdgeForController:(id)arg1 ;
-(void)_updateActiveControllerPresentationForPress:(char)arg1 ;
-(void)_dismissControllerForPress:(id)arg1 abortingCurrentAnimation:(char)arg2 ;
-(char)_didActiveControllerChange;
-(void)_resetGesture:(id)arg1 forController:(id)arg2 ;
-(void)_updateGrabberStateForControllerIfNecessary:(id)arg1 ;
-(void)_beginControllerPresentationForPan;
-(void)_updateControllerPresentationForPan;
-(void)_endControllerPresentationForPanInState:(int)arg1 ;
-(char)_hintGestureShouldBegin:(id)arg1 ;
-(void)setGuestGestureActive:(char)arg1 ;
-(void)_presentingController:(id)arg1 willHandleTap:(id)arg2 ;
-(void)_presentingController:(id)arg1 willHandlePan:(id)arg2 ;
-(CGPoint)initialPanLocationInViewSpace;
-(void)setGestures:(NSMutableSet *)arg1 ;
-(NSMapTable *)controllersToGuestGestures;
-(void)setControllersToGuestGestures:(NSMapTable *)arg1 ;
-(NSMapTable *)controllersToConflictingGuestGestures;
-(void)setControllersToConflictingGuestGestures:(NSMapTable *)arg1 ;
-(NSDate *)initialTouchTimeStamp;
-(char)didEvaluatePressDelay;
-(void)setDidEvaluatePressDelay:(char)arg1 ;
-(char)_canControllerWithIdentifier:(int)arg1 becomeActiveWithTouchAtLocation:(CGPoint)arg2 ;
-(id)init;
-(void)dealloc;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(char)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(char)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)setPanGesture:(SBLockScreenHintPanGestureRecognizer *)arg1 ;
-(SBLockScreenHintPanGestureRecognizer *)panGesture;
-(void)_handleTap:(id)arg1 ;
-(void)setTapGesture:(SBLockScreenHintTapGestureRecognizer *)arg1 ;
-(void)_handlePan:(id)arg1 ;
-(SBLockScreenHintTapGestureRecognizer *)tapGesture;
-(void)setLongPressGesture:(SBLockScreenHintLongPressGestureRecognizer *)arg1 ;
-(SBLockScreenHintLongPressGestureRecognizer *)longPressGesture;
-(void)_handlePress:(id)arg1 ;
-(int)gestureState;
-(void)setGestureState:(int)arg1 ;
-(id<SBCoordinatedPresenting>)activeController;
-(void)setActiveController:(id<SBCoordinatedPresenting>)arg1 ;
-(void)controlCenterWillPresent;
-(void)controlCenterDidDismiss;
-(void)controlCenterWillBeginTransition;
-(void)controlCenterDidFinishTransition;
@end

