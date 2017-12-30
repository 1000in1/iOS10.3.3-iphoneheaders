/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:26 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Reminders.app/Reminders
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Reminders/Reminders-Structs.h>
#import <UIKit/UIView.h>

@protocol RemindersCheckboxViewDelegate;
@class UIImageView, UIColor;

@interface RemindersCheckboxView : UIView {

	UIImageView* _buttonImageView;
	char _checked;
	char _overdue;
	id<RemindersCheckboxViewDelegate> _delegate;
	UIColor* _buttonColor;
	int _appearance;

}

@property (assign,nonatomic,__weak) id<RemindersCheckboxViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIColor * buttonColor;                                          //@synthesize buttonColor=_buttonColor - In the implementation block
@property (assign,nonatomic) int appearance;                                                 //@synthesize appearance=_appearance - In the implementation block
@property (assign,getter=isChecked,nonatomic) char checked;                                  //@synthesize checked=_checked - In the implementation block
@property (assign,getter=isOverdue,nonatomic) char overdue;                                  //@synthesize overdue=_overdue - In the implementation block
-(void)setOverdue:(char)arg1 ;
-(id)flatImageNameCompleted:(char)arg1 ;
-(id)flatCompletedImage;
-(id)flatUncompletedImageForColor:(id)arg1 ;
-(void)buttonCancelled;
-(char)isOverdue;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<RemindersCheckboxViewDelegate>)arg1 ;
-(void)setChecked:(char)arg1 ;
-(id<RemindersCheckboxViewDelegate>)delegate;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setEnabled:(char)arg1 ;
-(int)appearance;
-(char)isChecked;
-(void)buttonDown;
-(void)setButtonColor:(UIColor *)arg1 ;
-(UIColor *)buttonColor;
-(void)_updateImage;
-(void)buttonPressed;
-(void)setAppearance:(int)arg1 ;
@end

