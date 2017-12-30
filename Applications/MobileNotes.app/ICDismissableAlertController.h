/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:58 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIAlertController.h>

@class UIAlertAction;

@interface ICDismissableAlertController : UIAlertController {

	UIAlertAction* _dismissAction;

}

@property (nonatomic,retain) UIAlertAction * dismissAction;              //@synthesize dismissAction=_dismissAction - In the implementation block
-(void)dismissWhenPossible;
-(void)setDismissAction:(UIAlertAction *)arg1 ;
-(UIAlertAction *)dismissAction;
@end

