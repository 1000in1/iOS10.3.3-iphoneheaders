/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:02 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Feedback Assistant iOS.app/Feedback Assistant iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIAlertView.h>
#import <UIKit/UIAlertViewDelegate.h>

@class NSString;

@interface ACMAlertView : UIAlertView <UIAlertViewDelegate> {

	id _acmAlertViewDelegate;
	/*^block*/id _completionBlock;

}

@property (nonatomic,copy) id completionBlock;                                         //@synthesize completionBlock=_completionBlock - In the implementation block
@property (assign) id<acmAlertViewDelegateProtocol> acmAlertViewDelegate;              //@synthesize acmAlertViewDelegate=_acmAlertViewDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setAlpha:(float)arg1 ;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(void)showWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setAcmAlertViewDelegate:(id<acmAlertViewDelegateProtocol>)arg1 ;
-(id<acmAlertViewDelegateProtocol>)acmAlertViewDelegate;
-(void)dismissAlert;
@end

