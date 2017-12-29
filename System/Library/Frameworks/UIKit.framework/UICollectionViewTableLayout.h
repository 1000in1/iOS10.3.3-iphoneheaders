/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:59 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UICollectionViewLayout.h>
#import <UIKit/UICollectionViewTableLayoutSwipeActionPullViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UICollectionViewTableAttributes.h>
#import <UIKit/UITable_Internal.h>

@protocol UITableConstants;
@class UIColor, NSSet, UIGobblerGestureRecognizer, UIVisualEffect, UITableViewRowData, NSMutableArray, NSIndexPath, UIPanGestureRecognizer, UICollectionViewTableLayoutSwipeActionPullView, _UISwipableTableViewCellDeleteScanlineView, UICollectionViewTableCell, _UIFeedbackStatesBehavior, NSArray, NSString, UIScrollView, UIView;

@interface UICollectionViewTableLayout : UICollectionViewLayout <UICollectionViewTableLayoutSwipeActionPullViewDelegate, UIGestureRecognizerDelegate, UICollectionViewTableAttributes, UITable_Internal> {

	NSSet* _floatingElementKinds;
	char _dontResetSwipedRow;
	UIGobblerGestureRecognizer* _swipeActionsGobblerGestureRecognizer;
	struct {
		unsigned navigationGestureWasEnabledBeforeSwipeActions : 1;
		unsigned didDisableNavigationGesture : 1;
		unsigned deleteCancelationAnimationInProgress : 1;
		unsigned editingForSwipeDelete : 1;
	}  _tableLayoutFlags;
	char _usesVariableMargins;
	char _overlapsSectionHeaderViews;
	char _showingIndex;
	char _sectionContentInsetFollowsLayoutMargins;
	char _cellLayoutMarginsFollowReadableWidth;
	float _rowHeight;
	float _sectionHeaderHeight;
	float _sectionFooterHeight;
	float _estimatedRowHeight;
	float _estimatedSectionHeaderHeight;
	float _estimatedSectionFooterHeight;
	float _backgroundInset;
	float _topPadding;
	float _bottomPadding;
	float _sectionBorderWidth;
	float _sectionCornerRadius;
	UIColor* _accessoryBaseColor;
	UIColor* _multiselectCheckmarkColor;
	id<UITableConstants> _constants;
	float _rowSpacing;
	int _separatorStyle;
	UIColor* _separatorColor;
	UIVisualEffect* _separatorEffect;
	UITableViewRowData* _rowData;
	NSMutableArray* _deleteIndexPaths;
	NSMutableArray* _insertIndexPaths;
	NSIndexPath* _swipedIndexPath;
	UIPanGestureRecognizer* _swipeActionPanRecognizer;
	float _initialTranslation;
	float _initialDistance;
	float _confirmationTranslationAdjustment;
	UICollectionViewTableLayoutSwipeActionPullView* _leftSwipeView;
	UICollectionViewTableLayoutSwipeActionPullView* _rightSwipeView;
	_UISwipableTableViewCellDeleteScanlineView* _deleteScanLineView;
	UICollectionViewTableCell* _swipeToDeleteCell;
	_UIFeedbackStatesBehavior* _swipeActionFeedbackBehavior;
	CGRect _indexFrame;
	UIEdgeInsets _sectionContentInset;
	UIEdgeInsets _separatorInset;

}

@property (getter=_constants,nonatomic,retain) id<UITableConstants> constants;                                                                   //@synthesize constants=_constants - In the implementation block
@property (nonatomic,retain) UITableViewRowData * rowData;                                                                                       //@synthesize rowData=_rowData - In the implementation block
@property (nonatomic,retain) NSMutableArray * deleteIndexPaths;                                                                                  //@synthesize deleteIndexPaths=_deleteIndexPaths - In the implementation block
@property (nonatomic,retain) NSMutableArray * insertIndexPaths;                                                                                  //@synthesize insertIndexPaths=_insertIndexPaths - In the implementation block
@property (getter=_delegate,nonatomic,readonly) id<UICollectionViewDelegateTableLayout> delegate; 
@property (getter=_dataSource,nonatomic,readonly) id<UICollectionViewDataSourceTableLayout> dataSource; 
@property (nonatomic,retain) NSIndexPath * swipedIndexPath;                                                                                      //@synthesize swipedIndexPath=_swipedIndexPath - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * swipeActionPanRecognizer;                                                                  //@synthesize swipeActionPanRecognizer=_swipeActionPanRecognizer - In the implementation block
@property (assign,nonatomic) float initialTranslation;                                                                                           //@synthesize initialTranslation=_initialTranslation - In the implementation block
@property (assign,nonatomic) float initialDistance;                                                                                              //@synthesize initialDistance=_initialDistance - In the implementation block
@property (assign,nonatomic) float confirmationTranslationAdjustment;                                                                            //@synthesize confirmationTranslationAdjustment=_confirmationTranslationAdjustment - In the implementation block
@property (nonatomic,retain) UICollectionViewTableLayoutSwipeActionPullView * leftSwipeView;                                                     //@synthesize leftSwipeView=_leftSwipeView - In the implementation block
@property (nonatomic,retain) UICollectionViewTableLayoutSwipeActionPullView * rightSwipeView;                                                    //@synthesize rightSwipeView=_rightSwipeView - In the implementation block
@property (nonatomic,retain) _UISwipableTableViewCellDeleteScanlineView * deleteScanLineView;                                                    //@synthesize deleteScanLineView=_deleteScanLineView - In the implementation block
@property (setter=_setSwipeToDeleteCell:,getter=_swipeToDeleteCell,nonatomic,retain) UICollectionViewTableCell * swipeToDeleteCell;              //@synthesize swipeToDeleteCell=_swipeToDeleteCell - In the implementation block
@property (setter=_setFloatingElementKinds:,getter=_floatingElementKinds,nonatomic,retain) NSArray * floatingElementKinds; 
@property (nonatomic,retain) _UIFeedbackStatesBehavior * swipeActionFeedbackBehavior;                                                            //@synthesize swipeActionFeedbackBehavior=_swipeActionFeedbackBehavior - In the implementation block
@property (assign,nonatomic) UIEdgeInsets separatorInset;                                                                                        //@synthesize separatorInset=_separatorInset - In the implementation block
@property (assign,nonatomic) float rowHeight;                                                                                                    //@synthesize rowHeight=_rowHeight - In the implementation block
@property (assign,nonatomic) float sectionHeaderHeight;                                                                                          //@synthesize sectionHeaderHeight=_sectionHeaderHeight - In the implementation block
@property (assign,nonatomic) float sectionFooterHeight;                                                                                          //@synthesize sectionFooterHeight=_sectionFooterHeight - In the implementation block
@property (assign,nonatomic) int separatorStyle;                                                                                                 //@synthesize separatorStyle=_separatorStyle - In the implementation block
@property (nonatomic,copy) UIColor * separatorColor;                                                                                             //@synthesize separatorColor=_separatorColor - In the implementation block
@property (nonatomic,retain) UIVisualEffect * separatorEffect;                                                                                   //@synthesize separatorEffect=_separatorEffect - In the implementation block
@property (assign,nonatomic) char cellLayoutMarginsFollowReadableWidth;                                                                          //@synthesize cellLayoutMarginsFollowReadableWidth=_cellLayoutMarginsFollowReadableWidth - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) UIColor * backgroundColor; 
@property (nonatomic,readonly) char canBeEdited; 
@property (assign,getter=isEditing,nonatomic) char editing; 
@property (getter=_style,nonatomic,readonly) int style; 
@property (getter=_scrollView,nonatomic,readonly) UIScrollView * scrollView; 
@property (getter=_numberOfSections,nonatomic,readonly) int numberOfSections; 
@property (nonatomic,readonly) char allowsMultipleSelection; 
@property (nonatomic,readonly) char allowsMultipleSelectionDuringEditing; 
@property (nonatomic,readonly) float estimatedRowHeight;                                                                                         //@synthesize estimatedRowHeight=_estimatedRowHeight - In the implementation block
@property (nonatomic,readonly) float estimatedSectionHeaderHeight;                                                                               //@synthesize estimatedSectionHeaderHeight=_estimatedSectionHeaderHeight - In the implementation block
@property (nonatomic,readonly) float estimatedSectionFooterHeight;                                                                               //@synthesize estimatedSectionFooterHeight=_estimatedSectionFooterHeight - In the implementation block
@property (nonatomic,readonly) char usesVariableMargins;                                                                                         //@synthesize usesVariableMargins=_usesVariableMargins - In the implementation block
@property (nonatomic,readonly) char overlapsSectionHeaderViews;                                                                                  //@synthesize overlapsSectionHeaderViews=_overlapsSectionHeaderViews - In the implementation block
@property (getter=_backgroundInset,nonatomic,readonly) float backgroundInset;                                                                    //@synthesize backgroundInset=_backgroundInset - In the implementation block
@property (getter=_topPadding,nonatomic,readonly) float topPadding;                                                                              //@synthesize topPadding=_topPadding - In the implementation block
@property (getter=_bottomPadding,nonatomic,readonly) float bottomPadding;                                                                        //@synthesize bottomPadding=_bottomPadding - In the implementation block
@property (getter=_marginWidth,nonatomic,readonly) float marginWidth; 
@property (getter=_isShowingIndex,nonatomic,readonly) char showingIndex;                                                                         //@synthesize showingIndex=_showingIndex - In the implementation block
@property (getter=_indexFrame,nonatomic,readonly) CGRect indexFrame;                                                                             //@synthesize indexFrame=_indexFrame - In the implementation block
@property (getter=_sectionContentInset,nonatomic,readonly) UIEdgeInsets sectionContentInset;                                                     //@synthesize sectionContentInset=_sectionContentInset - In the implementation block
@property (getter=_sectionBorderWidth,nonatomic,readonly) float sectionBorderWidth;                                                              //@synthesize sectionBorderWidth=_sectionBorderWidth - In the implementation block
@property (getter=_sectionCornerRadius,nonatomic,readonly) float sectionCornerRadius;                                                            //@synthesize sectionCornerRadius=_sectionCornerRadius - In the implementation block
@property (getter=_sectionContentInsetFollowsLayoutMargins,nonatomic,readonly) char sectionContentInsetFollowsLayoutMargins;                     //@synthesize sectionContentInsetFollowsLayoutMargins=_sectionContentInsetFollowsLayoutMargins - In the implementation block
@property (getter=_accessoryBaseColor,nonatomic,readonly) UIColor * accessoryBaseColor;                                                          //@synthesize accessoryBaseColor=_accessoryBaseColor - In the implementation block
@property (nonatomic,readonly) UIColor * multiselectCheckmarkColor;                                                                              //@synthesize multiselectCheckmarkColor=_multiselectCheckmarkColor - In the implementation block
@property (getter=_headerMarginWidth,nonatomic,readonly) float headerMarginWidth; 
@property (getter=_footerMarginWidth,nonatomic,readonly) float footerMarginWidth; 
@property (getter=_headerRightMarginWidth,nonatomic,readonly) float headerRightMarginWidth; 
@property (getter=_footerRightMarginWidth,nonatomic,readonly) float footerRightMarginWidth; 
@property (getter=_defaultSectionHeaderHeight,nonatomic,readonly) float defaultSectionHeaderHeight; 
@property (getter=_defaultSectionFooterHeight,nonatomic,readonly) float defaultSectionFooterHeight; 
@property (getter=_sidePadding,nonatomic,readonly) float sidePadding; 
@property (getter=_contentInset,nonatomic,readonly) UIEdgeInsets _contentInset; 
@property (getter=_tableContentInset,nonatomic,readonly) UIEdgeInsets tableContentInset; 
@property (getter=_rowSpacing,nonatomic,readonly) float rowSpacing;                                                                              //@synthesize rowSpacing=_rowSpacing - In the implementation block
@property (getter=_isTableHeaderAutohiding,nonatomic,readonly) char isTableHeaderAutohiding; 
@property (getter=_heightForTableHeader,nonatomic,readonly) float heightForTableHeader; 
@property (getter=_heightForTableFooter,nonatomic,readonly) float heightForTableFooter; 
@property (getter=_providesRowHeights,nonatomic,readonly) char providesRowHeights; 
@property (getter=_estimatesRowHeights,nonatomic,readonly) char estimatesRowHeights; 
@property (getter=_estimatesSectionHeaderHeights,nonatomic,readonly) char estimatesSectionHeaderHeights; 
@property (getter=_estimatesSectionFooterHeights,nonatomic,readonly) char estimatesSectionFooterHeights; 
@property (getter=_tableHeaderView,nonatomic,readonly) UIView * tableHeaderView; 
@property (getter=_tableFooterView,nonatomic,readonly) UIView * tableFooterView; 
@property (getter=_shouldUseSearchBarHeaderBehavior,nonatomic,readonly) char shouldUseSearchBarHeaderBehavior; 
@property (getter=_shouldUseNewHeaderFooterBehavior,nonatomic,readonly) char shouldUseNewHeaderFooterBehavior; 
@property (getter=_rawSeparatorInset,nonatomic,readonly) UIEdgeInsets rawSeparatorInset; 
+(Class)invalidationContextClass;
+(Class)layoutAttributesClass;
-(id)init;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(void)setRowHeight:(float)arg1 ;
-(float)rowHeight;
-(char)allowsMultipleSelection;
-(id)_dataSource;
-(id)_delegate;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(int)_style;
-(UIEdgeInsets)_contentInset;
-(id)_scrollView;
-(id)_swipeToDeleteCell;
-(void)_setSwipeToDeleteCell:(id)arg1 ;
-(UIColor *)separatorColor;
-(char)_isShowingIndex;
-(void)_endSwipeToDeleteRowDidDelete:(char)arg1 ;
-(char)_shouldUseNewHeaderFooterBehavior;
-(UIEdgeInsets)_sectionContentInset;
-(char)_estimatesRowHeights;
-(void)setSeparatorStyle:(int)arg1 ;
-(char)_shouldDisplayExtraSeparatorsAtOffset:(float*)arg1 ;
-(float)_spacingForExtraSeparators;
-(char)cellLayoutMarginsFollowReadableWidth;
-(void)setSeparatorEffect:(UIVisualEffect *)arg1 ;
-(id)_constants;
-(float)_headerMarginWidth;
-(float)_headerRightMarginWidth;
-(float)_footerMarginWidth;
-(float)_footerRightMarginWidth;
-(char)isEditing;
-(int)_editingStyleForRowAtIndexPath:(id)arg1 ;
-(char)_shouldIndentWhileEditingForRowAtIndexPath:(id)arg1 ;
-(char)_canMoveRowAtIndexPath:(id)arg1 ;
-(void)_cleanupStateFromDeleteConfirmation;
-(float)_defaultSectionHeaderHeight;
-(id)deleteConfirmationIndexPath;
-(void)setSeparatorColor:(UIColor *)arg1 ;
-(void)setCellLayoutMarginsFollowReadableWidth:(char)arg1 ;
-(float)_defaultSectionFooterHeight;
-(char)_estimatesSectionHeaderHeights;
-(char)_estimatesSectionFooterHeights;
-(CGRect)_indexFrame;
-(char)_hasHeaderFooterBelowRowAtIndexPath:(id)arg1 ;
-(char)allowsMultipleSelectionDuringEditing;
-(float)_sectionBorderWidth;
-(void)setSeparatorInset:(UIEdgeInsets)arg1 ;
-(char)_shouldStripHeaderTopPaddingForSection:(int)arg1 ;
-(int)_accessoryTypeForCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)_animateSwipeCancelation;
-(int)separatorStyle;
-(float)_backgroundInset;
-(UIEdgeInsets)separatorInset;
-(UIEdgeInsets)_tableContentInset;
-(float)_heightForRowAtIndexPath:(id)arg1 ;
-(float)_heightForHeaderInSection:(int)arg1 ;
-(float)_heightForFooterInSection:(int)arg1 ;
-(float)_estimatedHeightForRowAtIndexPath:(id)arg1 ;
-(float)_estimatedHeightForHeaderInSection:(int)arg1 ;
-(float)_estimatedHeightForFooterInSection:(int)arg1 ;
-(float)_dataSourceHeightForRowAtIndexPath:(id)arg1 ;
-(float)_dataSourceHeightForHeaderInSection:(int)arg1 ;
-(float)_dataSourceHeightForFooterInSection:(int)arg1 ;
-(void)_applyContentSizeDeltaForEstimatedHeightAdjustments:(float)arg1 ;
-(id)_titleForHeaderInSection:(int)arg1 ;
-(id)_titleForFooterInSection:(int)arg1 ;
-(id)_detailTextForHeaderInSection:(int)arg1 ;
-(id)_viewForHeaderInSection:(int)arg1 ;
-(id)_viewForFooterInSection:(int)arg1 ;
-(int)_titleAlignmentForHeaderInSection:(int)arg1 ;
-(int)_titleAlignmentForFooterInSection:(int)arg1 ;
-(float)_maxTitleWidthForHeaderInSection:(int)arg1 ;
-(float)_maxTitleWidthForFooterInSection:(int)arg1 ;
-(float)_swipeToDeleteOffsetForRow:(int)arg1 inSection:(int)arg2 ;
-(float)_sidePadding;
-(float)_rowSpacing;
-(char)_isTableHeaderAutohiding;
-(float)_heightForTableHeader;
-(float)_heightForTableFooter;
-(char)_providesRowHeights;
-(id)_tableHeaderView;
-(id)_tableFooterView;
-(char)_shouldUseSearchBarHeaderBehavior;
-(int)_numberOfRowsInSection:(int)arg1 ;
-(char)_shouldHaveHeaderViewForSection:(int)arg1 ;
-(char)_shouldHaveFooterViewForSection:(int)arg1 ;
-(int)_numberOfSections;
-(float)sectionHeaderHeight;
-(float)sectionFooterHeight;
-(float)estimatedRowHeight;
-(float)estimatedSectionHeaderHeight;
-(float)estimatedSectionFooterHeight;
-(char)usesVariableMargins;
-(char)overlapsSectionHeaderViews;
-(float)_topPadding;
-(float)_bottomPadding;
-(float)_marginWidth;
-(float)_sectionCornerRadius;
-(char)_sectionContentInsetFollowsLayoutMargins;
-(id)_accessoryBaseColor;
-(UIColor *)multiselectCheckmarkColor;
-(char)canBeEdited;
-(void)setEditing:(char)arg1 ;
-(UIEdgeInsets)_rawSeparatorInset;
-(void)setSectionHeaderHeight:(float)arg1 ;
-(void)setSectionFooterHeight:(float)arg1 ;
-(UIVisualEffect *)separatorEffect;
-(CGSize)collectionViewContentSize;
-(void)prepareLayout;
-(void)resetSwipedRowWithCompletion:(/*^block*/id)arg1 ;
-(void)_installSwipeActionsGobblerWithExcludedView:(id)arg1 ;
-(void)_cellAccessoryButtonTappedAtIndexPath:(id)arg1 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)invalidateLayoutWithContext:(id)arg1 ;
-(id)invalidationContextForBoundsChange:(CGRect)arg1 ;
-(void)setInitialDistance:(float)arg1 ;
-(float)initialDistance;
-(float)confirmationDistanceForPrimaryActionInSwipeActionPullView:(id)arg1 ;
-(void)swipeActionPullView:(id)arg1 tappedAction:(id)arg2 view:(id)arg3 ;
-(CGRect)_visibleRect;
-(char)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(UIEdgeInsets)_preferredLayoutMargins;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1 ;
-(void)prepareForCollectionViewUpdates:(id)arg1 ;
-(void)finalizeCollectionViewUpdates;
-(id)layoutAttributesForInteractivelyMovingItemAtIndexPath:(id)arg1 withTargetPosition:(CGPoint)arg2 ;
-(id)invalidationContextForInteractivelyMovingItems:(id)arg1 withTargetPosition:(CGPoint)arg2 previousIndexPaths:(id)arg3 previousPosition:(CGPoint)arg4 ;
-(void)swipeRecognizerDidRecognize:(id)arg1 ;
-(void)_setFloatingElementKinds:(id)arg1 ;
-(NSRange)_sectionRangeForBounds:(CGRect)arg1 ;
-(char)_shouldHaveViewForElementOfKind:(id)arg1 atSection:(int)arg2 useRowData:(char)arg3 ;
-(char)_makePullViewActive:(id)arg1 atIndexPath:(id)arg2 ;
-(int)_indentationLevelForRowAtIndexPath:(id)arg1 ;
-(char)_shouldDrawSeparatorAtTop:(char)arg1 ofSection:(int)arg2 ;
-(id)_layoutAttributesForCellWithIndexPath:(id)arg1 ;
-(CGRect)_frameForSectionElementKind:(id)arg1 atSection:(int)arg2 visibleRect:(CGRect)arg3 floating:(char*)arg4 ;
-(id)_layoutAttributesForSectionElementKind:(id)arg1 atSection:(int)arg2 ;
-(char)_shouldHaveGlobalViewForElementOfKind:(id)arg1 ;
-(id)_layoutAttributesForViewElementKind:(id)arg1 ;
-(CGRect)_extraSeparatorFrameForIndexPath:(id)arg1 offset:(float)arg2 ;
-(id)_layoutAttributesForSeparatorWithIndexPath:(id)arg1 ;
-(void)setDeleteIndexPaths:(NSMutableArray *)arg1 ;
-(void)setInsertIndexPaths:(NSMutableArray *)arg1 ;
-(NSMutableArray *)deleteIndexPaths;
-(NSMutableArray *)insertIndexPaths;
-(void)_cleanupStateFromDeleteConfirmationForPendingAnimatedDelete:(char)arg1 ;
-(void)_notifyDelegateDidEndEditingRowAtIndexPath:(id)arg1 ;
-(void)_notifyDelegateWillBeginEditingRowAtIndexPath:(id)arg1 ;
-(void)_removeSwipeActionsGobbler;
-(id)_activePullView;
-(NSIndexPath *)swipedIndexPath;
-(void)_swipeRecognizerBegan:(id)arg1 ;
-(void)_swipeRecognizerChanged:(id)arg1 ;
-(void)_swipeRecognizerEnded:(id)arg1 wasCancelled:(char)arg2 ;
-(void)setSwipedIndexPath:(NSIndexPath *)arg1 ;
-(id)_swipedCell;
-(void)_resolveSwipeActionsForPullView:(id)arg1 atIndexPath:(id)arg2 ;
-(float)_destructiveConfirmationPoint;
-(float)_rubberBandOffsetForOffset:(float)arg1 usingSwipeView:(id)arg2 ;
-(void)_moveCell:(id)arg1 toSwipeOffset:(float)arg2 animated:(char)arg3 completion:(/*^block*/id)arg4 ;
-(void)_performAction:(id)arg1 atIndexPath:(id)arg2 triggeredBySwipe:(char)arg3 view:(id)arg4 ;
-(void)_moveCell:(id)arg1 toSwipeOffset:(float)arg2 animated:(char)arg3 usingSpringWithStiffnessFactor:(float)arg4 completion:(/*^block*/id)arg5 ;
-(void)_performDestructiveAction:(id)arg1 atIndexPath:(id)arg2 triggeredBySwipe:(char)arg3 view:(id)arg4 ;
-(void)_resetSwipeViewPositionsImmediately;
-(void)_setSwipedIndexPath:(id)arg1 animated:(char)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_handleSwipeActionsGobbler:(id)arg1 ;
-(id)_floatingElementKinds;
-(float)_adjustedXOffsetForInputOffset:(float)arg1 ;
-(void)deleteRowAtIndexPath:(id)arg1 animated:(char)arg2 ;
-(void)setConstants:(id<UITableConstants>)arg1 ;
-(UITableViewRowData *)rowData;
-(void)setRowData:(UITableViewRowData *)arg1 ;
-(UIPanGestureRecognizer *)swipeActionPanRecognizer;
-(void)setSwipeActionPanRecognizer:(UIPanGestureRecognizer *)arg1 ;
-(float)initialTranslation;
-(void)setInitialTranslation:(float)arg1 ;
-(float)confirmationTranslationAdjustment;
-(void)setConfirmationTranslationAdjustment:(float)arg1 ;
-(UICollectionViewTableLayoutSwipeActionPullView *)leftSwipeView;
-(void)setLeftSwipeView:(UICollectionViewTableLayoutSwipeActionPullView *)arg1 ;
-(UICollectionViewTableLayoutSwipeActionPullView *)rightSwipeView;
-(void)setRightSwipeView:(UICollectionViewTableLayoutSwipeActionPullView *)arg1 ;
-(_UISwipableTableViewCellDeleteScanlineView *)deleteScanLineView;
-(void)setDeleteScanLineView:(_UISwipableTableViewCellDeleteScanlineView *)arg1 ;
-(_UIFeedbackStatesBehavior *)swipeActionFeedbackBehavior;
-(void)setSwipeActionFeedbackBehavior:(_UIFeedbackStatesBehavior *)arg1 ;
@end
