/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:41 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <assistivetouchd/assistivetouchd-Structs.h>
#import <assistivetouchd/SCATModernMenuGesturesSheetBase.h>

@protocol SCATMenuStopContinuousGestureItemViewDelegate;
@interface SCATModernMenuStopContinuousGestureSheet : SCATModernMenuGesturesSheetBase {

	id<SCATMenuStopContinuousGestureItemViewDelegate> _delegate;

}

@property (assign,nonatomic) id<SCATMenuStopContinuousGestureItemViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)menuItemWasActivated:(id)arg1 ;
-(id)makeMenuItemsIfNeeded;
-(char)allowsBackAction;
-(char)allowsExitAction;
-(char)shouldAllowDwellSelection;
-(char)shouldKeepScannerAwake;
-(CGRect)rectToClear;
-(void)setDelegate:(id<SCATMenuStopContinuousGestureItemViewDelegate>)arg1 ;
-(id<SCATMenuStopContinuousGestureItemViewDelegate>)delegate;
@end
