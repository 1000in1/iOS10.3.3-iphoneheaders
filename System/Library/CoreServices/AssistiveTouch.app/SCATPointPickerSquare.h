/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:09 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <assistivetouchd/assistivetouchd-Structs.h>
#import <assistivetouchd/SCATPointPickerElement.h>

@protocol SCATPointPickerSquareDelegate;
@interface SCATPointPickerSquare : SCATPointPickerElement {

	id<SCATPointPickerSquareDelegate> _delegate;

}

@property (assign,nonatomic) id<SCATPointPickerSquareDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(CGRect)scatFrame;
-(void)setDelegate:(id<SCATPointPickerSquareDelegate>)arg1 ;
-(id<SCATPointPickerSquareDelegate>)delegate;
@end

