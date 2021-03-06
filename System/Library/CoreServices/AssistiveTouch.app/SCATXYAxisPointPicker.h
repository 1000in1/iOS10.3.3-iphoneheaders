/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:09 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <assistivetouchd/assistivetouchd-Structs.h>
#import <assistivetouchd/SCATPointPicker.h>

@class SCATFocusContext;

@interface SCATXYAxisPointPicker : SCATPointPicker {

	SCATFocusContext* _sweepFocusContext;

}

@property (nonatomic,retain) SCATFocusContext * sweepFocusContext;              //@synthesize sweepFocusContext=_sweepFocusContext - In the implementation block
-(char)isRefiningPoint;
-(void)didSweepOverPoint:(CGPoint)arg1 ;
-(void)setSweepFocusContext:(SCATFocusContext *)arg1 ;
-(char)providesElements;
-(char)handleInputAction:(int)arg1 withElement:(id)arg2 ;
-(char)shouldKeepScannerAwake;
-(char)allowsSelectionRefinement;
-(id)_initWithMenu:(id)arg1 ;
-(int)pickerType;
-(SCATFocusContext *)sweepFocusContext;
-(void)dealloc;
-(void)orientationDidChange:(id)arg1 ;
@end

