/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:27 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKeyboardInputMode.h>

@class UITouch, UIKeyboardInputMode;

@interface UIDictationInputMode : UIKeyboardInputMode {

	UITouch* _triggeringTouch;
	UIKeyboardInputMode* _inputModeThatInvokedDictation;

}

@property (nonatomic,retain) UITouch * triggeringTouch;                                        //@synthesize triggeringTouch=_triggeringTouch - In the implementation block
@property (nonatomic,retain) UIKeyboardInputMode * inputModeThatInvokedDictation;              //@synthesize inputModeThatInvokedDictation=_inputModeThatInvokedDictation - In the implementation block
@property (nonatomic,readonly) Class viewControllerClass; 
+(char)currentInputModeSupportsDictation;
-(void)dealloc;
-(void)setTriggeringTouch:(UITouch *)arg1 ;
-(UIKeyboardInputMode *)inputModeThatInvokedDictation;
-(Class)viewControllerClass;
-(UITouch *)triggeringTouch;
-(void)setInputModeThatInvokedDictation:(UIKeyboardInputMode *)arg1 ;
@end

