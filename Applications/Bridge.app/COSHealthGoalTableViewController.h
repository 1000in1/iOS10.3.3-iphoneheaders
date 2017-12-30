/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:47 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Bridge/Bridge-Structs.h>
#import <UIKit/UITableViewController.h>

@class COSHealthHeaderView, UIButton, NSArray, COSHealthActivityMoveGoalCell, COSHealthSegmentedControlCell, FIUIValueAdjustmentButtonController, COSHealthGoalViewController;

@interface COSHealthGoalTableViewController : UITableViewController {

	COSHealthHeaderView* _headerView;
	UIButton* _continueButton;
	NSArray* _activityLevels;
	COSHealthActivityMoveGoalCell* _moveGoalCell;
	COSHealthSegmentedControlCell* _segmentedControlCell;
	FIUIValueAdjustmentButtonController* _buttonController;
	COSHealthGoalViewController* _parentController;

}

@property (assign,nonatomic,__weak) COSHealthGoalViewController * parentController;              //@synthesize parentController=_parentController - In the implementation block
-(void)_setActivityLevel:(id)arg1 ;
-(CGRect)_continueButtonFrame;
-(float)_moveGoalCellHeight;
-(id)_segmentedControlCell;
-(id)_moveGoalCell;
-(void)_buttonControllerDidUpdate;
-(id)currentMoveGoal;
-(void)_activityLevelPresetChanged:(id)arg1 ;
-(id)activityLevelForSegmentedControlIndex:(int)arg1 ;
-(void)setActivityLevels:(id)arg1 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)setParentController:(COSHealthGoalViewController *)arg1 ;
-(COSHealthGoalViewController *)parentController;
@end

