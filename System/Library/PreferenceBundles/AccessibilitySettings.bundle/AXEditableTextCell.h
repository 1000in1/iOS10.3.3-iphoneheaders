/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:28:55 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>
#import <UIKit/UITextFieldDelegate.h>

@class UITextField, NSString;

@interface AXEditableTextCell : PSTableCell <UITextFieldDelegate> {

	char _shouldAllowSelection;
	UITextField* _nameTextField;

}

@property (assign,nonatomic) char shouldAllowSelection;                //@synthesize shouldAllowSelection=_shouldAllowSelection - In the implementation block
@property (nonatomic,retain) UITextField * nameTextField;              //@synthesize nameTextField=_nameTextField - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)textFieldValue:(id)arg1 ;
-(void)setShouldAllowSelection:(char)arg1 ;
-(void)setTextFieldValue:(id)arg1 specifier:(id)arg2 ;
-(void)setNameTextField:(UITextField *)arg1 ;
-(UITextField *)nameTextField;
-(char)shouldAllowSelection;
-(void)layoutSubviews;
-(void)dealloc;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(void)setSelectionStyle:(int)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(char)textFieldShouldReturn:(id)arg1 ;
-(void)updateText;
-(char)_accessibilityIgnoreInternalLabels;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
@end

