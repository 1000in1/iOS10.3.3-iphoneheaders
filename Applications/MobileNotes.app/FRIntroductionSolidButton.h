/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:00 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIButton.h>

@class UIImageView, UIImage;

@interface FRIntroductionSolidButton : UIButton {

	UIImageView* _solidBackgroundImageView;
	UIImage* _disabledImage;
	UIImage* _enabledImage;

}

@property (assign,nonatomic,__weak) UIImageView * solidBackgroundImageView;              //@synthesize solidBackgroundImageView=_solidBackgroundImageView - In the implementation block
@property (nonatomic,retain) UIImage * disabledImage;                                    //@synthesize disabledImage=_disabledImage - In the implementation block
@property (nonatomic,retain) UIImage * enabledImage;                                     //@synthesize enabledImage=_enabledImage - In the implementation block
+(id)solidButton;
+(id)_solidButtonImage;
+(id)_disabledSolidImage;
+(id)_disabledColor;
-(void)setEnabledImage:(UIImage *)arg1 ;
-(void)setDisabledImage:(UIImage *)arg1 ;
-(void)setSolidBackgroundImageView:(UIImageView *)arg1 ;
-(UIImageView *)solidBackgroundImageView;
-(UIImage *)enabledImage;
-(UIImage *)disabledImage;
-(void)layoutSubviews;
-(void)setEnabled:(char)arg1 ;
-(void)setHighlighted:(char)arg1 ;
@end

