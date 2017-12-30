/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:31 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Setup/Setup-Structs.h>
#import <Setup/BuddyPasscodeInput.h>
#import <libobjc.A.dylib/PSPasscodeFieldDelegate.h>

@class PSPasscodeField, UIGestureRecognizer, NSString;

@interface BuddySimplePasscodeInputView : BuddyPasscodeInput <PSPasscodeFieldDelegate> {

	PSPasscodeField* _passcodeField;
	UIGestureRecognizer* _tapRecognizer;

}

@property (nonatomic,retain) PSPasscodeField * passcodeField;                  //@synthesize passcodeField=_passcodeField - In the implementation block
@property (nonatomic,retain) UIGestureRecognizer * tapRecognizer;              //@synthesize tapRecognizer=_tapRecognizer - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 numberOfEntryFields:(unsigned)arg2 ;
-(void)passcodeFieldTapped;
-(void)layoutSubviews;
-(void)setPasscodeField:(PSPasscodeField *)arg1 ;
-(PSPasscodeField *)passcodeField;
-(id)passcode;
-(void)setPasscode:(id)arg1 ;
-(void)passcodeField:(id)arg1 enteredPasscode:(id)arg2 ;
-(UIGestureRecognizer *)tapRecognizer;
-(void)disable;
-(void)setTapRecognizer:(UIGestureRecognizer *)arg1 ;
@end

