/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:47 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Bridge/COSSetupPageViewController.h>

@class HKHealthStore, COSHealthGoalTableViewController;

@interface COSHealthGoalViewController : COSSetupPageViewController {

	HKHealthStore* _healthStore;
	COSHealthGoalTableViewController* _tableViewController;

}

@property (nonatomic,retain) COSHealthGoalTableViewController * tableViewController;              //@synthesize tableViewController=_tableViewController - In the implementation block
-(void)tappedContinue:(id)arg1 ;
-(void)_storeMoveGoal:(id)arg1 ;
-(void)didReceiveMemoryWarning;
-(id)viewController;
-(void)viewDidLoad;
-(id)healthStore;
-(void)setTableViewController:(COSHealthGoalTableViewController *)arg1 ;
-(COSHealthGoalTableViewController *)tableViewController;
@end

