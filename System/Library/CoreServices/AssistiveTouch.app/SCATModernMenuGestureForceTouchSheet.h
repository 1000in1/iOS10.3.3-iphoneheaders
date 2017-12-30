/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:08 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <assistivetouchd/SCATModernMenuGesturesSheetBase.h>

@protocol SCATMenuForceTouchItemsViewDelegate;
@interface SCATModernMenuGestureForceTouchSheet : SCATModernMenuGesturesSheetBase {

	id<SCATMenuForceTouchItemsViewDelegate> _delegate;

}

@property (assign,nonatomic) id<SCATMenuForceTouchItemsViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)menuItemWasActivated:(id)arg1 ;
-(id)makeMenuItemsIfNeeded;
-(char)allowsBackAction;
-(char)allowsExitAction;
-(char)shouldKeepScannerAwake;
-(void)setDelegate:(id<SCATMenuForceTouchItemsViewDelegate>)arg1 ;
-(id<SCATMenuForceTouchItemsViewDelegate>)delegate;
@end

