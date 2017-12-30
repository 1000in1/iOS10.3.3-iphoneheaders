/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:01 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Feedback Assistant iOS.app/Feedback Assistant iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol ACMExternalAuthenticationRequest <ACMBaseAuthenticationRequest>
@property (assign) char useAlertView; 
@property (assign) char userNameFieldEditable; 
@property (retain) NSString * alertViewPrompt; 
@property (assign) char automaticallyCancelWhenSwitchingToBackground; 
@property (assign) char canUseTouchID; 
@required
-(char)useAlertView;
-(char)automaticallyCancelWhenSwitchingToBackground;
-(void)setUserNameFieldEditable:(char)arg1;
-(void)setUseAlertView:(char)arg1;
-(char)userNameFieldEditable;
-(NSString *)alertViewPrompt;
-(void)setAlertViewPrompt:(id)arg1;
-(void)setAutomaticallyCancelWhenSwitchingToBackground:(char)arg1;
-(char)canUseTouchID;
-(void)setCanUseTouchID:(char)arg1;

@end

