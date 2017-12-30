/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:01 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Feedback Assistant iOS.app/Feedback Assistant iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Feedback Assistant iOS/Feedback Assistant iOS-Structs.h>
#import <Feedback Assistant iOS/ACMSignInDialog.h>
#import <Feedback Assistant iOS/ACMiTunesSignInDialogProtocol.h>
#import <UIKit/UIAlertViewDelegate.h>

@class NSString, UIAlertView;

@interface ACMiTunesSignInDialog : ACMSignInDialog <ACMiTunesSignInDialogProtocol, UIAlertViewDelegate> {

	char _isShown;
	NSString* _titleField;
	char _isUserNameEditable;
	int _previousInterfaceOrientation;
	CGSize _titleStringSize;
	NSString* _alertViewPrompt;
	CGRect _userNameFrame;
	CGRect _passwordFrame;

}

@property (retain) NSString * titleField;                                   //@synthesize titleField=_titleField - In the implementation block
@property (nonatomic,readonly) UIAlertView * signInDialog; 
@property (assign) char isShown;                                            //@synthesize isShown=_isShown - In the implementation block
@property (readonly) char isPortraitMode; 
@property (readonly) CGRect userNameFrame;                                  //@synthesize userNameFrame=_userNameFrame - In the implementation block
@property (readonly) CGRect passwordFrame;                                  //@synthesize passwordFrame=_passwordFrame - In the implementation block
@property (assign,nonatomic) int previousInterfaceOrientation;              //@synthesize previousInterfaceOrientation=_previousInterfaceOrientation - In the implementation block
@property (assign,nonatomic) CGSize titleStringSize;                        //@synthesize titleStringSize=_titleStringSize - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) id<ACMSignInDialogDelegate> delegate; 
@property (nonatomic,retain) NSString * requestedUserName; 
@property (readonly) NSString * userNameString; 
@property (assign) NSString * passwordString; 
@property (assign,nonatomic) char isUserNameEditable;                       //@synthesize isUserNameEditable=_isUserNameEditable - In the implementation block
@property (nonatomic,retain) NSString * alertViewPrompt;                    //@synthesize alertViewPrompt=_alertViewPrompt - In the implementation block
-(void)cancel;
-(void)dealloc;
-(int)statusBarStyle;
-(void)didPresentAlertView:(id)arg1 ;
-(void)loadView;
-(void)viewDidLoad;
-(char)isShown;
-(char)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(char)textFieldShouldReturn:(id)arg1 ;
-(void)didRotate:(id)arg1 ;
-(NSString *)titleField;
-(int)previousInterfaceOrientation;
-(void)setIsShown:(char)arg1 ;
-(NSString *)alertViewPrompt;
-(void)setAlertViewPrompt:(NSString *)arg1 ;
-(char)isUserNameEditable;
-(char)shouldPasswordTextFieldReturnOnSignInDisallowed;
-(UIAlertView *)signInDialog;
-(void)disableControls:(char)arg1 ;
-(NSString *)passwordString;
-(void)setIsUserNameEditable:(char)arg1 ;
-(void)showWithParentViewController:(id)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)hideWithParentViewController:(id)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(NSString *)userNameString;
-(id)dialogTitle;
-(void)setTitleStringSize:(CGSize)arg1 ;
-(void)setPreviousInterfaceOrientation:(int)arg1 ;
-(void)setTitleField:(NSString *)arg1 ;
-(char)isPortraitMode;
-(CGSize)titleStringSize;
-(char)changeTitleStringIfNeeded;
-(CGRect)userNameFrame;
-(CGRect)passwordFrame;
-(void)handleRotation;
-(void)handleTextFieldShouldReturnOnNonPasswordField;
@end

