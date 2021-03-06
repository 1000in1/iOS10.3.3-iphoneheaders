/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:42 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/MapsThemeTableViewCell.h>

@class NSString, UIImage, UIActivityIndicatorView, MapsThemeLabel, UIImageView, NSLayoutConstraint;

@interface TransitLineDisambiguationCell : MapsThemeTableViewCell {

	NSString* _labelText;
	UIImage* _shieldImage;
	float _maxWidth;
	UIActivityIndicatorView* _spinner;
	MapsThemeLabel* _messageLabel;
	UIImageView* _shieldImageView;
	NSLayoutConstraint* _messageLabelLeadingConstraint;

}

@property (nonatomic,retain) UIActivityIndicatorView * spinner;                               //@synthesize spinner=_spinner - In the implementation block
@property (nonatomic,retain) MapsThemeLabel * messageLabel;                                   //@synthesize messageLabel=_messageLabel - In the implementation block
@property (nonatomic,retain) UIImageView * shieldImageView;                                   //@synthesize shieldImageView=_shieldImageView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * messageLabelLeadingConstraint;              //@synthesize messageLabelLeadingConstraint=_messageLabelLeadingConstraint - In the implementation block
@property (nonatomic,retain) NSString * labelText;                                            //@synthesize labelText=_labelText - In the implementation block
@property (nonatomic,retain) UIImage * shieldImage;                                           //@synthesize shieldImage=_shieldImage - In the implementation block
@property (assign,nonatomic) float maxWidth;                                                  //@synthesize maxWidth=_maxWidth - In the implementation block
-(UIImage *)shieldImage;
-(void)setShieldImage:(UIImage *)arg1 ;
-(UIImageView *)shieldImageView;
-(void)setShieldImageView:(UIImageView *)arg1 ;
-(NSLayoutConstraint *)messageLabelLeadingConstraint;
-(void)setMessageLabelLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(float)maxWidth;
-(void)setMaxWidth:(float)arg1 ;
-(UIActivityIndicatorView *)spinner;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(NSString *)labelText;
-(void)setLabelText:(NSString *)arg1 ;
-(void)addConstraints;
-(void)showSpinner;
-(MapsThemeLabel *)messageLabel;
-(void)setMessageLabel:(MapsThemeLabel *)arg1 ;
-(void)hideSpinner;
@end

