/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:34 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusFoundation/OpusFoundation-Structs.h>
#import <OpusFoundation/OFUIScrollView.h>
#import <libobjc.A.dylib/OFUIWindowDraggingDestination.h>
#import <libobjc.A.dylib/OFUIWindowDraggingSource.h>
#import <libobjc.A.dylib/OFUIWindowDraggingAutoscroll.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol OFUIGridViewDataSource, OFUIGridViewDelegate, OFUIWindowDraggingSourceOFUIGridViewDragging;
@class OFUIGridViewController, NSMutableArray, UIPinchGestureRecognizer, OFUIGridViewCell, NSString;

@interface OFUIGridView : OFUIScrollView <OFUIWindowDraggingDestination, OFUIWindowDraggingSource, OFUIWindowDraggingAutoscroll, UIGestureRecognizerDelegate> {

	OFUIGridViewController* _gridViewController;
	unsigned _orientation;
	CGSize _cellSize;
	CGSize _minCellSize;
	CGSize _maxCellSize;
	UIEdgeInsets _borderInset;
	unsigned _numberOfCellsPerRow;
	float _minimumCellSpacePadding;
	float _cellSpacePadding;
	id<OFUIGridViewDataSource> _dataSource;
	id<OFUIGridViewDelegate> _gridViewDelegate;
	unsigned _numberOfCells;
	unsigned _numberOfCachedPages;
	unsigned _visibleIndexBegin;
	unsigned _visibleIndexEnd;
	NSMutableArray* _displayedCells;
	NSMutableArray* _recycledCells;
	char _dirtyLayout;
	char _editing;
	id<OFUIWindowDraggingSource><OFUIGridViewDragging> _draggingSource;
	int _draggingDestinationIndex;
	int _draggingDestinationCount;
	char _isDraggingIn;
	UIPinchGestureRecognizer* _liveResizingPinchGestureRecognizer;
	char _allowLiveResizing;
	char _isLiveResizing;
	CGSize _cellSizeBeforeLiveResizing;
	char _allowAutoscroll;
	char _allowFastPanning;
	CGPoint _fastPanningLastTranslation;
	char _isFastPanning;
	char _allowSelectAll;
	char _allowContinuousSelection;
	float _percentageScrolledToRestore;
	char _canUpdateCells;
	OFUIGridViewCell* _lastCellUpdatedForMerge;

}

@property (assign,nonatomic) char isLiveResizing;                                                            //@synthesize isLiveResizing=_isLiveResizing - In the implementation block
@property (assign,nonatomic) int draggingDestinationIndex;                                                   //@synthesize draggingDestinationIndex=_draggingDestinationIndex - In the implementation block
@property (assign,nonatomic) char isFastPanning;                                                             //@synthesize isFastPanning=_isFastPanning - In the implementation block
@property (assign,nonatomic) OFUIGridViewController * gridViewController;                                    //@synthesize gridViewController=_gridViewController - In the implementation block
@property (nonatomic,readonly) unsigned numberOfCells;                                                       //@synthesize numberOfCells=_numberOfCells - In the implementation block
@property (assign,nonatomic) float percentageScrolledToRestore;                                              //@synthesize percentageScrolledToRestore=_percentageScrolledToRestore - In the implementation block
@property (assign,nonatomic) char canUpdateCells;                                                            //@synthesize canUpdateCells=_canUpdateCells - In the implementation block
@property (assign,nonatomic) unsigned orientation;                                                           //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) CGSize cellSize;                                                                //@synthesize cellSize=_cellSize - In the implementation block
@property (assign,nonatomic) CGSize minCellSize;                                                             //@synthesize minCellSize=_minCellSize - In the implementation block
@property (assign,nonatomic) CGSize maxCellSize;                                                             //@synthesize maxCellSize=_maxCellSize - In the implementation block
@property (assign,nonatomic) UIEdgeInsets borderInset;                                                       //@synthesize borderInset=_borderInset - In the implementation block
@property (assign,nonatomic) float minimumCellSpacePadding;                                                  //@synthesize minimumCellSpacePadding=_minimumCellSpacePadding - In the implementation block
@property (assign,nonatomic) unsigned numberOfCachedPages;                                                   //@synthesize numberOfCachedPages=_numberOfCachedPages - In the implementation block
@property (assign,nonatomic) id<OFUIGridViewDataSource> dataSource;                                          //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) id<OFUIGridViewDelegate> gridViewDelegate;                                      //@synthesize gridViewDelegate=_gridViewDelegate - In the implementation block
@property (assign,getter=isEditing,nonatomic) char editing;                                                  //@synthesize editing=_editing - In the implementation block
@property (assign,nonatomic) id<OFUIWindowDraggingSource><OFUIGridViewDragging> draggingSource;              //@synthesize draggingSource=_draggingSource - In the implementation block
@property (assign,nonatomic) int draggingDestinationCount;                                                   //@synthesize draggingDestinationCount=_draggingDestinationCount - In the implementation block
@property (nonatomic,readonly) char isDraggingIn;                                                            //@synthesize isDraggingIn=_isDraggingIn - In the implementation block
@property (assign,nonatomic) char allowLiveResizing;                                                         //@synthesize allowLiveResizing=_allowLiveResizing - In the implementation block
@property (assign,nonatomic) char allowAutoscroll;                                                           //@synthesize allowAutoscroll=_allowAutoscroll - In the implementation block
@property (assign,nonatomic) char allowFastPanning;                                                          //@synthesize allowFastPanning=_allowFastPanning - In the implementation block
@property (assign,nonatomic) char allowSelectAll;                                                            //@synthesize allowSelectAll=_allowSelectAll - In the implementation block
@property (assign,nonatomic) char allowContinuousSelection;                                                  //@synthesize allowContinuousSelection=_allowContinuousSelection - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDataSource:(id<OFUIGridViewDataSource>)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(void)setBounds:(CGRect)arg1 ;
-(id)dequeueReusableCellWithIdentifier:(id)arg1 ;
-(id<OFUIGridViewDataSource>)dataSource;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)setOrientation:(unsigned)arg1 ;
-(unsigned)orientation;
-(void)handlePan:(id)arg1 ;
-(void)_updateContentSize;
-(char)isEditing;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(id)visibleCells;
-(void)setEditing:(char)arg1 ;
-(char)isCellVisible:(id)arg1 ;
-(void)forceLayout;
-(void)commonInit;
-(CGSize)cellSize;
-(void)_layoutSubviews;
-(void)setGridViewController:(OFUIGridViewController *)arg1 ;
-(unsigned)numberOfCells;
-(OFUIGridViewController *)gridViewController;
-(CGPoint)draggingSource:(id)arg1 badgeCenterForItem:(id)arg2 ;
-(CGRect)draggingSource:(id)arg1 originalFrameForItem:(id)arg2 ;
-(void)draggingSource:(id)arg1 prepareItem:(id)arg2 ;
-(void)draggingSource:(id)arg1 cleanupItem:(id)arg2 ;
-(CGRect)draggingDestination:(id)arg1 originalFrameForItem:(id)arg2 ;
-(unsigned)draggingDestinationEntered:(id)arg1 ;
-(unsigned)draggingDestinationUpdated:(id)arg1 ;
-(void)draggingDestinationExited:(id)arg1 ;
-(char)prepareForDragOperation:(id)arg1 ;
-(char)performDragOperation:(id)arg1 ;
-(void)concludeDragOperation:(id)arg1 ;
-(void)draggingDestinationEnded:(id)arg1 cancelled:(char)arg2 ;
-(float)autoscrollDistance:(CGRect)arg1 ;
-(void)autoscroll:(float)arg1 ;
-(char)canAutoscroll;
-(void)setGridViewDelegate:(id<OFUIGridViewDelegate>)arg1 ;
-(void)setDraggingSource:(id<OFUIWindowDraggingSource><OFUIGridViewDragging>)arg1 ;
-(void)prepareForUnloading;
-(void)setCanUpdateCells:(char)arg1 ;
-(void)setPercentageScrolledToRestore:(float)arg1 ;
-(id)displayedCells;
-(void)handleLiveResizingPinchGesture:(id)arg1 ;
-(void)cleanupDisplayedCells;
-(CGPoint)_cellPositionAtIndex:(int)arg1 ;
-(CGSize)_cellSizeAtIndex:(int)arg1 ;
-(CGSize)_bestContentSize;
-(float)percentageScrolledToRestore;
-(int)_indexAtPosition:(CGPoint)arg1 ;
-(NSRange)_displayedCellsRange;
-(id)indexesForDisplayedCells;
-(id<OFUIWindowDraggingSource><OFUIGridViewDragging>)draggingSource;
-(char)isFrameVisible:(CGRect)arg1 ;
-(void)setDraggingDestinationIndex:(int)arg1 ;
-(void)setIsLiveResizing:(char)arg1 ;
-(void)setIsFastPanning:(char)arg1 ;
-(id)displayedCellWithItem:(id)arg1 ;
-(void)deleteCellsAtIndexes:(id)arg1 animated:(char)arg2 ;
-(void)setDraggingDestinationCount:(int)arg1 ;
-(int)draggingDestinationCount;
-(int)draggingDestinationIndex;
-(char)isFrameEntirelyVisible:(CGRect)arg1 ;
-(void)insertCellsAtIndexes:(id)arg1 animated:(char)arg2 ;
-(float)_autoscrollDistanceForProximityToEdge:(float)arg1 ;
-(void)setMinCellSize:(CGSize)arg1 ;
-(void)setMaxCellSize:(CGSize)arg1 ;
-(void)setBorderInset:(UIEdgeInsets)arg1 ;
-(void)setMinimumCellSpacePadding:(float)arg1 ;
-(void)setNumberOfCachedPages:(unsigned)arg1 ;
-(void)setAllowLiveResizing:(char)arg1 ;
-(void)setAllowContinuousSelection:(char)arg1 ;
-(void)setAllowFastPanning:(char)arg1 ;
-(id)indexesForVisibleCells;
-(void)moveCellsAtIndexes:(id)arg1 toIndexes:(id)arg2 animated:(char)arg3 ;
-(CGSize)minCellSize;
-(CGSize)maxCellSize;
-(float)minimumCellSpacePadding;
-(unsigned)numberOfCachedPages;
-(id<OFUIGridViewDelegate>)gridViewDelegate;
-(char)isDraggingIn;
-(char)allowLiveResizing;
-(char)isLiveResizing;
-(char)allowAutoscroll;
-(void)setAllowAutoscroll:(char)arg1 ;
-(char)allowFastPanning;
-(char)isFastPanning;
-(char)allowSelectAll;
-(void)setAllowSelectAll:(char)arg1 ;
-(char)allowContinuousSelection;
-(char)canUpdateCells;
-(void)updateLayout:(char)arg1 ;
-(void)_updateCells;
-(id)cellAtIndex:(unsigned)arg1 ;
-(UIEdgeInsets)borderInset;
-(void)setCellSize:(CGSize)arg1 ;
@end

