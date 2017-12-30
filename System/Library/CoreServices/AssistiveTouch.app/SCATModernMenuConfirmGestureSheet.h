/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:09 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <assistivetouchd/assistivetouchd-Structs.h>
#import <assistivetouchd/SCATModernMenuGesturesSheetBase.h>

@protocol SCATMenuGestureConfirmationItemsViewDelegate;
@interface SCATModernMenuConfirmGestureSheet : SCATModernMenuGesturesSheetBase {

	id<SCATMenuGestureConfirmationItemsViewDelegate> _delegate;

}

@property (assign,nonatomic) id<SCATMenuGestureConfirmationItemsViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)menuItemWasActivated:(id)arg1 ;
-(id)makeMenuItemsIfNeeded;
-(char)allowsBackAction;
-(char)allowsExitAction;
-(char)shouldKeepScannerAwake;
-(CGRect)rectToClear;
-(void)setDelegate:(id<SCATMenuGestureConfirmationItemsViewDelegate>)arg1 ;
-(id<SCATMenuGestureConfirmationItemsViewDelegate>)delegate;
@end

