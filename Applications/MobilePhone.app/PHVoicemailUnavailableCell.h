/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:11 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobilePhone.app/MobilePhone
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>
#import <libobjc.A.dylib/RadiosPreferencesDelegate.h>

@class UIColor, UILabel, UIButton, UIView, NSArray, RadiosPreferences;

@interface PHVoicemailUnavailableCell : UITableViewCell <RadiosPreferencesDelegate> {

	char _showCallVoicemailButton;
	UIColor* _tableViewSeparatorColor;
	UILabel* _voicemailUnavailableLabel;
	UIButton* _callVoicemailButton;
	UIView* _bottomLineView;
	UIView* _topLineView;
	NSArray* _mutableConstraints;
	RadiosPreferences* _radiosPreferences;

}

@property (assign) UILabel * voicemailUnavailableLabel;                      //@synthesize voicemailUnavailableLabel=_voicemailUnavailableLabel - In the implementation block
@property (assign) UIButton * callVoicemailButton;                           //@synthesize callVoicemailButton=_callVoicemailButton - In the implementation block
@property (assign) UIView * bottomLineView;                                  //@synthesize bottomLineView=_bottomLineView - In the implementation block
@property (assign) UIView * topLineView;                                     //@synthesize topLineView=_topLineView - In the implementation block
@property (retain) NSArray * mutableConstraints;                             //@synthesize mutableConstraints=_mutableConstraints - In the implementation block
@property (assign,nonatomic) char showCallVoicemailButton;                   //@synthesize showCallVoicemailButton=_showCallVoicemailButton - In the implementation block
@property (retain) RadiosPreferences * radiosPreferences;                    //@synthesize radiosPreferences=_radiosPreferences - In the implementation block
@property (nonatomic,retain) UIColor * tableViewSeparatorColor;              //@synthesize tableViewSeparatorColor=_tableViewSeparatorColor - In the implementation block
-(void)_handleContentSizeDidChange:(id)arg1 ;
-(NSArray *)mutableConstraints;
-(void)setVoicemailUnavailableLabel:(UILabel *)arg1 ;
-(void)callVoicemail;
-(void)setCallVoicemailButton:(UIButton *)arg1 ;
-(void)setTopLineView:(UIView *)arg1 ;
-(UILabel *)voicemailUnavailableLabel;
-(UIButton *)callVoicemailButton;
-(UIView *)topLineView;
-(void)setRadiosPreferences:(RadiosPreferences *)arg1 ;
-(void)setShowCallVoicemailButton:(char)arg1 ;
-(void)_updateCallVoicemailButton;
-(void)setMutableConstraints:(NSArray *)arg1 ;
-(char)showCallVoicemailButton;
-(void)dealloc;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)updateConstraints;
-(void)airplaneModeChanged;
-(void)_updateFonts;
-(UIView *)bottomLineView;
-(void)setBottomLineView:(UIView *)arg1 ;
-(RadiosPreferences *)radiosPreferences;
-(void)setTableViewSeparatorColor:(UIColor *)arg1 ;
-(UIColor *)tableViewSeparatorColor;
@end
