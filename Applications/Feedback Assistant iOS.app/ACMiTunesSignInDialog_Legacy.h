/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:16 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Feedback Assistant iOS.app/Feedback Assistant iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Feedback Assistant iOS/Feedback Assistant iOS-Structs.h>
#import <Feedback Assistant iOS/ACMiTunesSignInDialog.h>
#import <Feedback Assistant iOS/acmAlertViewDelegateProtocol.h>

@class UITextField, NSString;

@interface ACMiTunesSignInDialog_Legacy : ACMiTunesSignInDialog <acmAlertViewDelegateProtocol> {

	UITextField* _editingTextField;

}

@property (nonatomic,retain) UITextField * editingTextField;              //@synthesize editingTextField=_editingTextField - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)willPresentAlertView:(id)arg1 ;
-(void)didPresentAlertView:(id)arg1 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(void)loadView;
-(char)textFieldShouldBeginEditing:(id)arg1 ;
-(void)viewDidLoad;
-(void)setEditingTextField:(UITextField *)arg1 ;
-(CGRect)userNameFrame;
-(CGRect)passwordFrame;
-(UITextField *)editingTextField;
-(void)acmAlertViewWillBecomeInvisible;
-(void)acmAlertViewWillBecomeVisible;
-(void)handleRotation;
-(void)handleTextFieldShouldReturnOnNonPasswordField;
@end
