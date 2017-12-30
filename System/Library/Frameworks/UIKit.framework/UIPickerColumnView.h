/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:31 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIPickerTableViewContainerDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class UIPickerTableView, UIView, UIPickerView, UIColor, NSString;

@interface UIPickerColumnView : UIView <UIPickerTableViewContainerDelegate, UITableViewDataSource> {

	UIPickerTableView* _topTable;
	UIPickerTableView* _middleTable;
	UIPickerTableView* _bottomTable;
	UIView* _topContainerView;
	UIView* _middleContainerView;
	UIView* _bottomContainerView;
	float _middleBarHeight;
	float _rowHeight;
	UIPickerView* _pickerView;
	CGRect _tableFrame;
	CATransform3D _perspectiveTransform;
	char _isNoLongerInUse;
	UIColor* __textColor;
	float _leftHitTestExtension;
	float _rightHitTestExtension;

}

@property (assign,nonatomic) char isNoLongerInUse;                                                      //@synthesize isNoLongerInUse=_isNoLongerInUse - In the implementation block
@property (assign,nonatomic) CGRect selectionBarRect; 
@property (nonatomic,readonly) int selectionBarRow; 
@property (setter=_setTextColor:,getter=_textColor,nonatomic,retain) UIColor * _textColor;              //@synthesize _textColor=__textColor - In the implementation block
@property (assign,nonatomic) float rowHeight;                                                           //@synthesize rowHeight=_rowHeight - In the implementation block
@property (assign,nonatomic) CATransform3D perspectiveTransform;                                        //@synthesize perspectiveTransform=_perspectiveTransform - In the implementation block
@property (assign,nonatomic) float leftHitTestExtension;                                                //@synthesize leftHitTestExtension=_leftHitTestExtension - In the implementation block
@property (assign,nonatomic) float rightHitTestExtension;                                               //@synthesize rightHitTestExtension=_rightHitTestExtension - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_setTextColor:(id)arg1 ;
-(id)_allVisibleCells;
-(char)_pointLiesWithinEffectiveTableBounds:(CGPoint)arg1 ;
-(id)_visibleCellClosestToPoint:(CGPoint)arg1 inView:(id)arg2 ;
-(id)_preferredTable;
-(void)reloadData;
-(id)initWithFrame:(CGRect)arg1 tableFrame:(CGRect)arg2 middleBarHeight:(float)arg3 rowHeight:(float)arg4 pickerView:(id)arg5 transform:(CATransform3D)arg6 ;
-(void)setRowHeight:(float)arg1 ;
-(int)numberOfRowsInSection:(int)arg1 ;
-(id)cellForRowAtIndexPath:(id)arg1 ;
-(int)selectionBarRow;
-(void)markAsNoLongerInUse;
-(void)setAllowsMultipleSelection:(char)arg1 ;
-(CGRect)_tableFrame;
-(void)setLeftHitTestExtension:(float)arg1 ;
-(void)setRightHitTestExtension:(float)arg1 ;
-(float)rowHeight;
-(void)setSelectionBarRect:(CGRect)arg1 ;
-(char)selectRow:(int)arg1 animated:(char)arg2 notify:(char)arg3 updateChecked:(char)arg4 ;
-(char)selectRow:(int)arg1 animated:(char)arg2 notify:(char)arg3 ;
-(NSRange)_visibleGlobalRows;
-(char)_containsTable:(id)arg1 ;
-(char)isRowChecked:(int)arg1 ;
-(UIColor *)_textColor;
-(void)_sendCheckedRow:(int)arg1 inTableView:(id)arg2 checked:(char)arg3 ;
-(char)_soundsEnabled;
-(char)_usesCheckSelection;
-(void)_pickerTableViewDidChangeContentOffset:(id)arg1 ;
-(void)pickerTableView:(id)arg1 didChangeSelectionBarRowFrom:(int)arg2 to:(int)arg3 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)beginUpdates;
-(void)endUpdates;
-(char)_scrollRowAtIndexPathToSelectionBar:(id)arg1 animated:(char)arg2 ;
-(CGRect)selectionBarRect;
-(id)_createContainerViewWithFrame:(CGRect)arg1 ;
-(id)_createTableViewWithFrame:(CGRect)arg1 containingFrame:(CGRect)arg2 ;
-(void)_centerTableInContainer:(id)arg1 ;
-(float)_horizontalBiasForEndTables;
-(CATransform3D)_transformForTableWithPerspectiveTranslationX:(float)arg1 ;
-(CATransform3D)_transformForTableWithTranslationX:(float)arg1 ;
-(void)setIsNoLongerInUse:(char)arg1 ;
-(void)_moveTableViewIfNecessary:(id)arg1 toContentOffset:(CGPoint)arg2 ;
-(char)isNoLongerInUse;
-(CATransform3D)perspectiveTransform;
-(void)setPerspectiveTransform:(CATransform3D)arg1 ;
-(float)leftHitTestExtension;
-(float)rightHitTestExtension;
@end

