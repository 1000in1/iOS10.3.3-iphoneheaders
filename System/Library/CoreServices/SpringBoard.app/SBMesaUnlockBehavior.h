/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:55 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBMesaUnlockBehavior <BSDescriptionProviding>
@property (assign,nonatomic,__weak) id<SBMesaUnlockBehaviorDelegate> mesaUnlockBehaviorDelegate; 
@required
-(void)setMesaUnlockBehaviorDelegate:(id)arg1;
-(void)handleBiometricEvent:(unsigned)arg1;
-(id<SBMesaUnlockBehaviorDelegate>)mesaUnlockBehaviorDelegate;

@end
