/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:30 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Home.app/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UILabel, UIActivityIndicatorView, NSArray;

@interface HODataSyncingTextView : UIView {

	UILabel* _titleLabel;
	UILabel* _descriptionLabel;
	unsigned _dataSyncState;
	UIActivityIndicatorView* _spinner;
	NSArray* _activeConstraints;
	NSArray* _spinnerLayoutContraints;
	NSArray* _buttonLayoutConstraints;

}

@property (nonatomic,retain) UILabel * titleLabel;                           //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * descriptionLabel;                     //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * spinner;              //@synthesize spinner=_spinner - In the implementation block
@property (nonatomic,retain) NSArray * activeConstraints;                    //@synthesize activeConstraints=_activeConstraints - In the implementation block
@property (nonatomic,retain) NSArray * spinnerLayoutContraints;              //@synthesize spinnerLayoutContraints=_spinnerLayoutContraints - In the implementation block
@property (nonatomic,retain) NSArray * buttonLayoutConstraints;              //@synthesize buttonLayoutConstraints=_buttonLayoutConstraints - In the implementation block
@property (assign,nonatomic) unsigned dataSyncState;                         //@synthesize dataSyncState=_dataSyncState - In the implementation block
-(id)boldFontForStyle:(id)arg1 ;
-(void)_configureForTwoLabelLayout;
-(void)_configureForSpinnerLayout;
-(NSArray *)buttonLayoutConstraints;
-(id)_createConstraintsForFirstItem:(id)arg1 secondItem:(id)arg2 ;
-(void)setButtonLayoutConstraints:(NSArray *)arg1 ;
-(NSArray *)spinnerLayoutContraints;
-(void)setSpinnerLayoutContraints:(NSArray *)arg1 ;
-(id)init;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UIActivityIndicatorView *)spinner;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(UILabel *)descriptionLabel;
-(void)setDescriptionLabel:(UILabel *)arg1 ;
-(void)setActiveConstraints:(NSArray *)arg1 ;
-(NSArray *)activeConstraints;
-(unsigned)dataSyncState;
-(void)setDataSyncState:(unsigned)arg1 ;
@end
