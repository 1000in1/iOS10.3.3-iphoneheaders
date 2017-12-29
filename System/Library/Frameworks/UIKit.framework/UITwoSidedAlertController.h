/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:47 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIAlertViewDelegate.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class UIAlertView, NSString;

@interface UITwoSidedAlertController : NSObject <UIAlertViewDelegate, CAAnimationDelegate> {

	UIAlertView* _front;
	UIAlertView* _back;
	UIAlertView* _currentAlert;
	id _delegate;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)show;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(void)alertViewCancel:(id)arg1 ;
-(void)didPresentAlertView:(id)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(char)arg2 ;
-(void)dismiss;
-(id)createFrontAlert;
-(id)createBackAlert;
-(id)frontAlert;
-(id)backAlert;
-(void)flip;
-(void)frontAlertClickedButtonAtIndex:(int)arg1 ;
-(void)backAlertClickedButtonAtIndex:(int)arg1 ;
-(void)alertSheet:(id)arg1 buttonClicked:(int)arg2 ;
@end
