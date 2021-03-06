/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:51 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/iCloudDriveApp.app/iCloudDriveApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITextFieldDelegate.h>

@class UIAlertController, SimpleTextViewController, UIAlertAction, NSString, UITextField;

@interface FilenamePrompt : NSObject <UITextFieldDelegate> {

	UIAlertController* _alert;
	SimpleTextViewController* _errMsgViewController;
	UIAlertAction* _defaultAction;
	NSString* _origFilename;
	/*^block*/id _validateNewFilenameCallback;
	UITextField* _textField;

}

@property (nonatomic,retain) UIAlertController * alert;                                    //@synthesize alert=_alert - In the implementation block
@property (nonatomic,retain) SimpleTextViewController * errMsgViewController;              //@synthesize errMsgViewController=_errMsgViewController - In the implementation block
@property (nonatomic,retain) UIAlertAction * defaultAction;                                //@synthesize defaultAction=_defaultAction - In the implementation block
@property (nonatomic,retain) NSString * origFilename;                                      //@synthesize origFilename=_origFilename - In the implementation block
@property (nonatomic,copy) id validateNewFilenameCallback;                                 //@synthesize validateNewFilenameCallback=_validateNewFilenameCallback - In the implementation block
@property (nonatomic,retain) UITextField * textField;                                      //@synthesize textField=_textField - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newWithTitle:(id)arg1 message:(id)arg2 placeholder:(id)arg3 filename:(id)arg4 doneButtonText:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)keyboardWillShow;
-(void)setOrigFilename:(NSString *)arg1 ;
-(void)setValidateNewFilenameCallback:(id)arg1 ;
-(void)folderPromptTextFieldChanged:(id)arg1 ;
-(void)addCancelAction:(/*^block*/id)arg1 ;
-(void)addDefaultAction:(id)arg1 ;
-(void)setErrMsgViewController:(SimpleTextViewController *)arg1 ;
-(SimpleTextViewController *)errMsgViewController;
-(void)updateErrorMessage:(id)arg1 ;
-(id)initWithTitle:(id)arg1 message:(id)arg2 placeholder:(id)arg3 filename:(id)arg4 doneButtonText:(id)arg5 completion:(/*^block*/id)arg6 ;
-(char)handleDoneAction;
-(NSString *)origFilename;
-(id)validateNewFilenameCallback;
-(void)setDoneButtonEnabled:(char)arg1 ;
-(void)dealloc;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(char)textFieldShouldReturn:(id)arg1 ;
-(UITextField *)textField;
-(UIAlertAction *)defaultAction;
-(void)setTextField:(UITextField *)arg1 ;
-(UIAlertController *)alert;
-(void)setAlert:(UIAlertController *)arg1 ;
-(void)setDefaultAction:(UIAlertAction *)arg1 ;
@end

