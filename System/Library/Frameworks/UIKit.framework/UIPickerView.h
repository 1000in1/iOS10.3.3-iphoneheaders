/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:06 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIPickerViewScrollTesting.h>
#import <UIKit/UIPickerTableViewContainerDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <libobjc.A.dylib/NSCoding.h>

@protocol UIPickerViewDataSource, UIPickerViewDelegate;
@class NSMutableArray, UIView, UIImageView, CALayer, UIColor, _UIPickerViewTestParameters, _UIFeedbackRetargetBehavior, NSString;

@interface UIPickerView : UIView <UIPickerViewScrollTesting, UIPickerTableViewContainerDelegate, UITableViewDelegate, UITableViewDataSource, NSCoding> {

	NSMutableArray* _tables;
	UIView* _topFrame;
	NSMutableArray* _dividers;
	NSMutableArray* _selectionBars;
	id<UIPickerViewDataSource> _dataSource;
	id<UIPickerViewDelegate> _delegate;
	UIView* _backgroundView;
	int _numberOfComponents;
	UIImageView* _topGradient;
	UIImageView* _bottomGradient;
	UIView* _foregroundView;
	CALayer* _maskGradientLayer;
	UIView* _topLineView;
	UIView* _bottomLineView;
	struct {
		unsigned needsLayout : 1;
		unsigned delegateRespondsToNumberOfComponentsInPickerView : 1;
		unsigned delegateRespondsToNumberOfRowsInComponent : 1;
		unsigned delegateRespondsToDidSelectRow : 1;
		unsigned delegateRespondsToViewForRow : 1;
		unsigned delegateRespondsToTitleForRow : 1;
		unsigned delegateRespondsToAttributedTitleForRow : 1;
		unsigned delegateRespondsToWidthForComponent : 1;
		unsigned delegateRespondsToRowHeightForComponent : 1;
		unsigned showsSelectionBar : 1;
		unsigned allowsMultipleSelection : 1;
		unsigned allowSelectingCells : 1;
		unsigned soundsDisabled : 1;
		unsigned usesCheckedSelection : 1;
		unsigned skipsBackground : 1;
		unsigned isInLayoutSubviews : 1;
	}  _pickerViewFlags;
	char _usesModernStyle;
	UIColor* _textColor;
	UIColor* _textShadowColor;
	_UIPickerViewTestParameters* _currentTestParameters;
	char _magnifierEnabled;
	char _enabled;
	UIColor* _magnifierLineColor;
	_UIFeedbackRetargetBehavior* _retargetBehavior;

}

@property (setter=_setMagnifierLineColor:,getter=_magnifierLineColor,nonatomic,retain) UIColor * magnifierLineColor;                            //@synthesize magnifierLineColor=_magnifierLineColor - In the implementation block
@property (assign,setter=_setEnabled:,getter=_enabled,nonatomic) char enabled;                                                                  //@synthesize enabled=_enabled - In the implementation block
@property (setter=_setRetargetBehavior:,getter=_retargetBehavior,nonatomic,retain) _UIFeedbackRetargetBehavior * retargetBehavior;              //@synthesize retargetBehavior=_retargetBehavior - In the implementation block
@property (assign,setter=_setMagnifierEnabled:,nonatomic) char _magnifierEnabled;                                                               //@synthesize magnifierEnabled=_magnifierEnabled - In the implementation block
@property (setter=_setUsesModernStyle:,getter=_usesModernStyle) char usesModernStyle; 
@property (setter=_setHighlightColor:,getter=_highlightColor,nonatomic,retain) UIColor * highlightColor; 
@property (setter=_setTextColor:,getter=_textColor,nonatomic,retain) UIColor * textColor; 
@property (setter=_setTextShadowColor:,getter=_textShadowColor,nonatomic,retain) UIColor * textShadowColor; 
@property (assign,nonatomic,__weak) id<UIPickerViewDataSource> dataSource;                                                                      //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<UIPickerViewDelegate> delegate;                                                                          //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char showsSelectionIndicator; 
@property (nonatomic,readonly) int numberOfComponents;                                                                                          //@synthesize numberOfComponents=_numberOfComponents - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)sizeThatFits:(CGSize)arg1 forTraits:(id)arg2 ;
+(CGSize)defaultSizeForTraits:(id)arg1 ;
+(CGSize)defaultSizeForMainScreenTraits;
+(CGSize)sizeForMainScreenTraitsThatFits:(CGSize)arg1 ;
+(CGSize)defaultSizeForCurrentOrientation;
+(void)initialize;
-(void)_UIAppearance_setMagnifierLineColor:(id)arg1 ;
-(void)_UIAppearance_setTextColor:(id)arg1 ;
-(id)init;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setNeedsLayout;
-(void)layoutSubviews;
-(id)_contentView;
-(id)pickerImageNamePrefix;
-(id)_orientationImageSuffix;
-(void)setBackgroundColor:(id)arg1 ;
-(char)_isLandscapeOrientation;
-(char)_shouldDrawWithModernStyle;
-(void)_setTextColor:(id)arg1 ;
-(void)_setMagnifierLineColor:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDataSource:(id<UIPickerViewDataSource>)arg1 ;
-(void)setDelegate:(id<UIPickerViewDelegate>)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(char)_enabled;
-(int)numberOfComponents;
-(int)selectedRowInComponent:(int)arg1 ;
-(void)_selectRow:(int)arg1 inComponent:(int)arg2 animated:(char)arg3 notify:(char)arg4 ;
-(void)didMoveToWindow;
-(void)_updateSelectedRows;
-(void)_setColumnView:(id)arg1 enabled:(char)arg2 ;
-(void)reloadAllComponents;
-(int)_delegateNumberOfComponents;
-(void)reloadData;
-(void)reloadComponent:(int)arg1 ;
-(id)_selectionBarSuffix;
-(id)_popoverSuffix;
-(id)imageForPickerPiece:(int)arg1 ;
-(CGSize)defaultSize;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(int)columnForTableView:(id)arg1 ;
-(float)_tableRowHeight;
-(CATransform3D)_perspectiveTransform;
-(float)_delegateRowHeightForComponent:(int)arg1 ;
-(id)tableViewForColumn:(int)arg1 ;
-(int)numberOfRowsInComponent:(int)arg1 ;
-(char)_drawsBackground;
-(id)_createViewForPickerPiece:(int)arg1 ;
-(float)_delegateWidthForComponent:(int)arg1 ofCount:(int)arg2 withSizeLeft:(float)arg3 ;
-(float)_wheelShift;
-(char)_usesModernStyle;
-(id)createDividerWithFrame:(CGRect)arg1 ;
-(id)_createColumnWithTableFrame:(CGRect)arg1 rowHeight:(float)arg2 ;
-(id)_createTableWithFrame:(CGRect)arg1 forComponent:(int)arg2 ;
-(void)setAllowsMultipleSelection:(char)arg1 ;
-(CGRect)_selectionBarRectForHeight:(float)arg1 ;
-(char)_magnifierEnabled;
-(void)_addMagnifierLinesForRowHeight:(float)arg1 ;
-(char)allowsMultipleSelection;
-(void)_resetSelectionOfTables;
-(int)_delegateNumberOfRowsInComponent:(int)arg1 ;
-(CGSize)_sizeThatFits:(CGSize)arg1 ;
-(void)_updateWithOldSize:(CGSize)arg1 newSize:(CGSize)arg2 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)_noteScrollingFinishedForComponent:(int)arg1 ;
-(void)_sendSelectionChangedForComponent:(int)arg1 notify:(char)arg2 ;
-(void)_sendSelectionChangedFromTable:(id)arg1 notify:(char)arg2 ;
-(void)selectRow:(int)arg1 inComponent:(int)arg2 animated:(char)arg3 ;
-(id)_textColor;
-(char)_forceTextAlignmentCentered;
-(id)_delegateAttributedTitleForRow:(int)arg1 forComponent:(int)arg2 ;
-(id)_delegateTitleForRow:(int)arg1 forComponent:(int)arg2 ;
-(id)_scalarStatisticsForUserValueChangedEvent;
-(void)_sendCheckedRow:(int)arg1 inTableView:(id)arg2 checked:(char)arg3 ;
-(char)_soundsEnabled;
-(char)_usesCheckSelection;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)setSoundsEnabled:(char)arg1 ;
-(void)_setEnabled:(char)arg1 ;
-(void)reload;
-(void)reloadDataForColumn:(int)arg1 ;
-(char)_contentHuggingDefault_isUsuallyFixedHeight;
-(char)_contentHuggingDefault_isUsuallyFixedWidth;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(double)scrollAnimationDuration;
-(CGSize)rowSizeForComponent:(int)arg1 ;
-(int)numberOfRowsInColumn:(int)arg1 ;
-(int)numberOfColumns;
-(id)viewForRow:(int)arg1 forComponent:(int)arg2 ;
-(void)reloadAllPickerPieces;
-(void)setShowsSelectionIndicator:(char)arg1 ;
-(char)showsSelectionIndicator;
-(void)_setUsesCheckedSelection:(char)arg1 ;
-(char)_usesCheckedSelection;
-(void)_setDrawsBackground:(char)arg1 ;
-(char)_needsLayout;
-(CGSize)_contentSizeForRow:(int)arg1 inComponent:(int)arg2 ;
-(NSRange)visibleRowsForColumn:(int)arg1 ;
-(int)selectedRowForColumn:(int)arg1 ;
-(CGRect)_effectiveTableViewFrameForColumn:(int)arg1 ;
-(void)selectRow:(int)arg1 inColumn:(int)arg2 animated:(char)arg3 ;
-(void)_setMagnifierEnabled:(char)arg1 ;
-(void)_setUsesModernStyle:(char)arg1 ;
-(id)_highlightColor;
-(void)_setHighlightColor:(id)arg1 ;
-(id)_textShadowColor;
-(void)_setTextShadowColor:(id)arg1 ;
-(void)_willPlayClickSound;
-(id<UIPickerViewDataSource>)dataSource;
-(id<UIPickerViewDelegate>)delegate;
-(id)_magnifierLineColor;
-(id)_retargetBehavior;
-(void)_setRetargetBehavior:(id)arg1 ;
-(void)_iterateOnCurrentTest;
-(void)_completeCurrentTest;
-(void)_performScrollTest:(id)arg1 withIterations:(int)arg2 rowsToScroll:(int)arg3 inComponent:(int)arg4 ;
-(char)isAccessibilityElementByDefault;
@end

