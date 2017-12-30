/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:38:35 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/NanoPreferenceBundles/General/PairedUnlockSettings.bundle/PairedUnlockSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>

@protocol PUSRemotePasscodeViewControllerDelegate;
@class PUSRemotePasscodeInstructionViewController;

@interface PUSRemotePasscodeViewController : UINavigationController {

	id<PUSRemotePasscodeViewControllerDelegate> _passcodeDelegate;
	PUSRemotePasscodeInstructionViewController* _instructionController;

}

@property (nonatomic,retain) PUSRemotePasscodeInstructionViewController * instructionController;               //@synthesize instructionController=_instructionController - In the implementation block
@property (assign,nonatomic,__weak) id<PUSRemotePasscodeViewControllerDelegate> passcodeDelegate;              //@synthesize passcodeDelegate=_passcodeDelegate - In the implementation block
-(PUSRemotePasscodeInstructionViewController *)instructionController;
-(void)setInstructionController:(PUSRemotePasscodeInstructionViewController *)arg1 ;
-(id<PUSRemotePasscodeViewControllerDelegate>)passcodeDelegate;
-(void)setPasscodeDelegate:(id<PUSRemotePasscodeViewControllerDelegate>)arg1 ;
-(id)initWithAction:(int)arg1 ;
@end
