/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:01 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileNotes/MobileNotes-Structs.h>
#import <MobileNotes/ICDrawingLightView.h>
#import <MobileNotes/ICDrawingControllerDelegate.h>

@class UIView, CADisplayLink, UITouch, ICDrawingController, ICOpenGLESView, UIActivityIndicatorView, NSTimer, ICUndoSwipeGestureRecognizer, ICDrawing, NSString;

@interface ICDrawingView : ICDrawingLightView <ICDrawingControllerDelegate> {

	UIView* _transitionBackgroundView;
	UIView* _transitionImageView;
	CADisplayLink* _displayLink;
	/*^block*/id _drawTimerBlock;
	vector<float, std::__1::allocator<float> >* _movementDistanceHistoryBuffer;
	char _shouldPause;
	char _isDrawing;
	char _zooming;
	char _allowLiveInteraction;
	char _editable;
	char _prefersStatusBarHidden;
	char _fullySetup;
	char _claimedLiveDrawing;
	UITouch* _drawingTouch;
	ICDrawingController* _drawingController;
	ICOpenGLESView* _glView;
	UIActivityIndicatorView* _activityView;
	NSTimer* _imageTransformTimer;
	float _initialDrawingBoundsYOrigin;
	ICUndoSwipeGestureRecognizer* _undoGestureRecognizer;
	ICUndoSwipeGestureRecognizer* _redoGestureRecognizer;
	float _movementForCurrentDrawingTouch;
	float _accumulatedMovementForCurrentDrawingTouch;
	CGPoint _drawingStartPointInScreenSpace;
	CGPoint _previousDrawingTouchLocation;
	double _previousRenderTimestamp;
	double _enforceRenderTimeout;
	double _delayRendersUntilTimestamp;
	double _drawingStartTimestamp;
	UIEdgeInsets _edgeFadeInsets;

}

@property (nonatomic,retain) NSTimer * imageTransformTimer;                                     //@synthesize imageTransformTimer=_imageTransformTimer - In the implementation block
@property (assign,nonatomic) float initialDrawingBoundsYOrigin;                                 //@synthesize initialDrawingBoundsYOrigin=_initialDrawingBoundsYOrigin - In the implementation block
@property (assign,nonatomic) char isDrawing;                                                    //@synthesize isDrawing=_isDrawing - In the implementation block
@property (nonatomic,retain) ICUndoSwipeGestureRecognizer * undoGestureRecognizer;              //@synthesize undoGestureRecognizer=_undoGestureRecognizer - In the implementation block
@property (nonatomic,retain) ICUndoSwipeGestureRecognizer * redoGestureRecognizer;              //@synthesize redoGestureRecognizer=_redoGestureRecognizer - In the implementation block
@property (assign,nonatomic) CGPoint previousDrawingTouchLocation;                              //@synthesize previousDrawingTouchLocation=_previousDrawingTouchLocation - In the implementation block
@property (assign,nonatomic) float movementForCurrentDrawingTouch;                              //@synthesize movementForCurrentDrawingTouch=_movementForCurrentDrawingTouch - In the implementation block
@property (assign,nonatomic) float accumulatedMovementForCurrentDrawingTouch;                   //@synthesize accumulatedMovementForCurrentDrawingTouch=_accumulatedMovementForCurrentDrawingTouch - In the implementation block
@property (assign,nonatomic) double previousRenderTimestamp;                                    //@synthesize previousRenderTimestamp=_previousRenderTimestamp - In the implementation block
@property (assign,nonatomic) double enforceRenderTimeout;                                       //@synthesize enforceRenderTimeout=_enforceRenderTimeout - In the implementation block
@property (assign,nonatomic) char fullySetup;                                                   //@synthesize fullySetup=_fullySetup - In the implementation block
@property (assign,nonatomic) char claimedLiveDrawing;                                           //@synthesize claimedLiveDrawing=_claimedLiveDrawing - In the implementation block
@property (assign) double delayRendersUntilTimestamp;                                           //@synthesize delayRendersUntilTimestamp=_delayRendersUntilTimestamp - In the implementation block
@property (assign) double drawingStartTimestamp;                                                //@synthesize drawingStartTimestamp=_drawingStartTimestamp - In the implementation block
@property (nonatomic,readonly) id icaxOpenGLView; 
@property (assign,nonatomic) CGAffineTransform imageTransform; 
@property (nonatomic,readonly) ICDrawing * drawing; 
@property (assign,nonatomic) UIEdgeInsets edgeFadeInsets;                                       //@synthesize edgeFadeInsets=_edgeFadeInsets - In the implementation block
@property (nonatomic,retain) UITouch * drawingTouch;                                            //@synthesize drawingTouch=_drawingTouch - In the implementation block
@property (assign,nonatomic) char zooming;                                                      //@synthesize zooming=_zooming - In the implementation block
@property (assign,nonatomic) char allowLiveInteraction;                                         //@synthesize allowLiveInteraction=_allowLiveInteraction - In the implementation block
@property (assign,getter=isEditable,nonatomic) char editable;                                   //@synthesize editable=_editable - In the implementation block
@property (nonatomic,readonly) ICDrawingController * drawingController;                         //@synthesize drawingController=_drawingController - In the implementation block
@property (nonatomic,readonly) ICOpenGLESView * glView;                                         //@synthesize glView=_glView - In the implementation block
@property (assign,nonatomic,__weak) UIActivityIndicatorView * activityView;                     //@synthesize activityView=_activityView - In the implementation block
@property (assign,nonatomic) char contentHidden; 
@property (nonatomic,readonly) char prefersStatusBarHidden;                                     //@synthesize prefersStatusBarHidden=_prefersStatusBarHidden - In the implementation block
@property (assign,nonatomic) CGPoint drawingStartPointInScreenSpace;                            //@synthesize drawingStartPointInScreenSpace=_drawingStartPointInScreenSpace - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(void)loadDefaults;
+(void)setupDefaults;
-(void)setupOpenGL;
-(void)setEdgeFadeInsets:(UIEdgeInsets)arg1 ;
-(UITouch *)drawingTouch;
-(void)eraseAll:(id)arg1 ;
-(void)setAllowLiveInteraction:(char)arg1 ;
-(void)setNeedsDrawingDisplay;
-(void)drawingBoundsUpdated:(CGRect)arg1 ;
-(void)drawingChanged:(id)arg1 ;
-(UIEdgeInsets)edgeFadeInsets;
-(id)initWithFrame:(CGRect)arg1 editable:(char)arg2 drawingController:(id)arg3 ;
-(void)setDrawingProvider:(id)arg1 ;
-(CGAffineTransform)viewOrientationTransform;
-(char)contentHidden;
-(void)setContentHidden:(char)arg1 ;
-(void)drawingBoundsUpdated;
-(void)drawingCancelled:(/*^block*/id)arg1 ;
-(ICOpenGLESView *)glView;
-(void)setDrawingProvider:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setupFullScreenTransform;
-(void)setOrientationIfPossibleFromSize:(CGSize)arg1 ;
-(void)willTransitionToSize:(CGSize)arg1 ;
-(void)forceCancelDrawing;
-(void)transitionToSize:(CGSize)arg1 ;
-(char)canEraseAll;
-(void)setZooming:(char)arg1 ;
-(void)setImageTransform:(CGAffineTransform)arg1 animated:(char)arg2 ;
-(char)isDrawing;
-(void)setIsDrawing:(char)arg1 ;
-(void)setupDisplayLink;
-(void)_drawingDisplay;
-(char)claimedLiveDrawing;
-(void)setClaimedLiveDrawing:(char)arg1 ;
-(NSTimer *)imageTransformTimer;
-(void)setImageTransformTimer:(NSTimer *)arg1 ;
-(double)drawingStartTimestamp;
-(double)delayRendersUntilTimestamp;
-(float)movementForCurrentDrawingTouch;
-(float)averageMovementDistance;
-(float)accumulatedMovementForCurrentDrawingTouch;
-(void)setAccumulatedMovementForCurrentDrawingTouch:(float)arg1 ;
-(void)setMovementForCurrentDrawingTouch:(float)arg1 ;
-(double)previousRenderTimestamp;
-(void)setPreviousRenderTimestamp:(double)arg1 ;
-(void)setupFullScreenTransform:(CGAffineTransform)arg1 toViewOrientation:(CGAffineTransform)arg2 animated:(char)arg3 ;
-(void)rotateIfNeeded;
-(void)setupTransitionFrameForViewSize:(CGSize)arg1 ;
-(void)setImageTransform:(CGAffineTransform)arg1 fromViewOrientation:(CGAffineTransform)arg2 toViewOrientation:(CGAffineTransform)arg3 animated:(char)arg4 duration:(double)arg5 ;
-(char)allowLiveInteraction;
-(char)enableUserActionButton;
-(char)canPerformUserAction;
-(void)updateImageTransform:(id)arg1 ;
-(void)updateRulerTickMarkImage;
-(char)fullySetup;
-(int)preferredDrawingOrientation;
-(void)setFullySetup:(char)arg1 ;
-(void)setDrawingStartTimestamp:(double)arg1 ;
-(CGColorRef)commandColor;
-(void)startRulerDrawing;
-(SCD_Struct_IC25)drawingInputPoint:(CGPoint)arg1 forTouch:(id)arg2 predicted:(char)arg3 ;
-(void)setDrawingStartPointInScreenSpace:(CGPoint)arg1 ;
-(void)drawNowIfNeeded;
-(void)setDelayRendersUntilTimestamp:(double)arg1 ;
-(void)endRulerDrawing;
-(void)setPreviousDrawingTouchLocation:(CGPoint)arg1 ;
-(void)cancelNonDrawingGestures;
-(void)setDrawingTouch:(UITouch *)arg1 ;
-(char)viewPointInRuler:(CGPoint)arg1 ;
-(CGPoint)applyTransformToTouchLocation:(CGPoint)arg1 ;
-(void)drawingBeganAtPoint:(CGPoint)arg1 forTouch:(id)arg2 inputType:(int)arg3 ;
-(void)updateRulerMarkerForLocation:(CGPoint)arg1 firstTouch:(char)arg2 ;
-(CGPoint)previousDrawingTouchLocation;
-(id)icaxOpenGLView;
-(float)maxMovementDistance;
-(char)showEraseAllButton;
-(void)forceEndDrawing;
-(CGPoint)drawingStartPointInScreenSpace;
-(float)initialDrawingBoundsYOrigin;
-(void)setInitialDrawingBoundsYOrigin:(float)arg1 ;
-(ICUndoSwipeGestureRecognizer *)undoGestureRecognizer;
-(void)setUndoGestureRecognizer:(ICUndoSwipeGestureRecognizer *)arg1 ;
-(ICUndoSwipeGestureRecognizer *)redoGestureRecognizer;
-(void)setRedoGestureRecognizer:(ICUndoSwipeGestureRecognizer *)arg1 ;
-(double)enforceRenderTimeout;
-(void)setEnforceRenderTimeout:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setOpaque:(char)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(char)prefersStatusBarHidden;
-(char)canUndo;
-(char)canRedo;
-(id)undoManager;
-(char)becomeFirstResponder;
-(char)isEditable;
-(void)undo:(id)arg1 ;
-(void)redo:(id)arg1 ;
-(char)canBecomeFirstResponder;
-(void)touchesEstimatedPropertiesUpdated:(id)arg1 ;
-(void)setBackgroundImage:(CGImageRef)arg1 ;
-(void)setEditable:(char)arg1 ;
-(id)accessibilityLabel;
-(id)accessibilityHint;
-(char)isAccessibilityElement;
-(char)accessibilityElementsHidden;
-(id)accessibilityElements;
-(void)done:(/*^block*/id)arg1 ;
-(UIActivityIndicatorView *)activityView;
-(void)setActivityView:(UIActivityIndicatorView *)arg1 ;
-(void)rotate:(id)arg1 ;
-(void)setImageTransform:(CGAffineTransform)arg1 ;
-(CGAffineTransform)imageTransform;
-(unsigned)commandType;
-(id)undoStack;
-(ICDrawingController *)drawingController;
-(ICDrawing *)drawing;
-(void)drawingEnded;
-(id)glLayer;
-(char)zooming;
-(void)didTransitionToSize:(CGSize)arg1 ;
@end

