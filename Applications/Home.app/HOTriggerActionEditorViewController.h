/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:25 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Home.app/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HUInstructionsTableViewController.h>

@class HOTriggerActionEditorContentViewController, HFTriggerBuilder;

@interface HOTriggerActionEditorViewController : HUInstructionsTableViewController

@property (nonatomic,readonly) HOTriggerActionEditorContentViewController * actionEditorContentViewController; 
@property (nonatomic,readonly) HFTriggerBuilder * triggerBuilder; 
@property (nonatomic,readonly) unsigned mode; 
@property (assign,nonatomic,__weak) id<HOTriggerEditorDelegate> delegate; 
+(char)adoptsDefaultGridLayoutMargins;
-(id)initWithTriggerBuilder:(id)arg1 mode:(unsigned)arg2 delegate:(id)arg3 ;
-(HOTriggerActionEditorContentViewController *)actionEditorContentViewController;
-(void)setDelegate:(id<HOTriggerEditorDelegate>)arg1 ;
-(id<HOTriggerEditorDelegate>)delegate;
-(void)viewDidLoad;
-(unsigned)mode;
-(HFTriggerBuilder *)triggerBuilder;
-(id)initWithInstructionsItem:(id)arg1 contentViewController:(id)arg2 ;
@end

