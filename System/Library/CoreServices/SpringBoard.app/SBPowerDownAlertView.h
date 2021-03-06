/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:22 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBAlertView.h>

@class _SBInternalPowerDownView;

@interface SBPowerDownAlertView : SBAlertView {

	_SBInternalPowerDownView* _internalView;

}

@property (assign,nonatomic,__weak) id<SBPowerDownAlertViewDelegate> delegate; 
-(void)layoutForInterfaceOrientation:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<SBPowerDownAlertViewDelegate>)arg1 ;
-(id<SBPowerDownAlertViewDelegate>)delegate;
-(void)dismiss;
-(void)hideAnimated:(char)arg1 ;
-(void)showAnimated:(char)arg1 ;
@end

