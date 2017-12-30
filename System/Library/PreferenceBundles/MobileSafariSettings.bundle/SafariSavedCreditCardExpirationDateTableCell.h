/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:29:14 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/MobileSafariSettings.bundle/MobileSafariSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileSafariSettings/MobileSafariSettings-Structs.h>
#import <Preferences/PSTableCell.h>
#import <UIKit/UIPickerViewDataSource.h>
#import <UIKit/UIPickerViewDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>

@class UIPickerView, UIPopoverController, NSNumberFormatter, NSString;

@interface SafariSavedCreditCardExpirationDateTableCell : PSTableCell <UIPickerViewDataSource, UIPickerViewDelegate, UIPopoverControllerDelegate> {

	UIPickerView* _pickerView;
	UIPopoverController* _popoverController;
	NSNumberFormatter* _monthNumberFormatter;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_pickerView;
-(void)dealloc;
-(int)numberOfComponentsInPickerView:(id)arg1 ;
-(int)pickerView:(id)arg1 numberOfRowsInComponent:(int)arg2 ;
-(id)pickerView:(id)arg1 attributedTitleForRow:(int)arg2 forComponent:(int)arg3 ;
-(float)pickerView:(id)arg1 widthForComponent:(int)arg2 ;
-(void)pickerView:(id)arg1 didSelectRow:(int)arg2 inComponent:(int)arg3 ;
-(char)becomeFirstResponder;
-(void)setValue:(id)arg1 ;
-(char)canBecomeFirstResponder;
-(id)inputView;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(void)_updateDetailTextLabel;
-(id)_pickerTitleFont;
-(id)_monthNumberFormatter;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
@end

