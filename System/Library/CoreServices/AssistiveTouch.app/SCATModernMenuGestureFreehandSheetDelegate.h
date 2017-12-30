/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:09 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCATModernMenuGestureFreehandSheetDelegate <NSObject>
@required
-(float)curvatureForFreehandSheet:(id)arg1;
-(void)freehandSheet:(id)arg1 didHighlightBendRight:(char)arg2;
-(void)freehandSheet:(id)arg1 didHighlightBendLeft:(char)arg2;
-(void)freehandSheet:(id)arg1 didHighlightStraighten:(char)arg2;
-(void)bendRightForFreehandSheet:(id)arg1;
-(void)bendLeftForFreehandSheet:(id)arg1;
-(void)straightenForFreehandSheet:(id)arg1;
-(void)stopForFreehandSheet:(id)arg1;
-(void)freehandSheet:(id)arg1 didHighlightRotateCCW:(char)arg2;
-(void)freehandSheet:(id)arg1 didHighlightRotateCW:(char)arg2;
-(void)freehandSheet:(id)arg1 didHighlightRotateCCW90:(char)arg2;
-(void)freehandSheet:(id)arg1 didHighlightRotateCW90:(char)arg2;
-(void)rotateCounterclockwiseForFreehandSheet:(id)arg1;
-(void)rotateClockwiseForFreehandSheet:(id)arg1;
-(void)rotate90CounterclockwiseForFreehandSheet:(id)arg1;
-(void)rotate90ClockwiseForFreehandSheet:(id)arg1;
-(char)isTouchOnForFreehandSheet:(id)arg1;
-(char)isAutoPressOnForFreehandSheet:(id)arg1;
-(char)isAutoLiftOnForFreehandSheet:(id)arg1;
-(float)angleForFreehandSheet:(id)arg1;
-(void)moveForFreehandSheet:(id)arg1;
-(void)rotateForFreehandSheet:(id)arg1;
-(void)bendForFreehandSheet:(id)arg1;
-(void)toggleTouchForFreehandSheet:(id)arg1;
-(void)autoPressToggledForFreehandSheet:(id)arg1;
-(void)autoLiftToggledForFreehandSheet:(id)arg1;
-(void)moveToolbarForFreehandSheet:(id)arg1;
-(void)didPopFreehandSheet:(id)arg1;
-(void)freehandSheet:(id)arg1 didHighlightMove:(char)arg2;
-(void)freehandSheet:(id)arg1 didHighlightRotate:(char)arg2;
-(void)freehandSheet:(id)arg1 didHighlightBend:(char)arg2;
-(void)increaseVelocityForFreehandSheet:(id)arg1;
-(void)decreaseVelocityForFreehandSheet:(id)arg1;

@end

