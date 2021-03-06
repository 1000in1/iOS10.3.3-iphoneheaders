/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:09 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <assistivetouchd/assistivetouchd-Structs.h>
#import <assistivetouchd/SCATModernMenuGesturesSheetBase.h>

@protocol SCATMenuPinchItemsViewDelegate;
@interface SCATModernMenuGesturePinchSheet : SCATModernMenuGesturesSheetBase {

	char _shouldStayInPinchModeDuringDisappearance;
	id<SCATMenuPinchItemsViewDelegate> _delegate;

}

@property (assign,nonatomic) id<SCATMenuPinchItemsViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)menuItemWasActivated:(id)arg1 ;
-(id)makeMenuItemsIfNeeded;
-(void)viewControllerViewWillDisappear:(char)arg1 ;
-(CGRect)rectToClear;
-(void)setDelegate:(id<SCATMenuPinchItemsViewDelegate>)arg1 ;
-(id<SCATMenuPinchItemsViewDelegate>)delegate;
-(void)viewControllerViewWillAppear:(char)arg1 ;
@end

