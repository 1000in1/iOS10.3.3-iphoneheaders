/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:47 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBDashBoardViewControllerBase.h>

@protocol SBDashBoardStatusTextViewControllerDelegate;
@class SBDashBoardStatusTextView, NSString, MCProfileConnection;

@interface SBDashBoardStatusTextViewController : SBDashBoardViewControllerBase {

	SBDashBoardStatusTextView* _view;
	NSString* _overrideFooterText;
	MCProfileConnection* _profileConnection;
	id<SBDashBoardStatusTextViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SBDashBoardStatusTextViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * overrideFooterText;                                                  //@synthesize overrideFooterText=_overrideFooterText - In the implementation block
-(id)statusTextView;
-(NSString *)overrideFooterText;
-(void)setOverrideFooterText:(NSString *)arg1 ;
-(void)_profileStateChangedNotification:(id)arg1 ;
-(void)_updateTextForProfiles;
-(void)_updateTextForLegal;
-(void)_updateTextForDeviceInformation;
-(void)_updateTextForSupervision;
-(id)_legalString;
-(id)init;
-(void)setDelegate:(id<SBDashBoardStatusTextViewControllerDelegate>)arg1 ;
-(id<SBDashBoardStatusTextViewControllerDelegate>)delegate;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)_updateText;
@end
