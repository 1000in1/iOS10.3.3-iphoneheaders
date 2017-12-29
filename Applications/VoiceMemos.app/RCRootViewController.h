/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:47 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/VoiceMemos.app/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol RCRootViewControllerDelegate;
@class RCWaveformDataSource, RCCompositionController;

@interface RCRootViewController : UIViewController {

	char _tableViewControllerVisible;
	id<RCRootViewControllerDelegate> _delegate;
	RCWaveformDataSource* _presentedWaveformDataSource;
	RCCompositionController* _selectedRecordingCompositionController;

}

@property (nonatomic,retain) RCCompositionController * selectedRecordingCompositionController;                 //@synthesize selectedRecordingCompositionController=_selectedRecordingCompositionController - In the implementation block
@property (assign,nonatomic,__weak) id<RCRootViewControllerDelegate> delegate;                                 //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isTableViewControllerVisible,nonatomic) char tableViewControllerVisible;              //@synthesize tableViewControllerVisible=_tableViewControllerVisible - In the implementation block
@property (nonatomic,readonly) RCWaveformDataSource * presentedWaveformDataSource;                             //@synthesize presentedWaveformDataSource=_presentedWaveformDataSource - In the implementation block
@property (nonatomic,readonly) char canDismissForIdleEvent; 
-(void)playSelectedRecording;
-(void)selectRecordingWithCompositionController:(id)arg1 animated:(char)arg2 completionBlock:(/*^block*/id)arg3 ;
-(char)canDismissForIdleEvent;
-(RCWaveformDataSource *)presentedWaveformDataSource;
-(RCCompositionController *)selectedRecordingCompositionController;
-(void)pauseSelectedRecording;
-(void)setSelectedRecordingCompositionController:(RCCompositionController *)arg1 ;
-(char)isTableViewControllerVisible;
-(void)setTableViewControllerVisible:(char)arg1 ;
-(void)deselectRecordingAnimated:(char)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)setDelegate:(id<RCRootViewControllerDelegate>)arg1 ;
-(id<RCRootViewControllerDelegate>)delegate;
-(unsigned)supportedInterfaceOrientations;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end
