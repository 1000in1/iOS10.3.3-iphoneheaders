/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:28 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/InCallService.app/InCallService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <InCallService/PHAudioCallControlsViewDelegate.h>

@protocol PHAudioCallControlsViewControllerDelegate;
@class PHAudioCallControlsView, PHAudioCallControlArrangement, NSString;

@interface PHAudioCallControlsViewController : UIViewController <PHAudioCallControlsViewDelegate> {

	char _enabled;
	id<PHAudioCallControlsViewControllerDelegate> _delegate;
	PHAudioCallControlsView* _controlsView;
	PHAudioCallControlArrangement* _controlArrangement;

}

@property (retain) PHAudioCallControlsView * controlsView;                              //@synthesize controlsView=_controlsView - In the implementation block
@property (retain) PHAudioCallControlArrangement * controlArrangement;                  //@synthesize controlArrangement=_controlArrangement - In the implementation block
@property (__weak) id<PHAudioCallControlsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char enabled;                                              //@synthesize enabled=_enabled - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)callStatusChangedNotification:(id)arg1 ;
-(unsigned)controlTypeAtRow:(unsigned)arg1 column:(unsigned)arg2 ;
-(unsigned)numberOfRowsInControlsView:(id)arg1 ;
-(unsigned)numberOfColumnsInControlsView:(id)arg1 ;
-(char)controlTypeIsEnabled:(unsigned)arg1 ;
-(char)controlTypeIsSelected:(unsigned)arg1 ;
-(id)imageNameForControlType:(unsigned)arg1 ;
-(id)titleForControlType:(unsigned)arg1 ;
-(void)controlTypeTapped:(unsigned)arg1 forView:(id)arg2 ;
-(void)controlTypeShortPressed:(unsigned)arg1 ;
-(void)controlTypeLongPressed:(unsigned)arg1 ;
-(void)callModelChangedNotification:(id)arg1 ;
-(void)callIsOnHoldChangedNotification:(id)arg1 ;
-(void)conferenceParticipantCallsChangedNotification:(id)arg1 ;
-(void)faceTimeIDStatusChangedNotification:(id)arg1 ;
-(void)uplinkStateChangedNotification:(id)arg1 ;
-(void)audioRoutesChangedNotification:(id)arg1 ;
-(PHAudioCallControlsView *)controlsView;
-(id)currentArrangement;
-(char)softTTYModeEnabled;
-(void)setControlsView:(PHAudioCallControlsView *)arg1 ;
-(PHAudioCallControlArrangement *)controlArrangement;
-(void)setControlArrangement:(PHAudioCallControlArrangement *)arg1 ;
-(id)init;
-(char)enabled;
-(void)setDelegate:(id<PHAudioCallControlsViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<PHAudioCallControlsViewControllerDelegate>)delegate;
-(void)loadView;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
@end

